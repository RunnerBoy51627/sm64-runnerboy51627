#include <PR/ultratypes.h>

#include "game_init.h"        // gControllerBits, gControllerStatuses
#include "print.h"
#include "gfx_dimensions.h"
#include "PR/os_cont.h"       // CONT_NO_RESPONSE_ERROR (or include PR/os.h)

static s32 controller_has_input(struct Controller *c) {
    if (c == NULL || c->controllerData == NULL) return 0;
    return (c->controllerData->errnum & CONT_NO_RESPONSE_ERROR) == 0;
}

static s32 is_port_no_input(s32 port) {
    /* Not detected at init */
    if ((gControllerBits & (1 << port)) == 0) {
        return TRUE;
    }

    /* Detected but now not responding */
    if (gControllerStatuses[port].errnum & CONT_NO_RESPONSE_ERROR) {
        return TRUE;
    }

    return FALSE;
}

#define NO_INPUT_Y_TOP   210
#define NO_INPUT_Y_TEXT  190

void render_no_input_warnings(void) {
    if (!controller_has_input(&gControllers[0])) {
        print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(24), 30, "PLAYER 1");
        print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(24), 15, "NO INPUT");
    }

    if (!controller_has_input(&gControllers[1])) {
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(140), 30, "PLAYER 2");
        print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(140), 15, "NO INPUT");
    }
}

// void render_no_input_warnings(void) {
//     if (!controller_has_input(&gControllers[0])) {
//         print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(30), 50, "PLAYER 1 NO INPUT");
//     }
//
//     // Only show P2 warning if coop is active (or whatever your condition is)
//     if (!controller_has_input(&gControllers[1])) {
//         print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(160), 50, "PLAYER 2 NO INPUT");
//     }
// }
//
