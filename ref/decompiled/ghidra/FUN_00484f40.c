/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484f40 @ 0x00484F40 */
/* Body size: 54 addresses */


undefined4 __thiscall FUN_00484f40(int param_1,int param_2)

{
  if (param_2 < -0x4b0) {
    param_2 = -0x4b0;
  }
  else if (0x4b0 < param_2) {
    param_2 = 0x4b0;
  }
  *(int *)(param_1 + 0x5c) = param_2;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x9c))(param_2);
  }
  return 0;
}

