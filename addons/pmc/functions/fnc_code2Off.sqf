#include "script_component.hpp"

diag_log "LIGHTS WORKING";

private ["_vcl", "_lights"];

_vcl = _this;
_lights = "z\sog_factions\addons\pmc\data\emerglights1.paa";
_lights1 = "z\sog_factions\addons\pmc\data\tahoe_lights_emit_co.paa";

hint localize "STR_Veh_Beacons_ON";

if ((_vcl getVariable "lights")) exitWith {
	hint localize "STR_Veh_Beacons_OFF";

	_vcl setVariable ["lights", false, true];

	sleep 0.5;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, ""];
};
exit;