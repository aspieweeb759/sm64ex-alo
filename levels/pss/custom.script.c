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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-11044,-4757,-4787),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x31a1700),
TERRAIN(col_pss_1_0xe078c10),
SET_BACKGROUND_MUSIC(0,13),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-3969,-1682,2299,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-11394,-4747,-5858,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,9966,-2868,-4155,0,-153,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3945,-2009,-4014,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(195,-3944,978,-2621,0,-151,0,0x0, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(137,7626,-3609,7710,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,10602,-3747,-6371,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,9715,-3754,-6391,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,9715,-3754,-6391,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(215,-5003,-1794,4600,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3553,-1555,1742,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,12459,-3338,-6436,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10552,-4644,-6896,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10186,-4501,-4889,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-12168,-4328,-7132,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6853,-4317,-9670,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9210,-4085,-2609,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(38,-11817,-4900,-7290,0,0,0,0xb0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,10295,-4229,-5188,0,0,0,0xc0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(217,10521,-4246,-5052,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(38,-10732,-4900,-7184,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(22,6463,-5041,-7790,0,0,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-5951,-2241,8554,0,0,0,0xe0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-10758,-4704,-6663,0,-90,0,0xf0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,8060,-3274,7768,0,90,0,0x100000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(38,-4050,-1961,1586,0,0,0,0x140000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-3906,-1961,1586,0,180,0,0x140000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(137,-2151,-1448,4658,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-11880,-4387,-4617,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,7461,-4453,-9025,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,11641,-3921,-7029,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,12162,-4229,-3312,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,8075,-4229,-4171,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(84,-6131,-2097,7877,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-5260,-2050,7379,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-4582,-1817,5771,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-3284,-1817,5687,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(0,4,4,150,3,0,0,31,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,27,1,12,0),
WARP_NODE(12,27,1,11,0),
WARP_NODE(13,27,1,14,0),
WARP_NODE(14,27,1,13,0),
WARP_NODE(240,27,1,240,0),
WARP_NODE(241,27,1,241,0),
WARP_NODE(15,27,1,16,0),
WARP_NODE(16,27,1,15,0),
WARP_NODE(20,26,1,10,0),
WARP_NODE(33,18,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
