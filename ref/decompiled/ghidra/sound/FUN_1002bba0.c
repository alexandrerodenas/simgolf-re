/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002bba0 @ 0x1002BBA0 */


undefined4 __thiscall FUN_1002bba0(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(int **)((int)this + 0x40) == (int *)0x0) {
    return 0x13;
  }
  (**(code **)(**(int **)((int)this + 0x40) + 0xf0))(param_1,param_2);
  return 0;
}

