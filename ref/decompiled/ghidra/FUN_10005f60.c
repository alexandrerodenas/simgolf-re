/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005f60 @ 0x10005F60 */
/* Body size: 30 addresses */


void __thiscall FUN_10005f60(void *this,byte param_1)

{
  *(uint *)((int)this + 0x214) = (param_1 & 1) << 5 | *(uint *)((int)this + 0x214) & 0xffffffdf;
  return;
}

