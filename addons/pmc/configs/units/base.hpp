class CLASS(pmc_operative_base): B_Soldier_F {
	dlc = QUOTE(PREFIX);
	author = "SOG";
	scope = 0;
	scopeCurator = 0;
	scopeArsenal = 0;
	side = 1;
	identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
	faction = QCLASS(BLU_F);
	editorCategory = "SOG_PMC";
	editorSubcategory = "EdSubcat_Personnel";
	displayName = "";
	nakedUniform = "U_BasicBody";
	uniformClass = "";
	canDeactivateMines = "false";
	engineer = "false";
	attendant = 0;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	items[] = {};
	respawnItems[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};

	class Eventhandlers: Eventhandlers {};

	class ACE_Actions: ACE_Actions {};
	class ACE_SelfActions: ACE_SelfActions {};
};

class CLASS(pmc_vip_base): CLASS(pmc_operative_base) {
	side = 2;
	faction = QCLASS(IND_F);
};