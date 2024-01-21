#include "script_component.hpp"

params ["_vcl"];

while { alive _vcl } do {
	if ((_vcl getVariable ["SOG_Siren", 0] == 1) && (!isNull driver _vcl) && (damage _vcl < 0.7)) then {
		// _vcl say3D ["pa300_wail_tahoe", 500, 1];
		[_vcl, "pa300_wail_tahoe"] remoteExec ["say3D", 0, false];
		sleep 3.1;
	};
	sleep 1;
};