/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029d10 @ 0x10029D10 */


undefined4 __thiscall FUN_10029d10(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x94))(param_1);
    return uVar1;
  }
  return 0x14;
}

