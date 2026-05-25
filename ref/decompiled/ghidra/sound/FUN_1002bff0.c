/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002bff0 @ 0x1002BFF0 */


undefined4 __thiscall FUN_1002bff0(void *this,int param_1)

{
  if (param_1 < -0x4b0) {
    param_1 = -0x4b0;
  }
  else if (0x4b0 < param_1) {
    param_1 = 0x4b0;
  }
  *(int *)((int)this + 0x5c) = param_1;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x9c))(param_1);
  }
  return 0;
}

