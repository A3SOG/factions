private _dog = player getVariable ["k9Unit", player];
private _target = assignedTarget _dog;
private _pos = _target getPos [0, random 359];
private _tone = _dog getVariable ["k9UnitTone", "dog1.wss"];

k9_weaponHolder = "WeaponHolderSimulated" createVehicle [0, 0, 0];

_dog setDir (([_dog, _target] call BIS_fnc_dirTo));

switch (true) do {
    case (isPlayer _target): { systemChat "You can't disarm players with your dog!"; };
    case (typeof _target isKindOf ""): { systemChat "You can't disarm nothingness."; };
    case (typeof _target isKindOf "MFR_Dog_Base"): { systemChat "You can't disarm a dog."; };
};

if (_dog getVariable ["k9IsDisarmingMan", false] isEqualTo true) exitWith { systemChat "K9 Unit is already disarming someone!"; };

systemChat "K9 Unit is disarming someone!";

_dog setVariable ["k9IsDisarmingMan", true, true];
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

[_dog, _target] spawn sog_factions_pmc_fnc_k9DropGun;
sleep 0.5;

k9_weaponHolder attachTo [_dog, [0, -0.55, -0.15], "attachHead", true];
k9_weaponHolder setVectorDirAndUp [[0, 0, 1], [1, -4.5, 0]];

_dog setVariable ["recoveredWeapon", k9_weaponHolder, true];

_target setUnconscious true;
_dog setAnimSpeedCoef (getAnimSpeedCoef player);
systemChat "K9 Unit recovered a gun.";

_dog doFollow player;
_dog setVariable ["k9IsDisarmingMan", false, true];

systemChat "K9 Unit is no longer disarming someone.";