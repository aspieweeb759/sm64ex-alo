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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom20212976_skybox_mio0SegmentRomStart,_SkyboxCustom20212976_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
JUMP_LINK(local_area_bob_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x136be30),
TERRAIN(col_bob_1_0xe0c4600),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-752,1100,8174,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(137,6018,-1044,705,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-8791,-1390,761,0,0,0,0x25000000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7233,-855,847,0,180,0,0x1010000, bhvSwimmingWarp,31),
OBJECT_WITH_ACTS(59,6266,-710,-7861,0,0,0,0x0, bhvMerryGoRound,31),
OBJECT_WITH_ACTS(215,6979,426,-3170,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9339,-1214,-3210,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5726,-1411,2850,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6934,-173,-1835,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,10208,-220,-747,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,10191,-220,290,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9879,-1411,2857,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,8320,-130,2862,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,4856,-1216,3809,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,2561,1050,10277,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1335,3510,-8387,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,6285,-264,-7841,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-2805,1641,-4256,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(201,-4677,234,-1378,0,58,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-2904,-197,-1914,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(217,265,614,-8402,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,2198,2605,-8399,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-1383,0,3661,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2174,0,-755,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(104,-2070,0,1008,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,344,0,2590,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(0,541,-246,-3717,0,335,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4397,-1876,-549,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4439,-1876,2325,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,3579,-1808,1745,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4685,-1876,787,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-3245,-197,-3602,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1312,99,-8285,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,319,-34,-7380,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,1645,-246,-5885,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-396,-246,-2347,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(223,-43,-178,-4206,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,2689,-34,-7852,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,869,907,-9096,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,783,0,-62,0,0,0,0x40000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(223,2804,340,4677,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(188,3395,549,5367,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2309,590,6334,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2309,590,6334,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,661,-24,7798,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(84,1698,730,8307,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(0,-713,-246,6293,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7653,-454,-545,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-4529,-481,-2479,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(118,206,163,-9428,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,789,331,-9536,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1528,163,-9502,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(140,-1239,-34,-8550,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(129,3174,-34,-8673,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(220,5590,-1249,566,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,2310,-246,861,0,259,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,5934,-1249,1447,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(118,-870,-34,-8902,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,213,383,-9429,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,803,553,-9542,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1512,408,-9495,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-375,-34,-9081,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(212,2199,2730,-8468,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-10,4,22,0,0,20,6, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(0,9,2,10,128),
WARP_NODE(1,9,1,0,0),
WARP_NODE(240,16,1,4,0),
WARP_NODE(241,16,1,5,0),
RETURN()
};
const LevelScript local_area_bob_2_[] = {
AREA(2,Geo_bob_2_0x136c010),
TERRAIN(col_bob_2_0xe0120a0),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_2_),
JUMP_LINK(local_warps_bob_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_2_[] = {
OBJECT_WITH_ACTS(0,-58,690,-159,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(121,-97,1386,-3814,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,-4244,1024,3986,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,4732,523,-7583,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,2903,171,-1520,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,-4389,722,-3762,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(217,2905,0,-1185,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,-84,374,-747,0,0,0,0x5000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(188,805,0,-712,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-962,0,-759,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4882,0,714,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3831,0,3540,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-4211,697,2398,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-3801,212,526,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-3001,-59,-5008,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,2914,0,-419,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,2971,0,-5919,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,2810,0,-5128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,2810,0,-5128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,2810,0,-5128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,746,0,-2975,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-1192,0,-2961,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-169,381,-1936,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1050,774,-3795,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,730,774,-3810,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(84,-26,1919,-3873,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(207,2498,0,-6159,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,3821,0,-6486,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,3962,0,-6486,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4096,0,-6481,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4247,0,-6494,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4415,0,-6502,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4410,0,-6655,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4389,147,-6832,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-4,93,1251,0,0,0,0x25010000, bhvWarp,31),
OBJECT_WITH_ACTS(137,-4107,615,3973,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,3541,30,-2024,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_bob_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(1,9,1,1,0),
WARP_NODE(240,16,1,4,0),
WARP_NODE(241,16,1,5,0),
RETURN()
};
