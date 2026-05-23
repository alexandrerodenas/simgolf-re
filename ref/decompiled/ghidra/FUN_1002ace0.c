/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ace0 @ 0x1002ACE0 */
/* Body size: 24 addresses */


undefined4 __thiscall FUN_1002ace0(void *this,int param_1)

{
  if (param_1 == 0) {
    return 10;
  }
  *(int *)((int)this + 0x38) = param_1;
  return 0;
}

