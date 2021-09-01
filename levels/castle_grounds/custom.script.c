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
#include "levels/bbh/header.h"
const LevelScript level_castle_grounds_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,147,-727,-395),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x158bf20),
TERRAIN(col_castle_grounds_1_0xe0528a0),
SET_BACKGROUND_MUSIC(0,10),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,-3248,635,9739,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(25,1206,-793,1289,0,0,0,0x1e0000, bhvTree,31),
OBJECT_WITH_ACTS(116,-1951,635,6167,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(31,-3172,635,10458,0,177,0,0x10000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(34,2000,1022,3200,0,180,0,0x32000000, bhvDoor,31),
OBJECT_WITH_ACTS(37,180,-706,600,0,181,0,0x2030000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(34,-1271,1001,710,0,32,0,0x32000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-2239,-626,2788,0,144,0,0x32000000, bhvDoor,31),
OBJECT_WITH_ACTS(31,-3315,635,10452,0,358,0,0x20000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-3243,660,9690,0,0,0,0xb0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(25,-573,-733,2209,0,0,0,0x1e0000, bhvTree,31),
OBJECT_WITH_ACTS(25,-2695,650,9217,0,0,0,0x1e0000, bhvTree,31),
OBJECT_WITH_ACTS(212,1372,0,4038,0,336,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,1037,-751,796,0,207,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(37,28,-706,600,0,0,0,0x2040000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(124,853,-823,1094,0,207,0,0x7a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,-1413,182,6029,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,105,-420,217,0,0,0,0x2b0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,107,-390,199,0,0,0,0x2c0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(124,-823,1014,9278,0,180,0,0x600000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2178,-1110,1816,0,0,0,0xde0000, bhvSwimmingWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,12,1,10,0),
WARP_NODE(40,6,1,10,0),
WARP_NODE(3,5,1,10,0),
WARP_NODE(4,5,1,10,0),
WARP_NODE(1,6,1,10,0),
WARP_NODE(2,6,1,10,0),
WARP_NODE(43,16,1,43,0),
WARP_NODE(44,16,1,44,0),
WARP_NODE(251,24,1,10,0),
WARP_NODE(222,33,1,10,0),
WARP_NODE(240,16,1,43,0),
WARP_NODE(241,16,1,44,0),
RETURN()
};
