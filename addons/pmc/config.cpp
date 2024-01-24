#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "pmc_k9",
            "pmc_operative_assault",
            "pmc_operative_grenadier",
            "pmc_operative_security",
            "pmc_operative_k9_security",
            "pmc_operative_unarmed",
            "pmc_operative_driver",
            "pmc_vip",
            "B_SOG_tahoe_08_PMC_01",
            "B_SOG_tahoe_LTZ_08_PMC_01",
            "B_SOG_suburban_PMC_01",
            "B_SOG_tahoe_UNM_PMC_01",
            "B_SOG_tahoe_LUMI_PMC_01"
        };
        weapons[] = {
            "ss2000_wail_tahoe",
            "ss2000_yelp_tahoe",
            "pa300_wail_tahoe",
            "pa300_airhor_tahoen"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sog_factions_main"};
        authors[] = {"J. Schmidt", "Creedcoder"}; // sub array of authors, considered for the specific addon
        author = "SOG"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

class CfgEditorCategories {
    class SOG_PMC {
        displayName = "SOG PMC";
    };
};

class CfgEditorSubcategories {
	class EdCat_Dogs {
        displayName = "Dogs";
	};
};

// configs go here
#include "CfgOrbat.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"