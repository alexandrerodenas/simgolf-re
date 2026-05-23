/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f740 @ 0x1002F740 */
/* Body size: 107 addresses */


undefined4 * __fastcall FUN_1002f740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10059038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1002c9f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_1005c3a4;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x7f;
  thunk_FUN_1002ad10(param_1,8);
  ExceptionList = local_c;
  return param_1;
}

