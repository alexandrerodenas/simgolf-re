/* Ghidra decompiled: sound.dll */
/* Function: FUN_100120a0 @ 0x100120A0 */


undefined4 __thiscall FUN_100120a0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 == (int *)0x0) {
    return 0x13;
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1,*(undefined4 *)((int)this + 400));
  if (iVar2 != 0) {
    thunk_FUN_1000f480(iVar2);
    thunk_FUN_10011970(this);
    return 3;
  }
  DAT_100b4a3c = param_1;
  return 0;
}

