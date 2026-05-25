/* Ghidra decompiled: sound.dll */
/* Function: FUN_100296d0 @ 0x100296D0 */


undefined4 __thiscall FUN_100296d0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x54))(param_1);
    return uVar1;
  }
  return 3;
}

