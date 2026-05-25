/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480a10 @ 0x00480A10 */


undefined4 __thiscall FUN_00480a10(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(param_1 + 0x9c) & 0x80000) != 0) && (*(int **)(param_1 + 0x130) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x130) + 0x11c))();
    if (iVar2 != 0) {
      if (param_1 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = param_1 + 0x274;
      }
      iVar2 = param_2[1];
      iVar1 = *param_2;
      FUN_00475c60(param_3,iVar1 + *(int *)(param_1 + 0x1bc) + *(int *)(param_1 + 0x1ac),
                   iVar2 + *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1b0),iVar1,iVar2,
                   param_2[2] - iVar1,param_2[3] - iVar2);
      if (DAT_0083abe0 != 0) {
        iVar2 = param_2[1];
        iVar1 = *param_2;
        FUN_00475da0(iVar1,iVar2,(param_2[2] - iVar1) + -1 + iVar1,(param_2[3] - iVar2) + -1 + iVar2
                     ,DAT_0083abe0);
      }
      return 0;
    }
  }
  uVar3 = FUN_00478b50(param_2,param_3);
  return uVar3;
}

