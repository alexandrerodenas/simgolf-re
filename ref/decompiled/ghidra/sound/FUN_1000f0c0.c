/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f0c0 @ 0x1000F0C0 */


undefined4 __thiscall FUN_1000f0c0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x60) != 0) {
    return 0xc;
  }
  *(undefined4 *)((int)this + 0x78) = param_1;
  return 0;
}

