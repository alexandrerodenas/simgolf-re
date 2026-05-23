/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f160 @ 0x1000F160 */
/* Body size: 21 addresses */


void __thiscall FUN_1000f160(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1,param_1);
  }
  return;
}

