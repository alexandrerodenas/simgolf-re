/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049fc60 @ 0x0049FC60 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049fc60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_1 + -0x1c);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + 0x114 + param_1);
  if (piVar2 != (int *)0x0) {
    if (param_1 == 0x1c) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*piVar1 + 4) + -0x1c + param_1;
    }
    _DAT_0083ab2c = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x28))(iVar3);
    if (iVar3 == 0) {
      if (param_1 == 0x1c) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*piVar1 + 4) + 600 + param_1;
      }
      piVar2 = *(int **)(*(int *)(*piVar1 + 4) + 0x25c + param_1);
      if (piVar2 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*piVar2 + 0xdc))();
      }
      piVar2 = *(int **)(*(int *)(*piVar1 + 4) + 0x25c + param_1);
      if (piVar2 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*piVar2 + 0xd8))();
      }
      FUN_00475c60(iVar3,*(undefined4 *)(*(int *)(*piVar1 + 8) + param_1 + 0xc),
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + 0x10 + param_1),0,0,uVar5,uVar4);
    }
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(*piVar1 + 8) + 0xb4 + param_1)) {
      do {
        uVar6 = (uint)(*(int *)(param_1 + -0x18) == iVar3);
        uVar4 = FUN_0049f030(iVar3);
        FUN_0049f370(iVar3,uVar4,uVar6);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(*piVar1 + 8) + 0xb4 + param_1));
    }
  }
  return;
}

