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
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom24215232_skybox_mio0SegmentRomStart,_SkyboxCustom24215232_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x1661700),
TERRAIN(col_bob_1_0xe0281a8),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-2135,-1685,-4219,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-4970,1461,-3765,0,-154,0,0xb0000, bhvFadingWarp,8),
OBJECT_WITH_ACTS(0,-5400,-551,-3129,0,-153,0,0xc0000, bhvFadingWarp,8),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,183,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-365,-1522,-3360,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-104,-1522,-1719,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(212,679,-1084,-976,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(102,-1719,-545,-781,0,-135,0,0x0, bhvChainChomp,63),
OBJECT_WITH_ACTS(120,1615,866,3229,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(0,-3333,-545,-3594,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-3177,-545,-2135,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(137,-3854,1140,10811,0,-181,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,-3750,-545,-938,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(220,2760,-156,-3438,0,0,0,0x0, bhvFlyGuy,63),
OBJECT_WITH_ACTS(0,1510,808,4687,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,885,808,4792,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2292,808,4844,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1250,808,9479,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(122,-688,-313,-1884,0,-49,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(195,-4531,-545,-365,0,0,0,0x0, bhvBobombBuddyOpensCannon,63),
OBJECT_WITH_ACTS(122,2347,824,-7165,0,-55,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(201,1419,-994,-6584,0,0,0,0x0, bhvCannonClosed,63),
OBJECT_WITH_ACTS(215,-881,-1510,-3854,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2589,-1321,-7663,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-4427,-469,-4688,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-3306,-508,1983,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2812,-104,-4323,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,156,1042,3594,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-170,990,6703,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-860,-1507,-886,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,-5400,-134,-3129,0,0,0,0x2000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(121,-4970,1874,-3725,0,0,0,0x3000000, bhvStar,8),
OBJECT_WITH_ACTS(0,-1763,-1874,-2175,0,0,0,0x0, bhvHiddenStarTrigger,16),
OBJECT_WITH_ACTS(0,625,-1148,-4219,0,0,0,0x0, bhvHiddenStarTrigger,16),
OBJECT_WITH_ACTS(0,2865,-71,1042,0,0,0,0x0, bhvHiddenStarTrigger,16),
OBJECT_WITH_ACTS(0,-1078,-719,-6047,0,0,0,0x0, bhvHiddenStarTrigger,16),
OBJECT_WITH_ACTS(0,863,1988,7383,0,0,0,0x0, bhvHiddenStarTrigger,16),
OBJECT_WITH_ACTS(0,-3021,1198,5625,0,0,0,0x4000000, bhvHiddenStar,16),
OBJECT_WITH_ACTS(86,260,3966,6146,0,0,0,0x5000000, bhvKingBobomb,32),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
