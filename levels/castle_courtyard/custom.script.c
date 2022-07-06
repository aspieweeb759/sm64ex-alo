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
#include "levels/castle_inside/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe0657f8),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-89,-1125,-3079,0,0,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-2179,-843,-2021,0,0,0,0x330000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,2001,-843,-2021,0,0,0,0x340000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1813,-208,594,0,0,0,0x350000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1635,-208,594,0,0,0,0x360000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-89,-323,-703,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2179,-843,-2021,0,0,0,0x6e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,2001,-843,-2021,0,0,0,0x780000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-1813,-208,594,0,0,0,0x820000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,1635,-208,594,0,0,0,0x8c0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-89,-323,-703,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-2144,-929,-1652,0,0,0,0x4330000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2226,-929,-1652,0,0,0,0x4330000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2053,-929,-1661,0,0,0,0x4340000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1756,-329,945,0,0,0,0x4350000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1877,-329,945,0,0,0,0x4350000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1705,-329,948,0,0,0,0x4360000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1579,-329,949,0,0,0,0x4360000, bhvWarp,31),
OBJECT_WITH_ACTS(28,-89,-1259,1057,0,0,0,0x370000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(116,-536,-1065,578,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(28,-165,-1259,-3406,0,0,0,0xa0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(28,-13,-1259,-3406,0,180,0,0xa0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(29,-164,-809,-348,0,0,0,0xf000000, bhvDoor,31),
OBJECT_WITH_ACTS(29,-14,-809,-348,0,180,0,0xf000000, bhvDoor,31),
OBJECT_WITH_ACTS(37,-165,-210,1004,0,0,0,0x21e0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-13,-210,1004,0,180,0,0x21e0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(28,-1624,-1259,-2554,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(35,1446,-1259,-2550,0,-90,0,0x2000000, bhvDoor,31),
OBJECT_WITH_ACTS(36,1636,-809,-344,0,180,0,0x5000000, bhvDoor,31),
OBJECT_WITH_ACTS(36,-1814,-809,-344,0,180,0,0x5000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-89,-76,654,0,180,0,0x140000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(221,-70,-1259,-2589,0,180,0,0x81000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-175,-134,-56,0,91,0,0x82000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,1286,-809,-4,0,92,0,0x67000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(137,-84,-747,2825,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-81,-942,2830,0,90,0,0xc80000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1947,-779,2913,0,0,0,0x43a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-1947,-779,2780,0,0,0,0x43a0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2161,-809,2920,0,0,0,0x3b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,2159,-809,2765,0,0,0,0x3b0000, bhvWarp,31),
OBJECT_WITH_ACTS(31,1891,-809,2910,0,90,0,0x50000000, bhvDoor,31),
OBJECT_WITH_ACTS(31,1891,-809,2760,0,-90,0,0x50000000, bhvDoor,31),
OBJECT_WITH_ACTS(28,996,-1259,2830,0,90,0,0x6e000000, bhvDoor,31),
OBJECT_WITH_ACTS(124,1641,-1259,2851,0,-90,0,0x400000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1276,-383,2833,0,90,0,0xbe0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1276,-383,2833,0,90,0,0xbf0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-1480,-660,2840,0,-90,0,0xb40000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1480,-660,2840,0,-90,0,0xb50000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(221,365,-1259,873,0,-91,0,0x42000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(120,-82,-1155,3581,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,-57,-1497,2807,0,0,0,0x0, bhvInitializeChangingWaterLevel,31),
OBJECT_WITH_ACTS(0,1588,-1259,2854,0,0,0,0x910000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(116,365,-1065,578,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,8,5,12,6,0,0,29,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,5,6,0,0,0,30,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(31,0,7,250,253),
WARP_NODE(180,26,1,180,0),
WARP_NODE(181,26,1,181,0),
WARP_NODE(190,26,1,190,0),
WARP_NODE(191,26,1,191,0),
WARP_NODE(200,26,1,200,0),
WARP_NODE(58,14,1,10,0),
WARP_NODE(59,15,1,10,0),
WARP_NODE(0,6,1,6,0),
WARP_NODE(145,31,1,10,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(1,0,0,0,0),
WARP_NODE(10,16,1,10,0),
WARP_NODE(51,9,1,10,0),
WARP_NODE(52,24,1,10,0),
WARP_NODE(53,12,1,10,0),
WARP_NODE(54,5,1,10,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(30,6,1,10,0),
WARP_NODE(55,16,1,40,0),
WARP_NODE(110,26,1,110,0),
WARP_NODE(120,26,1,120,0),
WARP_NODE(130,26,1,130,0),
WARP_NODE(140,26,1,140,0),
WARP_NODE(20,26,1,20,0),
RETURN()
};
