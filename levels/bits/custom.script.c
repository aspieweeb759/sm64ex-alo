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
#include "levels/bbh/header.h"
const LevelScript level_bits_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x127f880),
TERRAIN(col_bits_1_0xe006fc0),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,3566,1020,4322,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(188,3658,864,766,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3256,488,1958,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,3609,1296,-1839,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,-2846,2064,-3276,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2727,2540,459,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,669,4408,2981,0,0,0,0x380000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,240,4980,2984,0,90,0,0x370000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(220,-3920,2790,-3127,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-2352,2790,3666,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-441,1744,-4489,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(56,34,1,10,0),
WARP_NODE(55,21,1,10,0),
WARP_NODE(240,6,1,120,0),
WARP_NODE(241,9,1,78,0),
RETURN()
};
