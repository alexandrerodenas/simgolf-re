/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b3a0 @ 0x1002B3A0 */


void __thiscall FUN_1002b3a0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x28))();
  }
  return;
}

