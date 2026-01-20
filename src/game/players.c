#include "types.h"
#include "game_init.h"
#include "object_list_processor.h"
#include "area.h"
#include "model_ids.h"

s8 gPrimaryIsLuigi = FALSE;
static s8 sModelDirty = TRUE;

void update_primary_character_choice(void) {
    // If logical P1 controller is physically port 1, we want Luigi mode when START pressed.
    // (This matches your “P2 simulates single-player as Luigi” idea.)
    if (gControllerPorts[0] == 1 && (gControllers[0].buttonPressed & START_BUTTON)) {
        gPrimaryIsLuigi = TRUE;
        sModelDirty = TRUE;
    }

    // Optional: if P1 returns (physical port 0) and presses START, revert to Mario
    if (gControllerPorts[0] == 0 && (gControllers[0].buttonPressed & START_BUTTON)) {
        gPrimaryIsLuigi = FALSE;
        sModelDirty = TRUE;
    }
}

void apply_primary_player_model(void) {
    if (!sModelDirty) return;
    if (!gCurrentArea) return;
    if (!gMarioObject) return;
    if (!gLoadedGraphNodes) return;

    gMarioObject->header.gfx.sharedChild =
        gPrimaryIsLuigi ? gLoadedGraphNodes[MODEL_LUIGI]
                        : gLoadedGraphNodes[MODEL_MARIO];

    sModelDirty = FALSE;
}
