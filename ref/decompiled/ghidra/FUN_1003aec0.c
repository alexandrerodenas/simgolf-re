/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003aec0 @ 0x1003AEC0 */
/* Body size: 117 addresses */


undefined4 * __fastcall FUN_1003aec0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100524b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_10053728;
  local_4 = 0;
  FUN_1003c350(param_1 + 1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *param_1 = &PTR_FUN_100535d0;
  ExceptionList = local_c;
  return param_1;
}

