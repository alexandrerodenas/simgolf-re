/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100031a0 @ 0x100031A0 */


void FUN_100031a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  int local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004115b;
  local_10 = ExceptionList;
  puVar2 = local_5c;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10106b4c == 0) {
    ExceptionList = &local_10;
    local_18 = operator_new(0x164ad0);
    local_8 = 0;
    if (local_18 == (void *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = thunk_FUN_10002ae0(local_18,0x32,0x32);
    }
    local_14 = local_1c;
    DAT_10106b4c = local_1c;
  }
  ExceptionList = local_10;
  local_8 = 0x1000323d;
  __chkesp();
  return;
}

