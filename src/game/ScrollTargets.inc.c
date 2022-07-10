#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_bbh_1_0xe01c0d0[];
extern Vtx VB_bbh_1_0xe01bfe0[];
extern Vtx VB_bbh_1_0xe01bfe0[];
extern Vtx VB_bbh_1_0xe01bfe0[];
extern Vtx VB_bbh_1_0xe01bef0[];
extern Vtx VB_bbh_1_0xe01bef0[];
extern Vtx VB_bbh_1_0xe01c0d0[];
extern Vtx VB_bbh_1_0xe01bfe0[];
extern Vtx VB_bbh_1_0xe01bfe0[];
extern Vtx VB_bbh_1_0xe01bfe0[];
extern Vtx VB_bbh_1_0xe01bef0[];
extern Vtx VB_bbh_1_0xe01bef0[];
extern Vtx VB_bbh_1_0xe015050[];
extern Vtx VB_bbh_1_0xe029960[];
extern Vtx VB_bbh_1_0xe029960[];
extern Vtx VB_bbh_1_0xe012710[];
extern Vtx VB_bbh_1_0xe012710[];
extern Vtx VB_bbh_1_0xe01e0b0[];
extern Vtx VB_ccm_1_0xe020bf0[];
extern Vtx VB_ccm_1_0xe020290[];
extern Vtx VB_hmc_1_0xe024eb0[];
extern Vtx VB_hmc_1_0xe01a140[];
extern Vtx VB_hmc_1_0xe017350[];
extern Vtx VB_hmc_1_0xe011590[];
extern Vtx VB_hmc_1_0xe01cd50[];
extern Vtx VB_hmc_1_0xe011c20[];
extern Vtx VB_hmc_1_0xe012b20[];
extern Vtx VB_ssl_1_0xe011b50[];
extern Vtx VB_ssl_1_0xe019260[];
extern Vtx VB_ssl_1_0xe00cba0[];
extern Vtx VB_ssl_1_0xe0151b0[];
extern Vtx VB_bob_1_0xe04ef40[];
extern Vtx VB_bob_1_0xe04ef40[];
extern Vtx VB_castle_grounds_1_0xe02ac60[];
extern Vtx VB_bitfs_1_0xe015b50[];
extern Vtx VB_bitfs_1_0xe01c360[];
extern Vtx VB_bitfs_1_0xe01c270[];
extern Vtx VB_bitfs_1_0xe015b50[];
extern Vtx VB_bitfs_1_0xe0161e0[];
extern Vtx VB_bitfs_1_0xe00cfa0[];
extern Vtx VB_bitfs_1_0xe00cfa0[];
extern Vtx VB_sa_1_0xe0393e0[];
extern Vtx VB_sa_1_0xe057020[];
extern Vtx VB_sa_1_0xe015260[];
extern Vtx VB_sa_1_0xe0200c0[];
extern Vtx VB_sa_1_0xe057020[];
extern Vtx VB_sa_1_0xe014900[];
extern Vtx VB_sa_1_0xe043bb0[];
extern Vtx VB_sa_1_0xe016e80[];
extern Vtx VB_sa_1_0xe0585b0[];
extern Vtx VB_sa_1_0xe0585b0[];
extern Vtx VB_bits_1_0xe004e90[];
extern Vtx VB_bits_1_0xe004e90[];
extern Vtx VB_bits_1_0xe004e90[];
extern Vtx VB_bits_1_0xe004e90[];
extern Vtx VB_bits_1_0xe004da0[];
extern Vtx VB_bits_1_0xe004da0[];
extern Vtx VB_bits_1_0xe003810[];
extern Vtx VB_bits_1_0xe003810[];
extern Vtx VB_lll_1_0xe03b670[];
extern Vtx VB_lll_1_0xe0535e0[];
extern Vtx VB_lll_1_0xe04cbf0[];
extern Vtx VB_lll_1_0xe033ab0[];
extern Vtx VB_lll_1_0xe016320[];
extern Vtx VB_lll_1_0xe054e40[];
extern Vtx VB_lll_1_0xe01e2a0[];
extern Vtx VB_lll_1_0xe052410[];
extern Vtx VB_lll_1_0xe0464d0[];
extern Vtx VB_lll_1_0xe047790[];
extern Vtx VB_wf_1_0xe0343b0[];
extern Vtx VB_wf_1_0xe03bd90[];
extern Vtx VB_pss_1_0xe040aa0[];
extern Vtx VB_pss_1_0xe03a290[];
extern Vtx VB_pss_1_0xe0175b0[];
extern Vtx VB_pss_1_0xe0175b0[];
extern Vtx VB_pss_1_0xe015d50[];
extern Vtx VB_pss_1_0xe015b70[];
extern Vtx VB_pss_1_0xe015e40[];
extern Vtx VB_pss_1_0xe015a80[];
extern Vtx VB_pss_1_0xe016020[];
extern Vtx VB_pss_1_0xe0191d0[];
extern Vtx VB_pss_1_0xe03ab00[];
extern Vtx VB_pss_1_0xe03ab00[];
// extern Vtx VB_bowser_1_1_0xe004d50[];
extern Vtx VB_bowser_1_1_0xe0049f0[];
extern Vtx VB_bowser_1_1_0xe0049f0[];
extern Vtx VB_bowser_1_1_0xe0049f0[];
// extern Vtx VB_bowser_1_1_0xe004d50[];
extern Vtx VB_bowser_1_1_0xe0049f0[];
extern Vtx VB_bowser_1_1_0xe0049f0[];
extern Vtx VB_bowser_1_1_0xe0049f0[];
Vtx *ScrollTargets[]={
 &VB_bbh_1_0xe01c0d0[3],
 &VB_bbh_1_0xe01bfe0[12],
 &VB_bbh_1_0xe01bfe0[6],
 &VB_bbh_1_0xe01bfe0[0],
 &VB_bbh_1_0xe01bef0[9],
 &VB_bbh_1_0xe01bef0[3],
 &VB_bbh_1_0xe01c0d0[3],
 &VB_bbh_1_0xe01bfe0[12],
 &VB_bbh_1_0xe01bfe0[6],
 &VB_bbh_1_0xe01bfe0[0],
 &VB_bbh_1_0xe01bef0[9],
 &VB_bbh_1_0xe01bef0[3],
 &VB_bbh_1_0xe015050[9],
 &VB_bbh_1_0xe029960[0],
 &VB_bbh_1_0xe029960[0],
 &VB_bbh_1_0xe012710[6],
 &VB_bbh_1_0xe012710[6],
 &VB_bbh_1_0xe01e0b0[0],
 &VB_ccm_1_0xe020bf0[3],
 &VB_ccm_1_0xe020290[6],
 &VB_hmc_1_0xe024eb0[0],
 &VB_hmc_1_0xe01a140[6],
 &VB_hmc_1_0xe017350[12],
 &VB_hmc_1_0xe011590[6],
 &VB_hmc_1_0xe01cd50[3],
 &VB_hmc_1_0xe011c20[12],
 &VB_hmc_1_0xe012b20[6],
 &VB_ssl_1_0xe011b50[3],
 &VB_ssl_1_0xe019260[12],
 &VB_ssl_1_0xe00cba0[6],
 &VB_ssl_1_0xe0151b0[9],
 &VB_bob_1_0xe04ef40[3],
 &VB_bob_1_0xe04ef40[3],
 &VB_castle_grounds_1_0xe02ac60[3],
 &VB_bitfs_1_0xe015b50[12],
 &VB_bitfs_1_0xe01c360[6],
 &VB_bitfs_1_0xe01c270[9],
 &VB_bitfs_1_0xe015b50[6],
 &VB_bitfs_1_0xe0161e0[9],
 &VB_bitfs_1_0xe00cfa0[0],
 &VB_bitfs_1_0xe00cfa0[0],
 &VB_sa_1_0xe0393e0[6],
 &VB_sa_1_0xe057020[3],
 &VB_sa_1_0xe015260[0],
 &VB_sa_1_0xe0200c0[6],
 &VB_sa_1_0xe057020[12],
 &VB_sa_1_0xe014900[9],
 &VB_sa_1_0xe043bb0[12],
 &VB_sa_1_0xe016e80[9],
 &VB_sa_1_0xe0585b0[9],
 &VB_sa_1_0xe0585b0[9],
 &VB_bits_1_0xe004e90[12],
 &VB_bits_1_0xe004e90[12],
 &VB_bits_1_0xe004e90[6],
 &VB_bits_1_0xe004e90[0],
 &VB_bits_1_0xe004da0[9],
 &VB_bits_1_0xe004da0[3],
 &VB_bits_1_0xe003810[0],
 &VB_bits_1_0xe003810[0],
 &VB_lll_1_0xe03b670[6],
 &VB_lll_1_0xe0535e0[9],
 &VB_lll_1_0xe04cbf0[3],
 &VB_lll_1_0xe033ab0[9],
 &VB_lll_1_0xe016320[0],
 &VB_lll_1_0xe054e40[3],
 &VB_lll_1_0xe01e2a0[6],
 &VB_lll_1_0xe052410[9],
 &VB_lll_1_0xe0464d0[12],
 &VB_lll_1_0xe047790[3],
 &VB_wf_1_0xe0343b0[9],
 &VB_wf_1_0xe03bd90[12],
 &VB_pss_1_0xe040aa0[3],
 &VB_pss_1_0xe03a290[9],
 &VB_pss_1_0xe0175b0[0],
 &VB_pss_1_0xe0175b0[6],
 &VB_pss_1_0xe015d50[6],
 &VB_pss_1_0xe015b70[9],
 &VB_pss_1_0xe015e40[9],
 &VB_pss_1_0xe015a80[0],
 &VB_pss_1_0xe016020[3],
 &VB_pss_1_0xe0191d0[3],
 &VB_pss_1_0xe03ab00[3],
 &VB_pss_1_0xe03ab00[3],
 // &VB_bowser_1_1_0xe004d50[255],
 &VB_bowser_1_1_0xe0049f0[12],
 &VB_bowser_1_1_0xe0049f0[0],
 &VB_bowser_1_1_0xe0049f0[6],
 // &VB_bowser_1_1_0xe004d50[255],
 &VB_bowser_1_1_0xe0049f0[6],
 &VB_bowser_1_1_0xe0049f0[0],
 &VB_bowser_1_1_0xe0049f0[12],
};