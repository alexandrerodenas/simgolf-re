/* Ghidra decompiled: sound.dll */
/* Function: FUN_100110c0 @ 0x100110C0 */


undefined4 __thiscall FUN_100110c0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 100);
  if (piVar1 == (int *)0x0) {
    return 0xb;
  }
  *(undefined4 *)((int)this + 0xcc) = param_1;
  (**(code **)(*piVar1 + 0x4c))
            (piVar1,*(undefined4 *)((int)this + 200),param_1,*(undefined4 *)((int)this + 0xd0),0);
  return 0;
}

