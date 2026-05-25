/* Ghidra decompiled: sound.dll */
/* Function: FUN_10023080 @ 0x10023080 */


undefined4 __thiscall FUN_10023080(void *this,int param_1,uint param_2)

{
  int iVar1;
  void *this_00;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0x24;
  }
  iVar1 = *(int *)((int)this + 0x218);
  *(int *)((int)this + 0x220) = iVar1;
  if ((iVar1 != 0) && (this_00 = *(void **)(iVar1 + 8), this_00 != (void *)0x0)) {
    while (*(int *)((int)this_00 + 4) != param_1) {
      if (*(int *)((int)this + 0x220) == 0) {
        return 0x24;
      }
      iVar1 = *(int *)(*(int *)((int)this + 0x220) + 4);
      *(int *)((int)this + 0x220) = iVar1;
      if (iVar1 == 0) {
        return 0x24;
      }
      this_00 = *(void **)(iVar1 + 8);
      if (this_00 == (void *)0x0) {
        return 0x24;
      }
    }
    if (this_00 != (void *)0x0) {
      thunk_FUN_1002e430(this_00,param_2);
      return 0;
    }
  }
  return 0x24;
}

