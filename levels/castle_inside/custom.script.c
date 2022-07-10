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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom23068352_skybox_mio0SegmentRomStart,_SkyboxCustom23068352_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
JUMP_LINK(local_area_castle_inside_2_),
JUMP_LINK(local_area_castle_inside_3_),
JUMP_LINK(local_area_castle_inside_4_),
JUMP_LINK(local_area_castle_inside_5_),
JUMP_LINK(local_area_castle_inside_6_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c0000),
TERRAIN(col_castle_inside_1_0xe0242b0),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,0,7420,0,0,180,0,0xb0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,7340,-3120,0,0,0,0xf0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,7640,-2820,0,180,0,0x100000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3120,7340,0,0,-90,0,0x190000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2820,7640,0,0,90,0,0x1a0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-3120,7340,0,0,90,0,0x230000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2820,7640,0,0,-90,0,0x240000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,2,5,180,0,0,0,0, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,276,3,0,0,1, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,300,3,0,0,2, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,6,0,0,3, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,0,0,0,4, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(11,26,1,11,0),
WARP_NODE(15,9,1,10,0),
WARP_NODE(16,9,1,11,0),
WARP_NODE(25,24,1,10,0),
WARP_NODE(26,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(35,12,1,10,0),
WARP_NODE(36,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_castle_inside_2_[] = {
AREA(2,Geo_castle_inside_2_0x14c00b0),
TERRAIN(col_castle_inside_2_0xe046860),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_2_),
JUMP_LINK(local_warps_castle_inside_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_2_[] = {
OBJECT_WITH_ACTS(0,0,7420,0,0,180,0,0xc0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,7340,-3120,0,0,0,0x370000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,7640,-2820,0,180,0,0x380000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3120,7340,0,0,-90,0,0x2d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2820,7640,0,0,90,0,0x2e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-3120,7340,0,0,90,0,0x410000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2820,7640,0,0,-90,0,0x420000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,2,5,180,0,0,0,5, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,276,0,0,0,6, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,300,0,0,0,7, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,6,0,0,8, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,9,0,0,9, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_2_[] = {
WARP_NODE(12,26,1,12,0),
WARP_NODE(45,5,1,10,0),
WARP_NODE(46,9,1,11,0),
WARP_NODE(55,4,1,10,0),
WARP_NODE(56,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(65,7,1,10,0),
WARP_NODE(66,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_castle_inside_3_[] = {
AREA(3,Geo_castle_inside_3_0x14c0160),
TERRAIN(col_castle_inside_3_0xe075f80),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_3_),
JUMP_LINK(local_warps_castle_inside_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_3_[] = {
OBJECT_WITH_ACTS(0,0,7420,0,0,180,0,0xd0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3120,7340,0,0,90,0,0x4b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2820,7640,0,0,-90,0,0x4c0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3120,7340,0,0,-90,0,0x550000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2820,7640,0,0,90,0,0x560000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,8,5,63,9,0,0,10, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,5,180,12,0,0,11, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,300,12,0,0,12, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,84,12,0,0,13, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,3,0,0,14, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,48,0,0,0,15, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_3_[] = {
WARP_NODE(13,26,1,13,0),
WARP_NODE(75,22,1,10,0),
WARP_NODE(76,9,1,11,0),
WARP_NODE(85,8,1,10,0),
WARP_NODE(86,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_castle_inside_4_[] = {
AREA(4,Geo_castle_inside_4_0x14c0210),
TERRAIN(col_castle_inside_4_0xe0ab520),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_4_),
JUMP_LINK(local_warps_castle_inside_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_4_[] = {
OBJECT_WITH_ACTS(0,0,7420,0,0,180,0,0xe0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3120,7340,0,0,90,0,0x5f0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2820,7640,0,0,-90,0,0x600000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3120,7340,0,0,-90,0,0x690000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2820,7640,0,0,90,0,0x6a0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,8,5,144,6,0,0,16, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,5,36,0,0,0,17, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,84,0,0,0,18, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,300,0,0,0,19, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,0,0,0,20, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,48,12,0,0,21, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_4_[] = {
WARP_NODE(14,26,1,14,0),
WARP_NODE(95,23,1,10,0),
WARP_NODE(96,9,1,11,0),
WARP_NODE(105,10,1,10,0),
WARP_NODE(106,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_castle_inside_5_[] = {
AREA(5,Geo_castle_inside_5_0x14c02c0),
TERRAIN(col_castle_inside_5_0xe0d9690),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_5_),
JUMP_LINK(local_warps_castle_inside_5_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_5_[] = {
OBJECT_WITH_ACTS(0,0,7420,0,0,0,0,0xf0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-3120,7340,0,0,90,0,0x730000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2820,7640,0,0,-90,0,0x740000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3120,7340,0,0,-90,0,0x7d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2820,7640,0,0,90,0,0x7e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,2,4,36,9,0,0,22, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,5,174,0,0,0,23, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,12,0,0,24, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,300,12,0,0,25, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,0,0,0,26, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,48,12,0,0,27, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_5_[] = {
WARP_NODE(15,26,1,15,0),
WARP_NODE(115,11,1,10,0),
WARP_NODE(116,9,1,11,0),
WARP_NODE(125,36,1,10,0),
WARP_NODE(126,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_castle_inside_6_[] = {
AREA(6,Geo_castle_inside_6_0x14c0370),
TERRAIN(col_castle_inside_6_0xe0f6020),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_6_),
JUMP_LINK(local_warps_castle_inside_6_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_6_[] = {
OBJECT_WITH_ACTS(0,0,7420,0,0,180,0,0x100000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3120,7340,0,0,-90,0,0x870000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2820,7640,0,0,90,0,0x880000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-3120,7340,0,0,90,0,0x910000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2820,7640,0,0,-90,0,0x920000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,16,5,84,0,0,0,28, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,300,0,0,0,29, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,72,6,0,0,30, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,48,3,0,0,31, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_6_[] = {
WARP_NODE(16,26,1,16,0),
WARP_NODE(135,13,2,10,0),
WARP_NODE(136,9,1,11,0),
WARP_NODE(145,14,1,10,0),
WARP_NODE(146,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
