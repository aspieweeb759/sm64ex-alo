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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2d81700),
TERRAIN(col_wf_1_0xe0582f8),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-188,-216,4021,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,-4142,-1117,1521,0,180,0,0xc00000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(3,7026,-3163,3250,0,-91,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(20,9987,-1572,2952,0,90,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(195,-2202,-1147,-5292,0,-241,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(122,279,3840,-1555,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,5526,550,-5147,0,0,0,0x3000000, bhvStar,31),
// OBJECT_WITH_ACTS(20,-4132,1931,5422,0,0,0,0x2000000, Bhv_Custom_0x130002a0,31),
OBJECT_WITH_ACTS(122,4941,2097,1590,0,-90,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(20,-4136,-791,-509,0,90,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,-5183,-670,-5966,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,1490,-1615,-4859,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1038,-1615,-949,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2865,-1615,-2448,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2106,-1615,-4559,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4892,-1615,-3277,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5189,-1615,-5530,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6161,-1615,-2904,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7287,-1615,-432,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,2001,652,1590,0,-90,0,0x0, bhvPSwitch_MOP,31),
OBJECT_WITH_ACTS(116,2255,503,1590,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2455,703,1590,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2455,903,1590,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2655,1103,1590,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2655,1303,1590,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2855,1503,1590,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(152,275,2141,-2404,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,275,1941,-2904,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-3975,-1128,-5725,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(123,275,2327,-788,0,0,0,0x320000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(153,6411,-766,-5385,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(42,-4663,-413,5798,0,-90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-4653,-67,5448,0,-90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-4653,285,5098,0,-90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-4153,285,5098,0,180,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3603,285,5098,0,180,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3603,685,5448,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3603,1085,5798,0,90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(42,-3603,1485,5448,0,-90,0,0x0, bhvFlipswitch_Panel_MOP,31),
OBJECT_WITH_ACTS(20,-4147,1727,5400,0,0,0,0x1000000, bhvFlipswitch_Panel_StarSpawn_MOP,31),
OBJECT_WITH_ACTS(180,-4147,1727,4896,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4141,1727,5941,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4153,526,5098,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(212,1936,-405,1314,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,3990,-775,-2828,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(188,-4139,-1147,326,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4126,-247,-2367,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(192,292,-247,-653,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,285,-247,-2465,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(188,-6621,652,-50,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3594,1552,1603,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4630,1552,1589,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4144,-652,5413,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,5031,-247,-5395,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(88,5151,-1853,4001,0,30,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(212,5186,-1856,3996,0,30,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(105,6314,-1455,3277,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,7180,-1455,6335,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,10202,-1455,5123,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,9733,-1455,-1355,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,8727,-1455,-6499,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,3467,-1455,-5834,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,1355,-1455,6304,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-3781,-1455,3217,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-8289,-1455,3979,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-9919,-1455,-3872,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(105,-6611,-1455,-6991,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(194,-2960,-1567,-3583,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-546,-1567,-2978,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-7297,-1567,-2836,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(0,5567,-847,-336,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6862,-847,836,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-7508,1295,-1382,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-537,1612,-3414,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,2508,-669,-2273,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,1482,-419,2192,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,1486,-872,2876,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5202,-1897,396,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6248,210,-1397,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,6195,-547,-1277,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,8576,-1897,2951,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4105,-1897,6592,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2432,-1417,-6295,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4183,1552,1593,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,10977,-1897,-8367,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1256,-247,-1561,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,1565,-1147,1519,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,3983,-456,3473,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,-4138,-693,4736,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-4659,-645,4890,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4656,-645,5947,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4658,-645,5417,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3611,-645,4893,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3602,-645,5941,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3603,-645,5431,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,16,5,6,0,0,0,19,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,110,0),
WARP_NODE(241,6,1,111,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
