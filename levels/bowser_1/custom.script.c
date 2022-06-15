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
#include "levels/bowser_1/header.h"
extern u8 _bowser_1_segment_ESegmentRomStart[]; 
extern u8 _bowser_1_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bowser_1_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_1_segment_ESegmentRomStart, _bowser_1_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom30010048_skybox_mio0SegmentRomStart,_SkyboxCustom30010048_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_1_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_1_1_[] = {
AREA(1,Geo_bowser_1_1_0x1cc3c00),
TERRAIN(col_bowser_1_1_0xe01f720),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_1_1_),
JUMP_LINK(local_warps_bowser_1_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_1_1_[] = {
OBJECT_WITH_ACTS(0,628,0,415,0,0,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(100,-1175,827,-2116,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2617,623,1368,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,253,1585,2567,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,3023,-121,2151,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1305,188,-2766,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(0,276,-823,3338,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1387,195,-1850,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,2880,0,-247,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2876,0,-94,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2871,0,60,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2866,0,234,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2876,0,377,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2895,0,555,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2926,0,826,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,2947,0,1031,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,2324,-121,-1231,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(0,1707,188,-1775,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(180,1401,1384,3370,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,3682,3131,2114,0,327,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(202,1108,-580,3587,0,90,0,0x0, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(180,-256,661,2832,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_bowser_1_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,25,1,10,0),
WARP_NODE(241,17,1,1,0),
RETURN()
};
