#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"

//Q. Why does this exist instead of just directly referencing VBs?
//A. Because gcc is dumb and will seg fault if you reference a VB by abstracting it through a bparam
//instead of directly refencing it, causing this horrible shit.
/*extern Vtx VB_vcutm_1_0xe004860[];
Vtx *ScrollTargets[]={
 &VB_vcutm_1_0xe004860[255],
};*/
