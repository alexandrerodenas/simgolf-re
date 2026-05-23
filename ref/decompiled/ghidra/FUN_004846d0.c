/* Ghidra decompiled: golf.exe */
/* Function: FUN_004846d0 @ 0x004846D0 */
/* Body size: 37 addresses */


undefined4 __thiscall FUN_004846d0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 10;
  }
  *(int *)(param_1 + 0x38) = param_2;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))(param_2);
  }
  return 0;
}

