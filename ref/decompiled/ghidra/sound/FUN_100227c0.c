/* Ghidra decompiled: sound.dll */
/* Function: FUN_100227c0 @ 0x100227C0 */


undefined4 __thiscall FUN_100227c0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  void *pvStack_4;
  
  pvStack_4 = this;
  iVar1 = (**(code **)(*(int *)this + 0x5c))();
  if (iVar1 != 0) {
    return 0x28;
  }
  if (param_2 < param_1) {
    return 10;
  }
  uVar2 = (**(code **)(*(int *)this + 0xb4))();
  if (uVar2 <= param_2) {
    return 10;
  }
  *(uint *)((int)this + 0x248) = param_1;
  *(uint *)((int)this + 0x24c) = param_2;
  *(uint *)((int)this + 0x23c) = (param_2 - param_1) + 1;
  if (*(undefined **)((int)this + 0x238) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)((int)this + 0x238));
  }
  puVar3 = operator_new(*(int *)((int)this + 0x23c) << 2);
  *(uint **)((int)this + 0x238) = puVar3;
  thunk_FUN_10023d00(this,puVar3);
  if (param_1 <= param_2) {
    do {
      iVar1 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&pvStack_4,param_1);
      if (iVar1 == 0) {
        *(byte *)((int)pvStack_4 + 0x38) = *(byte *)((int)pvStack_4 + 0x38) | 2;
      }
      param_1 = param_1 + 1;
    } while (param_1 <= param_2);
  }
  return 0;
}

