params ["_unit"];

waitUntil { !isNull _unit; };

private _classname = "sog_factions_pmc_k9";
private _pos = [(getPos _unit select 0) + 1, (getPos _unit select 1) + 1, 0];
private _dog = group _unit createUnit [_classname, _pos, [], 0, "NONE"];

_dog disableAI "RADIOPROTOCOL";
_dog setSkill 1;
_unit setVariable ["k9Unit", _dog, true];

private _tone = ["dog1.wss", random [0.7, 1, 1.5]];

_dog setVariable ["k9UnitTone", _tone, true];
_dog setDir (_dog getDir _unit);
[_dog, _tone] spawn sog_factions_pmc_fnc_k9Bark;

private _id = (findDisplay 12 displayCtrl 51) ctrlAddEventHandler [
	"Draw",
	"
		private _map = _this select 0;
		private _icon = 'a3\animals_f\data\ui\map_animals_ca.paa';
		private _size = 16;
		private _k9Unit = player getVariable ['k9Unit', nil];
		if (!isNil '_k9Unit') then {
			_map drawIcon [_icon, [0.85,0.4,0,1], (getPosATL _k9Unit), _size, _size, 0];
		};
	"
];

_dog setVariable ["k9DogMarker", _id];
_dog;