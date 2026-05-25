/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b400 @ 0x1002B400 */


void __thiscall FUN_1002b400(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x34))(param_1,param_2,param_3);
  }
  return;
}

