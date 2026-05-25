/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a45b0 @ 0x004A45B0 */


void __fastcall FUN_004a45b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_4;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + -0xe0) + 4);
  iVar5 = iVar1 + param_1;
  if (*(int *)(iVar1 + 0x50 + param_1) != 0) {
    if (param_1 == 0xe0) {
      local_4 = 0;
    }
    else {
      local_4 = iVar5 + 0x194;
    }
    piVar2 = *(int **)(iVar5 + 0x198);
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 0xdc))();
    }
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + -0xe0) + 4) + 0x198 + param_1);
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0xd8))();
    }
    iVar5 = *(int *)(*(int *)(param_1 + -0xe0) + 8);
    FUN_00475c60(local_4,*(undefined4 *)(iVar5 + param_1 + -0xb8),
                 *(undefined4 *)(iVar5 + -0xb4 + param_1),0,0,uVar3,uVar4);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + -0x58)) {
      do {
        FUN_004a3f10(iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + -0x58));
    }
  }
  return;
}

