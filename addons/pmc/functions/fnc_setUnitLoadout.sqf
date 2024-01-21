#include "script_component.hpp"

params ["_unit", "_loadout"];

switch (_loadout) do {
	case "assault": {
		_unit addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855A1_PMAG";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToBackpack "SOG_Helmet_MICH2000_C_Camo02";
		for "_i" from 1 to 7 do {_unit addItemToVest "rhs_mag_30Rnd_556x45_M855A1_PMAG";};
		for "_i" from 1 to 3 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "driver": {
		_unit addPrimaryWeaponItem "CUP_30Rnd_9x19_MP5";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToBackpack "SOG_Helmet_MICH2000_C_Camo02";
		for "_i" from 1 to 7 do {_unit addItemToVest "CUP_30Rnd_9x19_MP5";};
		for "_i" from 1 to 3 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "grenadier": {
		_unit addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855A1_PMAG";
		_unit addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToBackpack "SOG_Helmet_MICH2000_C_Camo02";
		for "_i" from 1 to 7 do {_unit addItemToVest "rhs_mag_30Rnd_556x45_M855A1_PMAG";};
		for "_i" from 1 to 2 do {_unit addItemToVest "CUP_1Rnd_HE_M203";};
		for "_i" from 1 to 3 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "heliPilot": {
		_unit addPrimaryWeaponItem "CUP_30Rnd_9x19_MP5";
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		for "_i" from 1 to 7 do {_unit addItemToVest "CUP_30Rnd_9x19_MP5";};
		for "_i" from 1 to 3 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "security": {
		_unit addHandGunItem "CUP_17Rnd_9x19_glock17";
		_unit addItemToBackpack "SOG_Helmet_MICH2000_C_Camo02";
		for "_i" from 1 to 3 do {_unit addItemToVest "CUP_17Rnd_9x19_glock17";};
	};
	case "default": {};
};