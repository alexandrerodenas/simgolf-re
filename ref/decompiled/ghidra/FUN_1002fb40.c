/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002fb40 @ 0x1002FB40 */
/* Body size: 21 addresses */


undefined4 __fastcall FUN_1002fb40(int param_1)

{
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf8) + 0x20))();
  }
  return 0xb;
}

