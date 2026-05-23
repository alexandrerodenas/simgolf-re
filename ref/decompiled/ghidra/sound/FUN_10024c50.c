/* Ghidra decompiled: sound.dll */
/* Function: FUN_10024c50 @ 0x10024C50 */
/* Body size: 79 addresses */


void __thiscall FUN_10024c50(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffff3ff | 0x200;
    return;
  }
  if ((param_1 & 2) != 0) {
    *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffff5ff | 0x400;
    return;
  }
  if ((param_1 & 4) != 0) {
    *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) & 0xfffff9ff | 0x800;
  }
  return;
}

