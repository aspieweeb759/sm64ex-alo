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
#include "levels/wdw/header.h"
extern u8 _wdw_segment_ESegmentRomStart[]; 
extern u8 _wdw_segment_ESegmentRomEnd[];
#include "levels/lll/header.h"
const LevelScript level_wdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
LOAD_RAW(0x0E, _wdw_segment_ESegmentRomStart, _wdw_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom26050240_skybox_mio0SegmentRomStart,_SkyboxCustom26050240_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wdw_1_[] = {
AREA(1,Geo_wdw_1_0x1821700),
TERRAIN(col_wdw_1_0xe03e920),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wdw_1_),
JUMP_LINK(local_warps_wdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_1_[] = {
OBJECT_WITH_ACTS(0,2038,484,2537,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-3580,11976,10967,0,0,0,0xb0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,-1914,-349,13123,0,-183,0,0xc0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(86,-3285,563,-883,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,-5536,563,29,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,-7396,329,-3803,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(0,-9843,329,-6146,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(86,-11354,1421,-899,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,-12448,1682,-1614,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,-13270,2600,-3542,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,-12864,3257,-6093,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(137,-380,529,-6949,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,-5104,-538,-1354,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-4271,-538,469,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(144,-9792,-580,-3906,0,0,0,0x0, bhvFlame,63),
OBJECT_WITH_ACTS(0,-10312,-1615,-6979,0,0,0,0x130000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(217,-1511,34,-18385,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(217,-2031,34,-20283,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(86,-3490,339,-20398,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,5066,274,-7852,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(121,-10507,4544,-3765,0,145,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(121,-1379,4467,-31827,0,0,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(137,469,577,-24479,0,0,0,0x70000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,-13259,584,-5417,0,-30,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(140,-8854,329,-5782,0,0,0,0x0, bhvBlueCoinSwitch,63),
OBJECT_WITH_ACTS(118,-7446,329,-4314,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-7998,507,-2344,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-8768,730,-1285,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(86,-1641,274,-9185,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(0,-209,339,-20104,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2292,339,-23386,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-156,339,-23750,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1200,1879,-24132,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(86,2916,274,-6667,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,625,274,-5834,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,1041,274,-8234,0,102,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(121,10292,3735,-19891,0,-90,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(215,-1945,680,2854,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,6305,435,-1645,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-11671,3516,-5535,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-2708,428,-10431,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3489,519,-20305,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,5260,1051,-21323,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,6554,428,6695,0,0,2,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-10838,519,-6195,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(86,-2453,339,-17098,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,-1489,274,-11638,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(217,-2794,34,-21664,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(137,539,692,-20049,0,0,0,0x10000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(120,-751,432,-19414,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(121,-8744,4560,-12877,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(86,-892,408,13525,0,182,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(0,888,739,13321,0,0,0,0x5000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(212,10313,4632,-20959,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(137,-9837,4360,-4584,0,-27,0,0x0, bhvExclamationBox,8),
OBJECT_WITH_ACTS(0,-11983,1826,-1167,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(0,343,408,12137,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,2341,408,13507,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,888,408,13321,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-893,408,13521,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,868,408,14390,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(212,134,539,14340,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(137,-471,680,14369,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(120,-1510,468,12604,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(0,2344,536,13490,0,0,0,0x0, bhvBouncingFireball,63),
OBJECT_WITH_ACTS(86,291,408,12137,0,0,0,0x0, bhvSmallBully,63),
OBJECT_WITH_ACTS(86,844,408,14398,0,0,0,0x0, bhvSmallBully,63),
RETURN()
};
const LevelScript local_warps_wdw_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,11,1,12,0),
WARP_NODE(12,11,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
