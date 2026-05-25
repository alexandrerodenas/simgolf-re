/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e7d0 @ 0x1001E7D0 */


void __fastcall FUN_1001e7d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005b68c;
  local_4 = 0;
  if (((undefined *)param_1[0xf] != (undefined *)0x0) && ((*(byte *)(param_1 + 0xd) & 4) != 0)) {
    FUN_1004249a((undefined *)param_1[0xf]);
  }
  param_1[0xf] = 0;
  local_4 = 0xffffffff;
  thunk_FUN_1001b870(param_1);
  ExceptionList = local_c;
  return;
}

