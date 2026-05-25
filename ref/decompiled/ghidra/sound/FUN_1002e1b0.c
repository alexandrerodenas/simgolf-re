/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e1b0 @ 0x1002E1B0 */


uint __thiscall FUN_1002e1b0(void *this,undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xb0))(param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

