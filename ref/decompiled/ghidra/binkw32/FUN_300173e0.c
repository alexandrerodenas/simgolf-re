/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300173e0 @ 0x300173E0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_300173e0(int param_1,int param_2,float *param_3,int *param_4,undefined4 *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 >> 2;
  iVar4 = *param_4;
  if (*param_4 * 4 < param_1) {
    FUN_30017520(iVar3,param_4,param_5);
    iVar4 = iVar3;
  }
  iVar2 = param_4[1];
  if (param_4[1] * 4 < param_1) {
    FUN_30017680(iVar3,(int)param_4,(float *)(param_5 + iVar4));
    iVar2 = iVar3;
  }
  if (-1 < param_2) {
    if (4 < param_1) {
      FUN_30017710(param_1,param_3,param_4 + 2,iVar4,(int)param_5);
      FUN_3001b890(param_1,param_3,iVar2,(int)(param_5 + iVar4));
      fVar1 = *param_3;
      *param_3 = *param_3 + param_3[1];
      param_3[1] = fVar1 - param_3[1];
      return;
    }
    if (param_1 == 4) {
      FUN_30017710(4,param_3,param_4 + 2,iVar4,(int)param_5);
    }
    fVar1 = *param_3;
    *param_3 = *param_3 + param_3[1];
    param_3[1] = fVar1 - param_3[1];
    return;
  }
  fVar1 = (*param_3 - param_3[1]) * _DAT_30033fc0;
  param_3[1] = fVar1;
  *param_3 = *param_3 - fVar1;
  if (4 < param_1) {
    FUN_3001b950(param_1,param_3,iVar2,(int)(param_5 + iVar4));
    FUN_30017840(param_1,param_3,param_4 + 2,iVar4,(int)param_5);
    return;
  }
  if (param_1 == 4) {
    FUN_30017840(4,param_3,param_4 + 2,iVar4,(int)param_5);
  }
  return;
}

