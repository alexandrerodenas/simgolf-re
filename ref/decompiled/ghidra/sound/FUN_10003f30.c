/* Ghidra decompiled: sound.dll */
/* Function: FUN_10003f30 @ 0x10003F30 */
/* Body size: 127 addresses */


undefined4 * __fastcall FUN_10003f30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058496;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1001f4a0(param_1);
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  *param_1 = &PTR_LAB_1005b000;
  puVar2 = param_1 + 0x252;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 1;
  thunk_FUN_1002ad10(param_1,5);
  param_1[0x292] = 0;
  ExceptionList = local_c;
  return param_1;
}

