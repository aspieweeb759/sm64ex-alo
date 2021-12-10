#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_hmc_1_0xe0187c0[];
extern Vtx VB_hmc_3_0xe009f00[];
extern Vtx VB_hmc_4_0xe0103e0[];
extern Vtx VB_hmc_4_0xe013de0[];
Vtx *ScrollTargets[]={
 &VB_hmc_1_0xe0187c0[0],
 &VB_hmc_3_0xe009f00[0],
 &VB_hmc_4_0xe0103e0[0],
 &VB_hmc_4_0xe013de0[0],
};