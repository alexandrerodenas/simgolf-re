/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001a0e0 @ 0x1001A0E0 */


void __thiscall FUN_1001a0e0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 8))();
  __chkesp();
  local_c = param_1;
  *(undefined4 *)((int)local_8 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)local_8 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)local_8 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)local_8 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)local_8 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)local_8 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)local_8 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)local_8 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  uVar1 = thunk_FUN_10014a40(*(size_t *)((int)local_8 + 0x24));
  *(undefined4 *)((int)local_8 + 0x14) = uVar1;
  FUN_1007f3a0(*(undefined4 **)((int)local_8 + 0x14),*(undefined4 **)(local_c + 0x14),
               *(uint *)((int)local_8 + 0x24));
  if (*(int *)(local_c + 0x1c) != 0) {
    uVar1 = thunk_FUN_10014a40(*(int *)((int)local_8 + 0x34) << 2);
    *(undefined4 *)((int)local_8 + 0x1c) = uVar1;
    FUN_1007f3a0(*(undefined4 **)((int)local_8 + 0x1c),*(undefined4 **)(local_c + 0x1c),
                 *(int *)((int)local_8 + 0x34) << 2);
  }
  local_8 = (void *)0x1001a1fa;
  __chkesp();
  return;
}

