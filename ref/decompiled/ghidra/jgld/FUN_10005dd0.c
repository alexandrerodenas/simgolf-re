/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005dd0 @ 0x10005DD0 */


void FUN_10005dd0(void *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8c [16];
  uint local_4c;
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aedc0;
  local_10 = ExceptionList;
  puVar1 = local_8c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  local_4c = 0;
  ExceptionList = &local_10;
  thunk_FUN_10005450(&local_38);
  local_8 = 1;
  if ((*(int *)(local_14 + 0x20) == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    if (*(int *)(param_2 + 0x20) == 0) {
      if (*(int *)(local_14 + 0x20) == 0) {
        thunk_FUN_10006840(&local_38,local_14);
      }
    }
    else {
      thunk_FUN_10006840(&local_38,param_2);
    }
  }
  else {
    thunk_FUN_10006840(&local_38,local_14);
    if ((*(uint *)(param_2 + 0x20) & 0x1c) != 0) {
      if ((*(uint *)(local_14 + 0x20) & 2) != 0) {
        thunk_FUN_10004100((float *)(param_2 + 4));
      }
      if ((*(uint *)(local_14 + 0x20) & 0x1c) == 0) {
        local_34 = *(undefined4 *)(local_14 + 4);
        local_30 = *(undefined4 *)(local_14 + 8);
        local_2c = *(undefined4 *)(local_14 + 0xc);
        local_28 = *(undefined4 *)(local_14 + 0x10);
      }
      else {
        puVar1 = (undefined4 *)thunk_FUN_10004410(local_48,(float *)(param_2 + 4));
        local_34 = *puVar1;
        local_30 = puVar1[1];
        local_2c = puVar1[2];
        local_28 = puVar1[3];
      }
    }
    if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
      if ((local_18 & 2) == 0) {
        local_24 = *(undefined4 *)(param_2 + 0x14);
        local_20 = *(undefined4 *)(param_2 + 0x18);
        local_1c = *(undefined4 *)(param_2 + 0x1c);
      }
      else {
        thunk_FUN_100038b0(&local_24,param_2 + 0x14);
      }
    }
  }
  local_18 = *(uint *)(local_14 + 0x20) | *(uint *)(param_2 + 0x20);
  thunk_FUN_100068d0(param_1,(int)&local_38);
  local_4c = local_4c | 1;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_100034e0(&local_38);
  ExceptionList = local_10;
  local_8 = 0x10005f77;
  __chkesp();
  return;
}

