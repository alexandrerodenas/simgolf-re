/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493520 @ 0x00493520 */
/* Body size: 95 addresses */


undefined4 FUN_00493520(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
  }
  if (*piVar1 != 8) {
    if (*piVar1 != 0x10) {
      return 0x17;
    }
    uVar2 = FUN_004932d0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  uVar2 = FUN_00493100(param_1,param_2,param_3,param_4);
  return uVar2;
}

