/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002dba0 @ 0x1002DBA0 */
/* Body size: 36 addresses */


undefined4 __thiscall FUN_1002dba0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xa4))(param_1,param_2);
    return uVar1;
  }
  return 0x14;
}

