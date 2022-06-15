#include <ultra64.h>
#include "sm64.h"
#include "moving_texture.h"
#include "area.h"
/*
This is an include meant to help with the addition of moving textures for water boxes. Moving textures are hardcoded in vanilla, but in hacks they're procedural. Every hack uses 0x5000 +Type (0 for water, 1 for toxic mist, 2 for mist) to locate the tables for their water boxes. I will replicate this by using a 3 dimensional array of pointers. This wastes a little bit of memory but is way easier to manage.
To use this, simply place this file inside your source directory after exporting.
*/
extern u8 ccm_1_Movtex_0[];
extern u8 ccm_1_Movtex_1[];
extern u8 ccm_1_Movtex_2[];
extern u8 ccm_2_Movtex_0[];
extern u8 ccm_2_Movtex_1[];
extern u8 ccm_2_Movtex_2[];
extern u8 hmc_1_Movtex_0[];
extern u8 hmc_1_Movtex_1[];
extern u8 hmc_1_Movtex_2[];
extern u8 hmc_2_Movtex_0[];
extern u8 hmc_2_Movtex_1[];
extern u8 hmc_2_Movtex_2[];
extern u8 ssl_1_Movtex_0[];
extern u8 ssl_1_Movtex_1[];
extern u8 ssl_1_Movtex_2[];
extern u8 bob_1_Movtex_0[];
extern u8 bob_1_Movtex_1[];
extern u8 bob_1_Movtex_2[];
extern u8 bob_2_Movtex_0[];
extern u8 bob_2_Movtex_1[];
extern u8 bob_2_Movtex_2[];
extern u8 jrb_1_Movtex_0[];
extern u8 jrb_1_Movtex_1[];
extern u8 jrb_1_Movtex_2[];
extern u8 castle_grounds_1_Movtex_0[];
extern u8 castle_grounds_1_Movtex_1[];
extern u8 castle_grounds_1_Movtex_2[];
extern u8 bitdw_1_Movtex_0[];
extern u8 bitdw_1_Movtex_1[];
extern u8 bitdw_1_Movtex_2[];
extern u8 bitdw_2_Movtex_0[];
extern u8 bitdw_2_Movtex_1[];
extern u8 bitdw_2_Movtex_2[];
extern u8 bitfs_1_Movtex_0[];
extern u8 bitfs_1_Movtex_1[];
extern u8 bitfs_1_Movtex_2[];
extern u8 bitfs_2_Movtex_0[];
extern u8 bitfs_2_Movtex_1[];
extern u8 bitfs_2_Movtex_2[];
extern u8 bitfs_3_Movtex_0[];
extern u8 bitfs_3_Movtex_1[];
extern u8 bitfs_3_Movtex_2[];
extern u8 bitfs_4_Movtex_0[];
extern u8 bitfs_4_Movtex_1[];
extern u8 bitfs_4_Movtex_2[];
extern u8 wf_1_Movtex_0[];
extern u8 wf_1_Movtex_1[];
extern u8 wf_1_Movtex_2[];
extern u8 wf_2_Movtex_0[];
extern u8 wf_2_Movtex_1[];
extern u8 wf_2_Movtex_2[];
extern u8 castle_courtyard_1_Movtex_0[];
extern u8 castle_courtyard_1_Movtex_1[];
extern u8 castle_courtyard_1_Movtex_2[];
extern u8 cotmc_1_Movtex_0[];
extern u8 cotmc_1_Movtex_1[];
extern u8 cotmc_1_Movtex_2[];
extern u8 cotmc_2_Movtex_0[];
extern u8 cotmc_2_Movtex_1[];
extern u8 cotmc_2_Movtex_2[];
extern u8 cotmc_3_Movtex_0[];
extern u8 cotmc_3_Movtex_1[];
extern u8 cotmc_3_Movtex_2[];
extern u8 totwc_1_Movtex_0[];
extern u8 totwc_1_Movtex_1[];
extern u8 totwc_1_Movtex_2[];
extern u8 totwc_2_Movtex_0[];
extern u8 totwc_2_Movtex_1[];
extern u8 totwc_2_Movtex_2[];
extern u8 bowser_1_1_Movtex_0[];
extern u8 bowser_1_1_Movtex_1[];
extern u8 bowser_1_1_Movtex_2[];
extern u8 bowser_2_1_Movtex_0[];
extern u8 bowser_2_1_Movtex_1[];
extern u8 bowser_2_1_Movtex_2[];

static void *RM2C_Water_Box_Array[33][8][3] = {
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ccm_1_Movtex_0,&ccm_1_Movtex_1,&ccm_1_Movtex_2,},{&ccm_2_Movtex_0,&ccm_2_Movtex_1,&ccm_2_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&hmc_1_Movtex_0,&hmc_1_Movtex_1,&hmc_1_Movtex_2,},{&hmc_2_Movtex_0,&hmc_2_Movtex_1,&hmc_2_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&ssl_1_Movtex_0,&ssl_1_Movtex_1,&ssl_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bob_1_Movtex_0,&bob_1_Movtex_1,&bob_1_Movtex_2,},{&bob_2_Movtex_0,&bob_2_Movtex_1,&bob_2_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&jrb_1_Movtex_0,&jrb_1_Movtex_1,&jrb_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_grounds_1_Movtex_0,&castle_grounds_1_Movtex_1,&castle_grounds_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bitdw_1_Movtex_0,&bitdw_1_Movtex_1,&bitdw_1_Movtex_2,},{&bitdw_2_Movtex_0,&bitdw_2_Movtex_1,&bitdw_2_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bitfs_1_Movtex_0,&bitfs_1_Movtex_1,&bitfs_1_Movtex_2,},{&bitfs_2_Movtex_0,&bitfs_2_Movtex_1,&bitfs_2_Movtex_2,},{&bitfs_3_Movtex_0,&bitfs_3_Movtex_1,&bitfs_3_Movtex_2,},{&bitfs_4_Movtex_0,&bitfs_4_Movtex_1,&bitfs_4_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&wf_1_Movtex_0,&wf_1_Movtex_1,&wf_1_Movtex_2,},{&wf_2_Movtex_0,&wf_2_Movtex_1,&wf_2_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&castle_courtyard_1_Movtex_0,&castle_courtyard_1_Movtex_1,&castle_courtyard_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&cotmc_1_Movtex_0,&cotmc_1_Movtex_1,&cotmc_1_Movtex_2,},{&cotmc_2_Movtex_0,&cotmc_2_Movtex_1,&cotmc_2_Movtex_2,},{&cotmc_3_Movtex_0,&cotmc_3_Movtex_1,&cotmc_3_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&totwc_1_Movtex_0,&totwc_1_Movtex_1,&totwc_1_Movtex_2,},{&totwc_2_Movtex_0,&totwc_2_Movtex_1,&totwc_2_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bowser_1_1_Movtex_0,&bowser_1_1_Movtex_1,&bowser_1_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&bowser_2_1_Movtex_0,&bowser_2_1_Movtex_1,&bowser_2_1_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, }
};

void *GetRomhackWaterBox(u32 id){
id = id&0xF;
return RM2C_Water_Box_Array[gCurrLevelNum-4][gCurrAreaIndex][id];
};