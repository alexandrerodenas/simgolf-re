/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100679d0 @ 0x100679D0 */
/* Body size: 148 addresses */


void FUN_100679d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_60 [16];
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aefab;
  local_10 = ExceptionList;
  puVar2 = local_60;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_1c = operator_new(0x4d4);
  local_8 = 0;
  if (local_1c == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = thunk_FUN_10007970(local_1c,param_1);
  }
  local_18 = local_20;
  ExceptionList = local_10;
  local_8 = 0x10067a5e;
  __chkesp();
  return;
}

