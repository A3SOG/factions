class CLASS(tahoe_08_PMC_01): tahoe_08 {
	crew = "sog_factions_pmc_operative_driver";
	picture = "";
	Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
	editorPreview = "";
	side = 1;
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubCategory = "EdSubcat_Cars";
	displayName = "[SOG] Chevrolet Tahoe";
};
class CLASS(tahoe_LTZ_08_PMC_01): tahoe_LTZ_08	{
	crew = "sog_factions_pmc_operative_driver";
	picture = "";
	Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
	editorPreview = "";
	side = 1;
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubCategory = "EdSubcat_Cars";
	displayName = "[SOG] Chevrolet Tahoe VIP";
	armor = 45;
};
class CLASS(suburban_PMC_01): suburban {
	crew = "sog_factions_pmc_operative_driver";
	picture = "";
	Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
	editorPreview = "";
	side = 1;
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubCategory = "EdSubcat_Cars";
	model = "\tahoe_08\suburban";
	displayName = "[SOG] Chevrolet Suburban";
};
class CLASS(tahoe_UNM_PMC_01): tahoe_UNM {
	crew = "sog_factions_pmc_operative_driver";
	picture = "";
	Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
	editorPreview = "";
	side = 1;
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubCategory = "EdSubcat_Cars";
	displayName = "[SOG] Chevrolet Tahoe Security";
	armor = 50;
	emergencyLightbarType = 4;
	weapons[] = {"airhorn_tahoe","airhorn_fcb_priority_tahoe","airhorn_fcb_priority2_tahoe","airhorn_fcb_priority3_tahoe","airhorn_fcb_priority4_tahoe","airhorn_fcb_priority5_tahoe","airhorn_fcb_priority6_tahoe","airhorn_fcb_priority7_tahoe","airhorn_fcb_priority8_tahoe","airhorn_fcb_priority9_tahoe","airhorn_fcb_priority10_tahoe","airhorn_fcb_priority11_tahoe","airhorn_fcb_priority12_tahoe","airhorn_fcb_priority13_tahoe"};
	
	class EventHandlers: EventHandlers {
		init = "[(_this select 0)] spawn sog_factions_pmc_fnc_initTahoe; [(_this select 0)] call sog_factions_main_fnc_setLicense;";
	};

	class UserActions {
		MACRO_CODE_1
		MACRO_CODE_2
		MACRO_CODE_3
		MACRO_TURN_LEFT_ALLUMAGE
		MACRO_TURN_LEFT_ETEINT
		MACRO_TURN_RIGHT_ALLUMAGE
		MACRO_TURN_RIGHT_ETEINT
	};
};
class CLASS(tahoe_LUMI_PMC_01): tahoe_LUMI {
	crew = "sog_factions_pmc_operative_driver";
	picture = "";
	Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
	editorPreview = "";
	side = 1;
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubCategory = "EdSubcat_Cars";
	displayName = "[SOG] Chevrolet Tahoe'08 Lumi Edition";
};

class B_SOG_tahoe_08_PMC_01: CLASS(tahoe_08_PMC_01) {
	scope = 0;
};
class B_SOG_tahoe_LUMI_PMC_01: CLASS(tahoe_LUMI_PMC_01) {
	scope = 0;
};
class B_SOG_tahoe_LTZ_08_PMC_01: CLASS(tahoe_LTZ_08_PMC_01) {
	scope = 0;
};

// Only show these, as the others don't really apply to the mod style
class B_SOG_suburban_PMC_01: CLASS(suburban_PMC_01) {
	scope = 2;
/*
	camo1 = body
	camo2 = wheels
	camo3 = glass
	camo4 = LED_leftHeadlight_rightFoglight
	camo5 = LED_rightHeadlight_leftFoglight
	camo6 = LED_leftWindscreen_SideFirst
	camo7 = LED_rightWindscreen_SideSecond
	camo8 = LED_leftWindscreen
	camo9 = LED_rightWindscreen
	camo10 = LED_backInner_leftTop
	camo11 = LED_backOuter_rightTop
	camo12 = LED_leftWing
	camo13 = LED_rightWing
	camo14 = LED_leftWindscreen_plateTop
	camo15 = LED_rightWindscreen_plateBottom
	camo16 = LED_rearLightMiddle
	camo17 = LED_rearLightTopBottom
	camo18 = UNKNOWN
	camo19 = UNKNOWN
	camo20 = UNKNOWN
*/
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo11","camo12","camo13","camo14","camo15","camo16","camo17","camo18","camo19","camo20","license1","license2","license3","license4","license5","license6","license7"};
	hiddenSelectionsTextures[] = {"\tahoe_08\data\TAHOE_UNM_co.paa","\tahoe_08\data\GMT_rad_co.paa","\tahoe_08\data\glass_black.paa","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""};
};
class B_SOG_tahoe_UNM_PMC_01: CLASS(tahoe_UNM_PMC_01) {
	scope = 2;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo11","camo12","camo13","camo14","camo15","camo16","camo17","camo18","camo19","camo20","license1","license2","license3","license4","license5","license6","license7"};
	hiddenSelectionsTextures[] = {"\tahoe_08\data\TAHOE_UNM_co.paa","\tahoe_08\data\GMT_rad_co.paa","\tahoe_08\data\glass_black.paa","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""};
};