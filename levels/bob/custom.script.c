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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x1258830),
TERRAIN(col_bob_1_0xe021760),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,7703,11133,-7914,0,162,0,0x150000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,7236,10984,-11930,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,9268,12354,-12347,0,347,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(120,10324,8314,-8545,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(215,10098,8371,-6403,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7132,9136,-6822,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8145,7983,-9266,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5254,11125,-10937,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,11164,11009,-10251,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,12021,10665,-6352,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6687,9808,-6022,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6329,9913,-9031,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(192,7031,10665,-11165,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(122,4006,13340,-9983,0,0,0,0x1000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(122,9503,12664,-5830,0,79,0,0x2000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(137,8081,16883,-13849,0,27,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,2837,18542,-13920,0,3,0,0x3000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(120,12842,16461,-17452,0,115,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(122,9055,15956,-7952,0,283,0,0x4000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(120,7289,15251,-13553,0,115,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,4862,14629,-6200,0,115,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(24,5482,14599,-6050,0,129,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(22,14267,18387,-21109,0,55,0,0xc0b0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,12500,18946,-19593,0,285,0,0x5000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(221,8430,7983,-9291,0,320,0,0x2b000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,6166,10699,-13321,0,3,0,0x2e000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(85,7982,8855,-4830,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,8378,7983,-9048,0,79,0,0x120000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(188,14025,13565,-9223,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(192,3980,15683,-13550,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,7909,7983,-9040,0,0,0,0x720000, bhvAirborneWarp,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(11,12,1,12,0),
WARP_NODE(21,9,1,0,0),
WARP_NODE(18,9,1,0,0),
WARP_NODE(114,9,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,9,1,18,0),
RETURN()
};
