/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011110 @ 0x10011110 */
/* Body size: 59 addresses */


undefined4 __thiscall FUN_10011110(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 100);
  if (piVar1 == (int *)0x0) {
    return 0xb;
  }
  *(undefined4 *)((int)this + 0xd0) = param_1;
  (**(code **)(*piVar1 + 0x4c))
            (piVar1,*(undefined4 *)((int)this + 200),*(undefined4 *)((int)this + 0xcc),param_1,0);
  return 0;
}

