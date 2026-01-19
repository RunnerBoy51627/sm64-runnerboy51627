#include <PR/ultratypes.h>

#include "coop.h"
#include "game_init.h"   // gControllers
#include "print.h"       // print_text (if you use HUD printing)
#include "gfx_dimensions.h"

s8 gCoopActive = FALSE;

static void enable_coop(void) {
    gCoopActive = TRUE;
}

/* Optional for later */
static void disable_coop(void) {
    gCoopActive = FALSE;
}

void update_coop_state(void) {
    u16 pressed2;

    /* P2 must exist and respond */
    if ((gControllerBits & (1 << 1)) == 0) return;
    if (gControllerStatuses[1].errnum & CONT_NO_RESPONSE_ERROR) return;

    pressed2 = gControllers[1].buttonPressed;

    if (!gCoopActive && pressed2) {
        enable_coop();
    }
}

/* Debug text so you KNOW the join worked */
void coop_debug_draw(void) {
    if (gCoopActive) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(40), 210, "2P");
    }
}
