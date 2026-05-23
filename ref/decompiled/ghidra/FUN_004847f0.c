/* Ghidra decompiled: golf.exe */
/* Function: FUN_004847f0 @ 0x004847F0 */
/* Body size: 45 addresses */


void __thiscall FUN_004847f0(int param_1,int param_2)

{
  if (param_2 < -0x40) {
    param_2 = -0x40;
  }
  else if (0x3f < param_2) {
    param_2 = 0x3f;
  }
  *(int *)(param_1 + 8) = param_2;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x44))(param_2);
  }
  return;
}

