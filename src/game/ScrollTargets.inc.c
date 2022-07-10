#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
extern Vtx VB_castle_inside_1_0xe012050[];
extern Vtx VB_castle_inside_1_0xe014120[];
extern Vtx VB_castle_inside_1_0xe012e60[];
extern Vtx VB_castle_inside_1_0xe0165b0[];
extern Vtx VB_castle_inside_1_0xe020420[];
extern Vtx VB_castle_inside_2_0xe035ad0[];
extern Vtx VB_castle_inside_2_0xe0378d0[];
extern Vtx VB_castle_inside_2_0xe036610[];
extern Vtx VB_castle_inside_2_0xe042dc0[];
extern Vtx VB_castle_inside_2_0xe042910[];
extern Vtx VB_castle_inside_3_0xe062d30[];
extern Vtx VB_castle_inside_3_0xe0630f0[];
extern Vtx VB_castle_inside_3_0xe063c30[];
extern Vtx VB_castle_inside_3_0xe064ef0[];
extern Vtx VB_castle_inside_3_0xe0706b0[];
extern Vtx VB_castle_inside_3_0xe0703e0[];
extern Vtx VB_castle_inside_4_0xe092800[];
extern Vtx VB_castle_inside_4_0xe093160[];
extern Vtx VB_castle_inside_4_0xe08bf00[];
extern Vtx VB_castle_inside_4_0xe08ac40[];
extern Vtx VB_castle_inside_4_0xe0a4c80[];
extern Vtx VB_castle_inside_4_0xe0a48c0[];
extern Vtx VB_castle_inside_5_0xe0d2910[];
extern Vtx VB_castle_inside_5_0xe0cf3a0[];
extern Vtx VB_castle_inside_5_0xe0c7600[];
extern Vtx VB_castle_inside_5_0xe0c6340[];
extern Vtx VB_castle_inside_5_0xe0d3ea0[];
extern Vtx VB_castle_inside_5_0xe0d4260[];
extern Vtx VB_castle_inside_6_0xe0eb730[];
extern Vtx VB_castle_inside_6_0xe0ea470[];
extern Vtx VB_castle_inside_6_0xe0f25d0[];
extern Vtx VB_castle_inside_6_0xe0f2a80[];
extern Vtx VB_bbh_1_0xe07cde0[];
extern Vtx VB_bbh_1_0xe06c940[];
extern Vtx VB_bbh_1_0xe06b680[];
extern Vtx VB_bbh_1_0xe06a3c0[];
extern Vtx VB_bbh_1_0xe069100[];
extern Vtx VB_bbh_1_0xe067e40[];
extern Vtx VB_bbh_1_0xe033820[];
extern Vtx VB_bbh_1_0xe07a1d0[];
extern Vtx VB_bbh_2_0xe0c61f0[];
extern Vtx VB_bbh_3_0xe105400[];
extern Vtx VB_bbh_3_0xe10b760[];
extern Vtx VB_ccm_1_0xe082460[];
extern Vtx VB_ccm_1_0xe081ce0[];
extern Vtx VB_ccm_1_0xe0389f0[];
extern Vtx VB_ccm_1_0xe0a0190[];
extern Vtx VB_ccm_1_0xe09eb10[];
extern Vtx VB_ccm_2_0xe0e2cc0[];
extern Vtx VB_ccm_2_0xe0e1a00[];
extern Vtx VB_ccm_3_0xe113100[];
extern Vtx VB_ccm_3_0xe119550[];
extern Vtx VB_ccm_3_0xe118290[];
extern Vtx VB_ccm_4_0xe1306e0[];
extern Vtx VB_ccm_4_0xe12f420[];
extern Vtx VB_ccm_4_0xe12cdb0[];
extern Vtx VB_hmc_1_0xe0936f0[];
extern Vtx VB_hmc_1_0xe037800[];
extern Vtx VB_hmc_1_0xe036540[];
extern Vtx VB_hmc_1_0xe035280[];
extern Vtx VB_hmc_1_0xe033fc0[];
extern Vtx VB_hmc_1_0xe06cd20[];
extern Vtx VB_hmc_1_0xe06ba60[];
extern Vtx VB_hmc_1_0xe06b880[];
extern Vtx VB_hmc_1_0xe043ce0[];
extern Vtx VB_hmc_1_0xe092070[];
extern Vtx VB_hmc_2_0xe0f3170[];
extern Vtx VB_hmc_2_0xe0f2450[];
extern Vtx VB_hmc_2_0xe0f1640[];
extern Vtx VB_hmc_2_0xe0f0920[];
extern Vtx VB_hmc_2_0xe0efb10[];
extern Vtx VB_hmc_2_0xe0f3e90[];
extern Vtx VB_hmc_2_0xe0e4ad0[];
extern Vtx VB_hmc_2_0xe0da030[];
extern Vtx VB_hmc_3_0xe10cf70[];
extern Vtx VB_hmc_3_0xe10bcb0[];
extern Vtx VB_hmc_3_0xe136dc0[];
extern Vtx VB_hmc_3_0xe135b00[];
extern Vtx VB_ssl_1_0xe035e80[];
extern Vtx VB_ssl_1_0xe034800[];
extern Vtx VB_ssl_1_0xe033540[];
extern Vtx VB_ssl_1_0xe05f640[];
extern Vtx VB_ssl_1_0xe05e380[];
extern Vtx VB_ssl_1_0xe061710[];
extern Vtx VB_ssl_1_0xe037f50[];
extern Vtx VB_ssl_1_0xe08bec0[];
extern Vtx VB_ssl_2_0xe0cedf0[];
extern Vtx VB_ssl_2_0xe0cdb30[];
extern Vtx VB_ssl_2_0xe0cc870[];
extern Vtx VB_ssl_2_0xe0cb5b0[];
extern Vtx VB_ssl_2_0xe0ca2f0[];
extern Vtx VB_ssl_2_0xe0c9030[];
extern Vtx VB_ssl_2_0xe0c87c0[];
extern Vtx VB_ssl_2_0xe0c7500[];
extern Vtx VB_ssl_2_0xe0c5f70[];
extern Vtx VB_ssl_3_0xe0e9540[];
extern Vtx VB_ssl_3_0xe0e8280[];
extern Vtx VB_ssl_3_0xe0e6fc0[];
extern Vtx VB_ssl_3_0xe0ee6d0[];
extern Vtx VB_ssl_3_0xe0ed410[];
extern Vtx VB_ssl_3_0xe0f3fe0[];
extern Vtx VB_ssl_4_0xe10de10[];
extern Vtx VB_ssl_4_0xe10de10[];
extern Vtx VB_ssl_4_0xe10eef0[];
extern Vtx VB_bob_1_0xe07eed0[];
extern Vtx VB_bob_1_0xe057330[];
extern Vtx VB_bob_1_0xe07af10[];
extern Vtx VB_bob_1_0xe07d850[];
extern Vtx VB_bob_2_0xe0e9a40[];
extern Vtx VB_bob_2_0xe0eb930[];
extern Vtx VB_sl_1_0xe09dd30[];
extern Vtx VB_sl_1_0xe09c5c0[];
extern Vtx VB_sl_1_0xe09b300[];
extern Vtx VB_sl_1_0xe09a040[];
extern Vtx VB_sl_1_0xe0381b0[];
extern Vtx VB_sl_1_0xe037580[];
extern Vtx VB_sl_1_0xe036860[];
extern Vtx VB_sl_1_0xe0362c0[];
extern Vtx VB_sl_1_0xe08a320[];
extern Vtx VB_sl_1_0xe0a21a0[];
extern Vtx VB_sl_1_0xe0a0ee0[];
extern Vtx VB_sl_1_0xe045860[];
extern Vtx VB_sl_1_0xe039290[];
extern Vtx VB_sl_1_0xe08b6d0[];
extern Vtx VB_sl_2_0xe10a260[];
extern Vtx VB_sl_2_0xe108fa0[];
extern Vtx VB_sl_2_0xe104860[];
extern Vtx VB_sl_2_0xe10c8d0[];
extern Vtx VB_sl_2_0xe10dd70[];
extern Vtx VB_sl_2_0xe108820[];
extern Vtx VB_sl_2_0xe108550[];
extern Vtx VB_sl_2_0xe108460[];
extern Vtx VB_wdw_1_0xe05abf0[];
extern Vtx VB_wdw_1_0xe059930[];
extern Vtx VB_wdw_1_0xe07be90[];
extern Vtx VB_wdw_1_0xe07abd0[];
extern Vtx VB_wdw_1_0xe079910[];
extern Vtx VB_wdw_1_0xe088910[];
extern Vtx VB_wdw_1_0xe087290[];
extern Vtx VB_wdw_1_0xe079730[];
extern Vtx VB_wdw_1_0xe02ced0[];
extern Vtx VB_wdw_1_0xe02b850[];
extern Vtx VB_wdw_1_0xe032240[];
extern Vtx VB_wdw_1_0xe0357b0[];
extern Vtx VB_wdw_1_0xe0852b0[];
extern Vtx VB_wdw_2_0xe10b590[];
extern Vtx VB_wdw_2_0xe107210[];
extern Vtx VB_wdw_2_0xe1084d0[];
extern Vtx VB_wdw_2_0xe0fbd20[];
extern Vtx VB_wdw_2_0xe108d40[];
extern Vtx VB_jrb_1_0xe094750[];
extern Vtx VB_jrb_1_0xe0b4910[];
extern Vtx VB_jrb_1_0xe0b3290[];
extern Vtx VB_jrb_1_0xe0b1c10[];
extern Vtx VB_jrb_1_0xe0b0590[];
extern Vtx VB_jrb_1_0xe03aa20[];
extern Vtx VB_jrb_1_0xe0b7ca0[];
extern Vtx VB_jrb_1_0xe051310[];
extern Vtx VB_jrb_1_0xe050050[];
extern Vtx VB_jrb_1_0xe03ca00[];
extern Vtx VB_jrb_1_0xe05bea0[];
extern Vtx VB_jrb_1_0xe0a2c10[];
extern Vtx VB_jrb_2_0xe120f70[];
extern Vtx VB_jrb_2_0xe108e20[];
extern Vtx VB_jrb_2_0xe1219c0[];
extern Vtx VB_thi_1_0xe00fbf0[];
extern Vtx VB_thi_1_0xe0128f0[];
extern Vtx VB_thi_1_0xe013520[];
extern Vtx VB_thi_1_0xe013610[];
extern Vtx VB_thi_2_0xe089fa0[];
extern Vtx VB_thi_2_0xe07fb90[];
extern Vtx VB_thi_2_0xe07e8d0[];
extern Vtx VB_thi_2_0xe07d610[];
extern Vtx VB_thi_2_0xe0840f0[];
extern Vtx VB_thi_2_0xe082a70[];
extern Vtx VB_thi_2_0xe0813f0[];
extern Vtx VB_thi_2_0xe088290[];
extern Vtx VB_thi_2_0xe086fd0[];
extern Vtx VB_thi_2_0xe085d10[];
extern Vtx VB_thi_2_0xe062130[];
extern Vtx VB_thi_2_0xe07cbc0[];
extern Vtx VB_thi_2_0xe04edb0[];
extern Vtx VB_thi_2_0xe048c30[];
extern Vtx VB_thi_3_0xe112830[];
extern Vtx VB_thi_3_0xe111570[];
extern Vtx VB_thi_3_0xe110580[];
extern Vtx VB_thi_3_0xe10f2c0[];
extern Vtx VB_thi_3_0xe1169d0[];
extern Vtx VB_thi_3_0xe115710[];
extern Vtx VB_thi_3_0xe0d1d30[];
extern Vtx VB_thi_3_0xe10b7b0[];
extern Vtx VB_ttc_1_0xe01faa0[];
extern Vtx VB_ttc_1_0xe052fe0[];
extern Vtx VB_ttc_1_0xe053670[];
extern Vtx VB_ttc_1_0xe05fa60[];
extern Vtx VB_ttc_1_0xe058bc0[];
extern Vtx VB_ttc_2_0xe09e580[];
extern Vtx VB_ttc_2_0xe091bf0[];
extern Vtx VB_ttc_2_0xe09cff0[];
extern Vtx VB_ttc_2_0xe09de00[];
extern Vtx VB_ttc_2_0xe09e1c0[];
extern Vtx VB_ttc_3_0xe0c13a0[];
extern Vtx VB_ttc_3_0xe0bf780[];
extern Vtx VB_ttc_3_0xe0c0590[];
extern Vtx VB_ttc_3_0xe0bd2f0[];
extern Vtx VB_ttc_3_0xe0be5b0[];
extern Vtx VB_ttc_3_0xe0bc120[];
extern Vtx VB_ttc_3_0xe0bae60[];
extern Vtx VB_ttc_3_0xe0ba5f0[];
extern Vtx VB_ttc_4_0xe0d66d0[];
extern Vtx VB_ttc_4_0xe0d1db0[];
extern Vtx VB_ttc_5_0xe0f1c30[];
extern Vtx VB_ttc_5_0xe0ee990[];
extern Vtx VB_ttc_5_0xe0ee8a0[];
extern Vtx VB_ttc_6_0xe125430[];
extern Vtx VB_ttc_6_0xe1111b0[];
extern Vtx VB_ttc_6_0xe124440[];
extern Vtx VB_ttc_6_0xe1266f0[];
extern Vtx VB_rr_1_0xe012d00[];
extern Vtx VB_rr_1_0xe012c10[];
extern Vtx VB_rr_1_0xe012c10[];
extern Vtx VB_rr_1_0xe012850[];
extern Vtx VB_rr_2_0xe0599d0[];
extern Vtx VB_rr_2_0xe0598e0[];
extern Vtx VB_rr_2_0xe0597f0[];
extern Vtx VB_rr_2_0xe059430[];
extern Vtx VB_rr_3_0xe0a2640[];
extern Vtx VB_rr_3_0xe0a2550[];
extern Vtx VB_rr_3_0xe0a2460[];
extern Vtx VB_rr_3_0xe0a20a0[];
extern Vtx VB_rr_4_0xe0e9b30[];
extern Vtx VB_rr_4_0xe0e9a40[];
extern Vtx VB_rr_4_0xe0e9950[];
extern Vtx VB_rr_4_0xe0e9590[];
extern Vtx VB_castle_grounds_1_0xe0293c0[];
extern Vtx VB_castle_grounds_1_0xe058df0[];
extern Vtx VB_bitdw_1_0xe079f10[];
extern Vtx VB_bitdw_1_0xe078c50[];
extern Vtx VB_bitdw_1_0xe077990[];
extern Vtx VB_bitdw_1_0xe07a960[];
extern Vtx VB_bitdw_1_0xe048d70[];
extern Vtx VB_bitdw_1_0xe046e80[];
extern Vtx VB_bitdw_1_0xe046070[];
extern Vtx VB_bitfs_2_0xe041090[];
extern Vtx VB_bitfs_3_0xe066050[];
extern Vtx VB_bitfs_4_0xe09dc90[];
extern Vtx VB_bitfs_5_0xe0d2660[];
extern Vtx VB_bitfs_6_0xe0f4e20[];
extern Vtx VB_bitfs_6_0xe0f1d60[];
extern Vtx VB_sa_1_0xe024ab0[];
extern Vtx VB_sa_1_0xe022620[];
extern Vtx VB_sa_1_0xe021360[];
extern Vtx VB_lll_1_0xe099400[];
extern Vtx VB_lll_1_0xe084550[];
extern Vtx VB_lll_1_0xe083290[];
extern Vtx VB_lll_1_0xe081fd0[];
extern Vtx VB_lll_1_0xe080d10[];
extern Vtx VB_lll_1_0xe088420[];
extern Vtx VB_lll_1_0xe086da0[];
extern Vtx VB_lll_1_0xe085720[];
extern Vtx VB_lll_1_0xe07fa50[];
extern Vtx VB_lll_1_0xe07e790[];
extern Vtx VB_lll_1_0xe07d4d0[];
extern Vtx VB_lll_1_0xe044c20[];
extern Vtx VB_lll_1_0xe043960[];
extern Vtx VB_lll_1_0xe098500[];
extern Vtx VB_lll_1_0xe079600[];
extern Vtx VB_lll_1_0xe079ab0[];
extern Vtx VB_lll_2_0xe0ed730[];
extern Vtx VB_lll_2_0xe0e4a90[];
extern Vtx VB_lll_2_0xe0e37d0[];
extern Vtx VB_lll_2_0xe0ec830[];
extern Vtx VB_ddd_1_0xe01bfd0[];
extern Vtx VB_ddd_1_0xe096910[];
extern Vtx VB_ddd_2_0xe0eae60[];
extern Vtx VB_wf_1_0xe036910[];
extern Vtx VB_wf_1_0xe033670[];
extern Vtx VB_wf_1_0xe057ac0[];
extern Vtx VB_wf_2_0xe08c9f0[];
extern Vtx VB_wf_2_0xe08c9f0[];
extern Vtx VB_wf_2_0xe08f510[];
extern Vtx VB_wf_3_0xe0ab190[];
extern Vtx VB_wf_3_0xe0bcf80[];
extern Vtx VB_castle_courtyard_1_0xe0cdfc0[];
extern Vtx VB_castle_courtyard_1_0xe0cdcf0[];
extern Vtx VB_castle_courtyard_1_0xe080680[];
extern Vtx VB_castle_courtyard_1_0xe09d000[];
extern Vtx VB_castle_courtyard_1_0xe0699d0[];
extern Vtx VB_castle_courtyard_1_0xe0550c0[];
extern Vtx VB_castle_courtyard_1_0xe056b00[];
extern Vtx VB_castle_courtyard_1_0xe058180[];
extern Vtx VB_castle_courtyard_1_0xe09d960[];
extern Vtx VB_castle_courtyard_1_0xe0a7c80[];
extern Vtx VB_castle_courtyard_1_0xe0a67e0[];
extern Vtx VB_castle_courtyard_1_0xe0a5250[];
// extern Vtx VB_bowser_1_1_0xe020ad0[];
extern Vtx VB_bowser_1_1_0xe0209b0[];
extern Vtx VB_wmotr_1_0xe021340[];
extern Vtx VB_wmotr_1_0xe020080[];
extern Vtx VB_wmotr_1_0xe023c80[];
extern Vtx VB_ttm_1_0xe052d90[];
extern Vtx VB_ttm_1_0xe051ad0[];
extern Vtx VB_ttm_1_0xe078680[];
extern Vtx VB_ttm_1_0xe02ce10[];
extern Vtx VB_ttm_1_0xe02bb50[];
extern Vtx VB_ttm_1_0xe02a890[];
extern Vtx VB_ttm_1_0xe0295d0[];
extern Vtx VB_ttm_1_0xe07eda0[];
extern Vtx VB_ttm_1_0xe078a40[];
extern Vtx VB_ttm_1_0xe078860[];
extern Vtx VB_ttm_1_0xe033bc0[];
extern Vtx VB_ttm_2_0xe0dc760[];
extern Vtx VB_ttm_2_0xe0dd660[];
extern Vtx VB_ttm_2_0xe0d93d0[];
extern Vtx VB_ttm_2_0xe0d84d0[];
extern Vtx VB_ttm_2_0xe0d7210[];
extern Vtx VB_ttm_3_0xe104e90[];
extern Vtx VB_ttm_3_0xe1076e0[];
Vtx *ScrollTargets[]={
 &VB_castle_inside_1_0xe012050[0],
 &VB_castle_inside_1_0xe014120[3],
 &VB_castle_inside_1_0xe012e60[3],
 &VB_castle_inside_1_0xe0165b0[6],
 &VB_castle_inside_1_0xe020420[0],
 &VB_castle_inside_2_0xe035ad0[0],
 &VB_castle_inside_2_0xe0378d0[0],
 &VB_castle_inside_2_0xe036610[0],
 &VB_castle_inside_2_0xe042dc0[6],
 &VB_castle_inside_2_0xe042910[9],
 &VB_castle_inside_3_0xe062d30[9],
 &VB_castle_inside_3_0xe0630f0[12],
 &VB_castle_inside_3_0xe063c30[12],
 &VB_castle_inside_3_0xe064ef0[12],
 &VB_castle_inside_3_0xe0706b0[3],
 &VB_castle_inside_3_0xe0703e0[0],
 &VB_castle_inside_4_0xe092800[6],
 &VB_castle_inside_4_0xe093160[0],
 &VB_castle_inside_4_0xe08bf00[0],
 &VB_castle_inside_4_0xe08ac40[0],
 &VB_castle_inside_4_0xe0a4c80[0],
 &VB_castle_inside_4_0xe0a48c0[12],
 &VB_castle_inside_5_0xe0d2910[9],
 &VB_castle_inside_5_0xe0cf3a0[0],
 &VB_castle_inside_5_0xe0c7600[12],
 &VB_castle_inside_5_0xe0c6340[12],
 &VB_castle_inside_5_0xe0d3ea0[0],
 &VB_castle_inside_5_0xe0d4260[12],
 &VB_castle_inside_6_0xe0eb730[0],
 &VB_castle_inside_6_0xe0ea470[0],
 &VB_castle_inside_6_0xe0f25d0[6],
 &VB_castle_inside_6_0xe0f2a80[3],
 &VB_bbh_1_0xe07cde0[9],
 &VB_bbh_1_0xe06c940[6],
 &VB_bbh_1_0xe06b680[6],
 &VB_bbh_1_0xe06a3c0[6],
 &VB_bbh_1_0xe069100[6],
 &VB_bbh_1_0xe067e40[6],
 &VB_bbh_1_0xe033820[6],
 &VB_bbh_1_0xe07a1d0[9],
 &VB_bbh_2_0xe0c61f0[3],
 &VB_bbh_3_0xe105400[9],
 &VB_bbh_3_0xe10b760[6],
 &VB_ccm_1_0xe082460[12],
 &VB_ccm_1_0xe081ce0[12],
 &VB_ccm_1_0xe0389f0[0],
 &VB_ccm_1_0xe0a0190[9],
 &VB_ccm_1_0xe09eb10[9],
 &VB_ccm_2_0xe0e2cc0[9],
 &VB_ccm_2_0xe0e1a00[9],
 &VB_ccm_3_0xe113100[12],
 &VB_ccm_3_0xe119550[9],
 &VB_ccm_3_0xe118290[9],
 &VB_ccm_4_0xe1306e0[12],
 &VB_ccm_4_0xe12f420[12],
 &VB_ccm_4_0xe12cdb0[9],
 &VB_hmc_1_0xe0936f0[12],
 &VB_hmc_1_0xe037800[6],
 &VB_hmc_1_0xe036540[6],
 &VB_hmc_1_0xe035280[6],
 &VB_hmc_1_0xe033fc0[6],
 &VB_hmc_1_0xe06cd20[6],
 &VB_hmc_1_0xe06ba60[6],
 &VB_hmc_1_0xe06b880[0],
 &VB_hmc_1_0xe043ce0[9],
 &VB_hmc_1_0xe092070[0],
 &VB_hmc_2_0xe0f3170[6],
 &VB_hmc_2_0xe0f2450[0],
 &VB_hmc_2_0xe0f1640[9],
 &VB_hmc_2_0xe0f0920[3],
 &VB_hmc_2_0xe0efb10[12],
 &VB_hmc_2_0xe0f3e90[12],
 &VB_hmc_2_0xe0e4ad0[6],
 &VB_hmc_2_0xe0da030[12],
 &VB_hmc_3_0xe10cf70[9],
 &VB_hmc_3_0xe10bcb0[9],
 &VB_hmc_3_0xe136dc0[12],
 &VB_hmc_3_0xe135b00[12],
 &VB_ssl_1_0xe035e80[6],
 &VB_ssl_1_0xe034800[0],
 &VB_ssl_1_0xe033540[0],
 &VB_ssl_1_0xe05f640[3],
 &VB_ssl_1_0xe05e380[3],
 &VB_ssl_1_0xe061710[3],
 &VB_ssl_1_0xe037f50[3],
 &VB_ssl_1_0xe08bec0[9],
 &VB_ssl_2_0xe0cedf0[3],
 &VB_ssl_2_0xe0cdb30[3],
 &VB_ssl_2_0xe0cc870[3],
 &VB_ssl_2_0xe0cb5b0[3],
 &VB_ssl_2_0xe0ca2f0[3],
 &VB_ssl_2_0xe0c9030[3],
 &VB_ssl_2_0xe0c87c0[12],
 &VB_ssl_2_0xe0c7500[12],
 &VB_ssl_2_0xe0c5f70[6],
 &VB_ssl_3_0xe0e9540[3],
 &VB_ssl_3_0xe0e8280[3],
 &VB_ssl_3_0xe0e6fc0[3],
 &VB_ssl_3_0xe0ee6d0[6],
 &VB_ssl_3_0xe0ed410[6],
 &VB_ssl_3_0xe0f3fe0[12],
 &VB_ssl_4_0xe10de10[12],
 &VB_ssl_4_0xe10de10[12],
 &VB_ssl_4_0xe10eef0[9],
 &VB_bob_1_0xe07eed0[6],
 &VB_bob_1_0xe057330[3],
 &VB_bob_1_0xe07af10[12],
 &VB_bob_1_0xe07d850[6],
 &VB_bob_2_0xe0e9a40[9],
 &VB_bob_2_0xe0eb930[0],
 &VB_sl_1_0xe09dd30[3],
 &VB_sl_1_0xe09c5c0[6],
 &VB_sl_1_0xe09b300[6],
 &VB_sl_1_0xe09a040[6],
 &VB_sl_1_0xe0381b0[12],
 &VB_sl_1_0xe037580[3],
 &VB_sl_1_0xe036860[9],
 &VB_sl_1_0xe0362c0[3],
 &VB_sl_1_0xe08a320[6],
 &VB_sl_1_0xe0a21a0[0],
 &VB_sl_1_0xe0a0ee0[0],
 &VB_sl_1_0xe045860[0],
 &VB_sl_1_0xe039290[6],
 &VB_sl_1_0xe08b6d0[9],
 &VB_sl_2_0xe10a260[3],
 &VB_sl_2_0xe108fa0[3],
 &VB_sl_2_0xe104860[0],
 &VB_sl_2_0xe10c8d0[6],
 &VB_sl_2_0xe10dd70[6],
 &VB_sl_2_0xe108820[9],
 &VB_sl_2_0xe108550[6],
 &VB_sl_2_0xe108460[9],
 &VB_wdw_1_0xe05abf0[3],
 &VB_wdw_1_0xe059930[3],
 &VB_wdw_1_0xe07be90[0],
 &VB_wdw_1_0xe07abd0[0],
 &VB_wdw_1_0xe079910[0],
 &VB_wdw_1_0xe088910[12],
 &VB_wdw_1_0xe087290[12],
 &VB_wdw_1_0xe079730[6],
 &VB_wdw_1_0xe02ced0[0],
 &VB_wdw_1_0xe02b850[0],
 &VB_wdw_1_0xe032240[9],
 &VB_wdw_1_0xe0357b0[0],
 &VB_wdw_1_0xe0852b0[12],
 &VB_wdw_2_0xe10b590[9],
 &VB_wdw_2_0xe107210[3],
 &VB_wdw_2_0xe1084d0[3],
 &VB_wdw_2_0xe0fbd20[12],
 &VB_wdw_2_0xe108d40[0],
 &VB_jrb_1_0xe094750[6],
 &VB_jrb_1_0xe0b4910[3],
 &VB_jrb_1_0xe0b3290[3],
 &VB_jrb_1_0xe0b1c10[3],
 &VB_jrb_1_0xe0b0590[3],
 &VB_jrb_1_0xe03aa20[6],
 &VB_jrb_1_0xe0b7ca0[6],
 &VB_jrb_1_0xe051310[3],
 &VB_jrb_1_0xe050050[3],
 &VB_jrb_1_0xe03ca00[12],
 &VB_jrb_1_0xe05bea0[0],
 &VB_jrb_1_0xe0a2c10[9],
 &VB_jrb_2_0xe120f70[6],
 &VB_jrb_2_0xe108e20[9],
 &VB_jrb_2_0xe1219c0[3],
 &VB_thi_1_0xe00fbf0[6],
 &VB_thi_1_0xe0128f0[0],
 &VB_thi_1_0xe013520[9],
 &VB_thi_1_0xe013610[6],
 &VB_thi_2_0xe089fa0[9],
 &VB_thi_2_0xe07fb90[6],
 &VB_thi_2_0xe07e8d0[6],
 &VB_thi_2_0xe07d610[6],
 &VB_thi_2_0xe0840f0[12],
 &VB_thi_2_0xe082a70[12],
 &VB_thi_2_0xe0813f0[12],
 &VB_thi_2_0xe088290[6],
 &VB_thi_2_0xe086fd0[6],
 &VB_thi_2_0xe085d10[6],
 &VB_thi_2_0xe062130[6],
 &VB_thi_2_0xe07cbc0[3],
 &VB_thi_2_0xe04edb0[0],
 &VB_thi_2_0xe048c30[12],
 &VB_thi_3_0xe112830[0],
 &VB_thi_3_0xe111570[0],
 &VB_thi_3_0xe110580[3],
 &VB_thi_3_0xe10f2c0[3],
 &VB_thi_3_0xe1169d0[6],
 &VB_thi_3_0xe115710[6],
 &VB_thi_3_0xe0d1d30[6],
 &VB_thi_3_0xe10b7b0[0],
 &VB_ttc_1_0xe01faa0[3],
 &VB_ttc_1_0xe052fe0[9],
 &VB_ttc_1_0xe053670[0],
 &VB_ttc_1_0xe05fa60[0],
 &VB_ttc_1_0xe058bc0[9],
 &VB_ttc_2_0xe09e580[3],
 &VB_ttc_2_0xe091bf0[0],
 &VB_ttc_2_0xe09cff0[0],
 &VB_ttc_2_0xe09de00[9],
 &VB_ttc_2_0xe09e1c0[9],
 &VB_ttc_3_0xe0c13a0[12],
 &VB_ttc_3_0xe0bf780[6],
 &VB_ttc_3_0xe0c0590[9],
 &VB_ttc_3_0xe0bd2f0[3],
 &VB_ttc_3_0xe0be5b0[3],
 &VB_ttc_3_0xe0bc120[0],
 &VB_ttc_3_0xe0bae60[0],
 &VB_ttc_3_0xe0ba5f0[12],
 &VB_ttc_4_0xe0d66d0[6],
 &VB_ttc_4_0xe0d1db0[12],
 &VB_ttc_5_0xe0f1c30[6],
 &VB_ttc_5_0xe0ee990[0],
 &VB_ttc_5_0xe0ee8a0[3],
 &VB_ttc_6_0xe125430[3],
 &VB_ttc_6_0xe1111b0[3],
 &VB_ttc_6_0xe124440[0],
 &VB_ttc_6_0xe1266f0[9],
 &VB_rr_1_0xe012d00[9],
 &VB_rr_1_0xe012c10[12],
 &VB_rr_1_0xe012c10[0],
 &VB_rr_1_0xe012850[0],
 &VB_rr_2_0xe0599d0[0],
 &VB_rr_2_0xe0598e0[3],
 &VB_rr_2_0xe0597f0[6],
 &VB_rr_2_0xe059430[6],
 &VB_rr_3_0xe0a2640[0],
 &VB_rr_3_0xe0a2550[3],
 &VB_rr_3_0xe0a2460[6],
 &VB_rr_3_0xe0a20a0[6],
 &VB_rr_4_0xe0e9b30[0],
 &VB_rr_4_0xe0e9a40[3],
 &VB_rr_4_0xe0e9950[6],
 &VB_rr_4_0xe0e9590[6],
 &VB_castle_grounds_1_0xe0293c0[6],
 &VB_castle_grounds_1_0xe058df0[6],
 &VB_bitdw_1_0xe079f10[6],
 &VB_bitdw_1_0xe078c50[6],
 &VB_bitdw_1_0xe077990[6],
 &VB_bitdw_1_0xe07a960[9],
 &VB_bitdw_1_0xe048d70[0],
 &VB_bitdw_1_0xe046e80[9],
 &VB_bitdw_1_0xe046070[12],
 &VB_bitfs_2_0xe041090[9],
 &VB_bitfs_3_0xe066050[0],
 &VB_bitfs_4_0xe09dc90[3],
 &VB_bitfs_5_0xe0d2660[0],
 &VB_bitfs_6_0xe0f4e20[0],
 &VB_bitfs_6_0xe0f1d60[6],
 &VB_sa_1_0xe024ab0[6],
 &VB_sa_1_0xe022620[3],
 &VB_sa_1_0xe021360[3],
 &VB_lll_1_0xe099400[3],
 &VB_lll_1_0xe084550[9],
 &VB_lll_1_0xe083290[9],
 &VB_lll_1_0xe081fd0[9],
 &VB_lll_1_0xe080d10[9],
 &VB_lll_1_0xe088420[12],
 &VB_lll_1_0xe086da0[12],
 &VB_lll_1_0xe085720[12],
 &VB_lll_1_0xe07fa50[9],
 &VB_lll_1_0xe07e790[9],
 &VB_lll_1_0xe07d4d0[9],
 &VB_lll_1_0xe044c20[9],
 &VB_lll_1_0xe043960[9],
 &VB_lll_1_0xe098500[3],
 &VB_lll_1_0xe079600[6],
 &VB_lll_1_0xe079ab0[9],
 &VB_lll_2_0xe0ed730[12],
 &VB_lll_2_0xe0e4a90[6],
 &VB_lll_2_0xe0e37d0[6],
 &VB_lll_2_0xe0ec830[12],
 &VB_ddd_1_0xe01bfd0[6],
 &VB_ddd_1_0xe096910[0],
 &VB_ddd_2_0xe0eae60[6],
 &VB_wf_1_0xe036910[12],
 &VB_wf_1_0xe033670[0],
 &VB_wf_1_0xe057ac0[12],
 &VB_wf_2_0xe08c9f0[0],
 &VB_wf_2_0xe08c9f0[0],
 &VB_wf_2_0xe08f510[6],
 &VB_wf_3_0xe0ab190[0],
 &VB_wf_3_0xe0bcf80[9],
 &VB_castle_courtyard_1_0xe0cdfc0[6],
 &VB_castle_courtyard_1_0xe0cdcf0[3],
 &VB_castle_courtyard_1_0xe080680[6],
 &VB_castle_courtyard_1_0xe09d000[12],
 &VB_castle_courtyard_1_0xe0699d0[9],
 &VB_castle_courtyard_1_0xe0550c0[3],
 &VB_castle_courtyard_1_0xe056b00[6],
 &VB_castle_courtyard_1_0xe058180[6],
 &VB_castle_courtyard_1_0xe09d960[6],
 &VB_castle_courtyard_1_0xe0a7c80[6],
 &VB_castle_courtyard_1_0xe0a67e0[0],
 &VB_castle_courtyard_1_0xe0a5250[9],
 // &VB_bowser_1_1_0xe020ad0[255],
 &VB_bowser_1_1_0xe0209b0[0],
 &VB_wmotr_1_0xe021340[9],
 &VB_wmotr_1_0xe020080[9],
 &VB_wmotr_1_0xe023c80[9],
 &VB_ttm_1_0xe052d90[0],
 &VB_ttm_1_0xe051ad0[0],
 &VB_ttm_1_0xe078680[0],
 &VB_ttm_1_0xe02ce10[0],
 &VB_ttm_1_0xe02bb50[0],
 &VB_ttm_1_0xe02a890[0],
 &VB_ttm_1_0xe0295d0[0],
 &VB_ttm_1_0xe07eda0[0],
 &VB_ttm_1_0xe078a40[0],
 &VB_ttm_1_0xe078860[6],
 &VB_ttm_1_0xe033bc0[9],
 &VB_ttm_2_0xe0dc760[6],
 &VB_ttm_2_0xe0dd660[6],
 &VB_ttm_2_0xe0d93d0[3],
 &VB_ttm_2_0xe0d84d0[9],
 &VB_ttm_2_0xe0d7210[9],
 &VB_ttm_3_0xe104e90[3],
 &VB_ttm_3_0xe1076e0[6],
};