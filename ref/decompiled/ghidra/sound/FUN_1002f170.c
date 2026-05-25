/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f170 @ 0x1002F170 */


undefined4 __fastcall FUN_1002f170(int param_1)

{
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
  }
  return 0;
}

