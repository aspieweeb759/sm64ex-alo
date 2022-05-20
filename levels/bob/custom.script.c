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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/castle_inside/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(28, castle_door_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, wooden_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x1247c60),
TERRAIN(col_bob_1_0xe00dbd0),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,587,0,5063,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(213,780,381,-100,0,270,0,0x3000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(23,-3539,-32,5264,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-5473,88,3982,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-6373,194,-6042,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3180,518,213,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3947,2129,7139,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-6410,524,-6049,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(0,3209,57,-4575,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-5501,420,5270,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(213,780,381,52,0,90,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(122,1148,696,-535,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(212,-1191,381,1,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,4213,-352,7317,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,816,126,-5002,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-683,92,-4789,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3414,88,-3682,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2592,88,248,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4167,88,2613,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1110,-383,4356,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5440,748,3984,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,693,-489,4828,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2914,88,-4561,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,3804,-121,6713,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(195,-13,-489,5266,0,0,0,0x0, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(124,-158,-489,4823,0,0,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(188,-5347,88,3633,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4128,-32,5049,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3672,335,-1736,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,361,381,-10,0,0,0,0x193c0000, bhvWarp,31),
OBJECT_WITH_ACTS(124,0,1530,0,0,90,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(192,-4117,88,-586,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-4617,88,-2311,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(23,-1361,92,-4332,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,1140,990,-8,0,-90,0,0x4e0000, bhvDeathWarp,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(60,21,1,10,0),
WARP_NODE(78,9,1,0,0),
WARP_NODE(240,6,1,120,0),
WARP_NODE(241,6,1,220,0),
RETURN()
};
