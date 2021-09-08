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
#include "levels/lll/header.h"
extern u8 _lll_segment_ESegmentRomStart[]; 
extern u8 _lll_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_lll_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_lll_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x21c1700),
TERRAIN(col_lll_1_0xe010478),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,2734,-452,-4583,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-2252,-527,-4323,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(86,-184,3007,3052,0,-153,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(0,-1740,-452,-4358,0,107,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,931,-452,-4333,0,-151,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(194,295,2740,3904,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-110,2740,3867,-5,0,6,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-516,2740,3830,1,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(55,58,1802,4904,0,0,0,0x20000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(122,-4091,677,29,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1774,-208,225,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,66,-333,-2194,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,51,-452,-2093,0,0,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(215,-3109,1802,3074,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,551,1802,2765,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4122,156,733,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4222,-452,-3329,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-365,1094,3143,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1826,521,2323,-1,0,-4,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-562,-452,-2261,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3287,-452,-1546,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-1198,-192,-2860,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,693,-156,883,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,823,-208,883,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,690,-365,883,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(122,494,-208,883,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-2918,-452,-2337,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2385,-452,148,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-49,-452,592,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1251,-452,543,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2300,-452,-2217,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,712,-452,-1622,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,2234,1802,2813,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2295,1802,3735,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1836,1802,2179,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3452,1802,2425,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(194,-3096,1802,3075,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,646,1802,3407,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,-831,1802,2473,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(118,1053,-187,-2327,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1,199,-2358,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1111,162,-2241,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3527,0,-2126,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2477,-452,-2136,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2495,-237,-1223,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(223,1277,1802,3111,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(140,1705,-452,-1888,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(124,1226,-452,-3694,0,-222,0,0x1e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(100,-3962,-452,-3663,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4084,-452,-3990,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4123,-452,-4623,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(0,1537,-452,-1671,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3078,-452,-2104,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-685,-452,-2952,0,-91,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2203,-452,-657,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3801,-273,-271,37,-90,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,22,1,12,0),
WARP_NODE(12,22,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
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
