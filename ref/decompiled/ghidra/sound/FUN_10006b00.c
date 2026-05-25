/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006b00 @ 0x10006B00 */


undefined4 __thiscall FUN_10006b00(void *this,undefined4 param_1)

{
  if ((*(uint *)((int)this + 0x58) & 1) != 0) {
    return 0xd;
  }
  *(undefined4 *)((int)this + 0xcc) = param_1;
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffb | 3;
  *(undefined4 *)((int)this + 200) = 0;
  (**(code **)(*(int *)this + 0x7c))();
  return 0;
}

