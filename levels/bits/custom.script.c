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
#include "levels/bits/header.h"
extern u8 _bits_segment_ESegmentRomStart[]; 
extern u8 _bits_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bits_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x2961700),
TERRAIN(col_bits_1_0xe073c28),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,-8339,-1829,7101,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,2654,-1586,-7994,0,0,0,0x0, bhvKoopaRaceEndpoint,31),
OBJECT_WITH_ACTS(104,-7485,-2413,7429,0,0,0,0x1020000, bhvKoopa,31),
OBJECT_WITH_ACTS(122,807,-911,-1786,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,-4109,-1813,2956,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,-7246,-2413,9029,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,-9240,-2413,6965,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,1267,-911,-5375,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,5473,-1586,-7963,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,6441,-1478,-1011,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,9496,-1586,-3503,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,3405,-1197,5420,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,-130,26,4687,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,-2869,-384,6498,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,540,-1162,3050,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,5085,394,-4514,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,-4170,862,5783,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,-1747,862,1284,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,-2222,862,3058,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,76,328,5377,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,-4498,-1920,4941,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-235,-593,6717,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,1509,-782,-3886,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,5322,-1118,-3082,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,4961,-1457,-8670,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,5928,-1457,-7324,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-1953,340,2255,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,116,-782,-999,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,2582,-782,-1047,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,8607,-1457,-4747,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-1424,490,-1607,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-4252,340,7626,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-1977,-19,5002,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4156,-236,-4627,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2630,-911,-3027,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(22,3223,-1586,-8721,0,0,0,0xf10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,769,665,3968,0,-90,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,3210,-1586,-8532,0,0,0,0x190000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,64,5,18,12,0,0,23,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,64,4,18,12,0,0,24,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,23,1,241,0),
WARP_NODE(33,34,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
