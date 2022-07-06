#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_wdw_1_0xe018e50[];
extern Vtx VB_wdw_1_0xe0139f0[];
extern Vtx VB_wdw_1_0xe00cb50[];
extern Vtx VB_wdw_1_0xe00df00[];
extern Vtx VB_wdw_1_0xe00f1c0[];
extern Vtx VB_wdw_1_0xe00f1c0[];
extern Vtx VB_wdw_1_0xe00e860[];
extern Vtx VB_wdw_1_0xe017f50[];
extern Vtx VB_ttc_1_0xe040aa0[];
extern Vtx VB_ttc_1_0xe03f330[];
extern Vtx VB_castle_grounds_1_0xe03ee70[];
extern Vtx VB_bitdw_1_0xe02f850[];
extern Vtx VB_bitdw_1_0xe02f850[];
extern Vtx VB_vcutm_1_0xe008150[];
extern Vtx VB_vcutm_1_0xe008060[];
extern Vtx VB_vcutm_1_0xe008060[];
extern Vtx VB_vcutm_1_0xe007f70[];
extern Vtx VB_sa_1_0xe0295f0[];
extern Vtx VB_sa_1_0xe027d90[];
extern Vtx VB_sa_1_0xe01c4e0[];
extern Vtx VB_sa_1_0xe01cd50[];
extern Vtx VB_sa_1_0xe01cc60[];
extern Vtx VB_sa_1_0xe01c7b0[];
extern Vtx VB_bits_1_0xe0347f0[];
extern Vtx VB_bits_1_0xe0347f0[];
extern Vtx VB_lll_1_0xe04e5f0[];
extern Vtx VB_lll_1_0xe04e5f0[];
extern Vtx VB_ddd_1_0xe083d20[];
extern Vtx VB_ddd_1_0xe083d20[];
extern Vtx VB_castle_courtyard_1_0xe039300[];
extern Vtx VB_castle_courtyard_1_0xe039210[];
extern Vtx VB_pss_1_0xe01e170[];
extern Vtx VB_bowser_1_1_0xe009370[];
extern Vtx VB_bowser_1_1_0xe009370[];
extern Vtx VB_bowser_2_1_0xe009400[];
extern Vtx VB_bowser_2_1_0xe007c90[];
Vtx *ScrollTargets[]={
 &VB_wdw_1_0xe018e50[0],
 &VB_wdw_1_0xe0139f0[12],
 &VB_wdw_1_0xe00cb50[6],
 &VB_wdw_1_0xe00df00[0],
 &VB_wdw_1_0xe00f1c0[0],
 &VB_wdw_1_0xe00f1c0[9],
 &VB_wdw_1_0xe00e860[6],
 &VB_wdw_1_0xe017f50[9],
 &VB_ttc_1_0xe040aa0[12],
 &VB_ttc_1_0xe03f330[6],
 &VB_castle_grounds_1_0xe03ee70[9],
 &VB_bitdw_1_0xe02f850[0],
 &VB_bitdw_1_0xe02f850[0],
 &VB_vcutm_1_0xe008150[255],
 &VB_vcutm_1_0xe008060[9],
 &VB_vcutm_1_0xe008060[3],
 &VB_vcutm_1_0xe007f70[12],
 &VB_sa_1_0xe0295f0[0],
 &VB_sa_1_0xe027d90[9],
 &VB_sa_1_0xe01c4e0[3],
 &VB_sa_1_0xe01cd50[0],
 &VB_sa_1_0xe01cc60[3],
 &VB_sa_1_0xe01c7b0[0],
 &VB_bits_1_0xe0347f0[12],
 &VB_bits_1_0xe0347f0[12],
 &VB_lll_1_0xe04e5f0[6],
 &VB_lll_1_0xe04e5f0[6],
 &VB_ddd_1_0xe083d20[0],
 &VB_ddd_1_0xe083d20[0],
 &VB_castle_courtyard_1_0xe039300[6],
 &VB_castle_courtyard_1_0xe039210[0],
 &VB_pss_1_0xe01e170[3],
 &VB_bowser_1_1_0xe009370[6],
 &VB_bowser_1_1_0xe009370[6],
 &VB_bowser_2_1_0xe009400[12],
 &VB_bowser_2_1_0xe007c90[6],
};