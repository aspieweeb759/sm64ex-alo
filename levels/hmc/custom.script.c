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
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_hmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_hmc_1_),
JUMP_LINK(local_area_hmc_2_),
JUMP_LINK(local_area_hmc_3_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x1453d00),
TERRAIN(col_hmc_1_0xe0298c0),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(22,6129,1762,-3289,0,10,0,0x1e0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,9344,1326,-1052,0,144,0,0x1d0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(144,7139,1896,-2985,0,327,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,7288,1896,-2885,0,327,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,7437,1896,-2785,0,327,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,7716,1896,-2560,0,327,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,7572,1896,-2659,0,327,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(137,8917,2332,-4113,0,327,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13721,600,-3363,0,327,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,13782,473,-3945,0,234,0,0x1000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(38,8845,1768,-2825,0,54,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(0,8615,1326,-1467,0,211,0,0x1f0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,8846,1380,-330,0,143,0,0x1e380000, bhvWarp,31),
OBJECT_WITH_ACTS(122,10729,2152,-1336,0,233,0,0x0, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,9344,1326,-1052,0,144,0,0x750000, bhvAirborneWarp,31),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(29,8,1,0,0),
WARP_NODE(30,7,2,35,0),
WARP_NODE(31,7,1,0,0),
WARP_NODE(56,8,1,57,0),
WARP_NODE(117,7,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,7,1,31,0),
RETURN()
};
const LevelScript local_area_hmc_2_[] = {
AREA(2,Geo_hmc_2_0x1453ee0),
TERRAIN(col_hmc_2_0xe0301a0),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_2_),
JUMP_LINK(local_warps_hmc_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_2_[] = {
OBJECT_WITH_ACTS(22,5693,1406,1136,0,142,0,0x230000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,6259,2632,-1887,0,179,0,0x2000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(145,9193,3180,-9911,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,10504,3180,-10215,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(122,6033,6270,-6875,0,231,0,0x3000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,925,4315,-4806,0,324,0,0x3c240000, bhvWarp,31),
OBJECT_WITH_ACTS(0,6158,1406,569,0,143,0,0x250000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,1827,4315,-3782,0,205,0,0x370000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(120,11577,2987,-4752,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,9690,2740,-11930,0,0,0,0x5510000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,9529,2660,-11237,0,156,0,0x500000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(192,9976,1766,-4087,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,5679,4315,-7839,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,9591,3480,-6809,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,9528,2660,-11206,0,165,0,0x550000, bhvSpinAirborneCircleWarp,31),
RETURN()
};
const LevelScript local_warps_hmc_2_[] = {
WARP_NODE(81,23,1,82,0),
WARP_NODE(36,7,3,47,0),
WARP_NODE(37,7,2,0,0),
WARP_NODE(55,7,2,54,0),
WARP_NODE(0,7,2,0,0),
WARP_NODE(80,7,2,0,0),
WARP_NODE(35,7,1,30,0),
WARP_NODE(85,7,2,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,7,2,37,0),
RETURN()
};
const LevelScript local_area_hmc_3_[] = {
AREA(3,Geo_hmc_3_0x14540c0),
TERRAIN(col_hmc_3_0xe029e50),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_3_),
JUMP_LINK(local_warps_hmc_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_3_[] = {
OBJECT_WITH_ACTS(0,-44,-959,-492,0,152,0,0x2f0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,14,-659,-4780,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,1584,-2730,-4162,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6522,-3506,-3729,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7431,-2932,-5520,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,10381,-2106,-2954,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4293,-2703,-536,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,12268,-2932,-1947,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7584,-4080,-3005,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4127,-2932,-1910,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-393,-3660,-3029,0,270,0,0x4000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(85,9142,-959,-351,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,13507,-659,-5494,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-137,-959,407,0,0,0,0x19360000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-33,-959,-505,0,138,0,0x310000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,16448,-544,-2947,0,89,0,0xa300000, bhvWarp,31),
OBJECT_WITH_ACTS(0,15718,-726,-2947,0,180,0,0x3b0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(221,11043,-2932,-307,0,0,0,0x3e000000, bhvToadMessage,31),
RETURN()
};
const LevelScript local_warps_hmc_3_[] = {
WARP_NODE(47,7,2,36,0),
WARP_NODE(49,7,3,0,0),
WARP_NODE(54,7,2,55,0),
WARP_NODE(48,4,1,32,0),
WARP_NODE(59,7,3,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,49,0),
RETURN()
};
