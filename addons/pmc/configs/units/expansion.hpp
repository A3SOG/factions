class CLASS(pmc_operative_unarmed): CLASS(pmc_operative_base) {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Operative I (Unarmed)";
	uniformClass = "SOG_Clothes_BDU_F_TN_BK_BK_BK";
	backpack = "";
	weapons[] = {};
	respawnWeapons[] = {};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "SOG_Vest_Safariland_A_BK_BK"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "SOG_Vest_Safariland_A_BK_BK"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""default""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
	};

	class ACE_Actions: ACE_Actions {};

	class ACE_SelfActions: ACE_SelfActions {
		class getacF110 {
			displayName = "Getac F110";
			condition = "true";
			// icon = "";
			class getacOpen {
				displayName = "Open";
				condition = "('SOG_Tablet' in (items player))";
				exceptions[] = {};
				statement = "[] execVM 'CoalaOs\CoalaOsMain.sqf'";
			};
		};
		class idBadge {
			displayName = "ID Badge";
			condition = "true";
			// icon = "";
			class idbadgeGarrison {
				displayName = "Garrison";
				condition = "true";
				exceptions[] = {};
				statement = "['Garrison'] spawn sog_card_fnc_setBadge";
			};
			class idBadgeMiddle {
				displayName = "Middle";
				condition = "true";
				exceptions[] = {};
				statement = "['Middle'] spawn sog_card_fnc_setBadge";
			};
			class idBadgePocket01 {
				displayName = "Pocket 1";
				condition = "true";
				exceptions[] = {};
				statement = "['Pocket01'] spawn sog_card_fnc_setBadge";
			};
			class idBadgePocket02 {
				displayName = "Pocket 2";
				condition = "true";
				exceptions[] = {};
				statement = "['Pocket02'] spawn sog_card_fnc_setBadge";
			};
			class idBadgePocket03 {
				displayName = "Pocket 3";
				condition = "true";
				exceptions[] = {};
				statement = "['Pocket03'] spawn sog_card_fnc_setBadge";
			};
			class idBadgeRemove {
				displayName = "Remove";
				condition = "true";
				exceptions[] = {};
				statement = "removeBackpack player;";
			};
		};
		class phone {
			displayName = "Phone";
			condition = "true";
			// icon = "";
			class phoneOpen {
				displayName = "Open";
				condition = "('SOG_Phone' in (items player))";
				exceptions[] = {};
				statement = "[] spawn sog_client_phone_fnc_openPhone";
			};
		};
	};
};
class CLASS(pmc_k9): MFR_C_GermanShepherd_BLK {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	editorCategory = "SOG_PMC";
	editorSubcategory = "EdSubcat_Dogs";
	displayName = "K9 Unit";
	Icon = "iconAnimal";
};
class CLASS(pmc_operative_security): CLASS(pmc_operative_unarmed) {
	displayName = "Operative II (Security)";
	uniformClass = "SOG_Clothes_BDU_F_TN_BK_BK_BK";
	backpack = "SOG_Pack_Safariland_A_Kneepads_Bk_BK_BK";
	weapons[] = {"CUP_hgun_Glock17_blk", "Binocular", "Put", "Throw"};
	respawnWeapons[] = {"CUP_hgun_Glock17_blk", "Binocular", "Put", "Throw"};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_A_BK", "CUP_G_Oakleys_Drk", "SOG_NVG_Headset_ThroatMic"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_A_BK", "CUP_G_Oakleys_Drk", "SOG_NVG_Headset_ThroatMic"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""security""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
	};
};
class CLASS(pmc_operative_k9_security): CLASS(pmc_operative_unarmed) {
	displayName = "Operative II K9 (Security)";
	uniformClass = "SOG_Clothes_BDU_F_TN_BK_BK_BK";
	backpack = "SOG_Pack_Safariland_A_Kneepads_Bk_BK_BK";
	weapons[] = {"CUP_hgun_Glock17_blk", "Binocular", "Put", "Throw"};
	respawnWeapons[] = {"CUP_hgun_Glock17_blk", "Binocular", "Put", "Throw"};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_A_BK", "CUP_G_Oakleys_Drk", "SOG_NVG_Headset_ThroatMic"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_A_BK", "CUP_G_Oakleys_Drk", "SOG_NVG_Headset_ThroatMic"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""security""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear; [(_this select 0)] spawn sog_factions_pmc_fnc_initK9Unit;";
	};

	class ACE_SelfActions: ACE_SelfActions {
		class k9Dog {
			displayName = "K9 Commands";
			condition = "true";
			icon = "a3\animals_f\data\ui\map_animals_ca.paa";
			class k9Attack {
				displayName = "Attack";
				condition = "!isPlayer (player getVariable ['k9Unit', player]) && !((player getVariable ['k9Unit', player]) getVariable ['k9IsAttackingMan', false])";
				exceptions[] = {};
				statement = "[true] spawn sog_factions_pmc_fnc_k9Attack";
			};
			class k9DetectMines {
				displayName = "Detect Mines";
				condition = "!isPlayer (player getVariable ['k9Unit', player]) && !((player getVariable ['k9Unit', player]) getVariable ['k9IsSearchingForMines', false])";
				exceptions[] = {};
				statement = "[] spawn sog_factions_pmc_fnc_k9DetectMines";
			};
			class k9DetectEnemies {
				displayName = "Detect Enemies";
				condition = "!isPlayer (player getVariable ['k9Unit', player]) && !((player getVariable ['k9Unit', player]) getVariable ['k9IsWatchingForEnemies', false])";
				exceptions[] = {};
				statement = "[] spawn sog_factions_pmc_fnc_k9DetectEnemies";
			};
			class k9Disarm {
				displayName = "Disarm";
				condition = "!isPlayer (player getVariable ['k9Unit', player]) && !((player getVariable ['k9Unit', player]) getVariable ['k9IsDisarmingMan', false])";
				exceptions[] = {};
				statement = "[] spawn sog_factions_pmc_fnc_k9Disarm";
			};
			class k9Heel {
				displayName = "Heel";
				condition = "!isPlayer (player getVariable ['k9Unit', player])";
				exceptions[] = {};
				statement = "[] spawn sog_factions_pmc_fnc_k9Heel";
			};
		};
	};
};
class CLASS(pmc_operative_driver): CLASS(pmc_operative_unarmed) {
	displayName = "Operative III (Driver)";
	uniformClass = "SOG_Clothes_BDU_F_TN_BK_BK_BK";
	backpack = "SOG_Pack_Blackhawk_Kneepads_Bk";
	weapons[] = {"CUP_hgun_Glock17_blk", "sog_smg_MP5A5_acc_Flashlight_MicroT1_low", "Binocular", "Put", "Throw"};
	respawnWeapons[] = {"CUP_hgun_Glock17_blk", "sog_smg_MP5A5_acc_Flashlight_MicroT1_low", "Binocular", "Put", "Throw"};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_Chest_Rig_A_TN_BK", "CUP_G_Oakleys_Clr", "SOG_NVG_Headset_ThroatMic"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_Chest_Rig_A_TN_BK", "CUP_G_Oakleys_Clr", "SOG_NVG_Headset_ThroatMic"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""driver""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
	};
};
class CLASS(pmc_operative_assault): CLASS(pmc_operative_unarmed) {
	displayName = "Operative IV (Assualt)";
	uniformClass = "SOG_Clothes_BDU_F_TN_BK_BK_BK";
	backpack = "SOG_Pack_Pouch_Set_I_BK";
	weapons[] = {"CUP_hgun_Glock17_blk", "sog_arifle_M16A4_Grip_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG", "Binocular", "Put", "Throw"};
	respawnWeapons[] = {"CUP_hgun_Glock17_blk", "sog_arifle_M16A4_Grip_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG", "Binocular", "Put", "Throw"};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_Chest_Rig_B_TN_BK", "CUP_G_Oakleys_Drk", "SOG_NVG_Headset_ThroatMic"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_Chest_Rig_B_TN_BK", "CUP_G_Oakleys_Drk", "SOG_NVG_Headset_ThroatMic"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""assault""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
	};
};
class CLASS(pmc_operative_grenadier): CLASS(pmc_operative_unarmed) {
	displayName = "Operative V (Grenadier)";
	uniformClass = "SOG_Clothes_BDU_F_TN_BK_BK_BK";
	backpack = "SOG_Pack_Pouch_Set_C_BK";
	weapons[] = {"CUP_hgun_Glock17_blk", "sog_arifle_M4A1_GL_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG", "Binocular", "Put", "Throw"};
	respawnWeapons[] = {"CUP_hgun_Glock17_blk", "sog_arifle_M4A1_GL_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG", "Binocular", "Put", "Throw"};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_Chest_Rig_C_TN_BK", "CUP_G_Oakleys_Clr", "SOG_NVG_Headset_ThroatMic"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_PMC_Cap_Back_Grey", "SOG_Vest_PACA_Chest_Rig_C_TN_BK", "CUP_G_Oakleys_Clr", "SOG_NVG_Headset_ThroatMic"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""grenadier""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
	};
};
class CLASS(pmc_operative_heli_pilot): CLASS(pmc_operative_unarmed) {
	displayName = "Operative VI (Heli Pilot)";
	uniformClass = "SOG_Clothes_CWU27P_BK";
	backpack = "SOG_Pack_Parachute_A_TN";
	weapons[] = {"CUP_hgun_Glock17_blk", "sog_smg_MP5A5_acc_Flashlight_MicroT1_low", "Binocular", "Put", "Throw"};
	respawnWeapons[] = {"CUP_hgun_Glock17_blk", "sog_smg_MP5A5_acc_Flashlight_MicroT1_low", "Binocular", "Put", "Throw"};
	items[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	respawnItems[] = {ITEM_2("ACE_fieldDressing"), ITEM_2("ACE_packingBandage"), "ACE_morphine", "ACE_tourniquet", "SOG_Phone"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SPH4_grey_visor", "SOG_Vest_Chest_Rig_D_TN", "SOG_Eyewear_Pouch_Set_H_TN", "SOG_NVG_Glove_Oakley_TN"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SPH4_grey_visor", "SOG_Vest_Chest_Rig_D_TN", "SOG_Eyewear_Pouch_Set_H_TN", "SOG_NVG_Glove_Oakley_TN"};

	class Eventhandlers: Eventhandlers {
		init = "[(_this select 0), ""heliPilot""] call sog_factions_pmc_fnc_setUnitLoadout; [(_this select 0), nil, nil] call BIS_fnc_unitHeadgear;";
	};
};

class CLASS(pmc_vip_01): CLASS(pmc_vip_base) {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	side = 1;
	faction = QCLASS(BLU_F);
	displayName = "VIP";
	uniformClass = "sog_gear_Suit_VIP";
	backpack = "";
	weapons[] = {};
	respawnWeapons[] = {};
	items[] = {};
	respawnItems[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {DEFAULT_ITEMS, "G_Squares_Tinted"};
	respawnLinkedItems[] = {DEFAULT_ITEMS, "G_Squares_Tinted"};

	class Eventhandlers: Eventhandlers {};

	CBA_facewearList[] = {
		"", 1,
		"G_Squares_Tinted", 1,
		"G_Spectacles_Tinted", 1
	};
};