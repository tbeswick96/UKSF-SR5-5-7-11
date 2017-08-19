/*
    Author:
        Tim Beswick

    Description:
        Creates a respawn marker

    Parameters:
        None

    Return value:
        None
*/
#include "script_component.hpp"

params ["_logic", "", "_activated"];

if (_activated) then {
    private _position = position _logic;
    private _marker = createMarker ["respawn_west_" + str _logic, _position];
    _marker setMarkerType "flag_UK";
    _marker setMarkerText "UKSF";
};