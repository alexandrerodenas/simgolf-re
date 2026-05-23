/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000eef0 @ 0x1000EEF0 */
/* Body size: 78 addresses */


uint * __fastcall FUN_1000eef0(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffe;
  *(byte *)(param_1 + 1) = (byte)param_1[1] | 1;
  param_1[0x17] = 0;
  param_1[0x11] = 0;
  thunk_FUN_1000f590(param_1);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}

