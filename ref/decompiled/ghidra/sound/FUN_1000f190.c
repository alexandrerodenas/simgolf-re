/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f190 @ 0x1000F190 */
/* Body size: 27 addresses */


void __thiscall FUN_1000f190(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x60);
  *(undefined4 *)((int)this + 0xc4) = param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(piVar1,param_1);
  }
  return;
}

