/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b2f0 @ 0x1002B2F0 */


undefined4 __thiscall FUN_1002b2f0(void *this,int param_1)

{
  if (param_1 == 0) {
    return 10;
  }
  *(int *)((int)this + 0x38) = param_1;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 4))(param_1);
  }
  return 0;
}

