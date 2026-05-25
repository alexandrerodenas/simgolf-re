/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002be90 @ 0x1002BE90 */


undefined4 __thiscall FUN_1002be90(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)this + 0x88))(param_1,param_2);
  if ((param_2 & 4) != 0) {
    return 0;
  }
  uVar1 = (**(code **)(*(int *)this + 0x8c))();
  return uVar1;
}

