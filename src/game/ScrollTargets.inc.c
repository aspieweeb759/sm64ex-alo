#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bbh_3_0xe011970[];
extern Vtx VB_bbh_3_0xe01b4d0[];
extern Vtx VB_bbh_3_0xe01d670[];
extern Vtx VB_ccm_1_0xe0201a0[];
extern Vtx VB_jrb_1_0xe018040[];
Vtx *ScrollTargets[]={
 &VB_bbh_3_0xe011970[0],
 &VB_bbh_3_0xe01b4d0[0],
 &VB_bbh_3_0xe01d670[0],
 &VB_ccm_1_0xe0201a0[0],
 &VB_jrb_1_0xe018040[0],
};