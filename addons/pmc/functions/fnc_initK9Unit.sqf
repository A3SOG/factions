params ["_unit"];

[(_this select 0)] spawn sog_factions_pmc_fnc_k9Unit;

_unit addEventHandler ["GetInMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];
	if (count crew _vehicle isequalto count crew _vehicle && !(count crew _vehicle isequalto 0)) then {
		{
			if (_x isKindOf "MFR_Dog_Base") then {
				if (_x distance _unit < 35) then {
					if !(lifeState _x isEqualTo "DEAD" && !(isPlayer _x) || lifeState _x isEqualTo "DEAD-RESPAWN" && !(isPlayer _x)  || lifeState _x isEqualTo "DEAD-SWITCHING" && !(isPlayer _x)  || lifeState _x isEqualTo "INCAPACITATED" && !(isPlayer _x)) then {
						[_x] allowGetIn true;
						_x moveInCargo _vehicle;
					};
				} else {
					systemChat "Unit is too far to enter the vehicle.";
				};
			};
		} forEach units group _unit;
	};
}];

_unit addEventHandler ["GetOutMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];
	{
		if ((_x isKindOf "MFR_Dog_Base") && group _x isEqualTo group _unit) then {
			if !(_x == _vehicle) then {
				if !(isPlayer _x) then {
					doGetOut _x;
					_x action ["getOut", _vehicle];
				};
			};
		};
	} forEach units group _unit;
}];