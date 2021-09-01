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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_totwc_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x160e730),
TERRAIN(col_totwc_1_0xe010d10),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,41,124,-695,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,-966,-89,3290,0,344,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(85,42,-347,-774,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(85,-1264,-15,-3082,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(207,221,-611,2861,0,180,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(207,226,-179,2926,0,180,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,200,-815,2501,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-101,405,-62,0,347,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,-125,910,69,0,347,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-506,280,-1289,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,877,280,-929,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,234,150,3493,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,220,-179,3373,0,181,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(0,-852,-138,71,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(129,-143,405,125,0,348,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(124,-71,121,-207,0,171,0,0x440000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,670,-179,2757,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(22,1052,-95,-107,0,0,0,0x180000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-518,-1070,2089,0,0,0,0x14190000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(129,400,-815,2500,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,0,-815,2501,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,200,-815,2301,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,0,-815,2301,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,400,-815,2301,0,0,0,0x0, bhvHiddenObject,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,29,1,10,0),
WARP_NODE(24,29,1,24,0),
WARP_NODE(25,29,1,24,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
RETURN()
};
