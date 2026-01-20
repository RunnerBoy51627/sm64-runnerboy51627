#include <PR/ultratypes.h>
#include "coop.h"
#include "game_init.h"  // gControllerPads
#include "PR/os.h"      // CONT_NO_RESPONSE_ERROR, START_BUTTON

s8 gCoopActive = FALSE;

static s32 port_has_input(s32 port) {
    return (gControllerPads[port].errnum & CONT_NO_RESPONSE_ERROR) == 0;
}

void enable_coop(void)  { gCoopActive = TRUE;  }
void disable_coop(void) { gCoopActive = FALSE; }

void update_coop_state(void) {
    // If P2 is physically not responding, force coop off
    if (gCoopActive && !port_has_input(1)) {
        disable_coop();
        return;
    }

    // If P2 is present, allow join with START on controller 2
    if (!gCoopActive && port_has_input(1)) {
        if (gControllerPads[1].button & START_BUTTON) {
            enable_coop();
        }
    }
}
