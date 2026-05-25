/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e290 @ 0x1002E290 */


void __thiscall FUN_1002e290(void *this,undefined4 param_1)

{
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x40) + 0xfc))(param_1);
  }
  return;
}

