/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002d840 @ 0x1002D840 */


undefined4 __thiscall
FUN_1002d840(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xd0))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0x14;
}

