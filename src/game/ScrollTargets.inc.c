#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe038fa0[];
extern Vtx VB_castle_inside_1_0xe038280[];
extern Vtx VB_castle_inside_1_0xe05bb90[];
extern Vtx VB_castle_inside_1_0xe05cb80[];
extern Vtx VB_castle_inside_1_0xe039cc0[];
extern Vtx VB_bob_1_0xe0792d0[];
extern Vtx VB_bob_1_0xe078010[];
extern Vtx VB_bob_1_0xe033910[];
extern Vtx VB_jrb_1_0xe021180[];
extern Vtx VB_castle_grounds_1_0xe013a90[];
extern Vtx VB_castle_grounds_1_0xe013a90[];
extern Vtx VB_castle_grounds_1_0xe00e900[];
extern Vtx VB_vcutm_1_0xe041720[];
extern Vtx VB_vcutm_1_0xe03f380[];
extern Vtx VB_vcutm_1_0xe026240[];
extern Vtx VB_vcutm_1_0xe0248f0[];
extern Vtx VB_vcutm_1_0xe03fec0[];
extern Vtx VB_vcutm_1_0xe03dc10[];
extern Vtx VB_sa_1_0xe002810[];
extern Vtx VB_wf_1_0xe03d4e0[];
extern Vtx VB_pss_1_0xe04f080[];
extern Vtx VB_pss_1_0xe04d910[];
extern Vtx VB_pss_1_0xe04c0b0[];
extern Vtx VB_pss_1_0xe04a940[];
extern Vtx VB_pss_1_0xe049950[];
extern Vtx VB_pss_1_0xe04f080[];
extern Vtx VB_pss_1_0xe04d910[];
extern Vtx VB_pss_1_0xe04c0b0[];
extern Vtx VB_pss_1_0xe04a940[];
extern Vtx VB_totwc_1_0xe013d00[];
extern Vtx VB_totwc_1_0xe013d00[];
extern Vtx VB_totwc_1_0xe012590[];
extern Vtx VB_totwc_1_0xe012590[];
extern Vtx VB_wmotr_1_0xe025200[];
extern Vtx VB_wmotr_1_0xe0239a0[];
extern Vtx VB_wmotr_1_0xe010260[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe038fa0[0],
 &VB_castle_inside_1_0xe038280[0],
 &VB_castle_inside_1_0xe05bb90[6],
 &VB_castle_inside_1_0xe05cb80[3],
 &VB_castle_inside_1_0xe039cc0[0],
 &VB_bob_1_0xe0792d0[0],
 &VB_bob_1_0xe078010[0],
 &VB_bob_1_0xe033910[9],
 &VB_jrb_1_0xe021180[9],
 &VB_castle_grounds_1_0xe013a90[0],
 &VB_castle_grounds_1_0xe013a90[0],
 &VB_castle_grounds_1_0xe00e900[6],
 &VB_vcutm_1_0xe041720[3],
 &VB_vcutm_1_0xe03f380[6],
 &VB_vcutm_1_0xe026240[0],
 &VB_vcutm_1_0xe0248f0[3],
 &VB_vcutm_1_0xe03fec0[12],
 &VB_vcutm_1_0xe03dc10[0],
 &VB_sa_1_0xe002810[0],
 &VB_wf_1_0xe03d4e0[0],
 &VB_pss_1_0xe04f080[6],
 &VB_pss_1_0xe04d910[0],
 &VB_pss_1_0xe04c0b0[9],
 &VB_pss_1_0xe04a940[3],
 &VB_pss_1_0xe049950[6],
 &VB_pss_1_0xe04f080[6],
 &VB_pss_1_0xe04d910[0],
 &VB_pss_1_0xe04c0b0[9],
 &VB_pss_1_0xe04a940[3],
 &VB_totwc_1_0xe013d00[6],
 &VB_totwc_1_0xe013d00[6],
 &VB_totwc_1_0xe012590[0],
 &VB_totwc_1_0xe012590[0],
 &VB_wmotr_1_0xe025200[0],
 &VB_wmotr_1_0xe0239a0[9],
 &VB_wmotr_1_0xe010260[9],
};