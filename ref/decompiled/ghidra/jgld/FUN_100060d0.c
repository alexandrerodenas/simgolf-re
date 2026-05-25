/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100060d0 @ 0x100060D0 */


void FUN_100060d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_7c [16];
  void *local_3c;
  undefined4 local_38 [9];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aee29;
  local_10 = ExceptionList;
  puVar2 = local_7c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  thunk_FUN_10005450(local_38);
  local_8 = 0;
  if ((*(int *)((int)local_14 + 0x20) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_FUN_10006840(local_14,param_1);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x20) & 0x1c) != 0) {
      if ((*(uint *)((int)local_14 + 0x20) & 2) != 0) {
        thunk_FUN_10004100((float *)(param_1 + 4));
      }
      if ((*(uint *)((int)local_14 + 0x20) & 0x1c) != 0) {
        thunk_FUN_100042f0((float *)(param_1 + 4));
      }
    }
    if ((*(uint *)(param_1 + 0x20) & 2) != 0) {
      if ((*(uint *)((int)local_14 + 0x20) & 2) == 0) {
        *(undefined4 *)((int)local_14 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)((int)local_14 + 0x18) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((int)local_14 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      }
      else {
        thunk_FUN_100038b0((void *)((int)local_14 + 0x14),param_1 + 0x14);
      }
    }
  }
  *(uint *)((int)local_14 + 0x20) = *(uint *)((int)local_14 + 0x20) | *(uint *)(param_1 + 0x20);
  local_3c = local_14;
  local_8 = 0xffffffff;
  thunk_FUN_100034e0(local_38);
  ExceptionList = local_10;
  local_8 = 0x10006213;
  __chkesp();
  return;
}

