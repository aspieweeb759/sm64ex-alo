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
#include "areas/2/custom.model.inc.h"
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group6_mio0SegmentRomStart,_group6_mio0SegmentRomEnd),
LOAD_RAW(12,_group6_geoSegmentRomStart,_group6_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(53,0x19001400),
// LOAD_MODEL_FROM_GEO(54,0x19001420),
// LOAD_MODEL_FROM_GEO(55,0x19001480),
// LOAD_MODEL_FROM_GEO(56,0x190014c0),
// LOAD_MODEL_FROM_DL(84,0x05000840,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_GEO(133,0x007e0000),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_7),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_wmotr_1_),
JUMP_LINK(local_area_wmotr_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x3721700),
TERRAIN(col_wmotr_1_0xe028e00),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-1698,-15,63,0,90,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-2060,-14,73,0,0,0,0x20010000, bhvWarp,63),
OBJECT_WITH_ACTS(221,77,-17,-362,0,-77,0,0x9d0000, bhvBulletBillCannon,63),
OBJECT_WITH_ACTS(221,1003,-17,-84,0,43,0,0x9e0000, bhvBulletBillCannon,63),
OBJECT_WITH_ACTS(22,1636,-17,48,0,0,0,0x20000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(0,1134,0,553,0,-225,0,0x70000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,1134,0,553,0,-225,0,0xf10000, bhvDeathWarp,63),
OBJECT_WITH_ACTS(0,1127,0,561,0,-45,0,0xf00000, bhvAirborneStarCollectWarp,63),
OBJECT_WITH_ACTS(221,-1222,-17,-1140,0,0,0,0x0, Bhv_Custom_0x13003c3c,63),
OBJECT_WITH_ACTS(56,1252,0,-71,0,180,0,0x20000, bhvCastleFlagWaving,63),
OBJECT_WITH_ACTS(56,1253,0,179,0,180,0,0x40000, bhvCastleFlagWaving,63),
OBJECT_WITH_ACTS(56,1253,0,429,0,180,0,0x1030000, bhvCastleFlagWaving,63),
OBJECT_WITH_ACTS(56,1503,0,429,0,180,0,0x2050000, bhvCastleFlagWaving,63),
OBJECT_WITH_ACTS(56,1753,0,429,0,180,0,0x4060000, bhvCastleFlagWaving,63),
OBJECT_WITH_ACTS(0,-1641,83,-556,0,0,0,0x0, Bhv_Custom_0x13004200,63),
OBJECT_WITH_ACTS(0,1607,148,1072,0,0,0,0x0, Bhv_Custom_0x13004258,63),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(7,9,1,13,0),
WARP_NODE(240,31,1,240,0),
WARP_NODE(241,31,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,16,1,120,0),
WARP_NODE(2,31,2,10,0),
WARP_NODE(3,31,2,11,0),
WARP_NODE(4,31,2,12,0),
WARP_NODE(5,31,2,13,0),
WARP_NODE(6,31,2,14,0),
RETURN()
};
const LevelScript local_area_wmotr_2_[] = {
AREA(2,Geo_wmotr_2_0x3721600),
TERRAIN(col_wmotr_2_0xe07fe50),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_2_),
JUMP_LINK(local_warps_wmotr_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_2_[] = {
OBJECT_WITH_ACTS(0,11252,1009,-11849,0,0,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,11256,1034,-11843,0,0,0,0x10000, Bhv_Custom_0x13003b7c,63),
OBJECT_WITH_ACTS(0,-16618,649,-8049,0,90,0,0xb0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-16618,620,-8049,0,90,0,0x20000, Bhv_Custom_0x13003b7c,63),
OBJECT_WITH_ACTS(0,6794,2732,3672,0,150,0,0xc0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,6794,2732,3672,0,135,0,0x30000, Bhv_Custom_0x13003b7c,63),
OBJECT_WITH_ACTS(0,-8774,3206,9880,0,0,0,0xd0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-8774,3206,9880,0,0,0,0x40000, Bhv_Custom_0x13003b7c,63),
OBJECT_WITH_ACTS(0,-8879,-290,-259,0,16,0,0xe0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-8879,-290,-259,0,16,0,0x50000, Bhv_Custom_0x13003b7c,63),
OBJECT_WITH_ACTS(53,-16612,250,-8035,0,1,0,0x0, bhvPyramidTop,63),
OBJECT_WITH_ACTS(54,6825,-960,3669,0,0,0,0x40000000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(54,7354,-960,3363,0,0,0,0x1010000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(54,6825,-960,3057,0,0,0,0x2020000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(54,6296,-960,3363,0,0,0,0x4030000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(54,6296,-960,3975,0,0,0,0x8040000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(54,6825,-960,4281,0,0,0,0x10050000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(54,7354,-960,3975,0,0,0,0x20060000, Bhv_Custom_0x13003bc8,63),
OBJECT_WITH_ACTS(55,-8827,406,9911,0,0,0,0x0, Bhv_Custom_0x13003be4,63),
OBJECT_WITH_ACTS(85,-9061,1695,7839,0,15,0,0x0, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-10227,1695,8323,0,35,0,0x10000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-10409,1695,8557,0,61,0,0x20000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-10839,1695,9584,0,75,0,0x30000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-10876,1695,10082,0,117,0,0x40000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-10405,1695,11228,0,121,0,0x50000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-10162,1695,11484,0,153,0,0x60000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-9237,1695,11830,0,161,0,0x70000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-8649,1695,11948,0,-171,0,0x80000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-7589,1695,11501,0,-142,0,0x90000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-7149,1695,11021,0,-113,0,0xa0000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-6808,1695,10139,0,-99,0,0xb0000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-6763,1695,9669,0,-60,0,0xc0000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-7165,1695,8741,0,-66,0,0xd0000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-7505,1695,8287,0,-33,0,0xe0000, Bhv_Custom_0x13003c00,63),
OBJECT_WITH_ACTS(85,-8535,1695,7884,0,-16,0,0xf0000, Bhv_Custom_0x13003c00,63),
RETURN()
};
const LevelScript local_warps_wmotr_2_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,31,1,7,0),
WARP_NODE(240,31,1,240,0),
WARP_NODE(241,31,1,241,0),
RETURN()
};
