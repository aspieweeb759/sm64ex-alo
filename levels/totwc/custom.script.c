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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(248,0x04037348),
// LOAD_MODEL_FROM_GEO(249,0x04038348),
// LOAD_MODEL_FROM_GEO(250,0x04039348),
// LOAD_MODEL_FROM_GEO(251,0x0403a348),
// LOAD_MODEL_FROM_GEO(252,0x0403b348),
// LOAD_MODEL_FROM_GEO(253,0x0403c348),
// LOAD_MODEL_FROM_GEO(254,0x0403d348),
// LOAD_MODEL_FROM_GEO(255,0x0403e348),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x3461700),
TERRAIN(col_totwc_1_0xe0285d0),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-7797,5936,-3032,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(215,-2994,5101,-3106,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2944,5101,2430,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-559,5101,2340,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1147,5101,-2611,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,7337,2355,4343,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6477,5669,-3022,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1774,5179,-6801,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-160,5101,-8360,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7919,5101,-8445,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7806,5101,-4046,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(123,-9114,5417,-5261,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-2178,5207,-862,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,7808,5269,361,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,2144,5292,872,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,5680,983,4357,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(123,-11220,-1499,4785,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(85,8170,5049,-3052,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(242,8304,6315,-6400,0,0,0,0x10000, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(241,4100,5468,-192,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,4118,5891,-710,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,4088,6331,-312,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(122,-12088,-7286,5986,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-5001,5543,-3022,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3711,5410,2019,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6271,5410,-1609,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1181,5600,-3215,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1887,5600,-5128,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(212,4263,6937,-346,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,101,0),
WARP_NODE(241,16,1,101,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
