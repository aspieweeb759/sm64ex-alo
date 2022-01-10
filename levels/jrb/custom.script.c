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
#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_jrb_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(local_area_jrb_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_jrb_1_[] = {
AREA(1,Geo_jrb_1_0x12ca340),
TERRAIN(col_jrb_1_0xe020680),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(22,9994,1425,993,0,241,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(145,10992,2115,1028,0,91,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,10497,2115,2064,0,39,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,9336,2115,2104,0,335,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,8764,2115,1056,0,270,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,9373,2115,107,0,223,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,10498,2115,4,0,153,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,1692,2355,-9277,0,162,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,2980,2505,-6786,0,70,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,2650,2805,-6218,0,52,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-1783,3585,-3332,0,320,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-2188,3315,-7776,0,193,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-1874,3315,-7771,0,180,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(38,-2050,2964,-7851,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(122,-1545,4650,-9080,0,352,0,0x2000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,-2066,4253,-9658,0,0,0,0x1e160000, bhvWarp,31),
OBJECT_WITH_ACTS(215,-5980,1194,-7833,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4370,497,-7797,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3947,1304,-6242,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4057,508,-3782,0,356,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5286,258,-5322,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5687,757,-3699,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5691,593,-7485,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4109,1652,-4735,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-5200,1298,-7782,0,358,0,0x1000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(0,9510,1425,1320,0,14,0,0x140000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-2067,4380,-9088,0,180,0,0x330000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(221,9365,1425,198,0,0,0,0x32000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(192,-5735,8,-6135,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,1381,780,-6731,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(180,-1603,2967,-4491,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,9510,1425,1320,0,14,0,0x730000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-20,4,9,0,0,20,4, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(12,9,1,11,0),
WARP_NODE(22,8,1,23,0),
WARP_NODE(20,12,1,0,0),
WARP_NODE(51,12,1,0,0),
WARP_NODE(115,12,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,12,1,20,0),
RETURN()
};
