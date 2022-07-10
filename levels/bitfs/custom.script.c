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
#include "areas/5/custom.model.inc.h"
#include "areas/6/custom.model.inc.h"
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_bitfs_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom41811648_skybox_mio0SegmentRomStart,_SkyboxCustom41811648_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(local_area_bitfs_1_),
JUMP_LINK(local_area_bitfs_2_),
JUMP_LINK(local_area_bitfs_3_),
JUMP_LINK(local_area_bitfs_4_),
JUMP_LINK(local_area_bitfs_5_),
JUMP_LINK(local_area_bitfs_6_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x26a0000),
TERRAIN(col_bitfs_1_0xe0224a0),
SET_BACKGROUND_MUSIC(0,59),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,1240,349,0,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(15,359,0,-255,0,0,0,0x810000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(31,-30,0,-73,0,-90,0,0x32320000, bhvDoor,31),
OBJECT_WITH_ACTS(31,-30,0,73,0,90,0,0x32320000, bhvDoor,31),
OBJECT_WITH_ACTS(31,-2784,1200,-4,0,90,0,0x140000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,2595,20,-156,0,0,0,0x1e0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2595,359,-156,0,0,0,0x1e0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2595,691,-156,0,0,0,0x1e0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2595,20,156,0,0,0,0x1e0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2595,359,156,0,0,0,0x1e0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2595,691,156,0,0,0,0x1e0a0000, bhvWarp,31),
OBJECT_WITH_ACTS(212,-439,81,0,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,26,1,218,0),
WARP_NODE(20,19,2,20,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,219,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bitfs_2_[] = {
AREA(2,Geo_bitfs_2_0x26a00b0),
TERRAIN(col_bitfs_2_0xe04bf80),
SET_BACKGROUND_MUSIC(0,59),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_2_),
JUMP_LINK(local_warps_bitfs_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_2_[] = {
OBJECT_WITH_ACTS(31,30,0,0,0,90,0,0x140000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-3330,0,0,0,90,0,0x140000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-3330,-2100,0,0,90,0,0x280000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(137,-786,-1809,730,0,90,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-2931,78,0,0,90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,16,5,120,9,0,0,243, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bitfs_2_[] = {
WARP_NODE(20,19,1,20,0),
WARP_NODE(40,19,4,40,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,219,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bitfs_3_[] = {
AREA(3,Geo_bitfs_3_0x26a0160),
TERRAIN(col_bitfs_3_0xe06fb20),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_3_),
JUMP_LINK(local_warps_bitfs_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_3_[] = {
OBJECT_WITH_ACTS(31,30,0,0,0,90,0,0x140000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-3330,0,0,0,90,0,0x640000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-2401,0,0,0,-90,0,0x960000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2945,356,0,0,90,0,0x650000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(15,-3084,0,-232,0,0,0,0x830000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,16,5,120,0,0,0,244, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bitfs_3_[] = {
WARP_NODE(20,19,1,20,0),
WARP_NODE(150,17,1,150,0),
WARP_NODE(100,30,1,10,0),
WARP_NODE(101,19,3,101,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,219,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bitfs_4_[] = {
AREA(4,Geo_bitfs_4_0x26a0210),
TERRAIN(col_bitfs_4_0xe0a8040),
SET_BACKGROUND_MUSIC(0,60),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_4_),
JUMP_LINK(local_warps_bitfs_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_4_[] = {
OBJECT_WITH_ACTS(0,-150,80,0,0,-90,0,0x280000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,1580,0,0,-90,0,0x20000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,3080,0,0,-90,0,0x30000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,4580,0,0,-90,0,0x40000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,6080,0,0,-90,0,0x50000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,7580,0,0,-90,0,0x60000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(31,-1680,0,600,0,90,0,0xc0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,0,0,0,90,0,0x20000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,0,-600,0,90,0,0xc0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,1500,600,0,90,0,0xd0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,1500,0,0,90,0,0xd0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,1500,-600,0,90,0,0x30000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,3000,600,0,90,0,0xe0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,3000,0,0,90,0,0x40000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,3000,-600,0,90,0,0xe0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,4500,600,0,90,0,0xf0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,4500,0,0,90,0,0xf0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,4500,-600,0,90,0,0x50000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,6000,600,0,90,0,0x60000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,6000,0,0,90,0,0x100000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,6000,-600,0,90,0,0x100000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,7500,600,0,90,0,0x110000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,7500,0,0,90,0,0x110000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,7500,-600,0,90,0,0x70000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-780,250,0,0,90,0,0x850000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,1750,0,0,90,0,0x860000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,3250,0,0,90,0,0x870000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,4750,0,0,90,0,0x880000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,6250,0,0,90,0,0x890000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,7750,0,0,90,0,0x8a0000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,16,5,180,3,0,0,245, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bitfs_4_[] = {
WARP_NODE(40,19,4,40,0),
WARP_NODE(2,19,4,2,0),
WARP_NODE(3,19,4,3,0),
WARP_NODE(4,19,4,4,0),
WARP_NODE(5,19,4,5,0),
WARP_NODE(6,19,4,6,0),
WARP_NODE(241,26,1,219,0),
WARP_NODE(7,19,6,201,0),
WARP_NODE(12,19,5,12,0),
WARP_NODE(13,19,5,13,0),
WARP_NODE(14,19,5,14,0),
WARP_NODE(15,19,5,15,0),
WARP_NODE(16,19,5,16,0),
WARP_NODE(17,19,6,101,0),
RETURN()
};
const LevelScript local_area_bitfs_5_[] = {
AREA(5,Geo_bitfs_5_0x26a02c0),
TERRAIN(col_bitfs_5_0xe0daea0),
SET_BACKGROUND_MUSIC(0,60),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_5_),
JUMP_LINK(local_warps_bitfs_5_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_5_[] = {
OBJECT_WITH_ACTS(0,-150,1580,0,0,-90,0,0xc0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,3080,0,0,-90,0,0xd0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,4580,0,0,-90,0,0xe0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,6080,0,0,-90,0,0xf0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,7580,0,0,-90,0,0x100000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(31,-1680,1500,600,0,90,0,0xd0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,1500,0,0,90,0,0xd0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,1500,-600,0,90,0,0xd0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,3000,600,0,90,0,0xe0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,3000,0,0,90,0,0xe0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,3000,-600,0,90,0,0xe0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,4500,600,0,90,0,0xf0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,4500,0,0,90,0,0xf0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,4500,-600,0,90,0,0xf0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,6000,600,0,90,0,0x100000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,6000,0,0,90,0,0x100000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,6000,-600,0,90,0,0x100000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,7500,600,0,90,0,0x110000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,7500,0,0,90,0,0x110000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(31,-1680,7500,-600,0,90,0,0x110000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-780,1750,0,0,90,0,0x860000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,3250,0,0,90,0,0x870000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,4750,0,0,90,0,0x880000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,6250,0,0,90,0,0x890000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-780,7750,0,0,90,0,0x8a0000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,16,5,150,0,0,0,246, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bitfs_5_[] = {
WARP_NODE(12,19,5,12,0),
WARP_NODE(13,19,5,13,0),
WARP_NODE(14,19,5,14,0),
WARP_NODE(15,19,5,15,0),
WARP_NODE(16,19,5,16,0),
WARP_NODE(17,19,6,101,0),
WARP_NODE(241,26,1,219,0),
WARP_NODE(0,19,1,10,0),
WARP_NODE(1,19,1,10,0),
WARP_NODE(2,19,1,10,0),
WARP_NODE(3,19,1,10,0),
WARP_NODE(4,19,1,10,0),
WARP_NODE(5,19,1,10,0),
WARP_NODE(6,19,1,10,0),
RETURN()
};
const LevelScript local_area_bitfs_6_[] = {
AREA(6,Geo_bitfs_6_0x26a0370),
TERRAIN(col_bitfs_6_0xe0f9330),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_6_),
JUMP_LINK(local_warps_bitfs_6_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_6_[] = {
OBJECT_WITH_ACTS(0,-150,80,0,0,-90,0,0x650000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-150,6080,0,0,-90,0,0xc90000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1859,0,0,0,90,0,0x640000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1859,6000,0,0,90,0,0xc80000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1556,422,0,0,-90,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-935,100,0,0,90,0,0x8b0000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,-935,6100,0,0,90,0,0x8c0000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,16,5,120,0,0,0,247, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,120,6,0,0,248, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bitfs_6_[] = {
WARP_NODE(100,17,1,100,0),
WARP_NODE(101,19,6,101,0),
WARP_NODE(200,17,1,200,0),
WARP_NODE(201,19,6,201,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,219,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
