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
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_sa_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,1161,-363,-2052),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x2801700),
TERRAIN(col_sa_1_0xe009200),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,-3211,4096,2036,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(120,-3318,3593,-1251,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(207,-3244,226,-11118,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-3168,-250,-11542,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3084,-270,-11880,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3022,-300,-12195,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2956,-300,-12495,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2603,-360,-12781,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2345,-480,-12994,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2102,-600,-13195,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1868,-660,-13268,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1664,-780,-13384,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1389,-780,-13450,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1078,-570,-13580,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-798,-300,-13511,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-633,-210,-13733,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-406,-150,-13889,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-50,-180,-13877,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(120,-2168,-270,-13144,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(217,-3186,-90,-11092,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(129,1988,-5460,1310,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1863,-5460,1512,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1667,-5520,1617,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,812,-5490,1734,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1022,-5490,1689,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1231,-5520,1625,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,2070,-5250,467,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,1462,-5490,1613,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(120,2520,-3769,-6412,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,1442,-5250,1649,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(122,-8149,-6440,-2484,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(212,-3291,3819,1893,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(122,-2793,2610,2153,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-1520,8250,-7625,0,0,0,0x3080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-8302,-8640,1178,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(217,-7459,-7610,-1803,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-2005,3180,-7366,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-2025,2880,-7066,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-2045,2760,-6720,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-2037,2610,-6458,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,-2483,3644,-7853,0,0,0,0x10000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,25,1,3,0),
WARP_NODE(241,25,1,4,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
