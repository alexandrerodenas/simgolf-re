/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c610 @ 0x0048C610 */


void __thiscall FUN_0048c610(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x74))(param_2,param_3);
  }
  return;
}

