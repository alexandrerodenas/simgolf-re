/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019400 @ 0x30019400 */


void __cdecl FUN_30019400(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_30019a80(param_1,param_2,(float *)(param_4 + (param_3 + (param_1 >> 2) * -2) * 4));
  iVar2 = param_1 >> 2;
  while (iVar1 = iVar2, 0x200 < param_1) {
    FUN_30019400(iVar1,param_2,param_3,param_4);
    FUN_300194a0(iVar1,param_2 + iVar1,param_3,param_4);
    FUN_30019400(iVar1,param_2 + iVar1 * 2,param_3,param_4);
    param_2 = param_2 + iVar1 * 3;
    FUN_30019a80(iVar1,param_2,(float *)(param_4 + (param_3 + (iVar1 >> 2) * -2) * 4));
    iVar2 = iVar1 >> 2;
    param_1 = iVar1;
  }
  FUN_30019540(param_1,(int)param_2,param_3,param_4);
  return;
}

