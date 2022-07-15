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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe07aa70),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,1301,724,7708,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-914,-979,-474,0,52,0,0x320000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-914,-979,-474,0,52,0,0x640000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,8329,1696,-1455,0,90,0,0x6e0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,8329,1696,-1455,0,90,0,0x6f0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-6435,1652,8027,0,0,0,0x780000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6435,1652,8027,0,0,0,0x790000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-1796,-1262,-1622,0,0,0,0x1e0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9538,1609,-1546,0,0,0,0x1e0c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6491,1628,8865,0,0,0,0x1e0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1006,1285,-6359,0,0,0,0xe0000, bhvWarp,31),
OBJECT_WITH_ACTS(36,-1002,1285,-6076,0,0,0,0xf0f0000, bhvDoor,31),
OBJECT_WITH_ACTS(146,-4926,890,-2387,-90,127,0,0x46b40000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(0,-999,1786,-5289,0,0,0,0x820000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,1811,375,7712,0,0,0,0x5c80000, bhvWarp,31),
OBJECT_WITH_ACTS(220,4681,893,3172,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,2613,339,3874,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4794,1207,2459,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4983,1207,-2085,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-3652,-293,4409,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,5472,1197,257,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-1870,415,7880,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-5184,1332,5980,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,-407,-1624,-290,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1875,-625,5041,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5986,875,2985,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-334,375,7849,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6868,1000,-1388,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(120,-1940,1407,-5490,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(38,504,375,7267,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(221,1848,523,7062,0,150,0,0x7f000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(195,2225,523,7049,0,225,0,0x810000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,-1646,-1262,-1622,0,0,0,0x1e0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1646,-1112,-1622,0,0,0,0x1e0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1796,-1112,-1622,0,0,0,0x1e0b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6341,1628,8865,0,0,0,0x1e0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6341,1778,8865,0,0,0,0x1e0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-6491,1778,8865,0,0,0,0x1e0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9538,1609,-1396,0,0,0,0x1e0c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9538,1759,-1396,0,0,0,0x1e0c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9538,1759,-1546,0,0,0,0x1e0c0000, bhvWarp,31),
OBJECT_WITH_ACTS(212,-1660,-1546,-2436,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(22,-1778,-1832,-904,0,0,0,0xab0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,8823,1036,-1460,0,-90,0,0xac0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-6432,1037,8163,0,180,0,0xad0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,16,5,210,0,0,0,0,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,210,0,0,0,1,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,16,5,54,6,0,0,2,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,4,4,96,3,0,0,3,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,64,5,30,0,0,0,4,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(110,6,1,110,0),
WARP_NODE(111,6,1,111,0),
WARP_NODE(120,6,1,120,0),
WARP_NODE(121,6,1,121,0),
WARP_NODE(130,6,1,130,0),
WARP_NODE(200,16,1,35,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(171,6,1,171,0),
WARP_NODE(172,6,1,172,0),
WARP_NODE(173,6,1,173,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,6,1,10,0),
WARP_NODE(51,6,1,51,0),
WARP_NODE(52,6,1,52,0),
WARP_NODE(151,6,1,151,0),
WARP_NODE(152,6,1,152,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(50,6,1,50,0),
WARP_NODE(100,6,1,100,0),
WARP_NODE(11,9,1,10,0),
WARP_NODE(12,24,1,10,0),
WARP_NODE(13,12,1,10,0),
WARP_NODE(14,18,1,10,0),
WARP_NODE(15,4,1,10,0),
RETURN()
};
