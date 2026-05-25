/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473bf0 @ 0x00473BF0 */


undefined4
FUN_00473bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x10;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
  if (*piVar1 != 8) {
    return 0;
  }
  uVar2 = FUN_00492000(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}

