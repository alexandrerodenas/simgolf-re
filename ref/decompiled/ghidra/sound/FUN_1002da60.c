/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002da60 @ 0x1002DA60 */


undefined4 __thiscall FUN_1002da60(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xec))(param_1);
    return uVar1;
  }
  return 0x14;
}

