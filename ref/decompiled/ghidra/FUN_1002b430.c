/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b430 @ 0x1002B430 */
/* Body size: 30 addresses */


void __thiscall FUN_1002b430(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x54))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x28))();
  }
  return;
}

