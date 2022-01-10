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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x1556ea0),
TERRAIN(col_castle_inside_1_0xe013220),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,2199,65,2225,0,156,0,0x640000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,1528,0,476,0,0,0,0x6c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,566,0,1513,0,0,0,0x6b0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,506,0,2938,0,0,0,0x6a0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1518,0,3864,0,0,0,0x690000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2977,0,3900,0,0,0,0x680000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,3891,0,2902,0,0,0,0x670000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,3925,0,1516,0,0,0,0x660000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2928,0,501,0,0,0,0x650000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(120,1883,60,1344,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,1341,60,2617,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,2670,60,3122,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,3190,60,1911,0,0,0,0x0, bhvRecoveryHeart,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(100,6,1,100,0),
WARP_NODE(101,24,1,111,0),
WARP_NODE(102,22,1,112,0),
WARP_NODE(103,5,1,113,0),
WARP_NODE(104,9,1,114,0),
WARP_NODE(105,12,1,115,0),
WARP_NODE(106,8,1,116,0),
WARP_NODE(107,7,1,117,0),
WARP_NODE(108,4,1,118,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
RETURN()
};
