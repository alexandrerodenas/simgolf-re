/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a2c0 @ 0x1006A2C0 */
/* Body size: 144 addresses */


void __fastcall FUN_1006a2c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100af059;
  local_10 = ExceptionList;
  puVar2 = local_54;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_1011db10;
  local_8 = 0;
  if (param_1[0x203] != 0) {
    *(undefined4 *)(param_1[0x203] + 4) = 0;
  }
  local_14 = param_1;
  thunk_FUN_1006a380((int)param_1);
  local_8 = 0xffffffff;
  thunk_FUN_1006af00(local_14);
  ExceptionList = local_10;
  local_8 = 0x1006a34c;
  __chkesp();
  return;
}

