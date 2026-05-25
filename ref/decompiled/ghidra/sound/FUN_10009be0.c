/* Ghidra decompiled: sound.dll */
/* Function: FUN_10009be0 @ 0x10009BE0 */


undefined4 * __fastcall FUN_10009be0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10029e70(param_1);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4 = 1;
  thunk_FUN_10008860(param_1 + 0x14);
  *param_1 = &PTR_LAB_1005b28c;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0x7f;
  param_1[0xc] = 0xf;
  ExceptionList = local_c;
  return param_1;
}

