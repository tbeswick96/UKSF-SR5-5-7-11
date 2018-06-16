/*
    Author:
        Tim Beswick

    Description:
        Initialises persistence event handlers on client

    Parameter(s):
        None

    Return Value:
        None
*/
#include "script_component.hpp"

params ["_enabled"];

GVAR(enabled) = _enabled;
TRACE_1("Client init",GVAR(enabled));
if (!GVAR(enabled)) exitWith {};

["CAManBase", "respawn", {
    _this call FUNC(addPersistenceActions);
}, true, nil, true] call CBA_fnc_addClassEventHandler;

[QGVAR(firstKilled), {
    GVAR(data) = _this;
    TRACE_1("Client first killed",GVAR(data));
    GVAR(data) params ["_position"];

    GVAR(respawn) = createMarkerLocal [RESPAWN_MARKER, _position];
    GVAR(respawn) setMarkerTypeLocal "flag_UK";
    GVAR(respawn) setMarkerTextLocal RESPAWN_NAME;
}] call CBA_fnc_addEventHandler;

[QGVAR(firstRespawn), {
    GVAR(data) params ["_position", "_vehicleState", "_direction", "_animation", "_loadout", "_damage", "_aceStates", "_attached", "_radioChannels"];
    TRACE_5("Client first respawn...",_position,_vehicleState,_direction,_animation,_radioChannels);
    TRACE_2("...",_damage,_attached);
    TRACE_2("...",_loadout,_aceStates);

    if (!isNil QGVAR(respawn)) then {
        deleteMarkerLocal GVAR(respawn);
    };
    
    if (count GVAR(data) > 0 && {(_position distance2D (getPos player)) < 10}) then {
        player setDir _direction;
        player setUnitLoadout _loadout;
        player setDamage _damage;
        [player, _aceStates] call EFUNC(common,deserializeAceMedical);
        {[player, player, [_x], true] call ace_attach_fnc_attach} forEach _attached;
        [{
            [{
                private _radios = ([player] call acre_sys_core_fnc_getGear) select {(_x select [0, 4]) == "ACRE"};
                TRACE_1("Checking if radios initialised",_radios);
                {_x call acre_sys_radio_fnc_isUniqueRadio} count _radios == count _radios
            }, {
                params ["_radioChannels"];
                private _radios = ([player] call acre_sys_core_fnc_getGear) select {_x call acre_sys_radio_fnc_isUniqueRadio};
                TRACE_2("Setting radios to channels",_radios,_radioChannels);
                {
                    [_x, _radioChannels#_forEachIndex] call acre_api_fnc_setRadioChannel;
                } forEach _radios;
            }, _this, 15] call CBA_fnc_waitUntilAndExecute;
        }, [_radioChannels], 2] call CBA_fnc_waitAndExecute;

        _vehicleState params ["_vehicleId"];
        if (_vehicleId != "") then {
            TRACE_1("Supposed to be in vehicle",_vehicleId);
            [QGVAR(onPersistentVehicleExists), {
                params ["_vehicle", "_vehicleId", "_role", "_index"];
                [_thisType, _thisId] call CBA_fnc_removeEventHandler;

                TRACE_4("Vehicle exists",_vehicle,_vehicleId,_role,_index);
                switch (toLower _role) do {
                    case "driver": {player moveInDriver _vehicle};
                    case "gunner": {player moveInGunner _vehicle};
                    case "commander": {player moveInCommander _vehicle};
                    case "turret": {player moveInTurret [_vehicle, _index]};
                    default {player moveInCargo [_vehicle, _index]};
                };
            }] call CBA_fnc_addEventHandlerArgs;
            [QGVAR(checkPersistentVehicleExists), [_vehicleState, player]] call CBA_fnc_serverEvent;
        } else {
            [{
                player playMove ([_this, ANIM_STANDING] select (_this == ANIM_STANDING));
            }, _animation, 0.2] call CBA_fnc_waitAndExecute;
        };
    };
}] call CBA_fnc_addEventHandler;
