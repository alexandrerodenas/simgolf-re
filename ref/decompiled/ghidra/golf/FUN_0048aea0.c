/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048aea0 @ 0x0048AEA0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048aea0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  UINT UVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_10;
  
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  iVar10 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x78 + param_1);
  *(undefined4 *)(param_1 + -0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x38) = 0xffffffff;
  iVar13 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar7 = *(int *)(iVar13 + 4 + param_1);
  iVar13 = iVar13 + param_1;
  local_10 = iVar10 / iVar7;
  if (iVar7 * local_10 < iVar10) {
    local_10 = local_10 + 1;
  }
  iVar7 = *(int *)(param_1 + -0x30);
  iVar12 = *(int *)(param_1 + -0x34);
  if (*(int *)(iVar13 + 0x98) == -1) {
    *(undefined4 *)(iVar13 + 0x98) = 0;
  }
  iVar13 = *(int *)(param_1 + -0x34);
  iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  piVar11 = (int *)(iVar2 + param_1);
  iVar2 = *(int *)(iVar2 + 0x98 + param_1);
  switch(param_2) {
  case 0x25:
  case 100:
    if (*piVar11 == 1) {
      return 0;
    }
    if (piVar11[1] <= iVar2) {
      piVar11[0x26] = iVar2 - piVar11[1];
    }
    if (iVar10 <= *(int *)(param_1 + -0x30)) goto LAB_0048b111;
    iVar10 = *(int *)(param_1 + -0x34);
    piVar11 = (int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + param_1);
    if (iVar10 <= piVar11[0x26]) goto LAB_0048b111;
    break;
  case 0x26:
  case 0x68:
    if (iVar2 == 0) {
      return 1;
    }
    piVar11[0x26] = iVar2 + -1;
    if (iVar10 <= *(int *)(param_1 + -0x30)) goto LAB_0048b111;
    iVar10 = *(int *)(param_1 + -0x34);
    piVar11 = (int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + param_1);
    if (iVar10 <= piVar11[0x26]) goto LAB_0048b111;
    if (*piVar11 == 1) {
      *(int *)(param_1 + -0x34) = piVar11[0x26];
      goto LAB_0048b111;
    }
    break;
  case 0x27:
  case 0x66:
    if (*piVar11 == 1) {
      return 0;
    }
    if (*(int *)(param_1 + -0x30) < iVar10) {
      iVar7 = piVar11[1];
      if (iVar2 < (*piVar11 + -1) * iVar7 + iVar13) {
        iVar12 = (local_10 + -1) * iVar7;
        if ((iVar13 + iVar12 <= iVar2) && (iVar13 < iVar12)) {
          *(int *)(param_1 + -0x34) = iVar13 + iVar7;
        }
      }
      else if (iVar7 + iVar13 <= iVar10 + -1) {
        *(int *)(param_1 + -0x34) = iVar7 + iVar13;
      }
    }
    iVar7 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar12 = *(int *)(iVar7 + 4 + param_1);
    iVar7 = iVar7 + param_1;
    iVar3 = *(int *)(iVar7 + 0x98);
    if (iVar3 < (local_10 + -1) * iVar12) {
      *(int *)(iVar7 + 0x98) = iVar3 + iVar12;
    }
    iVar12 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar10 = iVar10 + -1;
    if (*(int *)(iVar12 + 0x98 + param_1) <= iVar10) goto LAB_0048b111;
    goto LAB_0048b10f;
  case 0x28:
  case 0x62:
    if (*(int *)(param_1 + -0x30) < iVar10) {
      if (*piVar11 == 1) {
        if (((piVar11[1] + -1 + iVar13 < iVar2 + 1) || (iVar2 == iVar10 + -1)) &&
           (iVar13 < iVar10 + -1)) {
          *(int *)(param_1 + -0x34) = iVar13 + 1;
        }
      }
      else {
        if ((iVar7 + -1 + iVar12 < iVar2 + 1) && (iVar13 + piVar11[1] <= iVar10 + -1)) {
          *(int *)(param_1 + -0x34) = iVar13 + piVar11[1];
        }
        iVar7 = *(int *)(*(int *)(param_1 + -0x58) + 8);
        if (*(int *)(iVar7 + 0x98 + param_1) == iVar10 + -1) {
          iVar7 = *(int *)(iVar7 + param_1 + 4);
          if (*(int *)(param_1 + -0x34) < (local_10 + -1) * iVar7) {
            *(int *)(param_1 + -0x34) = *(int *)(param_1 + -0x34) + iVar7;
          }
        }
      }
    }
    iVar12 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar7 = *(int *)(iVar12 + 0x98 + param_1);
    if (iVar10 + -1 <= iVar7) goto LAB_0048b111;
    iVar10 = iVar7 + 1;
LAB_0048b10f:
    *(int *)(iVar12 + 0x98 + param_1) = iVar10;
    goto LAB_0048b111;
  default:
    if ((0x5f < (int)param_2) && ((int)param_2 < 0x6a)) {
      return 0;
    }
    UVar6 = MapVirtualKeyA(param_2 & 0xfff8ffff,2);
    cVar4 = (char)UVar6;
    if (cVar4 == '\0') {
      return 0;
    }
    iVar10 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar13 = *(int *)(iVar10 + 0x78 + param_1);
    uVar14 = *(uint *)(iVar10 + 0x98 + param_1);
    iVar10 = iVar10 + param_1;
    if ((int)uVar14 <= iVar13 + -1) {
      *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)(iVar10 + 0x70);
      if ((int)uVar14 < 0) {
        iVar7 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
        if (iVar13 < iVar7) goto LAB_0048b2e6;
        if (0 < iVar7) {
          do {
            iVar7 = iVar7 + -1;
            *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)(*(int *)(iVar10 + 0x74) + 0x10);
          } while (iVar7 != 0);
        }
        uVar14 = uVar14 + iVar13;
      }
      else {
        uVar8 = uVar14;
        if (0 < (int)uVar14) {
          do {
            uVar8 = uVar8 - 1;
            *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)(*(int *)(iVar10 + 0x74) + 0xc);
          } while (uVar8 != 0);
        }
      }
      *(uint *)(iVar10 + 0x7c) = uVar14;
    }
