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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/bitfs/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitfsSegmentRomStart, _bitfsSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom21492464_skybox_mio0SegmentRomStart,_SkyboxCustom21492464_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,             bitfs_geo_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,             bitfs_geo_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,             bitfs_geo_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,             bitfs_geo_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,             bitfs_geo_000510),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,             bitfs_geo_000528),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,             bitfs_geo_000540),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,             bitfs_geo_000558),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,             bitfs_geo_000570),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,             bitfs_geo_000588),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,             bitfs_geo_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,             bitfs_geo_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,             bitfs_geo_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,             bitfs_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,             bitfs_geo_000600),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,             bitfs_geo_000618),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,             bitfs_geo_000630),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,             bitfs_geo_000648),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,             bitfs_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_PLATFORM_ON_TRACK,       bitfs_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TILTING_SQUARE_PLATFORM, bitfs_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_PLATFORMS,       bitfs_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_BLUE_POLE,               bitfs_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_CAGE_PLATFORM,   bitfs_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_ELEVATOR,                bitfs_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_STRETCHING_PLATFORMS,    bitfs_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SEESAW_PLATFORM,         bitfs_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_MOVING_SQUARE_PLATFORM,  bitfs_geo_000728),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SLIDING_PLATFORM,        bitfs_geo_000740),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM_PART,  bitfs_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM,       bitfs_geo_0006F0),
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
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_wf_1_),
JUMP_LINK(local_area_wf_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x14a4430),
TERRAIN(col_wf_1_0xe0e7240),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,5299,1200,6322,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(122,5597,-3030,4063,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(120,1264,-1285,-1168,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(61,-6185,-2048,-12483,0,258,0,0x40000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(61,-3913,-2051,-11959,0,18,0,0x40000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(61,-5287,-2051,-12306,0,73,0,0x40000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(59,-4166,0,-5280,0,144,0,0x29b0000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(59,-4889,1476,-5848,0,55,0,0x2a00000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(122,-6496,3219,-7843,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-7485,975,3885,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-381,286,5405,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(121,14633,1573,-14762,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,16252,180,-13604,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,15507,-971,-14742,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,8899,-919,-13030,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(121,18709,-1109,-12427,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,12327,666,-5970,0,0,0,0x3000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(62,-8991,-2536,-11819,0,18,0,0x10c0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(61,-7359,-1920,-12331,0,41,0,0x40000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(55,10698,-360,2816,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,9303,-336,4160,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,11381,-336,4456,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,12752,-336,5206,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(59,13975,-296,5177,0,0,0,0x2a00000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(0,14241,1205,-196,0,0,0,0x20000000, bhvWarp,31),
OBJECT_WITH_ACTS(0,14364,1210,1736,0,0,0,0x10000, bhvSwimmingWarp,31),
OBJECT_WITH_ACTS(86,8045,78,5661,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,8010,78,4536,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,7083,78,5648,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,310,-267,5051,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,1226,-36,6069,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,227,-270,6294,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,347,-388,3766,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(84,4941,78,5670,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(0,-3221,552,23,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(86,-11022,-2261,-7682,0,0,0,0x10000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-10548,-2261,-10662,0,0,0,0x10000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-11037,-2261,-8678,0,0,0,0x10000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,-10763,-2261,-5886,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(86,-11022,-2261,-7682,0,0,0,0x10000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,-5402,-1026,-1647,0,257,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(140,-8528,-1387,-5803,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-9356,-1719,-5385,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-10017,-2110,-5360,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-9800,-2029,-3963,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-10581,-2243,-4779,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-9037,-1893,-3391,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8499,-1723,-2974,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,2419,78,6000,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,-2756,-186,6519,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-3436,-186,7061,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-5252,94,8004,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-7340,675,7565,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-6860,584,4484,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(180,-6684,387,6090,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-239,-247,6646,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,12123,670,-3959,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,11951,670,-2725,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,11786,-194,-11781,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-683,1083,5329,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,14342,1523,3833,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,14146,1523,2902,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,10399,58,3632,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(86,-2594,1214,1947,0,49,0,0x10000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(84,-7139,-1358,-1971,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(84,-7669,-1852,-11911,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(192,-2602,-465,-7894,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3314,-655,-9084,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-3739,-970,-9945,0,21,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4503,1589,-5574,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1592,-1511,-1254,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,4259,-2126,-1287,0,99,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,5911,-2537,-384,0,91,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,5183,-2896,3260,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,2712,-1590,-1201,0,80,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5150,-2564,-639,0,39,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5538,-2975,2656,0,173,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,3,-987,2041,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(0,5294,263,6358,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6481,2839,-7815,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(86,-6922,2659,-8223,0,0,0,0x20000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(86,-5995,2676,-7204,0,0,0,0x20000, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,12025,77,-10644,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,13421,-155,-10069,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,13295,-113,-16666,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,19301,152,-8985,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,12227,209,-6224,0,0,0,0x10100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-8,4,64,0,0,20,11, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,10,5,4,0,0,20,12, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,10,5,4,0,0,20,13, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,9,4,32,0,0,20,14, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(0,24,2,10,128),
WARP_NODE(1,24,1,0,0),
WARP_NODE(240,16,1,4,0),
WARP_NODE(241,16,1,5,0),
RETURN()
};
const LevelScript local_area_wf_2_[] = {
AREA(2,Geo_wf_2_0x14a4610),
TERRAIN(col_wf_2_0xe012d20),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_wf_2_),
JUMP_LINK(local_warps_wf_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_2_[] = {
OBJECT_WITH_ACTS(0,3705,663,112,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(55,3458,-965,-3181,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,2077,-965,-2923,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,-1686,-965,436,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,-1856,-965,1671,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,-1820,-965,2755,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(122,1168,205,2786,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-46,2995,4643,0,74,0,0x100000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(59,-4394,-95,-790,0,351,0,0x2c30000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(62,-4275,2755,3459,0,159,0,0x10f0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(59,1768,3235,4735,0,341,0,0x2a50000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(59,2346,5395,5048,0,345,0,0x2a50000, bhvActivatedBackAndForthPlatform,31),
OBJECT_WITH_ACTS(137,2365,7512,5051,0,337,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(62,-2108,2755,4063,0,159,0,0x10f0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(62,-2736,2755,4140,0,341,0,0x10f0000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(96,147,2755,4712,0,343,0,0x30000, bhvWfTumblingBridge,31),
OBJECT_WITH_ACTS(0,3773,-410,826,0,0,0,0x10000000, bhvWarp,31),
OBJECT_WITH_ACTS(220,3737,-410,-512,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-3923,82,-1536,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-2159,-157,-1580,0,251,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,693,-373,-2914,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-1366,-383,-1843,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-1379,-294,-628,0,161,0,0x10000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(100,-5114,3052,2799,0,0,0,0x0, bhvSmallChillBully,31),
OBJECT_WITH_ACTS(223,2292,3052,5354,0,96,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(100,-4528,3115,1323,0,0,0,0x0, bhvSmallChillBully,31),
OBJECT_WITH_ACTS(0,-4184,3115,141,0,337,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7,4,4,0,0,20,15, RM_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,7,5,4,0,0,20,16, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wf_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(0,24,1,1,0),
WARP_NODE(240,16,1,4,0),
WARP_NODE(241,16,1,5,0),
RETURN()
};
