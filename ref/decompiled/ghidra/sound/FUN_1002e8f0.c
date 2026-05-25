/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e8f0 @ 0x1002E8F0 */


undefined4 __fastcall FUN_1002e8f0(int *param_1)

{
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 0x14))();
  }
  (**(code **)(*param_1 + 0x80))();
  param_1[0x10] = 0;
  param_1[0x11] = param_1[0x11] & 0xfffffffe;
  return 0;
}

