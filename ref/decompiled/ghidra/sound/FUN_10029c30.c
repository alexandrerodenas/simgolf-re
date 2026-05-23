/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029c30 @ 0x10029C30 */
/* Body size: 31 addresses */


undefined4 __thiscall FUN_10029c30(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x84))(param_1);
    return uVar1;
  }
  return 0x14;
}

