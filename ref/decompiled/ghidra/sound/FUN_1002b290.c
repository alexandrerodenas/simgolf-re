/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b290 @ 0x1002B290 */


void __thiscall FUN_1002b290(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x30) = param_1;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x48))(param_1);
  }
  return;
}

