private _dog = player getVariable ["k9Unit", player];
private _tone = _dog getVariable "k9UnitTone";

if (_dog getVariable ["k9IsSearchingForMines", false] isEqualTo true) exitWith { systemChat "K9 Unit is already searching for landmines!"; };

systemChat "K9 Unit is searching for landmines.";

_dog setVariable ["k9IsSearchingForMines", true, true];

while { (_dog getVariable ["k9IsSearchingForMines", false] isEqualTo true) } do {
	{
		if (mineActive _x && !(_x mineDetectedBy playerSide)) then {
			playerSide revealMine _x;
			_dog setDir (([_dog, _x] call BIS_fnc_dirTo));
			[_dog, _tone] spawn sog_factions_pmc_fnc_k9Bark;
		};
	} forEach (player nearObjects ["MineBase", 25]);
	sleep 5;
};

systemChat "K9 Unit has stopped searching for landmines.";