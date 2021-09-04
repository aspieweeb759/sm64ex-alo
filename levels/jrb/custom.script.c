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
#include "areas/3/custom.model.inc.h"
#include "areas/4/custom.model.inc.h"
#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_jrb_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_jrb_1_),
JUMP_LINK(local_area_jrb_2_),
JUMP_LINK(local_area_jrb_3_),
JUMP_LINK(local_area_jrb_4_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_jrb_1_[] = {
AREA(1,Geo_jrb_1_0x1d01700),
TERRAIN(col_jrb_1_0xe024020),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(0,-149,-6686,9136,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-154,-7224,73,0,0,0,0x0, bhvWarp,31),
OBJECT_WITH_ACTS(0,-148,-5443,81,0,0,0,0x10000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-145,1719,-9500,0,0,0,0x20000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-172,-5588,2758,0,0,0,0x0, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(86,-228,7936,-849,0,0,0,0x0, bhvKingBobomb,1),
OBJECT_WITH_ACTS(122,-179,-3362,7810,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(104,-147,1750,-7782,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(0,-151,1844,-6813,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-187,1811,-3490,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,913,7180,-683,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-151,-5317,5995,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-142,-7054,2150,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-172,2009,-4604,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,-147,-8260,1286,0,0,0,0x10000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(123,285,-7264,904,0,0,0,0x640000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-151,-5824,5333,0,0,0,0x820000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(0,-888,-7264,7816,0,0,0,0x110000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(10,12,1,10,0),
WARP_NODE(0,12,2,0,0),
WARP_NODE(1,12,2,1,0),
WARP_NODE(2,12,2,5,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
WARP_NODE(240,24,1,1,0),
WARP_NODE(241,24,1,2,0),
RETURN()
};
const LevelScript local_area_jrb_2_[] = {
AREA(2,Geo_jrb_2_0x1d018f0),
TERRAIN(col_jrb_2_0xe053b50),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_2_),
JUMP_LINK(local_warps_jrb_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_2_[] = {
OBJECT_WITH_ACTS(104,450,-8136,6057,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(0,536,-8229,12960,0,180,0,0x0, bhvWarp,31),
OBJECT_WITH_ACTS(22,260,-8306,-4060,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,2,-7317,-13013,0,0,0,0x20000, bhvWarp,31),
OBJECT_WITH_ACTS(0,302,-2841,-737,0,180,0,0x30000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3,1698,-9102,0,180,0,0x40000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7,6155,-9193,0,180,0,0x50000, bhvWarp,31),
OBJECT_WITH_ACTS(123,-900,-3844,-12123,0,0,0,0x3a0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-914,-2860,-12395,0,0,0,0x3a0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(122,-1248,-726,-12328,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(123,-946,-1670,-12112,0,0,0,0x3a0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(215,-514,-5568,-1907,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-516,-7405,-4369,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,490,-8234,1540,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-264,-5100,-9899,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,901,-2288,-11858,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-224,-7969,-1585,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,221,-8197,11695,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1098,-8227,4253,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,576,-6455,12976,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(120,-868,-4014,-11662,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(220,595,-7806,7624,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(103,242,-8278,190,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(223,299,-8223,-1052,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,487,-8193,10069,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,399,-7324,-10696,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,255,-7945,-4080,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-926,-3387,-12268,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,91,4018,-12283,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(123,432,-8233,-2263,0,0,0,0xe60000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(146,-488,-5615,-7015,-45,180,0,0x143c0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(0,919,-1332,-12368,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,931,1036,-12278,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-248,-2500,-3370,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,896,-7664,-9195,0,0,0,0x110000, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_jrb_2_[] = {
WARP_NODE(10,12,2,10,0),
WARP_NODE(0,12,1,0,0),
WARP_NODE(1,12,1,1,0),
WARP_NODE(2,12,3,0,0),
WARP_NODE(3,12,4,0,0),
WARP_NODE(4,12,4,1,0),
WARP_NODE(5,12,1,2,0),
WARP_NODE(6,9,1,10,0),
WARP_NODE(240,24,1,1,0),
WARP_NODE(241,24,1,2,0),
RETURN()
};
const LevelScript local_area_jrb_3_[] = {
AREA(3,Geo_jrb_3_0x1d019f0),
TERRAIN(col_jrb_3_0xe080cb0),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_3_),
JUMP_LINK(local_warps_jrb_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_3_[] = {
OBJECT_WITH_ACTS(0,1023,-1363,-4749,0,180,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-5,-1432,6291,0,180,0,0x0, bhvWarp,31),
OBJECT_WITH_ACTS(0,-19,-1366,-2845,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,-576,-938,5518,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-493,-1028,-553,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,595,-1140,-3457,0,-90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-250,-1197,-6148,0,90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,351,-1201,-4090,0,-135,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,1315,-1485,-6275,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(129,1247,-1501,-6211,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(0,-70,-1255,-4816,0,135,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-4,-1406,4302,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(104,0,-1406,0,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(0,7,-1354,4214,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(120,-493,-1272,-571,0,0,0,0x0, bhvRecoveryHeart,31),
RETURN()
};
const LevelScript local_warps_jrb_3_[] = {
WARP_NODE(10,12,3,10,0),
WARP_NODE(0,12,2,2,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
WARP_NODE(240,24,1,1,0),
WARP_NODE(241,24,1,2,0),
RETURN()
};
const LevelScript local_area_jrb_4_[] = {
AREA(4,Geo_jrb_4_0x1d01af0),
TERRAIN(col_jrb_4_0xe0ae8d8),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_4_),
JUMP_LINK(local_warps_jrb_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_4_[] = {
OBJECT_WITH_ACTS(0,0,4096,0,0,0,0,0xa0000, bhvIntroScene,31),
OBJECT_WITH_ACTS(0,203,-3700,678,0,0,0,0x0, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4,830,-7832,0,0,0,0x10000, bhvWarp,31),
OBJECT_WITH_ACTS(123,-29,-3021,3056,0,0,0,0x3c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,27,-1927,3343,0,0,0,0x3c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-51,-900,3074,0,0,0,0x3c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-70,156,3374,0,0,0,0x140000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(0,-1116,-997,5041,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-479,1555,7199,0,0,2,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-313,913,5603,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-575,2581,-7134,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,638,259,-5623,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,15,2964,-2398,0,0,0,0x4000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(116,-1116,-997,5041,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-479,1555,7199,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-313,913,5603,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-575,2581,-7134,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,638,259,-5623,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(123,152,620,-5650,0,0,0,0x3c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,149,1567,-5343,0,0,0,0x3c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(120,-39,803,-4344,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,-779,-3090,2987,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-422,-2865,4527,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,643,-3685,2461,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-7,846,6431,0,0,0,0x0, bhvGoombaTripletSpawner,159),
OBJECT_WITH_ACTS(220,-20,1118,2506,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,0,861,0,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(103,-24,816,-2232,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(220,-31,1420,-2643,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,23,2646,-2370,0,90,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_jrb_4_[] = {
WARP_NODE(10,12,1,10,0),
WARP_NODE(0,12,2,3,0),
WARP_NODE(1,12,2,4,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
WARP_NODE(240,24,1,1,0),
WARP_NODE(241,24,1,2,0),
RETURN()
};
