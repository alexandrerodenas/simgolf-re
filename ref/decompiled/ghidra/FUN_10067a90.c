/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067a90 @ 0x10067A90 */
/* Body size: 145 addresses */


void FUN_10067a90(undefined4 param_1)

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
  puStack_c = &LAB_100aefcb;
  local_10 = ExceptionList;
  puVar2 = local_60;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_1c = operator_new(0x50);
  local_8 = 0;
  if (local_1c == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = thunk_FUN_10014cd0(local_1c,param_1);
  }
  local_18 = local_20;
  ExceptionList = local_10;
  local_8 = 0x10067b1b;
  __chkesp();
  return;
}

