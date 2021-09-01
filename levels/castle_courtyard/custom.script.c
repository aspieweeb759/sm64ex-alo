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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x15f1c90),
TERRAIN(col_castle_courtyard_1_0xe013aa0),
SET_BACKGROUND_MUSIC(0,26),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,307,780,-189,0,329,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(221,545,759,455,0,182,0,0x88000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,-80,729,441,0,148,0,0x0, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(212,514,300,-582,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,272,300,-699,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-34,-810,-223,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-436,-1380,1145,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-586,840,162,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-1064,1020,658,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-993,354,1367,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-508,750,1761,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,380,690,729,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,126,1740,1089,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-324,-510,1161,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,84,-600,328,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-4344,2580,-2737,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-4344,2280,-2737,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,12,-1080,278,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(144,-431,1650,1006,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-137,1650,928,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-213,1650,629,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-506,1650,710,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(137,-1147,2580,1854,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(87,-194,804,578,0,0,0,0x0, bhvTuxiesMother,31),
OBJECT_WITH_ACTS(87,-78,735,-10,0,0,0,0x10000, bhvSmallPenguin,31),
OBJECT_WITH_ACTS(0,-440,-1410,1060,0,0,0,0x280b0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-649,2097,1418,0,0,0,0x50c0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(25,-758,1440,1073,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(25,-266,1440,1318,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(212,-369,-270,1427,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,-748,1467,1587,0,152,0,0x490000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(129,-1030,1300,1454,0,31,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(0,-1019,1103,1405,0,30,0,0x5c90000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(129,-1030,1120,1454,0,31,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(212,-4303,2970,-2715,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,11,1620,1227,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-629,870,-126,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-430,-2070,1085,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-53,-630,-237,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,354,90,-642,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-299,2250,1314,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-748,2280,1077,0,0,0,0x0, bhv1Up,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(12,26,1,11,0),
WARP_NODE(11,26,1,12,0),
WARP_NODE(201,25,1,10,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,26,1,10,0),
RETURN()
};
