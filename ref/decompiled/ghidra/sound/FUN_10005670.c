/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005670 @ 0x10005670 */


undefined4 __thiscall FUN_10005670(void *this,int param_1)

{
  if (param_1 == 0) {
    return 10;
  }
  *(int *)((int)this + 0x38) = param_1;
  return 0;
}

