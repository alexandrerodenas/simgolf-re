/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ae00 @ 0x1001AE00 */


void __thiscall FUN_1001ae00(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (param_2 < param_1) {
    uVar1 = param_2;
    param_2 = param_1;
  }
  *(uint *)((int)this + 0x208) = uVar1;
  *(uint *)((int)this + 0x204) = param_2;
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) | 1;
  *(uint *)((int)this + 0x20c) = uVar1;
  return;
}

