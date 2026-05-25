/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049e230 @ 0x0049E230 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049e230(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  bVar2 = true;
  piVar1 = (int *)(param_1 + -0x24);
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x24) + 4) + 0x10c + param_1);
  iVar4 = *(int *)(*(int *)(*piVar1 + 8) + 0xac + param_1);
  iVar7 = *(int *)(*piVar1 + 8) + 0x9c + param_1;
  iVar6 = iVar4 + -1;
  if (-2 < iVar6) {
    *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar7 + 8);
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + -1;
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(*(int *)(iVar7 + 0xc) + 0x10);
      } while (iVar3 != 0);
      *(int *)(iVar7 + 0x14) = iVar6;
    }
  }
  for (; 0 < param_3; param_3 = param_3 - iVar7) {
    iVar6 = 0;
    if ((!bVar2) &&
       (*(int *)(*(int *)(*piVar1 + 8) + param_1 + 0xb0) ==
        *(int *)(*(int *)(*piVar1 + 8) + 0xac + param_1) + -1)) {
      return;
    }
    bVar2 = false;
    iVar7 = *(int *)(*piVar1 + 8) + 0x9c + param_1;
    iVar4 = *(int *)(*(int *)(*piVar1 + 8) + 0xa4 + param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(*(int *)(iVar7 + 0xc) + 0xc);
      iVar3 = *(int *)(iVar7 + 0x14) + 1;
      *(int *)(iVar7 + 0x14) = iVar3;
      if (iVar3 == *(int *)(iVar7 + 0x10)) {
        *(undefined4 *)(iVar7 + 0x14) = 0;
      }
    }
    if (*(int *)(iVar7 + 0xc) != 0) {
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar7 + 0xc) + 8);
      }
      iVar6 = *(int *)(iVar6 + 8);
    }
    iVar4 = FUN_00477580();
    iVar3 = *(int *)(*(int *)(*piVar1 + 8) + param_1 + 0x24) +
            *(int *)(*(int *)(*piVar1 + 8) + 0x48 + param_1);
    iVar7 = iVar4 * iVar6;
    if (iVar4 * iVar6 < iVar3) {
      iVar7 = iVar3;
    }
  }
  iVar7 = *(int *)(*piVar1 + 8);
  iVar6 = iVar7 + param_1;
  iVar7 = (param_2 / (*(int *)(iVar7 + 0x44 + param_1) + *(int *)(iVar7 + 0x24 + param_1))) *
          *(int *)(iVar6 + 0x38) + *(int *)(iVar6 + 0xb0);
  if (*(int *)(iVar6 + 0xcc) == iVar7) {
    if (*(int *)(param_1 + -0x10) != 0) {
      uVar5 = FUN_00489950();
      (**(code **)(param_1 + -0x10))(uVar5);
    }
    if (((*(byte *)(*(int *)(*piVar1 + 8) + param_1) & 4) != 0) &&
       (piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x10c + param_1), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xd4))(0xffffffff);
      return;
    }
  }
  else {
    FUN_0049dab0(*(int *)(iVar6 + 0xcc),0);
    *(int *)(*(int *)(*piVar1 + 8) + 0xcc + param_1) = iVar7;
    if (*(code **)(param_1 + -0x14) != (code *)0x0) {
      (**(code **)(param_1 + -0x14))(*(undefined4 *)(*(int *)(*piVar1 + 8) + 0xcc + param_1));
    }
    FUN_0049dab0(iVar7,1);
    *(undefined4 *)(*(int *)(*piVar1 + 8) + 0xd0 + param_1) = 0xffffffff;
    *(undefined4 *)(*(int *)(*piVar1 + 8) + 0xd4 + param_1) = 0xffffffff;
    FUN_00480ce0();
    if (((*(byte *)(*(int *)(*piVar1 + 8) + param_1) & 4) != 0) &&
       (piVar1 = *(int **)(*(int *)(*piVar1 + 4) + 0x10c + param_1), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xd4))(0xffffffff);
    }
  }
  return;
}

