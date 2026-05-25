/* Ghidra decompiled: sound.dll */
/* Function: FUN_100292d0 @ 0x100292D0 */


int __thiscall FUN_100292d0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*(int *)this + 4))(param_2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x14) + 0x10))(unaff_retaddr,param_2);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 8))();
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

