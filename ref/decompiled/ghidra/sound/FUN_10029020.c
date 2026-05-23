/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029020 @ 0x10029020 */
/* Body size: 122 addresses */


undefined4 * __fastcall FUN_10029020(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005b8b0;
  param_1[1] = 0;
  param_1[2] = 0x7f;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  FUN_10042902(param_1 + 9,0x18,0x10,&LAB_100020db);
  *param_1 = &PTR_LAB_1005b914;
  param_1[8] = 0;
  ExceptionList = local_c;
  return param_1;
}

