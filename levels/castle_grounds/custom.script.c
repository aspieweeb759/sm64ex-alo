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
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
const LevelScript level_castle_grounds_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
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
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,959,-3159,-5152),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe03ea68),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,1932,-1667,473,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(38,1855,-1995,697,0,0,0,0x4d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,2003,-1995,697,0,-180,0,0x4d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(221,474,-3794,-4618,0,127,0,0x0, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-5509,-2475,-1440,0,29,0,0x4d000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(215,-5186,-2441,-897,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3678,-3134,-3086,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-905,-1354,3210,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1344,-3089,-3253,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,217,-4360,-4632,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4284,-4242,-1604,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4782,-1399,1722,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1557,-1591,6906,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,1633,-1638,530,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(217,-461,-4342,-7433,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-299,-4498,-7300,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-581,-4613,-7345,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(195,-522,-4395,-7130,0,0,0,0x3d0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,-1707,-4395,-5580,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-3880,-4395,-2841,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3344,-3628,-5438,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4676,-2330,299,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4774,-1870,5215,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,221,-1969,5671,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(122,-2853,-2078,2518,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(122,1800,-1476,-962,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(221,2304,-1995,597,0,224,0,0x3c000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-1750,-4395,-3316,0,146,0,0x3e000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,-144,404,2485,0,90,0,0x240000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(122,-1348,-4008,-3072,0,0,0,0x6000000, bhvStar,31),
OBJECT_WITH_ACTS(217,-1351,-4698,-3059,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-1348,-4316,-3061,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,1945,-1562,-116,0,0,0,0xf00000, bhvSpinAirborneWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,16,1,10,0),
WARP_NODE(77,6,1,10,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
