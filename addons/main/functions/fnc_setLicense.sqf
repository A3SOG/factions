#include "script_component.hpp"

params [["_car", objNull, [objNull]]];

_skipRandomization = ({
	(typeOf _car isEqualTo _x) || (typeOf _car isKindOf _x) || (format ["%1", _car] isEqualTo _x)
} count (getArray (missionConfigfile >> "disableRandomization")) > 0 || (_car getVariable ["BIS_enableRandomization", true]));

if !(local _car) exitWith { false; };
if !(_skipRandomization) exitWith { false; };

_license = param[1, "", [""]];
_license = toLower(_license);

_licenseAlphaArray = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"];
_licenseNumericArray = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"];
_licenseSelections = [20, 21, 22, 23, 24, 25, 26];

if (_license == "") then {
	{
		_licenseRandom = _licenseAlphaArray;
		if (_x > 6) then {
			_licenseRandom = _licenseNumericArray;
		};

		_licenseRandom = _licenseRandom call BIS_fnc_selectRandom;
		_car setObjectTextureGlobal [_x, format ["\tahoe_08\data\license\%1.paa", _licenseRandom]];

		_license = _license + _licenseRandom;
	} forEach _licenseSelections;
} else {
	_licenseArr = _license splitString "";
	_licenseArr resize 7;
	{
		_licenseChar = _licenseArr select _forEachIndex;
		if (isNil{
			_licenseChar
		}) then {
			_licenseChar = "";
		};

		if (_licenseChar in _licenseAlphaArray or _licenseChar in _licenseNumericArray) then {
			_car setObjectTextureGlobal [_x, format ["\tahoe_08\data\license\%1.paa", _licenseChar]];
		} else {
			_car setObjectTextureGlobal [_x, ""];
		};
	} forEach _licenseSelections;
};

true;