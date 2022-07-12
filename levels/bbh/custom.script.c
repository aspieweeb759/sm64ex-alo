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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_bbh_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x1201700),
TERRAIN(col_bbh_1_0xe03ab40),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(22,-9834,-285,-260,0,0,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,1228,4154,756,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4915,3743,2900,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-9756,1839,-3373,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6704,2699,4765,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-1683,-2184,-7447,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-19,-274,-8156,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-362,2446,5565,0,76,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,836,-649,-5206,0,14,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,-3962,-649,3160,0,90,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,-3649,1534,806,0,110,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,7585,1927,-7299,0,0,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(137,658,1785,752,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(86,1705,1534,-94,-1,0,1,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,209,1534,746,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,1665,1534,1597,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,1203,-649,-3623,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,6131,1534,-2488,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-7339,2314,4531,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-7290,2314,5434,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-6736,2314,5435,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-6785,2314,4521,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,7229,1665,-6474,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,3809,638,9627,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-1590,-649,-861,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,7126,-649,3317,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,4319,-64,8957,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,10525,168,4270,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,10402,168,3396,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,5253,101,6285,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,6923,431,9589,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-8139,-400,-1799,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(22,-6021,1847,97,0,0,0,0x580000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(215,7210,853,9170,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4332,2122,-1354,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9741,2764,-1574,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2569,-2215,-2382,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1241,-443,774,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6663,904,-2177,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2095,3968,245,0,30,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9075,-428,6823,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(223,525,-649,285,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-6648,-400,-2826,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,6715,2517,2090,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,2035,3664,277,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4816,1534,-3766,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,7623,2055,-7359,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(206,-2928,1732,-3458,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-4711,-451,-3015,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1402,1497,5858,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6739,-451,3993,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-970,2644,4785,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1718,-451,-50,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,1055,-451,1630,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,5407,3338,3032,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6234,2947,2664,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,929,-451,-7029,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1910,1732,620,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,468,1732,-3053,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-10767,-87,-618,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-7025,2554,4991,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-7968,91,4978,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(188,-5651,-649,3769,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-5559,-649,6360,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8567,-649,6325,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-8538,-649,3729,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,5753,-649,3227,0,81,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1531,1159,6484,0,24,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,11238,286,3479,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4413,-649,3190,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2909,-649,-1631,0,57,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5808,1534,-2039,0,-44,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,7557,1813,-6905,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-10493,-251,-247,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1196,1534,755,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-7366,2661,4766,0,0,0,0x7080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7018,2661,4585,0,0,0,0x7080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6687,2661,5156,0,0,0,0x7080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7023,2661,5353,0,0,0,0x7080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-7362,2661,5151,0,0,0,0x7080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-9926,1201,-236,0,0,0,0x7000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-5996,2284,708,0,0,0,0x7000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-6368,2228,385,0,0,0,0x630000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,1232,59,263,0,0,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1232,59,263,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(206,-1861,-1813,-3515,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(124,-8979,-285,-321,0,-78,0,0x280000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,782,-649,507,0,241,0,0x2a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,660,-97,-5178,0,14,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,954,-97,-5252,0,14,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-476,2996,5644,0,76,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-404,2996,5356,0,76,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-3658,2099,951,0,110,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-3755,2099,693,0,110,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-4061,-185,3014,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-4061,-185,3302,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(0,8,4,6,3,0,0,0,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,4,6,12,0,0,1,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,4,6,6,0,0,2,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,4,6,0,0,0,3,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,4,6,9,0,0,4,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,4,6,3,0,0,5,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,3,0,0,6,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,12,0,0,7,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,6,0,0,8,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,0,0,0,9,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,9,0,0,10,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,6,3,0,0,11,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,36,9,0,0,12,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,66,0,0,0,13,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,1,5,66,0,0,0,14,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,111,6,0,0,15,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,1,5,111,6,0,0,16,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,2,4,18,0,0,0,17,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,5,1,50,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,4,1,240,0),
WARP_NODE(241,4,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(88,30,1,10,0),
WARP_NODE(99,4,1,99,0),
RETURN()
};