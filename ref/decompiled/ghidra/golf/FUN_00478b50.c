/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478b50 @ 0x00478B50 */


undefined4 __thiscall FUN_00478b50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(param_2,param_3);
  return uVar1;
}

