/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010370 @ 0x10010370 */
/* Body size: 42 addresses */


undefined4 __thiscall
FUN_10010370(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x4c))(piVar1,param_1,param_2,param_3,param_4);
  }
  return 0;
}

