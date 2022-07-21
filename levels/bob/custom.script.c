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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom27025408_skybox_mio0SegmentRomStart,_SkyboxCustom27025408_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
// LOAD_MODEL_FROM_DL(29,0x070300a0,4),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(53,0x070118c0,4),
// LOAD_MODEL_FROM_GEO(54,0x19001d00),
// LOAD_MODEL_FROM_GEO(55,0x19001d40),
// LOAD_MODEL_FROM_GEO(56,0x19001d60),
// LOAD_MODEL_FROM_GEO(57,0x19001e00),
// LOAD_MODEL_FROM_GEO(58,0x19001b00),
// LOAD_MODEL_FROM_GEO(59,0x19001e50),
// LOAD_MODEL_FROM_GEO(60,0x19001f40),
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_GEO(133,0x007e0000),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_bob_1_),
JUMP_LINK(local_area_bob_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe0a0560),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-5675,-1396,2244,0,68,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-6927,2683,19573,0,-154,0,0xb0000, bhvUnusedParticleSpawn,63),
OBJECT_WITH_ACTS(100,6327,-2646,-8171,0,-153,0,0x10c0000, Bhv_Custom_0x13000ee4,63),
OBJECT_WITH_ACTS(100,-82,-2648,-12815,0,-28,0,0x2e0000, Bhv_Custom_0x13000ee4,63),
OBJECT_WITH_ACTS(100,-439,-2652,-12882,0,16,0,0xe2b0000, Bhv_Custom_0x13000ee4,63),
OBJECT_WITH_ACTS(87,-5198,-1848,1309,0,275,0,0x0, bhvWigglerHead,63),
OBJECT_WITH_ACTS(87,1620,-2998,-8912,0,0,0,0x0, bhvWigglerHead,63),
OBJECT_WITH_ACTS(87,884,-2998,-6334,0,0,0,0x0, bhvWigglerHead,63),
OBJECT_WITH_ACTS(54,3400,-2473,-11591,0,0,0,0x0, Bhv_Custom_0x13000f60,63),
OBJECT_WITH_ACTS(54,4162,-2624,-5929,0,0,0,0x0, Bhv_Custom_0x13000f60,63),
OBJECT_WITH_ACTS(54,4088,-2595,-4530,0,109,0,0x10000, Bhv_Custom_0x13000f60,63),
OBJECT_WITH_ACTS(54,-516,-2682,-10828,0,0,0,0x0, Bhv_Custom_0x13000f60,63),
OBJECT_WITH_ACTS(54,2650,-2587,-3017,0,0,0,0x0, Bhv_Custom_0x13000f60,63),
OBJECT_WITH_ACTS(55,5574,-2478,-8237,0,0,0,0x0, bhvBitfsSinkingPlatforms,63),
OBJECT_WITH_ACTS(56,-3716,239,-4092,0,0,0,0x0, Bhv_Custom_0x13000fbc,63),
OBJECT_WITH_ACTS(60,4154,-94,-13915,0,251,0,0x70000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(122,6267,605,-12175,0,-57,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(130,8984,-313,-10148,0,20,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(212,8984,-313,-10148,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(0,926,-2998,-7537,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-2803,-3018,7196,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-732,-3018,3837,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-5657,-1781,2242,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(133,5744,-2663,6116,0,0,0,0x0, Bhv_Custom_0x130000c0,63),
OBJECT_WITH_ACTS(0,2172,-1423,533,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(58,-1757,-2758,6852,0,-132,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, Bhv_Custom_0x1300104c,63),
OBJECT_WITH_ACTS(58,-1294,-2758,4648,0,0,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,-3023,437,-2016,0,69,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,-953,-186,12676,0,-199,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,-5042,1135,17156,0,256,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,-6801,1168,17787,0,98,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,-3953,781,16561,0,66,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,-2667,257,15113,0,183,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(122,-7091,1370,18708,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(59,4826,-2649,3600,0,-133,0,0x2a0000, Bhv_Custom_0x13001060,63),
OBJECT_WITH_ACTS(218,-2389,635,12717,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,-327,635,11480,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,-251,635,13617,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,1598,636,12383,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,2298,636,11448,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,2364,636,10706,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,-3651,315,12570,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(218,-3084,-394,13533,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,-2686,-186,11739,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(0,425,-690,-1366,0,-9,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-5240,-2314,9042,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-6001,-1953,10543,0,40,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-3676,-1468,11263,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-749,-897,10022,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(116,609,-2465,8336,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,2016,-2486,9135,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,315,-2627,5452,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,989,-2621,3468,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,2596,-2447,2931,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,5174,-2660,4429,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,4571,-2650,7821,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(60,-1777,515,12381,0,-61,0,0x90000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(60,-1023,515,11957,0,-61,0,0x200000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(60,-244,515,12616,0,1,0,0x560000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(60,548,515,11886,0,-20,0,0x400000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(60,1961,515,11923,0,-32,0,0x300000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(60,626,515,13095,0,40,0,0x220000, bhvCutOutObject,63),
OBJECT_WITH_ACTS(0,1031,-2494,6993,0,-64,0,0xb0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,1820,-2494,6419,0,0,0,0x400b0000, bhvWarp,63),
OBJECT_WITH_ACTS(116,-1340,-2593,-4460,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-3597,-2602,-6854,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-3451,-2591,-8440,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-1705,-2668,-9901,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,325,-2633,-3445,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-2720,-2578,-5557,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,3391,-2813,-7336,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,879,-1938,700,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,425,-1938,603,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-1905,-2839,-8812,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(0,-7058,-2228,7480,0,11,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(58,196,814,12390,0,-138,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,1271,1076,10747,0,-51,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvBetaChestLid,63),
OBJECT_WITH_ACTS(29,1278,-2890,-6580,0,0,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-224,-2890,-6204,0,140,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,870,-2890,-4742,0,-82,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-778,-2890,-7547,0,134,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,2189,-2890,-9948,0,-138,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,2596,-2890,-8306,0,-126,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,303,-2890,-8939,0,266,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-1096,-2890,1846,0,0,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-316,-2890,2513,0,-150,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-282,-2890,3499,0,176,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-1004,-2890,6001,0,-249,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-2663,-2890,5232,0,-209,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-2110,-2890,7678,0,-224,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-3818,-2890,6378,0,-308,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(29,-2426,-2890,3887,0,129,0,0x0, bhvStaticObject,63),
OBJECT_WITH_ACTS(124,-3301,-13,14161,0,147,0,0x310000, bhvMessagePanel,63),
OBJECT_WITH_ACTS(0,735,-2190,7139,0,302,0,0x40000, bhvDeathWarp,63),
OBJECT_WITH_ACTS(60,4395,180,-14415,0,326,0,0x0, bhvCutOutObject,63),
OBJECT_WITH_ACTS(58,3730,0,-14837,0,252,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,2747,0,-14718,0,76,0,0x0, Bhv_Custom_0x13001024,63),
OBJECT_WITH_ACTS(58,3550,0,-14186,0,249,0,0x0, Bhv_Custom_0x13001024,63),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,2,10,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,225,0),
WARP_NODE(241,16,1,209,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,25,1,25,0),
WARP_NODE(153,24,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bob_2_[] = {
AREA(2,Geo_bob_2_0x18e1600),
TERRAIN(col_bob_2_0xe0d3638),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_2_),
JUMP_LINK(local_warps_bob_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_2_[] = {
OBJECT_WITH_ACTS(0,-1097,-95,1041,0,139,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-1710,-125,1907,0,0,0,0x300a0000, bhvWarp,63),
OBJECT_WITH_ACTS(122,113,3258,-911,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(0,704,-79,41,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-1027,740,910,0,50,0,0x0, bhvCoinFormation,63),
RETURN()
};
const LevelScript local_warps_bob_2_[] = {
WARP_NODE(240,16,1,225,0),
WARP_NODE(241,9,1,4,0),
WARP_NODE(10,9,1,11,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
