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
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_sa_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x2801700),
TERRAIN(col_sa_1_0xe005ae0),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,5011,-4759,5756,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-120,2330,-123,0,0,0,0x0, bhvFlipswitch_Panel_StarSpawn_MOP,31),
OBJECT_WITH_ACTS(42,3768,-4798,5736,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,4180,-4384,5692,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,3792,-3950,5743,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-2985,-3605,5693,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(153,2250,-3677,5676,0,90,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,2337,2056,-528,0,10,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(42,-2597,-1042,-2373,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,1535,-1084,-2421,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,3186,831,-2249,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,3909,2042,-985,0,0,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(153,1950,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,1650,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,1350,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,1050,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-550,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-850,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-1750,-3677,5676,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,1816,2056,-429,0,10,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,1275,2056,-334,0,10,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,769,2056,-241,0,10,0,0x0, bhvSandBlock_MOP,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,5,1,18,0),
WARP_NODE(241,5,1,19,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
