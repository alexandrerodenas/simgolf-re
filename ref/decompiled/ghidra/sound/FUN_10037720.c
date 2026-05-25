/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037720 @ 0x10037720 */


undefined4 __thiscall FUN_10037720(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x13a0) = param_1;
  *(undefined4 *)((int)this + 0x13a4) = param_2;
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffb;
  return 0;
}

