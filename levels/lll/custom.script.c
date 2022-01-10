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
#include "areas/3/custom.model.inc.h"
#include "levels/lll/header.h"
extern u8 _lll_segment_ESegmentRomStart[]; 
extern u8 _lll_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_lll_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom21675184_skybox_mio0SegmentRomStart,_SkyboxCustom21675184_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(local_area_lll_1_),
JUMP_LINK(local_area_lll_2_),
JUMP_LINK(local_area_lll_3_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x14d0df0),
TERRAIN(col_lll_1_0xe010410),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,529,100,-1870,0,-90,0,0x1a0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1037,376,-6167,0,1,0,0x1b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-25,0,1022,0,0,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,-26,0,-5034,0,0,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,560,100,-1856,0,178,0,0x1c0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,1142,0,-1843,0,0,0,0xa3c0000, bhvWarp,31),
OBJECT_WITH_ACTS(124,444,100,835,0,180,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-456,100,-4663,0,0,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,529,100,-1870,0,-90,0,0x700000, bhvAirborneWarp,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(60,24,1,61,0),
WARP_NODE(26,22,1,26,0),
WARP_NODE(27,22,2,38,0),
WARP_NODE(28,22,1,0,0),
WARP_NODE(0,22,1,0,0),
WARP_NODE(112,22,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,22,1,28,0),
RETURN()
};
const LevelScript local_area_lll_2_[] = {
AREA(2,Geo_lll_2_0x14d0fd0),
TERRAIN(col_lll_2_0xe01de20),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_2_),
JUMP_LINK(local_warps_lll_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_2_[] = {
OBJECT_WITH_ACTS(0,-96,900,-828,0,180,0,0x260000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,258,734,-89,0,0,0,0xa270000, bhvWarp,31),
OBJECT_WITH_ACTS(0,246,722,-274,0,0,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,-409,1553,-4641,0,0,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(202,-874,1080,-805,0,90,0,0x0, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(215,1387,738,-1488,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1596,738,-997,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1333,1204,-3591,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1935,938,-2151,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1618,1471,-4048,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2207,1648,-3382,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-587,1754,-791,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2224,1802,-914,0,4,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,2239,2280,-1279,0,0,0,0x0, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,-74,1800,-4659,0,0,0,0x1000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(124,-482,1471,-4231,0,0,0,0x80000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_lll_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(38,22,2,38,0),
WARP_NODE(39,22,3,41,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,22,1,28,0),
RETURN()
};
const LevelScript local_area_lll_3_[] = {
AREA(3,Geo_lll_3_0x14d11b0),
TERRAIN(col_lll_3_0xe01bff0),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_3_),
JUMP_LINK(local_warps_lll_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_3_[] = {
OBJECT_WITH_ACTS(0,-44,240,-4600,0,0,0,0x290000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,11,120,1153,0,0,0,0xa2a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1015,0,-1856,0,90,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,-4306,0,-3700,0,90,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,21,107,665,0,0,0,0x350000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(122,-3703,280,-3683,0,92,0,0x3000000, bhvNoExitStar,31),
RETURN()
};
const LevelScript local_warps_lll_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(41,22,3,41,0),
WARP_NODE(42,5,1,14,0),
WARP_NODE(53,22,3,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,22,1,28,0),
RETURN()
};
