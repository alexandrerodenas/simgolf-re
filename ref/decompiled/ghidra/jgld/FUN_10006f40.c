/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006f40 @ 0x10006F40 */


void __thiscall FUN_10006f40(void *this,undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aee4b;
  local_10 = ExceptionList;
  puVar2 = local_64;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = &local_10;
  local_14 = this;
  if ((*(int *)((int)this + 0xc) != 0) &&
     (ExceptionList = &local_10, *(int *)((int)this + 0x18) != 0)) {
    ExceptionList = &local_10;
    OutputDebugStringA("BAD USE OF LINKED LIST - Ordered or unordered\n");
    __chkesp();
  }
  *(undefined4 *)((int)local_14 + 0x18) = 0;
  local_20 = operator_new(0x14);
  local_8 = 0;
  if (local_20 == (void *)0x0) {
    local_24 = (void *)0x0;
  }
  else {
    local_24 = thunk_FUN_10007370(local_20,param_1,param_2);
  }
  local_1c = local_24;
  local_18 = local_24;
  if (*(int *)((int)local_14 + 0x10) == 0) {
    *(void **)((int)local_14 + 0x10) = local_24;
    *(undefined4 *)(*(int *)((int)local_14 + 0x10) + 4) = *(undefined4 *)((int)local_14 + 0x10);
    *(undefined4 *)(*(int *)((int)local_14 + 0x10) + 8) = *(undefined4 *)((int)local_14 + 0x10);
  }
  else {
    *(undefined4 *)((int)local_24 + 4) = *(undefined4 *)(*(int *)((int)local_14 + 0x10) + 4);
    *(undefined4 *)((int)local_24 + 8) = *(undefined4 *)((int)local_14 + 0x10);
    *(void **)(*(int *)((int)local_14 + 0x10) + 4) = local_24;
    *(void **)(*(int *)((int)local_24 + 4) + 8) = local_24;
  }
  *(int *)((int)local_14 + 0xc) = *(int *)((int)local_14 + 0xc) + 1;
  *(void **)((int)local_14 + 0x14) = local_24;
  *(undefined4 *)((int)local_14 + 4) = param_1;
  *(undefined1 *)((int)local_14 + 8) = *(undefined1 *)(*(int *)((int)local_14 + 0x14) + 0x10);
  ExceptionList = local_10;
  local_8 = 0x10007097;
  __chkesp();
  return;
}

