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
#include "levels/ssl/header.h"
extern u8 _ssl_segment_ESegmentRomStart[]; 
extern u8 _ssl_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ssl_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ssl_segment_ESegmentRomStart, _ssl_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_ssl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ssl_1_[] = {
AREA(1,Geo_ssl_1_0x151fb20),
TERRAIN(col_ssl_1_0xe03bca0),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ssl_1_),
JUMP_LINK(local_warps_ssl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ssl_1_[] = {
OBJECT_WITH_ACTS(0,708,0,-1130,0,181,0,0x170000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(24,-3841,-1502,-10958,0,120,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,5125,333,-16654,0,142,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,4447,365,-18225,0,142,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,8249,368,-12731,0,105,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,9879,334,-13271,0,142,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,8491,373,-11118,0,142,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,3778,336,-16887,0,142,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(122,5692,1204,-6217,0,93,0,0x0, bhvNoExitStar,31),
OBJECT_WITH_ACTS(122,7786,-2468,369,0,32,0,0x1000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,10050,1326,-19414,0,52,0,0x32180000, bhvWarp,31),
OBJECT_WITH_ACTS(0,772,0,-1213,0,289,0,0x190000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,743,0,-571,0,0,0,0x1e320000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9040,1326,-18052,0,324,0,0x390000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,3799,660,-16872,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(137,1914,-3227,-8952,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-2479,551,-3459,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,224,780,-402,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1302,181,-3753,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5920,-488,-5105,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1005,-1387,-7069,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5132,-1310,-9940,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4588,-621,-7560,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2630,-323,-7114,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,5624,62,-6182,0,0,0,0x2000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(137,6596,-2498,871,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,2877,-3183,-8603,0,32,0,0x3000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(122,-4643,-560,-10371,0,125,0,0x4000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(120,-2343,20,-12994,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(221,4700,296,-14750,0,0,0,0x34000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(192,-1046,11,-3351,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,2957,-1680,-11077,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,2825,1500,-15353,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,708,0,-1130,0,181,0,0x740000, bhvSpinAirborneCircleWarp,31),
RETURN()
};
const LevelScript local_warps_ssl_1_[] = {
WARP_NODE(23,12,1,22,0),
WARP_NODE(24,7,1,29,0),
WARP_NODE(25,8,1,0,0),
WARP_NODE(50,12,1,51,0),
WARP_NODE(57,8,1,0,0),
WARP_NODE(116,8,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,8,1,25,0),
RETURN()
};
