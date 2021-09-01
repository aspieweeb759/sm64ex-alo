#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_ccm_1_0xe050bd0[];
extern Vtx VB_bitdw_1_0xe0189c0[];
extern Vtx VB_sa_1_0xe025a20[];
extern Vtx VB_wf_1_0xe027ce0[];
extern Vtx VB_wf_1_0xe028010[];
extern Vtx VB_wf_1_0xe031d60[];
extern Vtx VB_wf_1_0xe032a50[];
extern Vtx VB_wf_3_0xe0230b0[];
extern Vtx VB_wf_3_0xe030850[];
extern Vtx VB_wf_3_0xe033690[];
extern Vtx VB_wf_3_0xe033b30[];
extern Vtx VB_pss_1_0xe01e8b0[];
Vtx *ScrollTargets[]={
 &VB_ccm_1_0xe050bd0[0],
 &VB_bitdw_1_0xe0189c0[0],
 &VB_sa_1_0xe025a20[0],
 &VB_wf_1_0xe027ce0[0],
 &VB_wf_1_0xe028010[0],
 &VB_wf_1_0xe031d60[0],
 &VB_wf_1_0xe032a50[0],
 &VB_wf_3_0xe0230b0[0],
 &VB_wf_3_0xe030850[0],
 &VB_wf_3_0xe033690[0],
 &VB_wf_3_0xe033b30[0],
 &VB_pss_1_0xe01e8b0[0],
};