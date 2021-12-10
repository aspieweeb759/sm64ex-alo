#include <ultra64.h>
#include "sm64.h"
#include "moving_texture.h"
#include "area.h"
/*
This is an include meant to help with the addition of moving textures for water boxes. Moving textures are hardcoded in vanilla, but in hacks they're procedural. Every hack uses 0x5000 +Type (0 for water, 1 for toxic mist, 2 for mist) to locate the tables for their water boxes. I will replicate this by using a 3 dimensional array of pointers. This wastes a little bit of memory but is way easier to manage.
To use this, simply place this file inside your source directory after exporting.
*/
extern u8 hmc_1_Movtex_0[];
extern u8 hmc_2_Movtex_0[];
extern u8 hmc_2_Movtex_1[];
extern u8 hmc_2_Movtex_2[];
extern u8 hmc_3_Movtex_0[];
extern u8 hmc_3_Movtex_1[];
extern u8 hmc_3_Movtex_2[];
extern u8 hmc_4_Movtex_0[];
extern u8 hmc_4_Movtex_1[];
extern u8 hmc_4_Movtex_2[];
extern u8 hmc_5_Movtex_0[];
extern u8 hmc_5_Movtex_1[];
extern u8 hmc_5_Movtex_2[];

static void *RM2C_Water_Box_Array[33][8][3] = {
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, },
{ {NULL,NULL,NULL,},{&hmc_1_Movtex_0,NULL,NULL,},{&hmc_2_Movtex_0,&hmc_2_Movtex_1,&hmc_2_Movtex_2,},{&hmc_3_Movtex_0,&hmc_3_Movtex_1,&hmc_3_Movtex_2,},{&hmc_4_Movtex_0,&hmc_4_Movtex_1,&hmc_4_Movtex_2,},{&hmc_5_Movtex_0,&hmc_5_Movtex_1,&hmc_5_Movtex_2,},{NULL,NULL,NULL,},{NULL,NULL,NULL,}, }
};

void *GetRomhackWaterBox(u32 id){
id = id&0xF;
return RM2C_Water_Box_Array[gCurrLevelNum-4][gCurrAreaIndex][id];
};