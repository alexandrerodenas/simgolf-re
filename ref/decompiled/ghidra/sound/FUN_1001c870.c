/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c870 @ 0x1001C870 */
/* Body size: 125 addresses */


undefined4 * __fastcall FUN_1001c870(undefined4 *param_1)

{
  thunk_FUN_1001d130(param_1 + 3);
  param_1[1] = 0x18;
  param_1[2] = 0x44444444;
  param_1[10] = 0;
  param_1[7] = 0xc;
  param_1[8] = 0x44444444;
  param_1[0x10] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0xb] = &PTR_LAB_1005b19c;
  param_1[0xc] = 0x6c727463;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xe] = 0x18;
  param_1[0xf] = 0x44444444;
  *param_1 = &PTR_LAB_1005b638;
  param_1[0xb] = &PTR_LAB_1005b614;
  param_1[0x12] = 6;
  param_1[0x15] = 8;
  param_1[0xd] = 0x60;
  param_1[0x17] = 0x44444444;
  return param_1;
}

