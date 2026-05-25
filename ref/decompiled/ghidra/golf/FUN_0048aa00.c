/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048aa00 @ 0x0048AA00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048aa00(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if (*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x78 + param_1) == 0) {
    return;
  }
  *(int *)(param_1 + -0x3c) = param_2;
  *(int *)(param_1 + -0x38) = param_3;
  iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  piVar6 = (int *)(iVar8 + param_1);
  param_3 = param_3 - *(int *)(iVar8 + -0x1c + param_1);
  if (param_3 < 0) {
    return;
  }
  if (*piVar6 == 1) {
    iVar8 = piVar6[0x1e];
    uVar7 = *(int *)(param_1 + -0x34) - 1;
    if ((int)uVar7 <= iVar8 + -1) {
      piVar6[0x1d] = piVar6[0x1c];
      if ((int)uVar7 < 0) {
        iVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
        if (iVar8 < iVar4) goto LAB_0048aac3;
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            piVar6[0x1d] = *(int *)(piVar6[0x1d] + 0x10);
          } while (iVar4 != 0);
        }
        uVar7 = uVar7 + iVar8;
      }
      else {
        uVar10 = uVar7;
        if (0 < (int)uVar7) {
          do {
            uVar10 = uVar10 - 1;
            piVar6[0x1d] = *(int *)(piVar6[0x1d] + 0xc);
          } while (uVar10 != 0);
        }
      }
      piVar6[0x1f] = uVar7;
    }
LAB_0048aac3:
    iVar9 = 0;
    iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar4 = *(int *)(iVar8 + 0x78 + param_1);
    iVar8 = iVar8 + param_1;
    if (iVar4 < 1) {
      return;
    }
    do {
      if (param_3 < 0) break;
      iVar9 = iVar9 + 1;
      if (*(int *)(iVar8 + 0x70) != 0) {
        *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(*(int *)(iVar8 + 0x74) + 0xc);
        iVar3 = *(int *)(iVar8 + 0x7c) + 1;
        *(int *)(iVar8 + 0x7c) = iVar3;
        if (iVar3 == *(int *)(iVar8 + 0x78)) {
          *(undefined4 *)(iVar8 + 0x7c) = 0;
        }
      }
      if (*(int *)(iVar8 + 0x74) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iRam0000000c;
        if (*(int *)(iVar8 + 0x70) != 0) {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar8 + 0x74) + 8) + 0xc);
        }
      }
      iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8) + param_1;
      param_3 = param_3 - (*(int *)(iVar8 + 0x14) + *(int *)(iVar8 + -0x10)) * iVar3;
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
    if (iVar9 == 0) {
      return;
    }
    iVar9 = iVar9 + -1;
  }
  else {
    iVar9 = ((param_2 - piVar6[-5]) / (piVar6[4] + piVar6[-4])) * piVar6[1] +
            param_3 / (piVar6[5] + piVar6[-4]);
  }
  if (*(int *)(param_1 + -0x30) <= iVar9) {
    return;
  }
  uVar7 = *(int *)(param_1 + -0x34) + iVar9;
  iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  if (*(int *)(iVar8 + 0x78 + param_1) <= (int)uVar7) {
    return;
  }
  if ((*(int *)(param_1 + -0x50) == 0) || (uVar7 == *(uint *)(iVar8 + param_1 + 0x98)))
  goto LAB_0048ae56;
  uVar2 = GetAsyncKeyState(0x11);
  if ((uVar2 & 0x8000) == 0) {
    iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar9 = *(int *)(iVar8 + 0x78 + param_1);
    iVar4 = iVar8 + 0x68 + param_1;
    iVar8 = iVar9 + -1;
    if (-2 < iVar8) {
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 8);
      iVar3 = 1;
      if (0 < iVar9) {
        do {
          iVar3 = iVar3 + -1;
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10);
        } while (iVar3 != 0);
        *(int *)(iVar4 + 0x14) = iVar8;
      }
    }
    iVar8 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x78 + param_1);
    if (0 < iVar8) {
      do {
        iVar9 = *(int *)(*(int *)(param_1 + -0x58) + 8);
        iVar4 = iVar9 + 0x68 + param_1;
        if (*(int *)(iVar9 + 0x70 + param_1) == 0) {
          iVar4 = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc);
          iVar9 = *(int *)(iVar4 + 0x14) + 1;
          *(int *)(iVar4 + 0x14) = iVar9;
          if (iVar9 == *(int *)(iVar4 + 0x10)) {
            *(undefined4 *)(iVar4 + 0x14) = 0;
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 8);
        }
        iVar8 = iVar8 + -1;
        *(undefined4 *)(iVar4 + 8) = 0;
      } while (iVar8 != 0);
    }
  }
  uVar2 = GetAsyncKeyState(0x10);
  if ((uVar2 & 0x8000) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar4 = *(int *)(iVar8 + 0x98 + param_1);
    iVar8 = iVar8 + param_1;
    if ((int)uVar7 <= iVar4) {
      iVar4 = *(int *)(iVar8 + 0x78);
      uVar10 = uVar7 - 1;
      if ((int)uVar10 <= iVar4 + -1) {
        *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(iVar8 + 0x70);
        if ((int)uVar10 < 0) {
          iVar9 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
          if (iVar4 < iVar9) goto LAB_0048ad3e;
          if (0 < iVar9) {
            do {
              iVar9 = iVar9 + -1;
              *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(*(int *)(iVar8 + 0x74) + 0x10);
            } while (iVar9 != 0);
          }
          uVar10 = uVar10 + iVar4;
        }
        else {
          uVar5 = uVar10;
          if (0 < (int)uVar10) {
            do {
              uVar5 = uVar5 - 1;
              *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(*(int *)(iVar8 + 0x74) + 0xc);
            } while (uVar5 != 0);
          }
        }
        *(uint *)(iVar8 + 0x7c) = uVar10;
      }
LAB_0048ad3e:
      iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
      uVar10 = uVar7;
      if ((int)uVar7 <= *(int *)(iVar8 + 0x98 + param_1)) {
        do {
          iVar8 = iVar8 + param_1;
          if (*(int *)(iVar8 + 0x70) == 0) {
            iVar8 = 0;
          }
          else {
            iVar4 = *(int *)(iVar8 + 0x7c) + 1;
            uVar1 = *(undefined4 *)(*(int *)(iVar8 + 0x74) + 0xc);
            *(int *)(iVar8 + 0x7c) = iVar4;
            *(undefined4 *)(iVar8 + 0x74) = uVar1;
            if (iVar4 == *(int *)(iVar8 + 0x78)) {
              *(undefined4 *)(iVar8 + 0x7c) = 0;
            }
            iVar8 = *(int *)(*(int *)(iVar8 + 0x74) + 8);
          }
          *(undefined4 *)(iVar8 + 8) = 1;
          uVar10 = uVar10 + 1;
          iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
        } while ((int)uVar10 <= *(int *)(iVar8 + 0x98 + param_1));
      }
      goto LAB_0048ae56;
    }
    iVar9 = *(int *)(iVar8 + 0x78);
    uVar10 = iVar4 - 1;
    if ((int)uVar10 <= iVar9 + -1) {
      *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(iVar8 + 0x70);
      if ((int)uVar10 < 0) {
        iVar4 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
        if (iVar9 < iVar4) goto LAB_0048ac88;
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 + -1;
            *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(*(int *)(iVar8 + 0x74) + 0x10);
          } while (iVar4 != 0);
        }
        uVar10 = uVar10 + iVar9;
      }
      else {
        uVar5 = uVar10;
        if (0 < (int)uVar10) {
          do {
            uVar5 = uVar5 - 1;
            *(undefined4 *)(iVar8 + 0x74) = *(undefined4 *)(*(int *)(iVar8 + 0x74) + 0xc);
          } while (uVar5 != 0);
        }
      }
      *(uint *)(iVar8 + 0x7c) = uVar10;
    }