LAB_0048b2e6:
    iVar7 = 0;
    iVar13 = *(int *)(*(int *)(param_1 + -0x58) + 8);
    iVar10 = iVar13 + param_1;
    if (0 < *(int *)(iVar13 + 0x78 + param_1)) {
      do {
        if (*(int *)(iVar10 + 0x70) != 0) {
          iVar13 = *(int *)(iVar10 + 0x7c) + 1;
          uVar5 = *(undefined4 *)(*(int *)(iVar10 + 0x74) + 0xc);
          *(int *)(iVar10 + 0x7c) = iVar13;
          *(undefined4 *)(iVar10 + 0x74) = uVar5;
          if (iVar13 == *(int *)(iVar10 + 0x78)) {
            *(undefined4 *)(iVar10 + 0x7c) = 0;
          }
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = pcRam00000004;
          if (*(int *)(iVar10 + 0x70) != 0) {
            pcVar9 = *(char **)(*(int *)(*(int *)(iVar10 + 0x74) + 8) + 4);
          }
        }
        cVar1 = *pcVar9;
        if ((cVar1 == cVar4) || (iVar10 = FUN_004a71d2((int)cVar4), cVar1 == iVar10)) {
          FUN_00489f50(*(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x7c + param_1),1);
          return 1;
        }
        iVar7 = iVar7 + 1;
        iVar10 = *(int *)(*(int *)(param_1 + -0x58) + 8) + param_1;
      } while (iVar7 < *(int *)(iVar10 + 0x78));
    }
    return 0;
  }
  *(int *)(param_1 + -0x34) = iVar10 - piVar11[1];
LAB_0048b111:
  iVar10 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1);
  if ((iVar10 < *(int *)(param_1 + -0x34)) ||
     (*(int *)(param_1 + -0x30) + *(int *)(param_1 + -0x34) <= iVar10)) {
    *(int *)(param_1 + -0x34) = iVar10;
  }
  FUN_0047b9f0(*(undefined4 *)(param_1 + -0x34));
  FUN_0047ba10(*(int *)(param_1 + -0x34) /
               *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + param_1));
  if (*(int *)(param_1 + -0xc) != 0) {
    uVar5 = FUN_00489950();
    (**(code **)(param_1 + -0xc))(uVar5);
  }
  piVar11 = *(int **)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if (piVar11 != (int *)0x0) {
    iVar10 = *piVar11;
    uVar5 = FUN_00489950();
    (**(code **)(iVar10 + 0x100))(uVar5);
  }
  iVar10 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  if ((iVar10 != 0) && (piVar11 = *(int **)(iVar10 + 0x94), piVar11 != (int *)0x0)) {
    (**(code **)(*piVar11 + 0x1c))();
  }
  if (*(int *)(param_1 + -0x34) == iVar13) {
    if (iVar2 != *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1)) {
      DAT_0083b650 = iVar2 - *(int *)(param_1 + -0x34);
      (*(code *)**(undefined4 **)(param_1 + -0x5c))(iVar2);
      DAT_0083b650 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1) -
                     *(int *)(param_1 + -0x34);
      (*(code *)**(undefined4 **)(param_1 + -0x5c))
                (*(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1));
    }
    FUN_00480ce0();
    return 1;
  }
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1) + 0x120))();
  return 1;
}

