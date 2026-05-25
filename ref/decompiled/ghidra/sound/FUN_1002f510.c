/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f510 @ 0x1002F510 */


undefined4 __fastcall FUN_1002f510(int param_1)

{
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x38))();
  }
  return 0;
}