LAB_0048ac88:
    iVar8 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1);
    if (iVar8 <= (int)uVar7) {
      iVar8 = (uVar7 - iVar8) + 1;
      do {
        iVar9 = *(int *)(*(int *)(param_1 + -0x58) + 8);
        iVar4 = iVar9 + 0x68 + param_1;
        if (*(int *)(iVar9 + 0x70 + param_1) == 0) {
          iVar4 = 0;
        }
        else {
          iVar9 = *(int *)(iVar4 + 0x14) + 1;
          uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc);
          *(int *)(iVar4 + 0x14) = iVar9;
          *(undefined4 *)(iVar4 + 0xc) = uVar1;
          if (iVar9 == *(int *)(iVar4 + 0x10)) {
            *(undefined4 *)(iVar4 + 0x14) = 0;
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 8);
        }
        iVar8 = iVar8 + -1;
        *(undefined4 *)(iVar4 + 8) = 1;
      } while (iVar8 != 0);
    }
    goto LAB_0048ae56;
  }
  iVar8 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar4 = *(int *)(iVar8 + 0x78 + param_1);
  iVar8 = iVar8 + 0x68 + param_1;
  if ((int)uVar7 <= iVar4 + -1) {
    *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar8 + 8);
    if ((int)uVar7 < 0) {
      iVar9 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
      if (iVar4 < iVar9) goto LAB_0048ae01;
      if (0 < iVar9) {
        do {
          iVar9 = iVar9 + -1;
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x10);
        } while (iVar9 != 0);
      }
      uVar5 = iVar4 + uVar7;
    }
    else {
      uVar10 = uVar7;
      uVar5 = uVar7;
      if (0 < (int)uVar7) {
        do {
          uVar10 = uVar10 - 1;
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0xc);
        } while (uVar10 != 0);
      }
    }
    *(uint *)(iVar8 + 0x14) = uVar5;
  }
LAB_0048ae01:
  iVar4 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar8 = iVar4 + 0x68 + param_1;
  if (*(int *)(iVar4 + 0x70 + param_1) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar8 + 0xc) + 8);
  }
  if (*(int *)(iVar4 + 8) == 0) {
    if (*(int *)(iVar8 + 8) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar8 + 0xc) + 8);
    }
    *(undefined4 *)(iVar8 + 8) = 1;
  }
  else if (*(int *)(iVar8 + 8) == 0) {
    uRam00000008 = 0;
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0xc) + 8) + 8) = 0;
  }
LAB_0048ae56:
  FUN_00489f50(uVar7,1);
  if (((*(byte *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + -0x34 + param_1) & 4) != 0) &&
     (piVar6 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1),
     piVar6 != (int *)0x0)) {
    (**(code **)(*piVar6 + 0xd4))(0xffffffff);
  }
  return;
}

