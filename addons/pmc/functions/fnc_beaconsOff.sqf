#include "script_component.hpp"

diag_log "POLICE LIGHTS WORKING";

private _vcl = _this;

hint localize "STR_Veh_Beacons_ON";

if ((_vcl getVariable "beaconLights")) exitWith {
	hint localize "STR_Veh_Beacons_OFF";

	_vcl setVariable ["beaconLights", false, true];
	_vcl setVariable ['code2', 0, true];
	_vcl setVariable ['code3', 0, true];
}; // END WHILE
exit;