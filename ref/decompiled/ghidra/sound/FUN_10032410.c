/* Ghidra decompiled: sound.dll */
/* Function: FUN_10032410 @ 0x10032410 */


void __thiscall FUN_10032410(void *this,int param_1)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x20) = this;
    thunk_FUN_10038430((void *)((int)this + 0x1338),param_1);
  }
  return;
}

