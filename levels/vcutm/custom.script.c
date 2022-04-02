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
AREA(1,Geo_vcutm_1_0x1e41700),
TERRAIN(col_vcutm_1_0xe008840),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,962,-5,-9216,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,-302,13008,12686,0,-154,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-624,2234,6957,0,43,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(85,-1354,13091,10833,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(101,-313,-521,-4010,0,173,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,885,-521,-4427,0,-184,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-2218,-521,-5996,0,52,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,1354,-521,-6979,0,181,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,2240,-521,-2500,0,-149,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-937,-535,0,0,-182,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,0,-523,7500,0,-175,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-1875,-538,8854,0,-191,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,1979,-523,10313,0,-167,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,3385,-546,11875,0,-164,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,2396,-536,13073,0,-159,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-3438,-543,10885,0,-189,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-3646,-550,13437,0,-187,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,521,1029,14844,0,-120,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,2135,1042,15052,0,-107,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,3333,1018,15260,0,-111,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,5625,2311,10260,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,5677,2327,8299,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-7415,2309,9662,0,-3,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-7344,2319,9115,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-3490,1019,15521,0,-211,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-4219,1019,15260,0,147,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-4094,2292,6927,0,-84,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,1250,2292,7045,0,92,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,2865,2292,6979,0,88,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(101,-5677,2297,6823,0,-90,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(137,3033,373,-1428,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4315,845,170,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,1146,-606,9323,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-843,-368,9877,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-843,155,11727,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-843,663,13333,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(212,5885,-469,6563,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,-52,-180,13906,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-3073,-260,-3438,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2203,-388,-6146,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2969,-606,-260,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(217,-5625,-606,11615,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(144,-5417,-521,11667,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5422,-573,11474,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5565,-519,11779,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5702,-514,11783,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5840,-521,11695,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5840,-538,11526,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5753,-573,11446,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5541,-549,11423,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(215,-5620,-606,11563,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5937,-606,13920,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5833,2332,8594,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7396,2336,9167,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-260,13196,10781,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-624,2540,7425,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(144,-5631,-558,11402,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5430,-558,11545,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5647,-526,11785,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-5825,-546,11575,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(212,-2259,709,-6143,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,18,1,12,0),
WARP_NODE(12,18,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
