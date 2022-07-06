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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x2541700),
TERRAIN(col_vcutm_1_0xe008fb0),
SET_BACKGROUND_MUSIC(0,50),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,4893,764,0,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(103,0,-2099,0,0,90,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(122,-3,-1995,-2240,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,1941,-1995,-1112,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,1930,-1995,1131,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-1929,-1995,-1142,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-1930,-1995,1064,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,23,-1995,2203,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,241,-2004,-8,0,90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,112,-2004,-202,0,150,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-123,-2004,210,0,-30,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-253,-2004,-5,0,-90,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,-148,-2004,-215,0,-150,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,122,-2004,209,0,30,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,0,-1919,0,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-1238,-1835,700,0,118,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,-5,-1835,1414,0,0,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,1284,-1835,693,0,53,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,1332,-1835,-751,0,116,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,-1247,-1835,-746,0,-128,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,8,-1835,-1427,0,178,0,0x10000, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(122,-2260,-2078,-109,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,-1062,-2078,2018,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,1133,-2078,-1990,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,2259,-2078,-51,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,1092,-2078,1975,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,-1110,-2078,-2003,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(122,0,-2344,0,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,0,-1988,0,0,0,0,0x0, bhvHomingAmp,31),
// OBJECT_WITH_ACTS(0,16,5,6,255,0,0,13,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,9,0,0,14,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,3,0,0,15,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,12,0,0,16,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,190,0),
WARP_NODE(241,15,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
