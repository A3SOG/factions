#include "script_component.hpp"

params ["_vcl"];

if (isNil "_vcl" || !hasInterface) exitWith {};

[_vcl] spawn sog_factions_pmc_fnc_siren;