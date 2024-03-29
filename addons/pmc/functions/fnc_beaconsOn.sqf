#include "script_component.hpp"

diag_log "BEACON LIGHTS WORKING";

private ["_vcl", "_ambient", "_beaconLights", "_brightness"];

_vcl = _this;
_beaconLights = "z\sog_factions\addons\pmc\data\emerglights1.paa";
_brightness = 1500;

if ((_vcl getVariable "beaconLights")) exitWith {}; // END WHILE
exit;

diag_log "BEACON LIGHTS WORKING";

private ["_vcl", "_ambient", "_beaconLights", "_brightness"];

_vcl = _this;
_beaconLights = "z\sog_factions\addons\pmc\data\emerglights1.paa";
_brightness = 1500;


_vcl setVariable ["beaconLights", false, true];  ///-------------NEW ADDITION
_vcl setVariable ["beaconLights", true, true];

while { alive _vcl } do {
	if (_vcl getVariable "beaconLights") then {
		_ambient = "#lightpoint" createVehicle (getPos _vcl);
		_ambient setLightIntensity _brightness;
		_ambient setLightAmbient [0, 0, 0];
		_ambient setLightColor [0, 0, 1];
		_ambient lightAttachObject [_vcl, [0, 0.25, 1.25]];

		sleep 0.2;

		deleteVehicle _ambient;

		_ambient = "#lightpoint" createVehicle (getPos _vcl);
		_ambient setLightIntensity _brightness;
		_ambient setLightAmbient [0, 0, 0];
		_ambient setLightColor [1, 0, 0];
		_ambient lightAttachObject [_vcl, [0, 0.25, 1.25]];

		sleep 0.2;

		deleteVehicle _ambient;
	} else {
		if (!isNil "_ambient") then {
			deleteVehicle _ambient;
		};
	};

	sleep 0.2;
}; // END WHILE
exit;