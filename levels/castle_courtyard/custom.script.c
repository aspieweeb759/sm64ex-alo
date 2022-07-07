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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe028518),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,150,-2381,78,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(34,-1496,375,-331,0,90,0,0x19190000, bhvDoor,31),
OBJECT_WITH_ACTS(29,2207,-1724,-901,0,0,0,0x14140000, bhvDoor,31),
OBJECT_WITH_ACTS(29,2352,-1724,-900,0,180,0,0x14140000, bhvDoor,31),
OBJECT_WITH_ACTS(38,253,975,2250,0,180,0,0x23230000, bhvDoor,31),
OBJECT_WITH_ACTS(38,101,975,2248,0,0,0,0x23230000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-979,-1068,-335,0,-90,0,0x640000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-979,-1068,-335,0,90,0,0x6e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,182,1056,1006,0,0,0,0x780000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,182,1056,1006,0,180,0,0x820000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(37,259,-2625,293,0,180,0,0x20a0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,108,-2625,294,0,0,0,0x20a0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,168,-1216,-2104,0,0,0,0x2d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,177,-1216,1434,0,0,0,0x370000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2242,854,-327,0,0,0,0x410000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2696,854,-327,0,0,0,0x4b0000, bhvWarp,31),
OBJECT_WITH_ACTS(22,185,975,2820,0,0,0,0x630000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,893,953,532,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,-527,953,534,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,886,953,-1186,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,-529,953,-1187,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,-352,-1145,-861,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,697,-1145,-866,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,-345,-995,335,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(122,696,-995,341,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(221,862,-1724,-255,0,90,0,0x48000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,1438,375,-1740,0,-45,0,0x47000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,-1301,-1724,-321,0,90,0,0x420000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2573,-1724,-44,0,-135,0,0x4b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2580,-824,-3026,0,-45,0,0x440000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-116,375,-3022,0,45,0,0x450000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-121,975,2191,0,180,0,0x460000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-153,975,2324,0,29,0,0x250000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(10,6,1,88,0),
WARP_NODE(100,26,1,100,0),
WARP_NODE(110,26,1,110,0),
WARP_NODE(120,26,1,120,0),
WARP_NODE(130,26,1,130,0),
WARP_NODE(240,26,1,100,0),
WARP_NODE(241,26,1,110,0),
WARP_NODE(45,5,1,10,0),
WARP_NODE(55,4,1,10,0),
WARP_NODE(65,7,1,10,0),
WARP_NODE(75,22,1,10,0),
WARP_NODE(99,19,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
