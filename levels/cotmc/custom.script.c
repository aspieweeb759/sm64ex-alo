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
#include "levels/cotmc/header.h"
extern u8 _cotmc_segment_ESegmentRomStart[]; 
extern u8 _cotmc_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_cotmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x2701700),
TERRAIN(col_cotmc_1_0xe01e888),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,-521,1392,573,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-771,2162,8780,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2513,-3725,-28647,0,-180,0,0xc0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,3424,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(206,-573,818,6094,0,-177,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(85,2741,-3730,-15962,0,0,0,0x10000, bhvCapSwitch,63),
OBJECT_WITH_ACTS(0,260,683,7500,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-990,683,7656,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2552,683,8906,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-5417,683,9896,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,4688,683,7917,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,7396,683,8698,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(206,2708,816,6563,0,-85,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(0,-5521,683,5156,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(206,2344,-3613,-3125,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(0,3958,-3730,-4271,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,9688,-3730,-3281,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,625,-3730,-4010,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(206,2708,-3598,-7292,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(206,1927,-3613,-19896,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(0,1250,683,5208,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(215,-7395,1511,5338,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-2564,733,4858,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,1615,886,9010,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2329,1015,7292,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-8378,740,11454,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2515,-3448,-26719,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-1354,-4167,-26354,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,5781,-3710,-26667,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(137,2083,-3425,-27292,0,0,0,0x10000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,2708,-3199,-16458,0,0,0,0x0, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(217,2279,-4019,-24760,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(217,2516,-4032,-28637,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(212,8385,813,8798,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(137,-1510,1042,8542,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,4235,-1305,2598,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,16042,-3433,-7552,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(220,2292,-3542,-24844,0,90,0,0x10000, bhvFlyGuy,63),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,28,1,12,0),
WARP_NODE(12,28,1,11,0),
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
