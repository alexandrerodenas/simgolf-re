/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c9f0 @ 0x1002C9F0 */
/* Body size: 165 addresses */


undefined4 * __fastcall FUN_1002c9f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058eb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0x7f;
  param_1[2] = 0;
  puVar2 = param_1 + 3;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_1005bae0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = 0;
  local_4 = 0;
  param_1[0xe] = 1000;
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))(1000);
  }
  param_1[0x15] = 0;
  *param_1 = &PTR_LAB_1005bdd8;
  puVar2 = param_1 + 0x16;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_1002ad10(param_1,8);
  ExceptionList = pvStack_c;
  return param_1;
}

