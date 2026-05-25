/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b2c0 @ 0x1002B2C0 */


void __thiscall FUN_1002b2c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x34) = param_1;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x4c))(param_1);
  }
  return;
}

