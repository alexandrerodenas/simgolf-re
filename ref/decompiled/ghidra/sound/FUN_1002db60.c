/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002db60 @ 0x1002DB60 */


undefined4 __thiscall FUN_1002db60(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xa0))(param_1,param_2);
    return uVar1;
  }
  return 0x14;
}

