/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049e680 @ 0x0049E680 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049e680(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = (int *)(param_1 + -0x24);
  _DAT_0083ab2c = *(int **)(*(int *)(*(int *)(param_1 + -0x24) + 4) + 0x10c + param_1);
  if (_DAT_0083ab2c != (int *)0x0) {
    if (param_1 == 0x24) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*piVar1 + 4) + -0x24 + param_1;
    }
    iVar3 = (**(code **)(*_DAT_0083ab2c + 0x28))(iVar3);
    if (iVar3 == 0) {
      if (param_1 == 0x24) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*piVar1 + 4) + 0x250 + param_1;
      }
      piVar2 = *(int **)(*(int *)(*piVar1 + 4) + 0x254 + param_1);
      if (piVar2 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*piVar2 + 0xdc))();
      }
      piVar2 = *(int **)(*(int *)(*piVar1 + 4) + 0x254 + param_1);
      if (piVar2 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*piVar2 + 0xd8))();
      }
      FUN_00475c60(iVar3,*(undefined4 *)(*(int *)(*piVar1 + 8) + param_1 + 4),
                   *(undefined4 *)(*(int *)(*piVar1 + 8) + 8 + param_1),0,0,uVar5,uVar4);
    }
    iVar6 = 0;
    iVar3 = *(int *)(*piVar1 + 8) + param_1;
    if (0 < *(int *)(*(int *)(*piVar1 + 8) + 0xac + param_1)) {
      do {
        FUN_0049dab0(iVar6,*(int *)(iVar3 + 0xcc) == iVar6);
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(*piVar1 + 8) + param_1;
      } while (iVar6 < *(int *)(iVar3 + 0xac));
    }
    FUN_00480ce0();
  }
  return;
}

