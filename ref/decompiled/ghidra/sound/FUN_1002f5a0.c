/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f5a0 @ 0x1002F5A0 */


undefined4 __fastcall FUN_1002f5a0(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x38))();
  delete_sound((int *)param_1[0x10]);
  param_1[0x10] = 0;
  return 0;
}

