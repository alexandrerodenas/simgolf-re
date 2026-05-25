/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a0280 @ 0x004A0280 */


void __thiscall
FUN_004a0280(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) == 0)) && (DAT_00840940 == 0)) {
    iVar1 = FUN_004a00f0(*(int *)(param_1 + 4),&DAT_004e4a70);
    if (iVar1 != 0) {
      if (param_3 != 0) {
        FUN_004a622c(iVar1,s__s__s__d__d__d_004e4a60,param_2,param_3,param_4,param_5,param_6);
        FUN_004a609f(iVar1);
        return;
      }
      FUN_004a622c(iVar1,s__s__d__d__d_004e4a50,param_2,param_4,param_5,param_6);
      FUN_004a609f(iVar1);
    }
  }
  return;
}

