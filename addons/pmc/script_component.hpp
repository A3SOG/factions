#define COMPONENT pmc
#define COMPONENT_BEAUTIFIED PMC
#include "..\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_PMC
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_PMC
    #define DEBUG_SETTINGS DEBUG_SETTINGS_PMC
#endif

#define DEFAULT_ITEMS "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"

#include "..\main\script_macros.hpp"