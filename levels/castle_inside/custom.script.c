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
#include "levels/wdw/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
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
JUMP_LINK(script_func_global_11),
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
AREA(1,Geo_castle_inside_1_0x13c1700),
TERRAIN(col_castle_inside_1_0xe016a30),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(37,-194,-737,6506,0,0,0,0xb0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-44,-737,6506,0,-180,0,0xb0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-111,-737,6335,0,180,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(22,2948,707,-1808,0,107,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,3014,707,-411,0,-151,0,0x20000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1922,-990,663,0,0,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-2061,-990,2312,0,0,1,0x70000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,3015,-747,-494,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2992,-747,-1712,0,0,0,0x30000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-62,1583,-3036,0,0,0,0x40000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,512,832,-121,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(192,538,585,-6,0,94,0,0x13000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,-13,2783,-3477,0,0,0,0xff060000, bhvWarp,31),
OBJECT_WITH_ACTS(137,-1908,753,1327,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,405,-737,-2394,0,0,0,0x60000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,110,0,3130,0,0,0,0x320000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(137,316,-96,-2766,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,405,-417,-2026,0,0,0,0x20000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(7,18,1,10,0),
WARP_NODE(11,16,1,240,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(13,23,1,10,0),
WARP_NODE(50,9,1,10,0),
WARP_NODE(240,6,1,10,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,4,1,10,0),
WARP_NODE(1,7,1,10,0),
WARP_NODE(2,7,1,13,0),
WARP_NODE(3,22,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,26,1,10,0),
RETURN()
};
