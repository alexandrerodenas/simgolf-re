/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002d810 @ 0x1002D810 */


undefined4 __thiscall FUN_1002d810(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xe4))(param_1);
    return uVar1;
  }
  return 0x13;
}

