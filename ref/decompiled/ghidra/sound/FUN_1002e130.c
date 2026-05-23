/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e130 @ 0x1002E130 */
/* Body size: 33 addresses */


undefined4 __thiscall FUN_1002e130(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x118))(param_1,param_2);
    return uVar1;
  }
  return 0;
}

