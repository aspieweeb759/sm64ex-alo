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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_bbh_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(28, castle_door_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_bbh_1_),
JUMP_LINK(local_area_bbh_2_),
JUMP_LINK(local_area_bbh_3_),
JUMP_LINK(local_area_bbh_4_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x13b68f0),
TERRAIN(col_bbh_1_0xe02f990),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,-845,-3467,-14279,0,178,0,0x200000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-837,-3467,-13789,0,0,0,0x143a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-867,-3467,-14305,0,92,0,0x220000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(22,-11388,216,-1972,0,0,0,0x480000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-490,-1835,-1673,0,0,0,0x1e210000, bhvWarp,31),
OBJECT_WITH_ACTS(0,162,-1835,-1672,0,0,0,0x1e210000, bhvWarp,31),
OBJECT_WITH_ACTS(220,9235,-2610,-7522,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,7791,-2580,-4713,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,7263,-2940,-7016,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(223,-3380,-1835,-1315,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(208,-11199,206,-597,0,179,0,0x14000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-11364,205,-594,0,359,0,0x14000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(122,-555,-2637,7582,0,171,0,0x1000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,-157,-1835,-932,0,180,0,0x4c0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(221,2524,-1835,1444,0,0,0,0x3f000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,4989,-3388,-13614,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,4437,-3388,2620,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,6414,-3388,-3818,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3534,-1685,-1052,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-845,-3467,-14279,0,178,0,0x760000, bhvSpinAirborneCircleWarp,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(32,4,1,0,0),
WARP_NODE(58,7,3,59,0),
WARP_NODE(34,4,1,0,0),
WARP_NODE(72,4,3,67,0),
WARP_NODE(33,4,2,65,0),
WARP_NODE(76,4,1,0,0),
WARP_NODE(10,4,1,0,0),
WARP_NODE(118,4,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,4,1,34,0),
RETURN()
};
const LevelScript local_area_bbh_2_[] = {
AREA(2,Geo_bbh_2_0x13b6ad0),
TERRAIN(col_bbh_2_0xe012480),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_2_),
JUMP_LINK(local_warps_bbh_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_2_[] = {
OBJECT_WITH_ACTS(0,-6786,3108,14619,0,181,0,0x410000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-6825,-17312,15160,0,0,0,0xa0000, bhvStarDoor,31),
OBJECT_WITH_ACTS(221,-6735,2898,10330,0,338,0,0x40000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,-8152,-3330,10844,0,0,0,0xc8420000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6686,2998,15892,0,0,0,0x1e4b0000, bhvWarp,31),
RETURN()
};
const LevelScript local_warps_bbh_2_[] = {
WARP_NODE(65,9,2,0,0),
WARP_NODE(66,4,4,44,0),
WARP_NODE(75,4,1,76,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,4,1,34,0),
RETURN()
};
const LevelScript local_area_bbh_3_[] = {
AREA(3,Geo_bbh_3_0x13b6cb0),
TERRAIN(col_bbh_3_0xe025e10),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_3_),
JUMP_LINK(local_warps_bbh_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_3_[] = {
OBJECT_WITH_ACTS(22,-15798,9198,21421,0,165,0,0x430000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,5131,9753,19484,0,0,0,0x1e440000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2772,9198,19795,0,276,0,0x470000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,30,5,2010,0,0,20,0, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,30,5,286,0,0,20,1, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,30,5,210,0,0,20,2, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bbh_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(67,4,1,72,0),
WARP_NODE(68,34,1,69,0),
WARP_NODE(71,4,3,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,4,1,34,0),
RETURN()
};
const LevelScript local_area_bbh_4_[] = {
AREA(4,Geo_bbh_4_0x13b6e90),
TERRAIN(col_bbh_4_0xe003ae0),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_4_),
JUMP_LINK(local_warps_bbh_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_4_[] = {
OBJECT_WITH_ACTS(0,3893,0,-3898,0,321,0,0x2c0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(221,1280,65,-1049,0,84,0,0x0, bhvToadMessage,31),
OBJECT_WITH_ACTS(22,1107,40,-1900,0,0,0,0x2d0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,1586,0,-1451,0,0,0,0x2e0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(122,946,365,-1358,0,132,0,0x0, bhvNoExitStar,31),
RETURN()
};
const LevelScript local_warps_bbh_4_[] = {
WARP_NODE(44,9,4,0,0),
WARP_NODE(46,4,4,0,0),
WARP_NODE(45,6,1,100,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,4,4,46,0),
RETURN()
};
