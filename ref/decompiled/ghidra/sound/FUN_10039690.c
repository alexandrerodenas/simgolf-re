/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039690 @ 0x10039690 */


undefined4 * __fastcall FUN_10039690(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100592f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1002b4e0(param_1);
  local_4 = 0;
  thunk_FUN_10031be0(param_1 + 0x1c);
  *param_1 = &PTR_LAB_1005c7e8;
  param_1[0x509] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x50a] = 0;
  param_1[0x508] = 0;
  param_1[0x50b] = 0;
  param_1[0x50e] = 1;
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  thunk_FUN_1002ad10(param_1,1);
  ExceptionList = local_c;
  return param_1;
}

