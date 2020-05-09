#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Searches for civilian vehicles in front of unit, and stops closest one if found

    Parameters:
        0: Unit <OBJECT>

    Return value:
        Nothing
*/
params ["_unit"];
private _entities = _unit nearEntities [["Car", "Motorcycle", "Tank"], GESTURE_VEHICLE_SEARCH_DISTANCE];
if (_entities isEqualTo []) exitWith {
    DEBUG("No entities found, reducing cooldown timeout");
    GVAR(lastGesture) = CBA_missionTime - (GESTURE_COOLDOWN / 2);
};

_entities = _entities apply {[_x distance _unit, _x]};
_entities sort true;

TRACE_1("Near entities",_entities);
private _index = _entities findIf {
    private _vehicle = _x#1;
    private _driver = driver _vehicle;

    TRACE_6("Valid?",_vehicle,_driver,side _driver,_driver getVariable [ARR_2(QGVAR(vehicle_ignoreCommands),false)],_driver getVariable [ARR_2(QGVAR(vehicle_stopped),false)],_driver getVariable [ARR_2(QGVAR(vehicle_ignoringStop),false)]);
    TRACE_3("LOS?",acos ((vectorDirVisual _unit) vectorCos ((eyePos _unit) vectorFromTo (eyePos _driver))),acos ((eyeDirection _driver) vectorCos ((eyePos _driver) vectorFromTo (eyePos _unit))),lineIntersects [ARR_4(eyePos _driver,eyePos _unit,_unit,_vehicle)]);

    !(isNull _driver) &&
    {!(isPlayer _driver)} &&
    {side _driver == civilian} &&
    {!(_vehicle getVariable [QGVAR(vehicle_ignoreCommands), false])} &&
    {!(_driver getVariable [QGVAR(vehicle_stopped), false])} &&
    {!(_driver getVariable [QGVAR(vehicle_ignoringStop), false])} &&
    {(acos ((vectorDirVisual _unit) vectorCos ((eyePos _unit) vectorFromTo (eyePos _driver)))) < VISION_ARC} &&
    {(acos ((eyeDirection _driver) vectorCos ((eyePos _driver) vectorFromTo (eyePos _unit)))) < VISION_ARC} &&
    {!(lineIntersects [eyePos _driver, eyePos _unit, _unit, _vehicle])}
};
TRACE_1("Valid vehicle?",_index);

if (_index != -1) then {
    private _vehicle = _entities#_index#1;
    private _driver = driver _vehicle;
    TRACE_2("Selected vehicle",_vehicle,_driver);

    private _stopCommanded = _driver getVariable [QGVAR(vehicle_commandedToStop), false];
    if (_stopCommanded) exitWith {
        TRACE_2("Vehicle already commanded to stop (forcing)",_vehicle,_driver);
        [{[QGVAR(stopCommand), _this, _this#0] call CBA_fnc_targetEvent}, [_vehicle], random 0.2 + (linearConversion [1, 50, _unit distance _vehicle, 0.2, 0.8, true])] call CBA_fnc_waitAndExecute;
    };

    if (random 100 < STOP_IGNORE_CHANCE) exitWith {
        [QGVAR(horn), [_vehicle, _driver, 2], _vehicle] call CBA_fnc_targetEvent;
        _driver setVariable [QGVAR(vehicle_ignoringStop), true, true];
        [{_this setVariable [QGVAR(vehicle_ignoringStop), false, true]}, _driver, 60] call CBA_fnc_waitAndExecute;
        TRACE_2("Stop ignored",_vehicle,_driver);
    };

    private _boundingBox = 0 boundingBoxReal _vehicle;
    private _length = abs ((_boundingBox#1#1) - (_boundingBox#0#1));
    _vehicle setVariable [QGVAR(vehicleLength), _length, true];
    _driver setVariable [QGVAR(vehicle_commandedToStop), true, true];

    // If unit is within a small arc to the front of driver, set position in front of unit as move command poisition (should make driver pull up to unit)
    private _commandPosition = [];
    private _commandUnit = objNull;
    private _forceMoveUpdate = false;
    if ((acos ((eyeDirection _driver) vectorCos ((eyePos _driver) vectorFromTo (eyePos _unit)))) < (VISION_ARC / 1.2)) then {
        _commandPosition = (positionCameraToWorld [0,0,0]) vectorAdd ((vectorDirVisual _unit) vectorMultiply 5);
        // _commandPosition = _commandPosition vectorAdd ((vectorDirVisual _vehicle) vectorMultiply 5);
        _commandPosition set [2, 0];
        _commandUnit = _unit;
        _forceMoveUpdate = true;
        TRACE_1("Stop command given move position",_commandPosition);
    };

    // Fake some mental delay before starting vehicle statemachine based on distance
    [{
        params ["_vehicle", "_commandPosition", "_commandUnit", "_forceMoveUpdate"];

        _vehicle setVariable [QGVAR(vehicle_movePosition), _commandPosition, true];
        _vehicle setVariable [QGVAR(vehicle_moveCommander), _commandUnit, true];
        _vehicle setVariable [QGVAR(vehicle_forceMoveUpdate), _forceMoveUpdate, true];
        [QGVAR(startVehicleStatemachine), [_vehicle], _vehicle] call CBA_fnc_targetEvent;
    }, [_vehicle, _commandPosition, _commandUnit, _forceMoveUpdate], random 0.5 + (linearConversion [30, GESTURE_VEHICLE_SEARCH_DISTANCE, _unit distance _vehicle, 0.5, 1, true])] call CBA_fnc_waitAndExecute;
};

// Vehicle valid if:
// Driver is not a player
// Driver side is civilian
// Vehicle is not set to ignore orders
// Driver has not stopped
// Driver is not ignoring stop
// Unit hand is inside driver sight arc
// Driver is inside unit sight arc
// Unit is visible to driver
