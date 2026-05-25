/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ec50 @ 0x1002EC50 */


undefined4 __fastcall FUN_1002ec50(int param_1)

{
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
  }
  return 0;
}

