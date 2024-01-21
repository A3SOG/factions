#include "script_component.hpp"

diag_log "CAM WORKING";

private ["_vcl", "_cam", "_cam1"];

_vcl = _this;
_cam0 = "#(argb,256,512,1)r2t(rendertarget0,1.0)";
_cam1 = "#(argb,256,512,1)r2t(rendertarget1,1.0)";
_cam2 = "#(argb,256,512,1)r2t(rendertarget2,1.0)";
_cam3 = "#(argb,256,512,1)r2t(rendertarget3,1.0)";
_cam4 = "#(argb,256,512,1)r2t(rendertarget4,1.0)";

hint localize "STR_Veh_Camera_ON";

if ((_vcl getVariable "cam")) exitWith {
	hint localize "STR_Veh_Camera_OFF";

	_vcl setVariable ["cam", false, true];

	sleep 0.5;

	_vcl setObjectTextureGlobal [18, ""];
	_vcl setObjectTextureGlobal [19, ""];
};

_vcl setVariable ["cam", true, true];

while { (alive _vcl) && (_vcl getVariable "cam") } do {
	_vcl setObjectTextureGlobal [18, _cam1];
	_vcl setObjectTextureGlobal [19, _cam2];

	if(!(_vcl getVariable "cam")) exitWith {
		_vcl setObjectTextureGlobal [18, ""];
		_vcl setObjectTextureGlobal [19, ""];
	};
	sleep 0.2;
}; // END WHILE
exit;