/* Ghidra decompiled: sound.dll */
/* Function: FUN_100293d0 @ 0x100293D0 */


undefined4 __thiscall FUN_100293d0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x70))(param_1);
    return uVar1;
  }
  return 0x13;
}

