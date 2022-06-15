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
#include "areas/3/custom.model.inc.h"
#include "areas/4/custom.model.inc.h"
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/lll/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
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
JUMP_LINK(local_area_bitfs_1_),
JUMP_LINK(local_area_bitfs_2_),
JUMP_LINK(local_area_bitfs_3_),
JUMP_LINK(local_area_bitfs_4_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x1c77e30),
TERRAIN(col_bitfs_1_0xe016720),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,501,519,2294,0,178,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,2529,-351,992,0,253,0,0x0, bhvSignOnWall,31),
OBJECT_WITH_ACTS(195,2575,-478,997,0,249,0,0x0, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(120,497,-363,1695,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(195,47,6,-2331,0,0,0,0x0, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(22,551,6,-3045,0,0,0,0x1010000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,455,869,359,0,180,0,0x5050000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,455,-256,-1141,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2351,-446,-80,0,16,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,730,6,-2793,0,0,0,0x0, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(1,19,2,10,0),
WARP_NODE(5,19,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
RETURN()
};
const LevelScript local_area_bitfs_2_[] = {
AREA(2,Geo_bitfs_2_0x1c78010),
TERRAIN(col_bitfs_2_0xe005840),
SET_BACKGROUND_MUSIC(0,22),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bitfs_2_),
JUMP_LINK(local_warps_bitfs_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_2_[] = {
OBJECT_WITH_ACTS(0,1334,814,1824,0,217,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(87,-92,-198,-87,0,0,0,0x1000000, bhvWigglerHead,31),
OBJECT_WITH_ACTS(180,964,-198,-835,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1240,-198,-129,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1383,-198,-107,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-978,-198,-923,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-40,-198,-1327,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1109,-198,699,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,966,-198,717,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-502,-198,1189,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,-41,-177,14,0,56,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,-41,-177,14,0,146,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,-41,-177,14,0,326,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(137,-41,-177,14,0,234,0,0x0, bhvFlamethrower,31),
RETURN()
};
const LevelScript local_warps_bitfs_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(240,19,3,32,0),
WARP_NODE(241,19,3,21,0),
RETURN()
};
const LevelScript local_area_bitfs_3_[] = {
AREA(3,Geo_bitfs_3_0x1c781f0),
TERRAIN(col_bitfs_3_0xe010720),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bitfs_3_),
JUMP_LINK(local_warps_bitfs_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_3_[] = {
OBJECT_WITH_ACTS(0,266,330,124,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,1285,-269,-73,0,0,0,0x3c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1300,-269,169,0,0,0,0x320000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-2908,-269,217,0,0,0,0x280000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4530,-269,171,0,0,0,0x1e0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-6154,-269,148,0,0,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,1103,-269,152,0,275,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-1288,238,-308,0,0,0,0x33330000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-1288,928,-308,0,0,0,0x34340000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2907,238,-331,0,0,0,0x29290000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-2907,928,-331,0,0,0,0x2a2a0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-4571,238,-302,0,0,0,0x1f1f0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-4571,928,-302,0,0,0,0x20200000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6168,238,-315,0,0,0,0x15150000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,20,34,-18,0,87,0,0x3d3d0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,0,384,0,0,90,0,0x3e3e0000, bhvAirborneStarCollectWarp,31),
RETURN()
};
const LevelScript local_warps_bitfs_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(20,19,2,10,0),
WARP_NODE(21,19,3,0,0),
WARP_NODE(22,19,4,10,0),
WARP_NODE(31,19,3,0,0),
WARP_NODE(32,19,3,0,0),
WARP_NODE(40,29,1,10,0),
WARP_NODE(41,19,3,0,0),
WARP_NODE(42,19,3,0,0),
WARP_NODE(50,19,4,10,0),
WARP_NODE(51,19,3,0,0),
WARP_NODE(52,19,3,0,0),
WARP_NODE(60,33,1,10,0),
WARP_NODE(61,19,3,0,0),
WARP_NODE(62,19,3,0,0),
WARP_NODE(30,29,2,10,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
RETURN()
};
const LevelScript local_area_bitfs_4_[] = {
AREA(4,Geo_bitfs_4_0x1c783d0),
TERRAIN(col_bitfs_4_0xe0053c0),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_bitfs_4_),
JUMP_LINK(local_warps_bitfs_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_4_[] = {
OBJECT_WITH_ACTS(0,838,1753,1173,0,215,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(103,0,863,0,0,0,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(180,-999,863,-43,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,778,863,-595,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-232,863,-915,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-265,863,927,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,766,863,574,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_bitfs_4_[] = {
WARP_NODE(10,9,4,0,0),
WARP_NODE(240,19,3,62,0),
WARP_NODE(241,19,3,51,0),
RETURN()
};
