// #include "\x\cba\addons\main\script_macros_common.hpp" // Included in ACE3's "script_macros.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#include "\a3\ui_f\hpp\defineCommonGrids.inc"

// #define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Path
#define PATHTOR_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOR(var1) PATHTOR_SYS(PREFIX,COMPONENT,var1)
#define PATHTOER(var1,var2) PATHTOR_SYS(PREFIX,var1,var2)
#define QPATHTOR(var1) QUOTE(PATHTOR(var1))
#define QPATHTOER(var1,var2) QUOTE(PATHTOER(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Equipment
#define MACRO_ADDMAG(MAG,COUNT) class _xx_##MAG { \
    magazine = #MAG; \
    count = COUNT; \
}
#define MACRO_ADDWEAP(WEAP,COUNT) class _xx_##WEAP { \
    weapon = #WEAP; \
    count = COUNT; \
}
// #define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
//     name = #ITEM; \
//     count = COUNT; \
// }

// Inventory
#define ITEM_2(ITEM) ITEM,ITEM
#define ITEM_3(ITEM) ITEM,ITEM,ITEM
#define ITEM_4(ITEM) ITEM,ITEM,ITEM,ITEM
#define ITEM_5(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_6(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_7(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_8(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM

// Magazines
#define MAG_2(MAG) MAG,MAG
#define MAG_3(MAG) MAG,MAG,MAG
#define MAG_4(MAG) MAG,MAG,MAG,MAG
#define MAG_5(MAG) MAG,MAG,MAG,MAG,MAG
#define MAG_6(MAG) MAG,MAG,MAG,MAG,MAG,MAG
#define MAG_7(MAG) MAG,MAG,MAG,MAG,MAG,MAG,MAG
#define MAG_8(MAG) MAG,MAG,MAG,MAG,MAG,MAG,MAG,MAG

// Vehicles
#define MACRO_TURN_LEFT_ALLUMAGE \
    class turn_left_allumage { \
        displayName = "$STR_Veh_Turn_Left_allumage"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        onlyForPlayer = 1; \
        condition = "(this animationPhase ""turn_left"" < 0.5) && alive(this) && ((driver this) isEqualTo player)"; \
        statement = "this animate [""turn_left"", 1];"; \
        shortcut = "LeanLeft"; \
        showWindow = 0; \
    };
#define MACRO_TURN_LEFT_ETEINT \
    class turn_left_eteint { \
        displayName = "$STR_Veh_Turn_Left_eteint"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        onlyForPlayer = 1; \
        condition = "(this animationPhase ""turn_left"" > 0.5) && alive(this) && ((driver this) isEqualTo player)"; \
        statement = "this animate [""turn_left"", 0];"; \
        shortcut = "LeanLeft"; \
        showWindow = 0; \
    };
#define MACRO_TURN_RIGHT_ALLUMAGE \
    class turn_right_allumage { \
        displayName = "$STR_Veh_Turn_Right_allumage"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        onlyForPlayer = 1; \
        condition = "(this animationPhase ""turn_right"" < 0.5) && alive(this) && ((driver this) isEqualTo player)"; \
        statement = "this animate [""turn_right"", 1];"; \
        shortcut = "LeanRight"; \
        showWindow = 0; \
    };
#define MACRO_TURN_RIGHT_ETEINT \
    class turn_right_eteint { \
        displayName = "$STR_Veh_Turn_Right_eteint"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        onlyForPlayer = 1; \
        condition = "(this animationPhase ""turn_right"" > 0.5) && alive(this) && ((driver this) isEqualTo player)"; \
        statement = "this animate [""turn_right"", 0];"; \
        shortcut = "LeanRight"; \
        showWindow = 0; \
    };

#define MACRO_CODE_1 \
    class code_1 { \
        displayName = "$STR_Veh_Code_1"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        condition = "(driver this) isEqualTo player"; \
        statement = "this setVariable ['Code2', 1, true]; this setVariable ['Code3', 1, true]; this setVariable ['SOG_Siren', 0, true]; this spawn sog_factions_pmc_fnc_code2Off; this spawn sog_factions_pmc_fnc_beaconsOff;"; \
        onlyForplayer = 0; \
        shortcut = "LookLeftDown"; \
        showWindow = 0; \
    };
#define MACRO_CODE_2 \
    class code_2 { \
        displayName = "$STR_Veh_Code_2"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        condition = "((driver this) isEqualTo player) && ((this getVariable ['code2', 0]) == 1)"; \
        statement = "this setVariable ['code2', 0, true]; this setVariable ['code3', 0, true]; this setVariable ['SOG_Siren', 0, true]; this spawn sog_factions_pmc_fnc_code2On; this spawn sog_factions_pmc_fnc_beaconsOn;"; \
        onlyForplayer = 0; \
        shortcut = "LookDown"; \
        showWindow = 0; \
    };
#define MACRO_CODE_3 \
    class code_3 { \
        displayName = "$STR_Veh_Code_3"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        condition = "((driver this) isEqualTo player) && ((this getVariable ['code3', 0]) == 1)"; \
        statement = "this setVariable ['code3', 0, true]; this setVariable ['code2', 0, true]; this setVariable ['SOG_Siren', 1, true]; this spawn sog_factions_pmc_fnc_code2On; this spawn sog_factions_pmc_fnc_beaconsOn;"; \
        onlyForplayer = 0; \
        shortcut = "LookRightDown"; \
        showWindow = 0; \
    };

#define MACRO_PCAM \
    class pCam { \
        displayName = "$STR_Veh_Camera_ON"; \
        displayNameDefault = ""; \
        position = "drivewheel"; \
        radius = 1; \
        condition = "(driver this) isEqualTo player"; \
        statement = "this spawn sog_factions_pmc_fnc_pCam;"; \
        onlyForplayer = 0; \
        shortcut = "LookCenter"; \
        showWindow = 0; \
    };