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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_pss_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
// LOAD_MODEL_FROM_GEO(248,0x04037348),
// LOAD_MODEL_FROM_GEO(249,0x04038348),
// LOAD_MODEL_FROM_GEO(250,0x04039348),
// LOAD_MODEL_FROM_GEO(251,0x0403a348),
// LOAD_MODEL_FROM_GEO(252,0x0403b348),
// LOAD_MODEL_FROM_GEO(253,0x0403c348),
// LOAD_MODEL_FROM_GEO(254,0x0403d348),
// LOAD_MODEL_FROM_GEO(255,0x0403e348),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x31a1700),
TERRAIN(col_pss_1_0xe021400),
SET_BACKGROUND_MUSIC(0,44),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-174,-6842,12880,0,0,0,0xa0000, bhvSwimmingWarp,31),
OBJECT_WITH_ACTS(22,3980,3526,13242,0,90,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4918,4784,18214,0,135,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-1829,4867,-7924,0,180,0,0xd0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-5435,7288,-7980,0,180,0,0xe0000, bhvWarp,31),
OBJECT_WITH_ACTS(122,3585,3884,-12898,0,0,0,0x14000000, bhvStar,31),
OBJECT_WITH_ACTS(215,2572,-6788,10702,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4680,7227,6682,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8,7227,899,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4101,3583,4179,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,70,-2319,-7821,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1746,849,-11415,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-631,1680,-15023,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2772,4402,7651,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-15,-3934,-7051,0,0,0,0x14000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(105,-84,4112,14149,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(0,282,1146,13174,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(0,-103,-3125,-13289,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,-3639,5113,16922,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(105,590,3627,896,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,908,-595,-14090,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(0,-4090,5448,4363,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-152,1054,13000,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3,-6667,-4010,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2201,3765,-13310,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5420,7806,-7686,0,0,0,0x10000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,5420,7806,-7686,0,0,0,0x20000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-3135,3854,-13131,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(100,3643,4238,-1302,0,0,0,0x0, bhvSwoop,31),
OBJECT_WITH_ACTS(0,1494,5895,4107,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(123,-2531,-971,-10442,0,0,0,0x300000, bhvNoteblock_MOP,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,27,1,10,0),
WARP_NODE(11,27,1,12,0),
WARP_NODE(12,27,1,11,0),
WARP_NODE(13,27,1,14,0),
WARP_NODE(14,27,1,13,0),
WARP_NODE(240,16,1,31,0),
WARP_NODE(241,16,1,32,0),
WARP_NODE(0,28,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
