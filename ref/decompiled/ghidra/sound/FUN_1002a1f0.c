/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a1f0 @ 0x1002A1F0 */
/* Body size: 15 addresses */


undefined4 __fastcall FUN_1002a1f0(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x5c))();
  }
  return 0;
}

