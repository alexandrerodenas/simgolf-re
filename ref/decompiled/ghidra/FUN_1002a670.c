/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a670 @ 0x1002A670 */
/* Body size: 15 addresses */


undefined4 __fastcall FUN_1002a670(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x60))();
  }
  return 0;
}

