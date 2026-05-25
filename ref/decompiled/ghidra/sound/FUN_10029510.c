/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029510 @ 0x10029510 */


undefined4 __thiscall
FUN_10029510(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x20))(param_1,param_2,param_3);
  }
  return 0;
}

