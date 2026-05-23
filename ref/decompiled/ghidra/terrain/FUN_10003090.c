/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003090 @ 0x10003090 */
/* Body size: 226 addresses */


void __fastcall FUN_10003090(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  void *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1004112d;
  local_10 = ExceptionList;
  puVar2 = local_58;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)((int)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x18) = 0xffffffff;
  local_14 = param_1;
  if (DAT_10106b48 != (void *)0x0) {
    local_18 = DAT_10106b48;
    FUN_10018be0(param_1,DAT_10106b48);
    DAT_10106b48 = (void *)0x0;
  }
  if (DAT_10106b4c != 0) {
    DAT_10106b4c = 0;
  }
  thunk_FUN_100380a0((int)local_14);
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_1000aed0((void *)((int)local_14 + 0x164ac4));
  local_8 = 0xffffffff;
  FUN_10018420((int)local_14 + 0x3a4,0x248,0x9c4,&LAB_1000100a);
  ExceptionList = local_10;
  local_8 = 0x1000316e;
  __chkesp();
  return;
}

