/* Ghidra decompiled: sound.dll */
/* Function: FUN_10030080 @ 0x10030080 */


undefined4 * __fastcall FUN_10030080(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10059103;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1002ed50(param_1);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_LAB_1005c450;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x16] = 0;
  puVar2 = param_1 + 0x1b;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 1;
  thunk_FUN_1002ad10(param_1,6);
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  ExceptionList = local_c;
  return param_1;
}

