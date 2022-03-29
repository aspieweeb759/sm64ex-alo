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
#include "levels/thi/header.h"
const LevelScript level_bits_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _thiSegmentRomStart, _thiSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE,     bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,   thi_geo_0005F0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE,       warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_18),
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
TERRAIN(col_bits_1_0xe0368b8),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,8131,-3726,8304,0,179,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0x50000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0x60000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(215,9358,-2446,5353,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7754,-1885,-2086,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,612,-1521,-10207,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1952,-2336,9637,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9649,-47,9302,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-674,155,-1985,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7088,-2247,-4840,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3659,2684,-7092,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-4871,2958,-7756,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(22,-4997,2649,-6709,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-4916,3334,-7366,0,0,0,0xc0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,6908,-3304,6532,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(180,8214,-1771,2427,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(89,-7269,1310,-2740,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(223,-729,-335,-1979,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,8356,-1377,-199,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,9081,-2770,7092,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,8743,-662,-2441,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,8823,-662,-3651,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(137,9133,-2136,-10169,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,8830,-1752,-4992,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(89,8893,-2501,-8086,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(223,4807,-1562,-9966,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,8190,-1971,6005,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(206,-484,-865,9324,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6167,-1694,-9961,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-5104,-729,8958,0,39,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(0,-4498,-822,8328,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9155,-1173,8945,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(89,-9321,-582,9071,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(206,-9439,-1038,4506,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(180,-3186,-518,1570,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4996,-424,3828,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-8589,-1434,5447,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(206,-5679,1198,-2170,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(220,-8513,-1510,8436,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-8925,1901,-4866,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(220,-8833,2981,-6837,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-6784,2695,-7381,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-7455,2708,-7420,0,-270,0,0x40000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5143,2487,-8572,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-8766,1568,-2556,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,9458,-1320,-4570,0,0,0,0x0, bhvChuckya,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,34,1,10,0),
WARP_NODE(12,21,1,12,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,14,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
