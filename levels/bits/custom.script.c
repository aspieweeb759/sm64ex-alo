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
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-3049,-1584,2489),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x2961700),
TERRAIN(col_bits_1_0xe065e50),
SET_BACKGROUND_MUSIC(0,44),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,-5460,-2102,-9635,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,22445,-323,-16503,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,27711,900,-2612,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(215,1778,-449,4838,0,107,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4991,-289,-11492,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(201,3139,-957,-10104,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(122,3171,113,-4817,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,3164,-387,-14825,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(215,4614,-2959,-17491,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7649,-952,-10671,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(85,10989,-1377,-14621,0,0,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,3141,1074,-12139,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,9242,-2270,-1965,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,11278,3087,8415,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,27087,-861,-18489,0,0,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,21166,-1350,-17461,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,22484,157,-16490,0,0,0,0x7080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,22457,-323,-16519,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,3950,-2499,9994,0,0,0,0x2080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,14999,-867,7655,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,16103,1020,-9781,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-9104,-1012,-13639,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(195,1331,-2413,10006,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(215,152,-2501,-10203,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,31691,-1122,-3817,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2105,-1500,9658,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4493,-1077,3908,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,14013,-420,-15084,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,12801,-837,-17090,0,0,0,0x20000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,21,1,12,0),
WARP_NODE(12,21,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,3,0),
WARP_NODE(241,16,1,4,0),
WARP_NODE(0,21,1,1,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
