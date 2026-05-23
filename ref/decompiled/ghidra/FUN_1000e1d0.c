/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e1d0 @ 0x1000E1D0 */
/* Body size: 27 addresses */


void __thiscall FUN_1000e1d0(void *this,int param_1)

{
  *(int *)((int)this + 0x1b4) = param_1;
  *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + param_1;
  return;
}

