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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_totwc_1_),
JUMP_LINK(local_area_totwc_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x1b63950),
TERRAIN(col_totwc_1_0xe007100),
SET_BACKGROUND_MUSIC(0,22),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,2578,6177,877,0,254,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(101,0,6009,0,0,0,0,0x0, bhvBigChillBully,31),
OBJECT_WITH_ACTS(180,447,5652,986,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,922,5652,-439,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-804,5652,673,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-439,5652,-974,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2,5844,672,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,654,5844,16,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-605,5844,1,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-18,5844,-672,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(100,2088,5367,533,0,0,0,0x0, bhvSmallChillBully,31),
OBJECT_WITH_ACTS(100,1589,5367,396,0,0,0,0x0, bhvSmallChillBully,31),
OBJECT_WITH_ACTS(100,-90,5652,1117,0,0,0,0x0, bhvSmallChillBully,31),
OBJECT_WITH_ACTS(100,976,5652,171,0,0,0,0x0, bhvSmallChillBully,31),
OBJECT_WITH_ACTS(100,-1036,5652,-42,0,0,0,0x0, bhvSmallChillBully,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,19,3,52,0),
WARP_NODE(241,19,3,41,0),
RETURN()
};
const LevelScript local_area_totwc_2_[] = {
AREA(2,Geo_totwc_2_0x1b63b30),
TERRAIN(col_totwc_2_0xe004a30),
SET_BACKGROUND_MUSIC(0,22),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_totwc_2_),
JUMP_LINK(local_warps_totwc_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_2_[] = {
OBJECT_WITH_ACTS(0,758,143,-677,0,324,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(84,0,-378,0,0,90,0,0x1010000, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(180,117,-378,1032,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,725,-378,764,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-549,-378,757,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1048,-378,265,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-889,-378,301,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,921,-378,-358,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-802,-378,-229,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,524,-378,-808,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-395,-378,-733,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,96,-378,68,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,96,-378,68,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,96,-378,68,0,80,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,96,-378,68,0,180,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,96,-378,68,0,270,0,0x0, bhvFlamethrower,31),
RETURN()
};
const LevelScript local_warps_totwc_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(240,19,3,42,0),
WARP_NODE(241,19,3,31,0),
RETURN()
};
