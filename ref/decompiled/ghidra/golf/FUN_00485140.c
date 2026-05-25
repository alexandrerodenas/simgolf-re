/* Ghidra decompiled: golf.exe */
/* Function: FUN_00485140 @ 0x00485140 */


void __thiscall FUN_00485140(int param_1,uint param_2)

{
  param_2 = param_2 & 0x7f;
  *(uint *)(param_1 + 4) = param_2;
  if (*(uint *)(param_1 + 0x3c) < 0x10) {
    param_2 = __ftol();
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x40))(param_2);
  }
  return;
}

