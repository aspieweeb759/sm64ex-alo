#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_hmc_1_0xe018930[];
extern Vtx VB_hmc_1_0xe055b00[];
extern Vtx VB_hmc_1_0xe0542a0[];
extern Vtx VB_hmc_1_0xe052b30[];
extern Vtx VB_bob_1_0xe012f70[];
extern Vtx VB_bob_1_0xe011440[];
extern Vtx VB_bitfs_1_0xe023190[];
extern Vtx VB_bitfs_1_0xe023190[];
extern Vtx VB_lll_1_0xe035830[];
extern Vtx VB_lll_1_0xe035830[];
extern Vtx VB_totwc_1_0xe0448a0[];
extern Vtx VB_totwc_1_0xe0448a0[];
extern Vtx VB_wmotr_1_0xe01ef90[];
extern Vtx VB_wmotr_1_0xe00f900[];
Vtx *ScrollTargets[]={
 &VB_hmc_1_0xe018930[12],
 &VB_hmc_1_0xe055b00[3],
 &VB_hmc_1_0xe0542a0[12],
 &VB_hmc_1_0xe052b30[6],
 &VB_bob_1_0xe012f70[12],
 &VB_bob_1_0xe011440[3],
 &VB_bitfs_1_0xe023190[12],
 &VB_bitfs_1_0xe023190[12],
 &VB_lll_1_0xe035830[3],
 &VB_lll_1_0xe035830[3],
 &VB_totwc_1_0xe0448a0[12],
 &VB_totwc_1_0xe0448a0[12],
 &VB_wmotr_1_0xe01ef90[0],
 &VB_wmotr_1_0xe00f900[3],
};