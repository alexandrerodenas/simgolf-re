/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e060 @ 0x1002E060 */


undefined4 __thiscall FUN_1002e060(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 200))(param_1);
    return uVar1;
  }
  return 0;
}

