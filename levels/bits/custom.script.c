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
#include "levels/bitdw/header.h"
const LevelScript level_bits_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x2961700),
TERRAIN(col_bits_1_0xe018a00),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,0,800,-200,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,6355,7679,-4265,0,0,0,0xc0000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(55,0,100,-4550,0,0,0,0x0, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(55,-4005,1005,-10792,0,90,0,0x0, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(54,310,0,-1350,0,0,0,0x20000, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(57,-6892,1450,-11098,0,0,0,0x10000, bhvFerrisWheelAxle,31),
OBJECT_WITH_ACTS(16,0,-120,-1660,0,180,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(16,0,230,-7540,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(54,-310,0,-1970,0,0,0,0x0, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(54,-310,350,-7850,0,0,0,0x0, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(54,310,350,-7230,0,0,0,0x20000, bhvSquarishPathMoving,31),
OBJECT_WITH_ACTS(0,0,68,-1660,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(194,0,100,-2978,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(194,0,465,-6165,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,0,434,-7540,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-338,365,-9160,0,-135,0,0x40000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,-5589,1415,-10802,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-2250,2815,-10792,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,-4355,2686,-10792,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(57,1950,4428,-10498,0,180,0,0x10000, bhvFerrisWheelAxle,31),
OBJECT_WITH_ACTS(194,4929,5190,-9386,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(0,6352,5058,-7404,0,0,0,0x5d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(63,6355,6137,-5448,0,270,0,0x10000, bhvAnimatesOnFloorSwitchPress,31),
OBJECT_WITH_ACTS(207,6355,6137,-6770,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(22,6355,7301,-4674,0,0,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(223,3933,5090,-10782,0,270,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,6170,5405,-8137,0,45,0,0x50000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,55,0),
WARP_NODE(241,6,1,105,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,34,1,10,0),
RETURN()
};
