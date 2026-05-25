/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002eca0 @ 0x1002ECA0 */


undefined4 __thiscall FUN_1002eca0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x90))(param_1);
    return uVar1;
  }
  return 0x13;
}

