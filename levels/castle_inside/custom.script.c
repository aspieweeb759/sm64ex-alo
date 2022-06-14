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
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-3049,-1584,2489),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe00eef0),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,-1358,-1157,-382,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(37,1190,-1450,-126,0,90,0,0x0, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-545,-1126,1267,0,180,0,0x50000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-562,-2725,3074,0,107,0,0x30000, bhvWarp,31),
OBJECT_WITH_ACTS(0,181,-362,-341,0,-151,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-33,-2,5957,0,16,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,107,-2,5919,0,195,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,2485,-287,2066,0,84,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,2496,-287,1909,0,264,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,3350,-287,1852,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-3826,-287,-1123,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,3216,-287,-4248,0,269,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,3214,-287,-4091,0,89,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,3834,-287,-4085,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,3653,1512,-3805,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-2651,-287,-5005,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(34,1176,-1450,-612,0,271,0,0xa000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-2252,-287,-4517,0,214,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,367,1482,-6346,0,270,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-494,390,-2620,0,0,0,0xd0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-523,-1270,-2021,0,91,0,0x20000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-523,-1270,-2021,0,91,0,0x10000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-190,-1060,-524,0,180,0,0x40000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-550,-1120,1263,0,180,0,0x30000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,2571,0,-4011,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,2571,0,-4006,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-2384,0,-4183,0,36,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-2384,0,-4183,0,36,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,660,2520,-6325,0,270,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,660,2520,-6325,0,270,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-316,1287,6397,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-769,-2081,-5975,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-858,-2081,-5300,0,22,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-714,-2081,-5354,0,200,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-3287,-362,-2961,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-626,-362,-4550,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-1988,-362,3819,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,1256,-362,4577,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,1826,-362,-1787,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-1478,-362,5132,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-3564,-362,1049,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,-3818,-150,-1130,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,3366,-120,1860,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,4,4,48,9,0,0,0, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,22,1,10,0),
WARP_NODE(12,19,1,10,0),
WARP_NODE(13,9,1,10,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,27,1,3,0),
WARP_NODE(241,6,1,4,0),
WARP_NODE(0,16,1,11,0),
WARP_NODE(1,6,1,2,0),
WARP_NODE(2,6,1,1,0),
WARP_NODE(3,31,1,10,0),
WARP_NODE(4,5,1,10,0),
WARP_NODE(5,4,1,10,0),
WARP_NODE(6,7,1,10,0),
RETURN()
};
