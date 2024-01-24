private _dog = player getVariable ["k9Unit", player];
private _variables = ["k9IsAttackingMan", "k9IsWatchingForEnemies", "k9IsSearchingForMines", "k9IsDisarmingMan"];

{
	if (_dog getVariable [_x, false] isEqualTo true) then {
		_dog setVariable [_x, false, true];
	};
} forEach _variables;