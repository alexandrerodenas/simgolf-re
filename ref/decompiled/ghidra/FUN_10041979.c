/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041979 @ 0x10041979 */
/* Body size: 54 addresses */


int * __thiscall FUN_10041979(void *this,int param_1)

{
  if (param_1 != 0) {
    *(undefined **)this = &DAT_1005ecd8;
    FUN_10041e6f((undefined4 *)((int)this + 8));
  }
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_1005ecd4;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

