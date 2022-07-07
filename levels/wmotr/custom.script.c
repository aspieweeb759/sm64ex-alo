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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x3721700),
TERRAIN(col_wmotr_1_0xe051d80),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-5351,-1600,-3313,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1183,-2410,-3493,0,-154,0,0x0, bhvKoopaRaceEndpoint,31),
OBJECT_WITH_ACTS(104,-5610,-2410,-2941,0,-153,0,0x2030000, bhvKoopa,31),
OBJECT_WITH_ACTS(188,-9686,-2410,-2775,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-11010,-2410,-1273,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-13011,-2009,3108,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-12885,-1110,6526,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-9810,-210,8370,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-10635,190,11960,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,1045,-2410,-5711,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,-7229,190,12056,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,-3506,-773,7720,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2852,-773,8505,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,5032,-2410,-626,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6236,-1690,-4098,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5958,-2410,-7815,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4408,-2083,4163,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(100,3150,-2009,6691,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,3612,-2009,5249,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,4283,-2009,6899,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1944,-2009,5380,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,521,-2009,6514,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1993,-2009,7479,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,221,-2009,8142,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,742,-1839,5459,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(0,-1452,-3767,4493,0,0,0,0x0, bhvInitializeChangingWaterLevel,31),
OBJECT_WITH_ACTS(195,-13681,1589,7815,0,0,0,0x10000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(212,-9069,-138,3600,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(22,-1382,-2410,-4934,0,0,0,0x160000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-14060,2045,7807,0,0,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-14060,2448,7808,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,16,5,6,0,0,0,12,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,3,0,0,13,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(22,19,1,241,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,27,1,10,0),
WARP_NODE(241,19,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
