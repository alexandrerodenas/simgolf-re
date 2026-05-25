/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023f60 @ 0x10023F60 */


undefined4 __thiscall FUN_10023f60(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  void *pvStack_4;
  
  pvStack_4 = this;
  uVar1 = (**(code **)(*(int *)this + 0xb4))();
  if (uVar1 < param_1) {
    return 10;
  }
  thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&pvStack_4,param_1);
  *param_2 = *(undefined4 *)((int)pvStack_4 + 0x460);
  return 0;
}

