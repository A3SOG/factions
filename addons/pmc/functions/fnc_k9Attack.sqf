params [["_useAceMedical", false]];

private _dog = player getVariable ["k9Unit", player];
private _target = assignedTarget _dog;
private _angle = random 360;
private _pos = _target getPos [0, _angle];
private _tone = _dog getVariable ["k9UnitTone", "dog1.wss"];

switch (true) do {
    case (isPlayer _target): { systemChat "You can't attack players!"; };
    case (typeof _target isKindOf ""): { systemChat "You can't attack nothingness."; };
    case (typeof _target isKindOf "MFR_Dog_Base"): { systemChat "You can't attack a dog."; };
};

if (_dog getVariable ["k9IsAttackingMan", false]) exitWith { systemChat "K9 Unit is already attacking someone!"; };

systemChat "K9 Unit is attacking someone!";

_dog setVariable ["k9IsAttackingMan", true, true];
_dog setAnimSpeedCoef 1.2;
_dog setDir (([_dog, _target] call BIS_fnc_dirTo));

// [(group _dog), (group _target), 1, 1, {(alive _target) && (_dog distance _target < 6)}] spawn BIS_fnc_stalk;

while { ((alive _target) && (_dog distance _pos > 1)) } do {
	_dog doMove _pos;

	if (_dog distance _pos < 2) exitWith {
		_dog setDir (_dog getDir _target);
		[_dog, _tone] spawn sog_factions_pmc_fnc_k9Bark;
	};
	sleep 0.5;
};

if (!alive _target) exitWith {};
sleep 0.1;

_dog switchMove "AttackHigh";
_dog playMoveNow "AttackHigh";
sleep 0.25;

if (_useAceMedical) then {
	_numAttacks = selectRandom [1, 2];
	for "_i" from 0 to _numAttacks do {
		_bodyPart = selectRandom ["head", "body", "leftleg", "rightleg"];
		[_target, selectRandom [4, 5, 6], _bodyPart, "bullet", _dog] call ace_medical_fnc_adddamagetounit;
	};
} else {
	systemChat "Normal damage (Instant Death)";
	_target setDamage 1;
};

_target setUnconscious false;
_dog setAnimSpeedCoef (getAnimSpeedCoef player);
_dog doFollow player;
_dog setVariable ["k9IsAttackingMan", false, true];

systemChat "K9 Unit is no longer attacking someone.";