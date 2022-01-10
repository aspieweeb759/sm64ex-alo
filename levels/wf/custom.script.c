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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wf_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom19364080_skybox_mio0SegmentRomStart,_SkyboxCustom19364080_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
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
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,-1277,3120,-1909),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x129ca30),
TERRAIN(col_wf_1_0xe0172f0),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-1259,3028,-1918,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,1547,3998,7303,0,0,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(137,-6267,4510,2769,0,45,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1852,4703,15339,0,0,0,0xa0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(122,-2240,1740,-578,0,-90,0,0x0, bhvNoExitStar,31),
OBJECT_WITH_ACTS(122,1238,5100,14621,0,180,0,0x1000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,4450,3900,8330,0,0,0,0x2000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1973,3285,-602,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1560,2784,2880,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1631,2199,2669,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3844,2740,4633,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3466,4209,9626,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,795,3836,5659,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5236,3832,3750,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2450,3994,5312,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-999,3300,-1019,0,0,0,0x130000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(220,-1212,2970,2463,0,180,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,1384,2970,1618,0,180,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4783,4140,5088,0,180,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,3355,4920,8786,0,180,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(145,1341,4786,9780,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,1876,4714,14692,0,0,0,0x3d0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(124,-1410,3054,-466,0,120,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-426,3018,-314,0,0,0,0x6f0000, bhvSpinAirborneCircleWarp,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(13,22,1,26,0),
WARP_NODE(19,24,1,0,0),
WARP_NODE(61,24,1,0,0),
WARP_NODE(111,24,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,24,1,19,0),
RETURN()
};
