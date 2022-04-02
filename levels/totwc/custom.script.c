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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom42565312_skybox_mio0SegmentRomStart,_SkyboxCustom42565312_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x27e1700),
TERRAIN(col_totwc_1_0xe007728),
SET_BACKGROUND_MUSIC(0,11),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,1666,3315,-937,0,-227,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(85,4792,1850,-5309,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(212,1771,2931,4062,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(22,781,1306,1719,0,0,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-5729,-7596,-677,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,1719,3125,3385,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,3594,1850,-6094,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5052,1850,-5573,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5990,1850,-7188,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4948,3542,-52,0,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1563,3498,2188,0,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5313,3177,3542,0,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,4271,2292,-5313,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5625,2188,-7865,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-840,4823,-560,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(215,990,-52,-1458,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3281,-208,1719,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,156,1562,1719,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,729,1771,1250,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,990,0,-833,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-5401,3854,6161,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-5417,3698,6354,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-8229,156,2865,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-7552,313,2760,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,156,-7292,-833,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3906,2031,-7396,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1563,3698,2188,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,521,-7596,625,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2188,-7596,677,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2500,-7596,-1771,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,0,-7596,-1979,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-838,-7209,31,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,1042,-7240,-1146,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(220,6094,2083,-6198,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-5208,3594,6094,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-1250,3750,2240,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(217,6977,1925,-4287,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,29,1,12,0),
WARP_NODE(12,29,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
