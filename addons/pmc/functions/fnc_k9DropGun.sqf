params ["_dog", "_target"];

private _weapon1 = primaryWeapon _target;
private _weapon2 = secondaryWeapon _target;
private _weapon3 = handgunWeapon _target;
private _weapon4 = binocular _target;

k9_weaponHolder = "WeaponHolderSimulated" createVehicle [0, 0, 0];

if ((currentWeapon _target) isEqualTo _weapon3) exitWith {
	k9_weaponHolder addWeaponWithAttachmentsCargoGlobal [(getUnitLoadout _target)#2, 1];
	k9_weaponHolder setPos (_target modelToWorld [0,0.2,1.2]);
	_target removeWeaponGlobal (currentWeapon _target);
};

if ((currentWeapon _target) isEqualTo _weapon2) exitWith {
	k9_weaponHolder addWeaponWithAttachmentsCargoGlobal [(getUnitLoadout _target)#1, 1];
	k9_weaponHolder setPos (_target modelToWorld [0,0.2,1.2]);
	_target removeWeaponGlobal (currentWeapon _target);
};

if ((currentWeapon _target) isEqualTo _weapon1) exitWith {
	k9_weaponHolder addWeaponWithAttachmentsCargoGlobal [(getUnitLoadout _target)#0, 1];
	k9_weaponHolder setPos (_target modelToWorld [0,0.2,1.2]);
	_target removeWeaponGlobal (currentWeapon _target);
};

_target setUnconscious true;
_dog setVariable ["recoveredWeapon", k9_weaponHolder, true];