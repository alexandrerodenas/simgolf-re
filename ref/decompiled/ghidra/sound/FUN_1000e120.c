/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e120 @ 0x1000E120 */


void __thiscall FUN_1000e120(void *this,int param_1)

{
  thunk_FUN_1000e680((void *)((int)this + 0x1c8),param_1);
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 0x40;
  return;
}

