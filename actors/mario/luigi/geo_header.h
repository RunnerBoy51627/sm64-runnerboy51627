#ifndef LUIGI_GEO_HEADER_H
#define LUIGI_GEO_HEADER_H

#include "types.h"

/**
 * Geo layouts (from your geo.inc.c)
 */
extern const GeoLayout luigi_geo_face_and_wings[];
extern const GeoLayout luigi_geo_left_hand[];
extern const GeoLayout luigi_geo_right_hand[];
extern const GeoLayout luigi_geo_body[];


extern const GeoLayout luigi_vanish_geo_face_and_wings[];
extern const GeoLayout luigi_vanish_geo_left_hand[];
extern const GeoLayout luigi_vanish_geo_right_hand[];
extern const GeoLayout luigi_vanish_geo_body[];

extern const GeoLayout luigi_metal_geo_face_and_wings[];
extern const GeoLayout luigi_metal_geo_left_hand[];
extern const GeoLayout luigi_metal_geo_right_hand[];
extern const GeoLayout luigi_metal_geo_body[];

extern const GeoLayout luigi_metal_vanish_geo_face_and_wings[];
extern const GeoLayout luigi_metal_vanish_geo_left_hand[];
extern const GeoLayout luigi_metal_vanish_geo_right_hand[];
extern const GeoLayout luigi_metal_vanish_geo_body[];

extern const GeoLayout luigi_geo_load_body[];
extern const GeoLayout luigi_geo_render_body[];

/**
 * The final GeoLayout you load in level scripts
 */
extern const GeoLayout luigi_geo[];

/**
 * DisplayLists referenced by the geo
 * (these MUST exist in actors/luigi/model.inc.c or similar)
 */
extern const Gfx luigi_cap_on_eyes_front[];
extern const Gfx luigi_cap_on_eyes_half_closed[];
extern const Gfx luigi_cap_on_eyes_closed[];
extern const Gfx luigi_cap_on_eyes_right[];
extern const Gfx luigi_cap_on_eyes_left[];
extern const Gfx luigi_cap_on_eyes_up[];
extern const Gfx luigi_cap_on_eyes_down[];
extern const Gfx luigi_cap_on_eyes_dead[];

extern const Gfx luigi_cap_wings[];
extern const Gfx luigi_cap_wings_transparent[];

extern const Gfx luigi_left_hand_closed[];
extern const Gfx luigi_left_hand_open[];
extern const Gfx luigi_right_hand_closed[];
extern const Gfx luigi_right_hand_open[];
extern const Gfx luigi_right_hand_peace[];
extern const Gfx luigi_right_hand_cap[];
extern const Gfx luigi_right_hand_cap_wings[];

extern const Gfx luigi_butt[];
extern const Gfx luigi_torso[];
extern const Gfx luigi_left_arm[];
extern const Gfx luigi_left_forearm_shared_dl[];
extern const Gfx luigi_right_arm[];
extern const Gfx luigi_right_forearm_shared_dl[];

extern const Gfx luigi_left_thigh[];
extern const Gfx luigi_left_leg_shared_dl[];
extern const Gfx luigi_left_foot[];

extern const Gfx luigi_right_thigh[];
extern const Gfx luigi_right_leg_shared_dl[];
extern const Gfx luigi_right_foot[];

/**
 * Metal / shared metal display lists referenced by metal geos
 */
extern const Gfx luigi_metal_cap_on_shared_dl[];
extern const Gfx luigi_metal_cap_wings[];
extern const Gfx luigi_metal_cap_wings_transparent[];

extern const Gfx luigi_left_hand_closed_shared_dl[];
extern const Gfx luigi_left_hand_open_shared_dl[];
extern const Gfx luigi_metal_right_hand_closed[];
extern const Gfx luigi_metal_right_hand_open[];
extern const Gfx luigi_right_hand_peace_shared_dl[];
extern const Gfx luigi_metal_right_hand_cap_shared_dl[];
extern const Gfx luigi_metal_right_hand_cap_shared_dl_wings[];

extern const Gfx luigi_metal_butt[];
extern const Gfx luigi_metal_torso_shared_dl[];
extern const Gfx luigi_left_arm_shared_dl[];
extern const Gfx luigi_right_arm_shared_dl[];
extern const Gfx luigi_metal_left_thigh[];
extern const Gfx luigi_left_foot_shared_dl[];
extern const Gfx luigi_right_thigh_shared_dl[];
extern const Gfx luigi_metal_right_foot[];

#endif // LUIGI_GEO_HEADER_H
