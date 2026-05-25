/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b4a0 @ 0x1002B4A0 */


void __thiscall FUN_1002b4a0(void *this,int param_1)

{
  if (param_1 < -0x40) {
    param_1 = -0x40;
  }
  else if (0x3f < param_1) {
    param_1 = 0x3f;
  }
  *(int *)((int)this + 8) = param_1;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x44))(param_1);
  }
  return;
}

