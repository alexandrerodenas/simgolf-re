/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017710 @ 0x30017710 */


void __cdecl FUN_30017710(int param_1,float *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (0x20 < param_1) {
    iVar1 = param_1 >> 2;
    FUN_300181f0(param_1,param_2,(float *)(param_5 + (param_4 - iVar1) * 4));
    if (param_1 < 0x201) {
      if (iVar1 < 0x21) {
        FUN_3001a420(param_1,param_2,param_4,param_5);
      }
      else {
        FUN_30019540(param_1,(int)param_2,param_4,param_5);
      }
    }
    else {
      FUN_30019400(iVar1,param_2,param_4,param_5);
      FUN_300194a0(iVar1,param_2 + iVar1,param_4,param_5);
      FUN_30019400(iVar1,param_2 + iVar1 * 2,param_4,param_5);
      FUN_30019400(iVar1,param_2 + iVar1 * 3,param_4,param_5);
    }
    FUN_30017970(param_1,param_3,(int)param_2);
    return;
  }
  if (param_1 < 9) {
    if (param_1 != 8) {
      if (param_1 == 4) {
        FUN_3001b860(param_2);
      }
      return;
    }
    FUN_3001b700(param_2);
    return;
  }
  if (param_1 != 0x20) {
    FUN_3001b260(param_2,param_5);
    FUN_30018100((int)param_2);
    return;
  }
  FUN_3001a560(param_2,param_5 + -0x20 + param_4 * 4);
  FUN_30017ed0((int)param_2);
  return;
}

