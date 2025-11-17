#include <exlaunch.hpp>
#include "Kingdom-18/Kingdom-18-patches.h"


extern "C" void exl_main(void *x0, void *x1) {
    /* Setup hooking enviroment. */
    exl::hook::Initialize();
    installKingdom18Patches();


}
