/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c140 @ 0x1002C140 */


undefined4 __thiscall FUN_1002c140(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xb8))(param_1);
    return uVar1;
  }
  return 0;
}

