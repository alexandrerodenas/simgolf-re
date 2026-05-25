/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038f60 @ 0x10038F60 */


undefined4 __thiscall FUN_10038f60(void *this,uint param_1)

{
  if (*(uint *)((int)this + 0x38) <= param_1) {
    return 10;
  }
  waveInGetDevCapsA(param_1,(LPWAVEINCAPSA)((int)this + 8),0x30);
  if ((*(uint *)((int)this + 0x30) & *(uint *)((int)this + 0x3c)) == 0) {
    return 0x12;
  }
  *(uint *)((int)this + 0x40) = param_1;
  return 0;
}

