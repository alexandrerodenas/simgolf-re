/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e680 @ 0x1001E680 */


void __thiscall FUN_1001e680(void *this,uint param_1)

{
  *(uint *)((int)this + 0x4c) = (param_1 & 1) << 1 | *(uint *)((int)this + 0x4c) & 0xfffffffd;
  return;
}

