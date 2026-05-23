/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068660 @ 0x10068660 */
/* Body size: 193 addresses */


void __thiscall FUN_10068660(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aefe9;
  local_10 = ExceptionList;
  puVar2 = local_54;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_14 = this;
  thunk_FUN_10069220(this);
  local_8 = 0;
  thunk_FUN_10006ab0(local_14 + 2);
  *local_14 = &PTR_LAB_1011da6c;
  local_14[2] = &PTR_LAB_1011da68;
  local_14[1] = param_1;
  local_14[4] = 0;
  local_14[5] = 0;
  local_14[6] = 0;
  local_14[7] = 0;
  local_14[8] = 0;
  ExceptionList = local_10;
  local_8 = 0x1006871b;
  __chkesp();
  return;
}

