/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b840 @ 0x1002B840 */


undefined4 __thiscall FUN_1002b840(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x94))(param_1);
    return uVar1;
  }
  return 0x14;
}

