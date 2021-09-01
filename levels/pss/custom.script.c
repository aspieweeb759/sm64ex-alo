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
#include "levels/bits/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitsSegmentRomStart, _bitsSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x1512bf0),
TERRAIN(col_pss_1_0xe025d90),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-1861,-4661,924,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(55,-1238,-4260,-584,0,90,0,0x50000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(0,-2250,5305,-1212,0,340,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,-1871,-4661,713,0,0,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(84,1119,-3466,-1246,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(194,1028,-3376,-917,0,92,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(84,-126,-3436,-1221,0,0,0,0x0, bhvBulletBill,31),
OBJECT_WITH_ACTS(55,598,-1710,-1008,0,180,0,0x40000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(57,-1721,-150,930,0,0,0,0x0, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(61,-2068,5730,-912,0,208,0,0x0, bhvFerrisWheelAxle,31),
OBJECT_WITH_ACTS(57,-3351,90,1469,0,0,0,0x0, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(57,-4143,420,178,0,0,0,0x0, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(22,-1802,6374,-492,0,0,0,0x780000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(61,3336,-2220,583,0,225,0,0x0, bhvFerrisWheelAxle,31),
OBJECT_WITH_ACTS(62,581,3030,358,0,90,0,0x320000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(62,-550,3690,-2272,0,0,0,0x320000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(88,546,3207,-1656,0,89,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(55,-2059,3870,-953,0,300,0,0x20000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(55,197,3240,-2324,0,180,0,0xa0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(55,-2059,4800,-953,0,300,0,0x20000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(207,-3314,416,1493,0,1,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(65,-2337,710,271,0,0,0,0x0, bhvAnimatesOnFloorSwitchPress,31),
OBJECT_WITH_ACTS(116,2734,-1800,-86,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(120,468,-3540,-874,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(206,-3780,810,-107,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(116,-2727,1170,25,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2118,1710,29,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(137,2488,-2580,729,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(116,603,-831,-1132,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(120,-1845,-3,-159,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-3292,690,1499,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,560,3330,-732,0,0,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2107,4380,-1208,0,30,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,2740,-1745,-248,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1651,-1685,-1122,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1895,-1685,-1133,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(212,510,-2220,-1609,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(55,-2236,4350,-576,0,0,0,0x30000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(206,-4113,775,130,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(116,2829,-1775,259,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3430,-2405,479,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3310,-2075,627,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3352,-2615,708,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3099,-2454,754,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1171,-1415,-1003,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-2006,6480,-785,0,30,0,0x420000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-2533,3750,-2334,0,272,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(120,-1860,-4620,925,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(116,-1926,-4290,-71,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-1242,-3930,-374,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(206,19,-600,-1369,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(0,-1713,120,967,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(217,-3297,570,-26,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-3312,570,280,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-80,2561,1617,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(217,-1334,1980,336,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(137,1907,-2940,1370,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,60,5,118,0,0,20,11, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(120,20,1,10,0),
WARP_NODE(66,27,1,66,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,31,1,67,0),
RETURN()
};