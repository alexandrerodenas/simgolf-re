/* Ghidra decompiled: sound.dll */
/* Function: FUN_100135a0 @ 0x100135A0 */


undefined4 __thiscall
FUN_100135a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)((int)this + 0xd8);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_1,param_2,param_3,0);
    if (iVar2 != 0) {
      uVar3 = thunk_FUN_1000f480(iVar2);
      return uVar3;
    }
  }
  *(undefined4 *)((int)this + 0x1ac) = param_1;
  *(undefined4 *)((int)this + 0x1b0) = param_2;
  *(undefined4 *)((int)this + 0x1b4) = param_3;
  return 0;
}

