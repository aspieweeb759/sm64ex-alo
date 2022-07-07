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
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe01ae78),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,0,-1226,-1985,0,0,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,1423,-119,1670,0,0,0,0x50f0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3462,-869,-152,0,0,0,0x5190000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3450,-869,-151,0,0,0,0x5230000, bhvWarp,31),
OBJECT_WITH_ACTS(22,-1420,-449,2021,0,0,0,0x5f0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(35,-2271,-1349,-164,0,90,0,0x5050000, bhvDoor,31),
OBJECT_WITH_ACTS(36,2275,-1349,-162,0,-90,0,0x3030000, bhvDoor,31),
OBJECT_WITH_ACTS(37,74,0,2203,0,180,0,0x24d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-72,0,2203,0,0,0,0x24d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(28,-72,-1349,-2206,0,0,0,0xa0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(28,74,-1349,-2206,0,180,0,0xa0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1497,-449,1448,0,0,0,0xa0a0000, bhvDoor,31),
OBJECT_WITH_ACTS(31,-1353,-449,1448,0,180,0,0xa0a0000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-6,8,719,0,0,0,0x640000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6,8,719,0,0,0,0x6e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-15,-708,-1041,0,0,0,0x780000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-15,-708,-1041,0,0,0,0x820000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(122,339,105,-188,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,-338,105,-189,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,336,554,1013,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,-332,554,1010,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(0,2,113,1892,0,180,0,0x580000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(124,-1253,-449,1699,0,-90,0,0x200000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(221,735,-449,152,0,0,0,0x3f000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,-1646,-1349,-1127,0,45,0,0x400000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1655,-1349,-1111,0,-45,0,0x410000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(116,-375,-749,-454,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,375,-749,-454,0,0,0,0x0, bhvOneCoin,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,16,1,10,0),
WARP_NODE(100,6,1,100,0),
WARP_NODE(110,6,1,110,0),
WARP_NODE(120,6,1,120,0),
WARP_NODE(130,6,1,130,0),
WARP_NODE(240,6,1,100,0),
WARP_NODE(241,6,1,110,0),
WARP_NODE(88,6,1,88,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(15,9,1,10,0),
WARP_NODE(25,24,1,10,0),
WARP_NODE(35,12,1,10,0),
WARP_NODE(95,20,1,10,0),
WARP_NODE(77,26,1,10,0),
RETURN()
};
