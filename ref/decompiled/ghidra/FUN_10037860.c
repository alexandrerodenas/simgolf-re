/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037860 @ 0x10037860 */
/* Body size: 56 addresses */


undefined4 __thiscall FUN_10037860(void *this,int param_1)

{
  if ((1 << ((byte)param_1 & 0x1f) & *(uint *)((int)this + 0x58) >> 0xc & 0xffff) != 0) {
    return *(undefined4 *)(param_1 * 0x110 + 0x2f8 + (int)this);
  }
  return 0;
}

