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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/ttc/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ttcSegmentRomStart, _ttcSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE,     ttc_geo_000240),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM,    ttc_geo_000258),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM,          ttc_geo_000270),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL,   ttc_geo_000288),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL,   ttc_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK,        ttc_geo_0002C8),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON,  ttc_geo_0002E0),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_geo_0002F8),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK,         ttc_geo_000310),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED,  ttc_geo_000328),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_geo_000340),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND,        ttc_geo_000358),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER,           ttc_geo_000370),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR,        ttc_geo_000388),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR,        ttc_geo_0003A0),
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
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x1f21700),
TERRAIN(col_bitfs_1_0xe012608),
SET_BACKGROUND_MUSIC(0,51),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-4159,-4043,-3226,-2,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,-4467,-4068,-2840,0,-175,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-3884,5931,4007,0,-87,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-18,-4945,-3130,0,107,0,0x20000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,138,6833,3760,0,-151,0,0x30000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2963,-3803,-1177,0,0,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,3096,5833,1946,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2508,3866,-2413,0,0,0,0xe0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2656,-1803,2969,0,-91,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4076,-1385,2853,0,0,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4073,3569,-2463,0,0,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4104,3542,-2022,0,-43,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(215,-2458,4635,3421,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(54,-2234,4709,3358,0,0,0,0x0, bhvTTCRotatingSolid,31),
OBJECT_WITH_ACTS(54,2585,-2031,1951,0,0,0,0x0, bhvTTCRotatingSolid,31),
OBJECT_WITH_ACTS(54,2446,3385,-1206,0,0,0,0x0, bhvTTCRotatingSolid,31),
OBJECT_WITH_ACTS(66,244,-1563,2556,0,0,0,0x0, bhvTTCSpinner,31),
OBJECT_WITH_ACTS(66,207,-1458,3434,0,0,0,0x0, bhvTTCSpinner,31),
OBJECT_WITH_ACTS(66,505,3802,-2672,0,0,0,0x0, bhvTTCSpinner,31),
OBJECT_WITH_ACTS(66,527,3802,-2041,0,0,0,0x0, bhvTTCSpinner,31),
OBJECT_WITH_ACTS(68,-380,-1458,2871,0,0,0,0x0, bhvTTC2DRotator,31),
OBJECT_WITH_ACTS(68,63,3802,-2351,0,0,0,0x0, bhvTTC2DRotator,31),
OBJECT_WITH_ACTS(56,-1417,-1563,2470,90,181,0,0x0, bhvTTCPendulum,31),
OBJECT_WITH_ACTS(56,-871,3542,-1238,90,0,0,0x0, bhvTTCPendulum,31),
OBJECT_WITH_ACTS(54,-2479,-1563,2719,0,0,0,0x0, bhvTTCRotatingSolid,31),
OBJECT_WITH_ACTS(54,-2405,3750,-2556,0,0,0,0x0, bhvTTCRotatingSolid,31),
OBJECT_WITH_ACTS(215,2429,-5521,-3020,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3370,-4271,-2181,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1387,-1094,3363,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2644,-1831,1971,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2171,7196,3757,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3117,6979,3055,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1380,3916,-2274,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-4077,4917,2648,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(124,-3690,3596,-2160,0,-203,0,0x270000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,19,1,12,0),
WARP_NODE(12,19,1,11,0),
WARP_NODE(13,19,1,14,0),
WARP_NODE(14,19,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,19,1,1,0),
WARP_NODE(1,19,1,0,0),
WARP_NODE(2,19,1,3,0),
WARP_NODE(3,19,1,2,0),
WARP_NODE(4,19,1,5,0),
WARP_NODE(5,19,1,4,0),
WARP_NODE(6,33,1,10,0),
RETURN()
};
