/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023f10 @ 0x10023F10 */
/* Body size: 58 addresses */


uint __thiscall FUN_10023f10(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *pvStack_4;
  
  pvStack_4 = this;
  uVar1 = (**(code **)(*(int *)this + 0xb4))();
  if (uVar1 < param_1) {
    return uVar1 & 0xffffff00;
  }
  iVar2 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&pvStack_4,param_1);
  return CONCAT31((int3)((uint)iVar2 >> 8),*(byte *)((int)pvStack_4 + 0x38) >> 4) & 0xffffff01;
}

