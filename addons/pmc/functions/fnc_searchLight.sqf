#include "script_component.hpp"

private ["_vcl", "_searchlightL"];

_vcl = _this;
_searchlightL = "Reflector_Cone_01_Long_white_F";

hint localize "Search Light Left ON";

if ((_vcl getVariable "SearchL_L")) exitWith {
    hint localize "Search Light Left ON";

    _vcl setVariable ["SearchL_L", false, true];
    sleep 0.5;
};

_vcl setVariable ["SearchL_L", true, true];

if ((alive _vcl) && (_vcl getVariable "SearchL_L")) exitWith {
    _searchlightL = "Reflector_Cone_01_Long_white_F" createVehicle position _vcl;
    _searchlightL attachTo [_vcl, [-0.55,-0.2,0.33]];
    _searchlightL setDir -90;
    _searchlightL setLightDayLight true;

    if (!(_vcl getVariable "SearchL_L")) exitWith {
        deleteVehicle _searchlightL;
    };
    sleep 0.1;
};