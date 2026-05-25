/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000a240 @ 0x1000A240 */


undefined4 __thiscall
FUN_1000a240(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005878b;
  local_c = ExceptionList;
  uVar2 = *(int *)((int)this + 0x4054) + 1U & 0xfff;
  if (uVar2 == *(uint *)((int)this + 0x4050)) {
    return 0x22;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_100087f0(puVar1);
  }
  *(undefined4 **)((int)this + uVar2 * 4 + 0x50) = puVar1;
  *puVar1 = param_2;
  *(undefined4 *)(*(int *)((int)this + uVar2 * 4 + 0x50) + 4) = param_1;
  *(undefined4 *)(*(int *)((int)this + uVar2 * 4 + 0x50) + 8) = param_3;
  *(undefined4 *)(*(int *)((int)this + uVar2 * 4 + 0x50) + 0xc) = param_4;
  *(uint *)((int)this + 0x4054) = uVar2;
  ExceptionList = local_c;
  return 0;
}

