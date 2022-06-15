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
#include "levels/pss/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_pss_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62303,4688,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59900,4331,60482,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59556,3453,945,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62666,2837,2300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3930,274,2425,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5174,61,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5707,65408,4565,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5194,65226,5845,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3640,64993,6450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2550,64836,6050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1821,64615,4616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65516,62994,59232,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64339,62607,60844,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62971,62268,62011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,60627,61903,61318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59246,61599,62991,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,32,3580,6140,60356,149),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,3000,6180,59896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,5423,6140,58996,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,780,5613,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2360,5979,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1880,64096,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1860,63776,63816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1860,64336,1680,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,1860,64316,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,1880,64076,80,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,1860,63716,63856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,59156,60986,6320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,59156,61036,5980,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,64,1847,64575,3863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,260,2580,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,64656,2880,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64727,5245,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63127,4877,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61390,64946,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61201,1409,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61006,3481,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,61091,4490,60000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59273,4150,61527,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1854,63404,61246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,59151,61336,5770,0),
MACRO_OBJECT_END(),
};

const LevelScript level_pss_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),

    AREA(/*index*/ 1, pss_geo_000100),
MACRO_OBJECTS(local_macro_objects_pss_1),
WARP_NODE(241,6,1,35,0),
WARP_NODE(240,6,1,38,0),
WARP_NODE(243,6,1,32,0),
WARP_NODE(10,27,1,10,0),
OBJECT_WITH_ACTS(0,5632,6751,-5631,0,270,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ pss_seg7_collision),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ 5632, 6451, -5631),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
