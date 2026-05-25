/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023ea0 @ 0x10023EA0 */


undefined4 __thiscall FUN_10023ea0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(int *)this + 0xb4))();
  if (uVar1 < param_1) {
    return 10;
  }
  if (DAT_100b4a1c != (void *)0x0) {
    uVar2 = thunk_FUN_1000a240(DAT_100b4a1c,this,0xc,param_1,param_2 & 0xff);
    return uVar2;
  }
  return 0x13;
}

