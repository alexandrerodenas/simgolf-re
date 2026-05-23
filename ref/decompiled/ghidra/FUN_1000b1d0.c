/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b1d0 @ 0x1000B1D0 */
/* Body size: 172 addresses */


undefined4 * __fastcall FUN_1000b1d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100587d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10029020(param_1);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  local_4 = 1;
  thunk_FUN_10008860(param_1 + 0x76);
  *param_1 = &PTR_LAB_1005b304;
  DAT_100b49f0 = 0;
  DAT_100b49f8 = 0;
  DAT_100b49f4 = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0x7f;
  param_1[0x69] = 0;
  param_1[0x6d] = 0;
  param_1[0x71] = 0;
  ExceptionList = local_c;
  return param_1;
}

