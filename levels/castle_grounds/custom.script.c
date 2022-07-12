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
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
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
MARIO_POS(1,135,9756,-269,-4534),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe070db8),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,9721,-304,-4527,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,990,-1819,-2826,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,12921,-580,-2249,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(188,-1756,-2580,2134,0,107,0,0x9e0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(100,3568,-1800,8526,0,180,0,0x0, bhvMips,31),
OBJECT_WITH_ACTS(221,3626,-1800,1491,0,180,0,0x81000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,10397,-1800,3170,0,137,0,0x82000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,603,-1800,-503,0,133,0,0x83000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-2099,-2580,4049,0,-35,0,0x32000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(195,-2268,-2580,3470,0,0,0,0x330000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(195,-4250,-1900,6327,0,230,0,0x340000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,10114,-1120,-5060,0,-48,0,0x9f0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-1896,-2580,3088,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(212,2290,407,4600,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,4971,407,4600,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,3629,407,4600,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-4187,-1767,-156,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4650,-1767,4836,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6606,-623,-7459,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2091,-1667,-5444,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,7353,-1667,-2260,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,11500,-1667,-904,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,12399,-1667,2658,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,3534,-1800,6646,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,3629,-1101,915,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3629,-1101,915,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(84,8097,19,-4686,0,0,0,0x0, bhvBird,31),
OBJECT_WITH_ACTS(84,-3805,-760,-1308,0,0,0,0x0, bhvBird,31),
OBJECT_WITH_ACTS(84,2121,-660,-4093,0,0,0,0x0, bhvBird,31),
OBJECT_WITH_ACTS(187,3640,-1641,-1561,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,1208,-1641,-8663,0,0,0,0x0, bhvTripletButterfly,31),
OBJECT_WITH_ACTS(187,4727,-1641,-3829,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,11340,-1641,-1100,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,13818,-1161,2132,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,9101,-973,-7398,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-5463,-1741,1612,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4905,-1641,6310,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4768,-1641,8375,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,2186,-1641,8628,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,2057,-1641,6242,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,3399,-1641,9552,0,0,0,0x0, bhvTripletButterfly,31),
OBJECT_WITH_ACTS(0,3659,-1609,-1575,0,0,0,0x0, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(0,-368,-3082,3040,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,3674,-3082,358,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,8621,-3082,5107,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,8401,-3082,1210,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,-1332,-3582,-3434,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,-6797,-3582,-6914,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,-10824,-3582,-4105,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,10801,-2149,6171,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,9653,-2149,6808,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,8275,-2149,7507,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(142,10627,-2600,6135,0,0,0,0x0, bhvWaterMist2,31),
OBJECT_WITH_ACTS(142,10053,-2600,6454,0,0,0,0x0, bhvWaterMist2,31),
OBJECT_WITH_ACTS(142,9402,-2600,6793,0,0,0,0x0, bhvWaterMist2,31),
OBJECT_WITH_ACTS(142,8795,-2600,7135,0,0,0,0x0, bhvWaterMist2,31),
OBJECT_WITH_ACTS(142,8218,-2600,7449,0,0,0,0x0, bhvWaterMist2,31),
OBJECT_WITH_ACTS(137,2618,2063,3349,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,3620,1800,3641,0,0,0,0x640000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-561,-12543,744,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-4333,-3563,-5432,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-13382,-3563,-7282,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-13411,-3563,-2143,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-2227,-3563,-7603,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,4653,1967,3359,0,0,0,0x8d0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(22,2431,-2784,-9524,0,0,0,0x4d0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,32,5,9,3,0,0,33,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(141,16,1,141,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(56,9,1,10,0),
WARP_NODE(77,8,1,10,0),
WARP_NODE(100,20,1,10,0),
RETURN()
};