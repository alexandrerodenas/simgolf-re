/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478c70 @ 0x00478C70 */


void __thiscall
FUN_00478c70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
  }
  if (*piVar1 == 8) {
    FUN_00485e80(param_2,param_3,param_4,param_5);
  }
  else if (*piVar1 == 0x10) {
    FUN_00494f00(param_2,param_3,param_4,param_5);
    return;
  }
  return;
}

