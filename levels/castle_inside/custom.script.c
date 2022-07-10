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
#include "levels/bbh/header.h"
const LevelScript level_castle_inside_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
TERRAIN(col_castle_inside_1_0xe043f80),
SET_BACKGROUND_MUSIC(0,24),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,25793,246,9774,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,19196,-199,-8204,0,135,0,0x0, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,25491,-211,9325,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,25642,-211,9325,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,25800,-211,9329,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,25958,-211,9321,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,26113,-211,9321,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8119,-225,-3280,0,0,0,0x50b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8120,-225,-3436,0,0,0,0x50b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8118,-225,-3575,0,0,0,0x50b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8125,-225,-3765,0,0,0,0x50b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-8123,-225,-3924,0,0,0,0x50b0000, bhvWarp,31),
OBJECT_WITH_ACTS(101,23516,-199,10193,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,9650,-199,-8249,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,19291,-199,-2554,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-10070,-199,-1890,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-25108,-199,-10220,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,5644,-199,-5419,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,17558,-199,4136,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,11171,-199,-1062,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,3983,-199,593,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,12741,-199,7329,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,6790,-199,2224,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-10,-199,-5405,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-10081,-199,-9866,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-4776,-199,-1084,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-12037,-199,-4626,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-24523,-199,-2564,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,4265,-199,7277,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,21235,-199,7815,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,254,-199,5950,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,202,-199,3448,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-20249,-199,-6675,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,13213,-199,3478,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-19197,-199,-2662,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,9259,-199,7364,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,16340,-199,-1033,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,0,5191,0,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,16216,-199,9729,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,15873,-199,-8138,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,17141,-199,-8519,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,19111,-199,-7559,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,19333,-199,-6327,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(180,19208,264,-8219,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7330,-88,-3551,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,25164,-199,9778,0,45,0,0x270000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,5,1,124,0),
WARP_NODE(12,5,1,125,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,5,1,240,0),
WARP_NODE(241,5,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
