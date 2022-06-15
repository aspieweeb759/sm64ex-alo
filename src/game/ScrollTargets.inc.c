#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_ccm_1_0xe0492b0[];
extern Vtx VB_ccm_2_0xe00afe0[];
extern Vtx VB_ccm_2_0xe00b0a0[];
extern Vtx VB_hmc_1_0xe02db00[];
extern Vtx VB_hmc_2_0xe025550[];
extern Vtx VB_ssl_1_0xe02cc00[];
extern Vtx VB_bob_1_0xe032980[];
extern Vtx VB_jrb_1_0xe02ded0[];
extern Vtx VB_bitdw_1_0xe023b50[];
extern Vtx VB_bitdw_1_0xe023c90[];
extern Vtx VB_bitdw_2_0xe00dac0[];
extern Vtx VB_wf_1_0xe01a590[];
extern Vtx VB_wf_1_0xe053a30[];
extern Vtx VB_wf_1_0xe05e640[];
extern Vtx VB_wf_1_0xe02ae10[];
extern Vtx VB_wf_2_0xe006970[];
extern Vtx VB_wf_2_0xe00fb10[];
extern Vtx VB_castle_courtyard_1_0xe02cb30[];
extern Vtx VB_cotmc_1_0xe021140[];
extern Vtx VB_cotmc_1_0xe021c10[];
extern Vtx VB_cotmc_2_0xe004390[];
extern Vtx VB_cotmc_2_0xe004470[];
extern Vtx VB_cotmc_2_0xe004530[];
extern Vtx VB_cotmc_3_0xe005280[];
extern Vtx VB_cotmc_3_0xe009740[];
extern Vtx VB_cotmc_3_0xe0097c0[];
extern Vtx VB_bowser_2_1_0xe005170[];
Vtx *ScrollTargets[]={
 &VB_ccm_1_0xe0492b0[0],
 &VB_ccm_2_0xe00afe0[0],
 &VB_ccm_2_0xe00b0a0[0],
 &VB_hmc_1_0xe02db00[0],
 &VB_hmc_2_0xe025550[0],
 &VB_ssl_1_0xe02cc00[0],
 &VB_bob_1_0xe032980[0],
 &VB_jrb_1_0xe02ded0[0],
 &VB_bitdw_1_0xe023b50[0],
 &VB_bitdw_1_0xe023c90[0],
 &VB_bitdw_2_0xe00dac0[0],
 &VB_wf_1_0xe01a590[0],
 &VB_wf_1_0xe053a30[0],
 &VB_wf_1_0xe05e640[0],
 &VB_wf_1_0xe02ae10[0],
 &VB_wf_2_0xe006970[0],
 &VB_wf_2_0xe00fb10[0],
 &VB_castle_courtyard_1_0xe02cb30[0],
 &VB_cotmc_1_0xe021140[0],
 &VB_cotmc_1_0xe021c10[0],
 &VB_cotmc_2_0xe004390[0],
 &VB_cotmc_2_0xe004470[0],
 &VB_cotmc_2_0xe004530[0],
 &VB_cotmc_3_0xe005280[0],
 &VB_cotmc_3_0xe009740[0],
 &VB_cotmc_3_0xe0097c0[0],
 &VB_bowser_2_1_0xe005170[0],
};