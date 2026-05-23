/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478c10 @ 0x00478C10 */
/* Body size: 96 addresses */


void __thiscall
FUN_00478c10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
    FUN_00485d40(param_2,param_3,param_4,param_5);
  }
  else if (*piVar1 == 0x10) {
    FUN_00494d30(param_2,param_3,param_4,param_5);
    return;
  }
  return;
}

