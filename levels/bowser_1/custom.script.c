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
#include "levels/bowser_1/header.h"
extern u8 _bowser_1_segment_ESegmentRomStart[]; 
extern u8 _bowser_1_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bowser_1_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_1_segment_ESegmentRomStart, _bowser_1_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(248,0x04037348),
// LOAD_MODEL_FROM_GEO(249,0x04038348),
// LOAD_MODEL_FROM_GEO(250,0x04039348),
// LOAD_MODEL_FROM_GEO(251,0x0403a348),
// LOAD_MODEL_FROM_GEO(252,0x0403b348),
// LOAD_MODEL_FROM_GEO(253,0x0403c348),
// LOAD_MODEL_FROM_GEO(254,0x0403d348),
// LOAD_MODEL_FROM_GEO(255,0x0403e348),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_1_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_1_1_[] = {
AREA(1,Geo_bowser_1_1_0x35c0000),
TERRAIN(col_bowser_1_1_0xe00e380),
SET_BACKGROUND_MUSIC(0,53),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,2981,763,-2961,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,3213,-287,-6121,0,-154,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-2206,-390,-6708,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,859,249,-1980,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,270,1350,-3904,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,3810,120,-1231,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(103,1867,5370,-3004,0,0,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(116,-2220,-390,-6726,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(116,3252,-240,-6113,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(116,3815,106,-1222,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(116,277,1307,-3906,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(116,865,239,-1981,0,0,0,0x0, bhvYellowCoin,31),
OBJECT_WITH_ACTS(0,2762,477,-2681,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(153,-671,-477,-5766,0,330,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-1502,-583,-6271,0,330,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(47,905,751,-4069,0,101,0,0x0, bhvFlipswap_Platform_MOP,31),
OBJECT_WITH_ACTS(240,3541,-169,-4916,0,0,0,0x0, bhvFlipBlock_MOP,31),
OBJECT_WITH_ACTS(120,5737,90,-1051,0,0,0,0x0, bhvRecoveryHeart,31),
RETURN()
};
const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,111,0),
WARP_NODE(241,17,1,14,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
