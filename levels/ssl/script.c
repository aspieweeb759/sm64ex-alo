#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ssl/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ssl_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,6068,51,2800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5535,51,3377,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5980,51,3911,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,4602,40,4622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,5057,143,256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,58678,8,61825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,60164,64,3083,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,5900,51,4400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,5900,51,2311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,59546,0,61665,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,59667,1200,63001,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,59640,1200,773,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1800,1200,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1805,1200,63000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,6900,350,60136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,62536,500,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,6863,0,58676,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_small,0,5900,50,3440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61036,1500,62036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61036,1500,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,500,1500,62036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,500,1500,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3380,10,60636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60266,65366,58756,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58086,10,7560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5900,70,2311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,5840,940,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,5860,940,4180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,5702,614,2974,16),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,62276,256,800,32),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,59536,600,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,65286,0,4200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,3500,149,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,3800,0,6000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,1750,0,6450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,59616,200,64616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65150,512,63308,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,63246,787,63356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1440,800,64576,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,62136,1160,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60411,135,62398,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_jumping_box,0,1120,0,6480,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,5757,230,5761,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_jumping_box,0,60336,0,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,64336,500,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,5130,26,65166,157),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ssl_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3263,778,3157,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,96,2196,640,62207,43),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,62000,252,61831,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3389,0,63558,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,61898,0,1928,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,64294,252,61579,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1873,0,62041,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1200,0,62041,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3056,736,62269,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3263,652,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3431,673,64163,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,32,65534,1774,2794,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,2694,850,62647,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,65136,1978,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,736,2652,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,736,2546,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1368,3263,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1368,3135,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1621,3368,64394,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1621,3389,478,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,65326,4521,64542,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,63436,0,3316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,64817,0,4772,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,0,0,2381,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,0,100,2381,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,0,200,2381,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2064,65455,63635,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2569,65455,63514,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2698,65455,63001,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2698,65455,62487,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,1940,65455,64176,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,65276,2940,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,260,1967,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63596,1229,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63596,1229,2320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,290,4479,64596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,61976,0,61471,103),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,260,3913,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65276,2950,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,260,1977,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63596,1239,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63596,1239,2320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,260,3923,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,3181,0,3587,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,62186,980,64296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,2870,1050,62896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63489,1664,3076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63489,1536,2870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63696,1357,3076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63696,1408,2870,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ssl_3[] = {
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_SSL_PYRAMID_TOP, /*pos*/ -2047, 1536, -1023, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPyramidTop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/ -1284,    0, -5895, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/  1283,    0, -4865, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/  4873,    0, -3335, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_TWEESTER,        /*pos*/ -3600, -200,  2940, /*angle*/ 0, 0, 0, /*behParam*/ 0x00120000, /*beh*/ bhvTweester),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TWEESTER,        /*pos*/  1017, -200,  3832, /*angle*/ 0, 0, 0, /*behParam*/ 0x00190000, /*beh*/ bhvTweester, /*acts*/ ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TWEESTER,        /*pos*/  3066, -200,   400, /*angle*/ 0, 0, 0, /*behParam*/ 0x00190000, /*beh*/ bhvTweester, /*acts*/ ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KLEPTO,          /*pos*/  2200, 1174, -2820, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvKlepto,   /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KLEPTO,          /*pos*/ -5963,  573, -4784, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKlepto,   /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2050, 1200, -580, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  6000,  800, 3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  2867,  640,  2867, /*angle*/ 0,   0, 0, /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     0, 3200,  1331, /*angle*/ 0,   0, 0, /*behParam*/ 0x005C0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/  3297,    0,    95, /*angle*/ 0,   0, 0, /*behParam*/ 0x001C0000, /*beh*/ bhvGrindel),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/  -870, 3840,   105, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHorizontalGrindel),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/ -3362,    0, -1385, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHorizontalGrindel),
    OBJECT(/*model*/ MODEL_SSL_SPINDEL,             /*pos*/ -2458, 2109, -1430, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSpindel),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/   858, 1927, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/   730, 1927, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/  1473, 2567, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/  1345, 2567, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_PYRAMID_ELEVATOR,    /*pos*/     0, 4966,   256, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPyramidElevator),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  1198, -133,  2396, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     7, 1229,  -708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     7, 4317,  -708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 500, 5050, -500, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,        /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 900, 1400, 2350, /*angle*/ 0, 0, 0, /*behParam*/ 0x05040000, /*beh*/ bhvHiddenStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1534, -3693, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvEyerokBoss),
    RETURN(),
};

const LevelScript level_ssl_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group5_geoSegmentRomStart,  _group5_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_6),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),

    AREA(/*index*/ 1, ssl_geo_000648),
MACRO_OBJECTS(local_macro_objects_ssl_1),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
        TERRAIN(/*terrainData*/ ssl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SAND),
    END_AREA(),

    AREA(/*index*/ 2, ssl_geo_0007CC),
MACRO_OBJECTS(local_macro_objects_ssl_2),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/    0,  300,  6451, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/    0, 5500,   256, /*angle*/ 0, 180, 0, /*behParam*/ 0x00140000, /*beh*/ bhvAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 3070, 1280,  2900, /*angle*/ 0, 180, 0, /*behParam*/ 0x00150000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 2546, 1150, -2647, /*angle*/ 0,  78, 0, /*behParam*/ 0x00160000, /*beh*/ bhvFadingWarp),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 3, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ ssl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 3, ssl_geo_00088C),
MACRO_OBJECTS(local_macro_objects_ssl_3),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_6),
        TERRAIN(/*terrainData*/ ssl_seg7_area_3_collision),
        MACRO_OBJECTS(/*objList*/ ssl_seg7_area_3_macro_objs),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 2, /*displace*/ 0, 0, 0),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 88, /*pos*/ 653, 38, 6566),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
