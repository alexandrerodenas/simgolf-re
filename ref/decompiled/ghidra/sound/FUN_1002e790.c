/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002e790 @ 0x1002E790 */


void __thiscall FUN_1002e790(void *this,undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) | 2;
  }
  (**(code **)(*(int *)this + 0x10))(param_1);
  return;
}

