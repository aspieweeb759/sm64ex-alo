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
#include "levels/castle_grounds/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
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
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe057130),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-13306,505,9866,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-5339,-148,9813,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,2886,-1538,-10842,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,15682,-209,5294,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-10421,48,-5837,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6260,2520,8307,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(201,-6264,2590,8303,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-4441,-1937,-5686,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(0,-11975,-1253,-1014,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-11534,-287,6715,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,7816,-1787,-6999,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,5859,-2537,8930,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,11661,-37,-381,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(137,-2821,-1517,-5070,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10811,482,394,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,7797,-1825,-6982,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(188,-5514,-2687,722,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,7258,-1696,-6655,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4696,-1687,-2219,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-9484,-1187,-589,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-12719,-187,4501,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6474,2512,9700,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4056,-2437,8874,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10487,-1437,8908,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,15479,-437,695,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3515,-1937,-5686,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,1616,562,9840,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-10786,-187,11323,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,-3344,-2670,3474,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8125,2579,9550,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3204,-2420,5135,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-15208,79,12118,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9876,-2057,4113,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,14236,-176,239,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6714,-2420,7836,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6236,1329,-8804,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5327,704,7512,0,39,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,-13593,-187,6842,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-13346,-187,11756,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-11792,-1187,557,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4454,-2687,2600,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,8296,-1937,9307,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3950,1389,-11969,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,1842,-2437,715,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4299,-1187,-10099,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,13611,-1187,6440,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,15155,-1187,4337,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,-876,-2687,2111,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-9029,1312,-7389,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,-10127,1408,-6309,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6743,1408,-8205,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,700,-2341,1543,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8755,1408,-10367,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2839,-1956,-1269,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4262,-1207,-7653,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1893,-2341,6750,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5598,96,7409,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(191,13941,-1187,3209,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(191,2884,562,10899,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(191,-8967,-1576,890,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(118,-8665,4012,10103,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8665,4012,10103,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8665,4012,10103,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8665,4012,10103,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8665,4012,10103,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8662,4012,8983,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8662,4012,8983,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8662,4012,8983,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8662,4012,8983,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7577,4012,9006,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7577,4012,9006,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7577,4012,9006,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7577,4012,9006,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7574,4012,10087,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7574,4012,10087,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7574,4012,10087,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(140,-8120,3937,9559,0,0,0,0x0, bhvBlueCoinSwitch,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,51,0),
WARP_NODE(241,26,1,110,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
