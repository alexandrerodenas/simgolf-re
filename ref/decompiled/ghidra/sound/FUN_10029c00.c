/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029c00 @ 0x10029C00 */


undefined4 __thiscall FUN_10029c00(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x7c))(param_1);
    return uVar1;
  }
  return 0x14;
}

