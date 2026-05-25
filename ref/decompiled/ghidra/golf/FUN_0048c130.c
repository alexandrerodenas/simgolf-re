/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c130 @ 0x0048C130 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048c130(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar7 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if (piVar7 == (int *)0x0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0x220 + param_1);
  _DAT_0083ab2c = piVar7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc4))();
  }
  if (*(code **)(param_1 + -0x10) == (code *)0x0) {
LAB_0048c1a0:
    if (param_1 == 0x5c) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1;
    }
    iVar2 = (**(code **)(*piVar7 + 0x28))(iVar2);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + -0x1c) == 0) {
        iVar9 = *(int *)(*(int *)(param_1 + -0x58) + 4);
        iVar2 = iVar9 + param_1;
        if (((*(uint *)(iVar9 + 0x44 + param_1) & 0x80000) == 0) || (*(int *)(iVar2 + 0xd8) == 0)) {
          FUN_004808c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x18 + param_1));
        }
        else {
          iVar9 = 0;
          if (param_1 != 0x5c) {
            iVar9 = iVar2 + 0x21c;
          }
          if (*(int **)(iVar2 + 0x220) == (int *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (**(code **)(**(int **)(iVar2 + 0x220) + 0xdc))();
          }
          piVar7 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0x220 + param_1);
          if (piVar7 == (int *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*piVar7 + 0xd8))();
          }
          iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8) + param_1;
          FUN_00475c60(iVar9,*(undefined4 *)(iVar2 + -0x30),*(undefined4 *)(iVar2 + -0x2c),0,0,uVar4
                       ,uVar3);
        }
      }
      else {
        piVar7 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0x220 + param_1);
        if (piVar7 == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*piVar7 + 0xd4))();
        }
        FUN_004791b0(uVar3,*(undefined4 *)(param_1 + -0x1c));
      }
    }
  }
  else {
    iVar2 = 0;
    if (param_1 != 0x5c) {
      iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1;
    }
    iVar2 = (**(code **)(param_1 + -0x10))(iVar2,0,0,0);
    if (iVar2 == 0) goto LAB_0048c1a0;
  }
  piVar7 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0x220 + param_1);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xd0))(&iStack_10);
  }
  iVar9 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  if (0 < *(int *)(iVar2 + 0x60 + param_1)) {
    do {
      FUN_004795d0(&iStack_10,*(undefined4 *)(iVar2 + param_1 + 0x58),
                   *(undefined4 *)(iVar2 + param_1 + 0x5c));
      iStack_10 = iStack_10 + 1;
      iStack_8 = iStack_8 + -1;
      iStack_c = iStack_c + 1;
      iStack_4 = iStack_4 + -1;
      iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(iVar2 + 0x60 + param_1));
  }
  iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar9 = *(int *)(iVar2 + 0x78 + param_1);
  iVar2 = iVar2 + param_1;
  if (iVar9 == 0) {
    return;
  }
  uVar10 = *(int *)(param_1 + -0x34) - 1;
  if ((int)uVar10 <= iVar9 + -1) {
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x70);
    if ((int)uVar10 < 0) {
      iVar5 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
      if (iVar9 < iVar5) goto LAB_0048c39c;
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 + -1;
          *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(*(int *)(iVar2 + 0x74) + 0x10);
        } while (iVar5 != 0);
      }
      uVar10 = uVar10 + iVar9;
    }
    else {
      uVar6 = uVar10;
      if (0 < (int)uVar10) {
        do {
          uVar6 = uVar6 - 1;
          *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(*(int *)(iVar2 + 0x74) + 0xc);
        } while (uVar6 != 0);
      }
    }
    *(uint *)(iVar2 + 0x7c) = uVar10;
  }
LAB_0048c39c:
  iVar9 = 0;
  DAT_0083b650 = 0;
  iStack_14 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  piVar7 = (int *)(iVar2 + param_1);
  if (0 < *(int *)(iVar2 + param_1)) {
    do {
      iVar2 = 0;
      if (0 < piVar7[1]) {
        iVar5 = *(int *)(param_1 + -0x34);
        do {
          (*(code *)**(undefined4 **)(param_1 + -0x5c))(iVar5 + iVar9);
          iVar9 = DAT_0083b650 + 1;
          iVar5 = *(int *)(param_1 + -0x34);
          iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8) + param_1;
          DAT_0083b650 = iVar9;
          if (iVar9 == *(int *)(iVar8 + 0x78) - iVar5) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar8 + 4));
      }
      iStack_14 = iStack_14 + 1;
      piVar7 = (int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + param_1);
    } while (iStack_14 < *piVar7);
  }
  return;
}

