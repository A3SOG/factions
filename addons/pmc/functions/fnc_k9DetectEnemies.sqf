private _dog = player getVariable ["k9Unit", player];
private _tone = _dog getVariable "k9UnitTone";

if (_dog getVariable ["k9IsWatchingForEnemies", false] isEqualTo true) exitWith { systemChat "K9 Unit is already watching for enemies!"; };

systemChat "K9 Unit is watching for enemies.";

_dog setVariable ["k9IsWatchingForEnemies", true, true];

while { (_dog getVariable ["k9IsWatchingForEnemies", false] isEqualTo true) } do {
    {
        if (alive _x && !((player targetKnowledge _x) select 0)) then {
            (group player) reveal _x;
            _dog setDir (([_dog, _x] call BIS_fnc_dirTo));
            [_dog, _tone] spawn sog_factions_pmc_fnc_k9Bark;
        };
    } forEach allUnits in (player nearEntities ["Man", 150]);
    sleep 5;
};

systemChat "K9 Unit is no longer watching for enemies.";