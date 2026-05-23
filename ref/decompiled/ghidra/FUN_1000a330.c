/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000a330 @ 0x1000A330 */
/* Body size: 336 addresses */


void FUN_1000a330(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_ac [16];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aeee9;
  local_10 = ExceptionList;
  puVar2 = local_ac;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  thunk_FUN_10014cd0(local_64,0);
  local_8 = 0;
  local_44 = local_14[9];
  (**(code **)(*local_14 + 0x10))();
  local_50 = __chkesp();
  local_4c = 0;
  local_38 = local_14[0x10];
  (**(code **)(*local_14 + 0xd8))();
  local_34 = __chkesp();
  (**(code **)(*local_14 + 0xdc))();
  local_30 = __chkesp();
  local_54 = local_14[0x1f];
  thunk_FUN_1000aeb0(local_64,local_14[0x134]);
  (**(code **)(*local_14 + 0xe8))();
  iVar1 = __chkesp();
  local_68 = thunk_FUN_100165a0(local_64,param_1,param_2,param_3,param_4,iVar1);
  (**(code **)(*local_14 + 0x24))(1);
  __chkesp();
  local_50 = 0;
  local_6c = local_68;
  local_8 = 0xffffffff;
  thunk_FUN_10014de0(local_64);
  ExceptionList = local_10;
  puStack_c = (undefined1 *)0x1000a47a;
  __chkesp();
  return;
}

