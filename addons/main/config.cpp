#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common", "cba_main", "ECXlu", "tahoe_08"};
        authors[] = {"J. Schmidt", "Creedcoder"}; // sub array of authors, considered for the specific addon
        author = "SOG"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;

        // List of key codes: https://community.bistudio.com/wiki/ListOfKeyCodes
        clientSaveLoopTime = 60;
        holsterKey = 35;
        interactionKey = 15;
    };
};

class CfgEditorCategories {
    class SOG_PMC {
        displayName = "SOG PMC";
    };
};

// Configs go here
#include "CfgEventHandlers.hpp"
#include "CfgMods.hpp"