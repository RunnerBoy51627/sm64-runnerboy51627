#ifndef COOP_H
#define COOP_H

#include <PR/ultratypes.h>

extern s8 gCoopActive;

void update_coop_state(void);
void coop_debug_draw(void);
void render_no_input_warnings(void);
void enable_coop(void);
void disable_coop(void);

#endif
