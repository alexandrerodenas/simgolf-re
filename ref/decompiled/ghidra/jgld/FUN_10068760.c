/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068760 @ 0x10068760 */


void __fastcall FUN_10068760(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_100af031;
  local_10 = ExceptionList;
  puVar2 = local_58;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  *param_1 = &PTR_thunk_FUN_100691b0_1011da6c;
  param_1[2] = &PTR_LAB_1011da68;
  local_8 = 1;
  if (param_1[1] != 0) {
    *(undefined4 *)param_1[1] = 0;
  }
  local_14 = param_1;
  thunk_FUN_10068da0((int)param_1);
  local_8 = local_8 & 0xffffff00;
  if (local_14 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = local_14 + 2;
  }
  thunk_FUN_10006b80(local_18);
  local_8 = 0xffffffff;
  thunk_FUN_10069010(local_14);
  ExceptionList = local_10;
  local_8 = 0x10068813;
  __chkesp();
  return;
}

