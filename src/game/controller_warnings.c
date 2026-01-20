#include <PR/ultratypes.h>

#include "game_init.h"  // gControllerPads
#include "print.h"
#include "gfx_dimensions.h"
#include "PR/os.h"
#include "coop.h"

static s32 port_has_input(s32 port) {
    return (gControllerPads[port].errnum & CONT_NO_RESPONSE_ERROR) == 0;
}

void render_no_input_warnings(void) {
    if (!port_has_input(0)) {
        print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(24), 30, "PLAYER 1");
        print_text(GFX_DIMENSIONS_RECT_FROM_LEFT_EDGE(24), 15, "NO INPUT");
    }

    if (!port_has_input(1)) {
    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(140), 30, "PLAYER 2");
    print_text(GFX_DIMENSIONS_RECT_FROM_RIGHT_EDGE(140), 15, "NO INPUT");
    }
}
