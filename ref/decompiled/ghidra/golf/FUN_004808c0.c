/* Ghidra decompiled: golf.exe */
/* Function: FUN_004808c0 @ 0x004808C0 */
/* Body size: 324 addresses */


void __thiscall FUN_004808c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if ((((*(uint *)(param_1 + 0x9c) & 0x80000) == 0) || (*(int **)(param_1 + 0x130) == (int *)0x0))
     || (iVar3 = (**(code **)(**(int **)(param_1 + 0x130) + 0x11c))(), iVar3 == 0)) {
    FUN_00478b30(param_2);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1bc);
  iVar5 = *(int *)(param_1 + 0x1c0);
  iVar1 = *(int *)(param_1 + 0x1ac);
  iVar2 = *(int *)(param_1 + 0x1b0);
  uVar6 = 0;
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_1 + 0x274;
  }
  if (*(int **)(param_1 + 0x278) != (int *)0x0) {
    uVar6 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
  }
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
  }
  FUN_00475c60(param_2,iVar1 + iVar3,iVar2 + iVar5,0,0,uVar4,uVar6);
  if (DAT_0083abe0 == 0) {
    return;
  }
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
  }
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
  }
  FUN_00475da0(0,0,iVar5 + -1,iVar3 + -1,DAT_0083abe0);
  return;
}

