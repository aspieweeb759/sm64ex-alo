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
#include "levels/bob/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x15d13f0),
TERRAIN(col_castle_inside_1_0xe034740),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,-980,385,-2110,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-2113,660,465,0,136,0,0x1e140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1001,210,-1440,0,0,0,0x1f0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1418,-438,1361,0,0,0,0x1e290000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1382,0,101,0,180,0,0x330000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-1831,720,96,0,136,0,0x160000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-540,0,-1216,0,132,0,0x220000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-496,0,-1238,0,134,0,0x210000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1384,0,96,0,180,0,0x340000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(22,-2458,-455,-2210,0,0,0,0x490000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-518,-600,1604,0,0,0,0x3b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1630,0,-1397,0,44,0,0x400000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1036,-438,-1180,0,0,0,0x410000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(36,-1900,-453,-1669,0,45,0,0xa000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-1818,720,98,0,136,0,0x170000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-26,-180,-1559,0,318,0,0x71e0000, bhvWarp,31),
OBJECT_WITH_ACTS(31,-890,364,-2600,0,180,0,0x80000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(129,-470,-930,400,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(221,-1275,-455,-1706,0,0,0,0x85000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(144,1651,-120,1180,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1209,-120,1156,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1205,-120,1596,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1639,-120,1601,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(25,-981,-434,-727,0,216,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(31,-1030,364,-2600,0,0,0,0x70000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(129,-470,-930,600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-470,-930,800,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-470,-930,1000,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-470,-930,1200,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-470,-930,1400,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-470,-930,1600,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-1926,-455,-2356,0,314,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(221,8,-453,-1072,0,1,0,0x86000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(212,-110,690,714,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(221,754,-453,726,0,216,0,0x89000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,658,-455,-847,0,0,0,0x8c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2243,-453,-1995,0,46,0,0x4a0000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(20,9,1,10,0),
WARP_NODE(30,24,1,10,0),
WARP_NODE(41,12,1,10,0),
WARP_NODE(31,6,1,31,0),
WARP_NODE(51,6,1,51,0),
WARP_NODE(22,6,1,22,0),
WARP_NODE(23,6,1,23,0),
WARP_NODE(73,17,1,10,0),
WARP_NODE(59,29,1,10,0),
WARP_NODE(64,6,1,64,0),
WARP_NODE(52,6,1,52,0),
WARP_NODE(33,6,1,33,0),
WARP_NODE(34,6,1,34,0),
WARP_NODE(35,6,1,35,0),
WARP_NODE(110,27,1,10,0),
WARP_NODE(65,6,1,65,0),
WARP_NODE(9,31,1,10,0),
WARP_NODE(7,16,1,10,0),
WARP_NODE(8,16,1,10,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
RETURN()
};
