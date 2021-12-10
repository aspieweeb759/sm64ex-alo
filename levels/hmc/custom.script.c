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
#include "areas/5/custom.model.inc.h"
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
const LevelScript level_hmc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom19523056_skybox_mio0SegmentRomStart,_SkyboxCustom19523056_skybox_mio0SegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
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
JUMP_LINK(local_area_hmc_1_),
JUMP_LINK(local_area_hmc_2_),
JUMP_LINK(local_area_hmc_3_),
JUMP_LINK(local_area_hmc_4_),
JUMP_LINK(local_area_hmc_5_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x12c3730),
TERRAIN(col_hmc_1_0xe01de70),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,2273,1126,614,0,292,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(206,-598,480,1459,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(101,433,0,1461,0,346,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,135,0,1070,0,14,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-1792,0,1325,0,344,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(32,-9678,0,17640,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(32,-8999,0,18316,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(32,-10359,0,18317,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(85,-15739,839,15193,0,90,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(122,-16167,1020,15192,0,0,0,0x0, bhvStar,1),
OBJECT_WITH_ACTS(22,-11280,0,18317,0,90,0,0x190000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(32,-21799,0,15200,0,90,0,0x30000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(22,-7956,0,18316,0,90,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-15020,840,15179,0,0,0,0x50000, bhvWarpPipe,32),
OBJECT_WITH_ACTS(192,-6171,160,6125,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-6002,160,5514,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-4774,307,6490,0,247,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,-3519,160,7189,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(101,-5188,280,10039,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-5395,280,9791,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-5167,520,11654,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-4812,520,11439,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(0,-3300,560,12960,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3300,560,12960,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-8132,710,15255,0,25,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9602,280,15363,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9678,0,18316,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,-11526,680,14683,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-9472,560,13747,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-12817,760,15845,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-15020,840,15179,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-15020,840,15179,0,0,0,0x0, bhvGoombaTripletSpawner,30),
OBJECT_WITH_ACTS(0,-5436,680,16007,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,-5133,680,14236,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-9701,0,17006,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(124,-9678,0,18866,0,180,0,0x580000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,60,5,13,0,0,20,0, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(16,7,2,15,0),
WARP_NODE(25,7,2,10,0),
WARP_NODE(3,7,3,5,0),
WARP_NODE(4,7,4,10,0),
WARP_NODE(5,7,5,1,0),
WARP_NODE(6,9,1,10,0),
WARP_NODE(240,16,1,10,0),
WARP_NODE(241,16,1,20,0),
RETURN()
};
const LevelScript local_area_hmc_2_[] = {
AREA(2,Geo_hmc_2_0x12c3910),
TERRAIN(col_hmc_2_0xe004860),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_2_),
JUMP_LINK(local_warps_hmc_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_2_[] = {
OBJECT_WITH_ACTS(0,2200,-20,0,0,270,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,2500,-20,4,0,270,0,0xf0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,-2600,-256,0,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,0,-1600,0,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1323,-1940,-2,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5159,-1940,1290,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3898,-1940,-1288,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3246,-1940,3197,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-67,-1940,3168,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-61,-1940,-3194,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6415,-1940,-3167,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6445,-1940,3161,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,480,300,0,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1323,-1600,-2,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3246,-1600,3197,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6415,-1600,-3167,0,0,0,0x10000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_hmc_2_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(15,7,1,25,0),
WARP_NODE(240,16,1,10,0),
WARP_NODE(241,16,1,20,0),
RETURN()
};
const LevelScript local_area_hmc_3_[] = {
AREA(3,Geo_hmc_3_0x12c3af0),
TERRAIN(col_hmc_3_0xe00cc80),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_3_),
JUMP_LINK(local_warps_hmc_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_3_[] = {
OBJECT_WITH_ACTS(0,7455,-181,-4959,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(32,7730,-181,-4977,0,90,0,0x50000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(137,6700,170,-4700,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,3280,210,7512,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-2149,170,-4977,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3748,170,4309,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-4692,-201,-5936,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,5,4,239,0,0,20,1, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_hmc_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(5,7,1,3,0),
WARP_NODE(240,16,1,10,0),
WARP_NODE(241,16,1,20,0),
RETURN()
};
const LevelScript local_area_hmc_4_[] = {
AREA(4,Geo_hmc_4_0x12c3cd0),
TERRAIN(col_hmc_4_0xe01dd20),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_4_),
JUMP_LINK(local_warps_hmc_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_4_[] = {
OBJECT_WITH_ACTS(0,-3290,0,-8024,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,-3608,72,-8040,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,764,-938,7577,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(124,764,-1208,7400,0,180,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2092,0,-9948,0,0,0,0x40000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1294,0,-5139,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(100,1150,658,-184,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(192,643,72,2168,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,878,72,2065,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,905,72,4724,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,618,72,4497,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,740,72,4243,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(100,1376,658,402,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(0,2397,0,-5422,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5,4,484,0,0,20,2, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,5,5,630,0,1,20,3, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_hmc_4_[] = {
WARP_NODE(10,9,4,0,0),
WARP_NODE(1,7,1,4,0),
WARP_NODE(240,16,1,10,0),
WARP_NODE(241,16,1,20,0),
RETURN()
};
const LevelScript local_area_hmc_5_[] = {
AREA(5,Geo_hmc_5_0x12c3eb0),
TERRAIN(col_hmc_5_0xe006100),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_5_),
JUMP_LINK(local_warps_hmc_5_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_5_[] = {
OBJECT_WITH_ACTS(0,-25,-192,5548,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,-21,-192,5852,0,180,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,-46,168,-7397,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(195,-46,-192,-7000,0,0,0,0x3e0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(192,246,-192,2549,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,355,-192,2204,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-309,-192,-1946,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-464,-192,-2566,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-385,-192,-2229,0,0,0,0x10000, bhvGoomba,31),
RETURN()
};
const LevelScript local_warps_hmc_5_[] = {
WARP_NODE(10,9,5,0,0),
WARP_NODE(1,7,1,5,0),
WARP_NODE(240,16,1,10,0),
WARP_NODE(241,16,1,20,0),
RETURN()
};
