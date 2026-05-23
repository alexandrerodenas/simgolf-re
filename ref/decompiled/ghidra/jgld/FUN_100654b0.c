/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100654b0 @ 0x100654B0 */
/* Body size: 213 addresses */


void __fastcall FUN_100654b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aef49;
  local_10 = ExceptionList;
  puVar2 = local_54;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_14 = param_1;
  thunk_FUN_10065630(param_1);
  local_8 = 0;
  thunk_FUN_10069270(local_14 + 1);
  *local_14 = &PTR_LAB_1011d640;
  local_14[0x4b] = 0;
  local_14[0x4c] = 0;
  local_14[0x4d] = 0;
  local_14[0x4e] = 0;
  local_14[0x50] = 0;
  local_14[0x51] = 0;
  local_14[0x52] = 0;
  ExceptionList = local_10;
  local_8 = 0x10065581;
  __chkesp();
  return;
}

