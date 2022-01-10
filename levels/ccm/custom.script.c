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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ccm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom19983392_skybox_mio0SegmentRomStart,_SkyboxCustom19983392_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x1333d60),
TERRAIN(col_ccm_1_0xe038360),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,13576,2724,22349,0,270,0,0xe0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,5349,630,22968,0,330,0,0x0, bhvNoExitStar,31),
OBJECT_WITH_ACTS(0,13634,2724,23135,0,181,0,0x110000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(22,1340,-1196,1420,0,168,0,0x100000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(145,1740,-1006,1708,0,46,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,1144,-892,1815,0,343,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,1752,-1181,1173,0,130,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,1202,-1080,947,0,16,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,864,-930,1367,0,83,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1490,0,4153,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,205,0,4191,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(122,860,-30,3779,0,1,0,0x1000000, bhvNoExitStar,31),
OBJECT_WITH_ACTS(221,894,-1160,707,0,0,0,0x28000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(220,-594,720,16241,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,13576,2724,22349,0,270,0,0x710000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-60,5,7,0,1,60,3, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(14,24,1,0,0),
WARP_NODE(16,9,1,21,0),
WARP_NODE(17,5,1,0,0),
WARP_NODE(52,22,3,53,0),
WARP_NODE(113,5,1,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,5,1,17,0),
RETURN()
};
