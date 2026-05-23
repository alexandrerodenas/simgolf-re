/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c270 @ 0x1002C270 */
/* Body size: 34 addresses */


undefined4 __thiscall FUN_1002c270(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x60) = param_1;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xec))(param_1);
    return uVar1;
  }
  return 0x14;
}

