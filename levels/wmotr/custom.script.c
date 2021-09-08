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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/jrb/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _jrbSegmentRomStart, _jrbSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x29a1700),
TERRAIN(col_wmotr_1_0xe014f38),
SET_BACKGROUND_MUSIC(0,51),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-164,-289,-2488,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,-701,-500,597,0,0,0,0xd70000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(195,-3099,-392,123,0,0,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(36,-2915,-444,170,0,90,0,0x78780000, bhvDoor,31),
OBJECT_WITH_ACTS(36,-3125,-444,-50,0,0,0,0x78780000, bhvDoor,31),
OBJECT_WITH_ACTS(36,-2915,-444,20,0,270,0,0x78780000, bhvDoor,31),
OBJECT_WITH_ACTS(36,-2985,-444,-50,0,180,0,0x78780000, bhvDoor,31),
OBJECT_WITH_ACTS(36,-3125,-194,-50,90,0,0,0x78780000, bhvDoor,31),
OBJECT_WITH_ACTS(36,-2985,-194,-50,270,180,0,0x78780000, bhvDoor,31),
OBJECT_WITH_ACTS(53,-3087,-194,-2214,0,270,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(53,-1063,-1729,-612,0,90,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(53,241,-1667,-856,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(53,-635,-260,303,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(53,-1052,-756,661,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(22,-2617,-498,-28,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-2765,-498,-1503,0,0,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,2819,-733,32,0,0,0,0x460d0000, bhvWarp,31),
OBJECT_WITH_ACTS(207,-680,-2035,627,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-1141,-1823,520,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1058,-1615,267,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-809,-1354,257,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-683,-1198,542,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1028,-1094,748,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,241,-1250,230,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,604,-1250,262,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,-955,348,5758,0,0,0,0xe0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,-949,-498,650,0,-216,0,0x230000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-542,181,-1434,0,0,90,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(206,-966,564,5064,0,-118,90,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1489,97,6586,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-878,380,6477,0,-94,90,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-186,551,5956,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-1616,313,5313,0,-183,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(36,1500,-480,-193,0,90,0,0x48480000, bhvDoor,31),
OBJECT_WITH_ACTS(36,1500,-480,-343,0,270,0,0x48480000, bhvDoor,31),
OBJECT_WITH_ACTS(36,1500,-230,-343,0,270,0,0x48480000, bhvDoor,31),
OBJECT_WITH_ACTS(36,1500,-230,-193,0,90,0,0x48480000, bhvDoor,31),
OBJECT_WITH_ACTS(37,-333,-469,-2816,0,0,0,0x1000000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-183,-469,-2816,0,180,0,0x1000000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-199,0,-1917,0,0,0,0x10000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-199,0,-1917,0,0,0,0x20000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(124,1147,-469,-29,0,-119,0,0x2b0000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,12,1,10,0),
WARP_NODE(12,24,1,10,0),
WARP_NODE(13,21,1,10,0),
WARP_NODE(14,20,1,10,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,26,1,14,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
