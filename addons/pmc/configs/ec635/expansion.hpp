class CLASS(ec635Unarmed_PMC_01): ec135_01_base {
	displayName = "[SOG] EC-635 Unarmed";
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubcategory = "EdSubcat_Helicopters";
	side = 1;
	crew = "sog_factions_pmc_operative_heli_pilot";
};

class B_SOG_ec635Unarmed_PMC_01: CLASS(ec635Unarmed_PMC_01) {
	scope = 2;
	hiddenSelectionsTextures[] = {
		QUOTE(PATHTOF(data\camo1.paa)),
		QUOTE(PATHTOF(data\camo2.paa)),
		QUOTE(PATHTOF(data\camo3.paa)),
		QUOTE(PATHTOF(data\camo4.paa)),
		QUOTE(PATHTOF(data\camo5.paa))
	};
};