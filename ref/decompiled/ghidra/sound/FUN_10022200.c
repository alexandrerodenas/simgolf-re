/* Ghidra decompiled: sound.dll */
/* Function: FUN_10022200 @ 0x10022200 */


undefined4 __thiscall FUN_10022200(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xb4))();
  if (iVar1 - 1U < param_1) {
    return 10;
  }
  *(uint *)((int)this + 0x20c) = param_1;
  return 0;
}

