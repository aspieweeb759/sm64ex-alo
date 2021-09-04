#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_sl_1_0xe01dfa0[];
extern Vtx VB_ddd_1_0xe026b40[];
extern Vtx VB_ddd_1_0xe025a60[];
extern Vtx VB_ddd_1_0xe0245c0[];
extern Vtx VB_ddd_1_0xe0481a0[];
extern Vtx VB_ddd_1_0xe025790[];
extern Vtx VB_ddd_1_0xe023d50[];
Vtx *ScrollTargets[]={
 &VB_sl_1_0xe01dfa0[3],
 &VB_ddd_1_0xe026b40[6],
 &VB_ddd_1_0xe025a60[3],
 &VB_ddd_1_0xe0245c0[12],
 &VB_ddd_1_0xe0481a0[3],
 &VB_ddd_1_0xe025790[12],
 &VB_ddd_1_0xe023d50[6],
};