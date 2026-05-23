/* Ghidra decompiled: sound.dll */
/* Function: FUN_10022750 @ 0x10022750 */
/* Body size: 60 addresses */


undefined4 __thiscall FUN_10022750(void *this,uint param_1)

{
  if (2 < param_1) {
    return 10;
  }
  *(uint *)((int)this + 0x214) = (param_1 & 3) << 7 | *(uint *)((int)this + 0x214) & 0xfffffe7f;
  thunk_FUN_10023d00(this,*(uint **)((int)this + 0x238));
  return 0;
}

