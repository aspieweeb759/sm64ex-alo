#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_grounds_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom37486272_skybox_mio0SegmentRomStart,_SkyboxCustom37486272_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,16384,13000,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe069c98),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(102,-3421,0,-6627,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(0,-2935,1592,-8868,0,-154,0,0x600000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(104,-3273,0,-10826,0,0,6,0x2020000, bhvKoopa,31),
OBJECT_WITH_ACTS(103,-3116,10486,-11074,0,107,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(88,-3383,7731,1467,0,180,0,0x20200000, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-3370,8428,-10,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-3380,8619,-616,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-3391,8842,-1216,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-3376,8848,-1927,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(88,-3394,8363,699,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(102,-3208,4,-3850,0,0,0,0x0, bhvChainChomp,31),
OBJECT_WITH_ACTS(89,-3446,2680,-8887,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-3468,4291,-6454,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-3444,7772,1932,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-3425,10466,-6513,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(100,-3362,1141,-8959,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-3402,7301,-1591,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2284,0,-6047,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2380,4,-4343,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(192,-3378,4291,-4471,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2831,1539,-9425,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3474,3520,-7302,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3313,6120,-2348,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3217,5176,-1287,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3329,7564,439,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3422,9980,-4489,0,0,0,0x10000, bhvGoomba,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,25,1,10,0),
WARP_NODE(241,25,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
