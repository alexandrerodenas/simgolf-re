/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049f370 @ 0x0049F370 */
/* Body size: 1577 addresses */


void __thiscall FUN_0049f370(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int unaff_EDI;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int local_20;
  int iStack_1c;
  uint uStack_18;
  int *local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_14 = *(int **)(*(int *)(*param_1 + 4) + 0x130 + (int)param_1);
  if (local_14 == (int *)0x0) {
    return;
  }
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  local_20 = 0;
  iVar10 = *(int *)(*param_1 + 8);
  iVar4 = *(int *)(iVar10 + 0xd0 + (int)param_1);
  iVar3 = iVar4 + -1;
  if (-2 < iVar3) {
    *(undefined4 *)((int)param_1 + iVar10 + 0xcc) = *(undefined4 *)((int)param_1 + iVar10 + 200);
    iVar2 = 1;
    if (0 < iVar4) {
      do {
        iVar2 = iVar2 + -1;
        *(undefined4 *)((int)param_1 + iVar10 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar10 + 0xcc) + 0x10);
      } while (iVar2 != 0);
      *(int *)((int)param_1 + iVar10 + 0xd4) = iVar3;
    }
  }
  if (0 < (int)param_2) {
    uStack_18 = param_2;
    do {
      iVar3 = *(int *)(*param_1 + 8);
      if (*(int *)(iVar3 + 200 + (int)param_1) != 0) {
        iVar10 = *(int *)((int)param_1 + iVar3 + 0xd4) + 1;
        *(undefined4 *)((int)param_1 + iVar3 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 0xc);
        *(int *)((int)param_1 + iVar3 + 0xd4) = iVar10;
        if (iVar10 == *(int *)((int)param_1 + iVar3 + 0xd0)) {
          *(undefined4 *)((int)param_1 + iVar3 + 0xd4) = 0;
        }
      }
      if ((*(int *)((int)param_1 + iVar3 + 0xcc) != 0) &&
         (iVar3 = FUN_00402160(), 1 < *(int *)(iVar3 + 8))) {
        if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
          iStack_1c = 0;
        }
        else {
          iStack_1c = *(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8)
                              + 8);
        }
        iVar3 = *(int *)(*param_1 + 8);
        iVar10 = *(int *)(iVar3 + 0x6c + (int)param_1);
        iVar4 = FUN_00477580();
        if (iVar10 <= iVar4 * iStack_1c) {
          if (*(int *)((int)param_1 + iVar3 + 200) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 8) + 8);
          }
          iVar10 = FUN_00477580();
          iVar10 = iVar10 * iVar3;
        }
        local_20 = local_20 + (iVar10 - *(int *)(*(int *)(*param_1 + 8) + 0x6c + (int)param_1));
      }
      uStack_18 = uStack_18 - 1;
    } while (uStack_18 != 0);
  }
  iVar3 = *(int *)(*param_1 + 8);
  iVar10 = *(int *)(iVar3 + 0x5c + (int)param_1);
  iVar5 = (int)param_2 / iVar10;
  iVar4 = *(int *)((int)param_1 + iVar3 + 0x48);
  iVar9 = (*(int *)((int)param_1 + iVar3 + 0x68) + iVar4) * iVar5 +
          *(int *)((int)param_1 + iVar3 + 0x44);
  iVar2 = *(int *)((int)param_1 + iVar3 + 0xd0);
  local_20 = (iVar4 >> 1) +
             local_20 + (param_2 - iVar5 * iVar10) * (*(int *)((int)param_1 + iVar3 + 0x6c) + iVar4)
  ;
  if (iVar2 + -1 < (int)param_2) {
    return;
  }
  *(undefined4 *)((int)param_1 + iVar3 + 0xcc) = *(undefined4 *)((int)param_1 + iVar3 + 200);
  if ((int)param_2 < 0) {
    iVar10 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
    if (iVar2 < iVar10) {
      return;
    }
    if (0 < iVar10) {
      do {
        iVar10 = iVar10 + -1;
        *(undefined4 *)((int)param_1 + iVar3 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 0x10);
      } while (iVar10 != 0);
    }
    uVar8 = iVar2 + param_2;
  }
  else {
    uVar8 = param_2;
    uVar11 = param_2;
    if (0 < (int)param_2) {
      do {
        uVar11 = uVar11 - 1;
        *(undefined4 *)((int)param_1 + iVar3 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 0xc);
      } while (uVar11 != 0);
    }
  }
  *(uint *)((int)param_1 + iVar3 + 0xd4) = uVar8;
  if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 8);
  }
  iVar3 = *(int *)(*param_1 + 8);
  iStack_1c = *(int *)(iVar3 + 0x6c + (int)param_1);
  iVar4 = FUN_00477580();
  iVar10 = iStack_1c;
  if (iStack_1c <= (int)(iVar4 * uStack_18)) {
    if (*(int *)((int)param_1 + iVar3 + 200) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 8) + 8);
    }
    iVar10 = FUN_00477580();
    iVar10 = iVar10 * iVar3;
  }
  iVar3 = *param_1;
  iStack_c = local_20;
  iStack_8 = *(int *)((int)param_1 + *(int *)(iVar3 + 8) + 0x68) + iVar9;
  iStack_4 = local_20 + iVar10;
  if (param_3 == 0) {
    uVar8 = (uint)(*(uint *)((int)param_1 + *(int *)(iVar3 + 8) + 0xf4) == param_2);
  }
  else {
    uVar8 = 2;
  }
  if (param_1 == (int *)0x0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(int *)(iVar3 + 4) + (int)param_1;
  }
  iVar3 = *local_14;
  piVar14 = &iStack_10;
  iStack_10 = iVar9;
  uVar6 = FUN_00489a30(param_2);
  iVar3 = (**(code **)(iVar3 + 0x2c))(uStack_18,uVar6,uVar8,piVar14);
  if (iVar3 == 0) {
    if (param_1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*param_1 + 4) + 0x274 + (int)param_1;
    }
    iVar4 = *(int *)(*param_1 + 8);
    FUN_00475c60(iVar3,*(int *)((int)param_1 + iVar4 + 0x28) + iVar9,
                 *(int *)((int)param_1 + iVar4 + 0x2c) + unaff_EDI,iVar9,unaff_EDI,
                 *(undefined4 *)(iVar4 + 0x68 + (int)param_1),iVar10);
    if ((param_1[5] != 0) && (param_1[4] != 0)) {
      if (iStack_8 == 0) {
        if (param_1 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*param_1 + 4) + 0x274 + (int)param_1;
        }
        iVar10 = -iStack_1c - *(int *)(param_1[4] + 0x1c);
      }
      else {
        if (param_1 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*param_1 + 4) + 0x274 + (int)param_1;
        }
        iVar10 = -iStack_1c - *(int *)(param_1[5] + 0x1c);
      }
      FUN_00473e60(iVar3,iVar9,((int)local_14 + iVar10 >> 1) + unaff_EDI,0);
    }
  }
  iVar3 = *param_1;
  iStack_1c = iStack_1c + *(int *)(*(int *)(*(int *)(iVar3 + 4) + 0x2d0 + (int)param_1) + 0x1c);
  local_20 = local_20 + *(int *)((int)param_1 + *(int *)(iVar3 + 8) + 0x38);
  iVar3 = *(int *)(iVar3 + 8);
  if (*(int *)((int)param_1 + iVar3 + 200) != 0) {
    iVar10 = *(int *)((int)param_1 + iVar3 + 200);
    if (*(int *)(*(int *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 8) + 8) == 1) {
      if (iVar10 == 0) {
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar7 = *(char **)(*(int *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 8) + 4);
      }
      pcVar7 = _strchr(pcVar7,0x7c);
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
        if ((*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) != 0) &&
           (pcVar13 = *(char **)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8
                                         ) + 4), pcVar13 != (char *)0x0)) {
          uVar8 = 0xffffffff;
          pcVar12 = pcVar13;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00477cd0(pcVar13,&local_20,~uVar8 - 1);
        }
        *pcVar7 = '|';
        pcVar7 = pcVar7 + 1;
        if (pcVar7 == (char *)0x0) {
          return;
        }
        uVar8 = 0xffffffff;
        pcVar13 = pcVar7;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        FUN_004781f0(pcVar7,&local_20,~uVar8 - 1);
        return;
      }
      if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
        return;
      }
      pcVar7 = *(char **)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 4);
      if (pcVar7 == (char *)0x0) {
        return;
      }
      uVar8 = 0xffffffff;
      pcVar13 = pcVar7;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      FUN_00477cd0(pcVar7,&local_20,~uVar8 - 1);
      return;
    }
    if (iVar10 != 0) {
      pcVar7 = *(char **)(*(int *)(*(int *)((int)param_1 + iVar3 + 0xcc) + 8) + 4);
      goto LAB_0049f8cd;
    }
  }
  pcVar7 = (char *)0x0;
LAB_0049f8cd:
  pcVar7 = _strchr(pcVar7,0x7c);
  if (pcVar7 == (char *)0x0) {
    if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)
               (*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 4);
    }
    FUN_004782d0(uVar6,&local_20,0,0);
    return;
  }
  *pcVar7 = '\0';
  if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)
             (*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 4);
  }
  FUN_004782d0(uVar6,&local_20,0,0);
  *pcVar7 = '|';
  pcVar7 = pcVar7 + 1;
  if (pcVar7 != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar13 = pcVar7;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    FUN_004781f0(pcVar7,&local_20,~uVar8 - 1);
  }
  return;
}

