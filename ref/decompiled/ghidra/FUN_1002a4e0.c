/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a4e0 @ 0x1002A4E0 */
/* Body size: 28 addresses */


undefined4 __thiscall FUN_1002a4e0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x68))(param_1);
    return uVar1;
  }
  return 0x13;
}

