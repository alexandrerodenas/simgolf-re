/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049dab0 @ 0x0049DAB0 */


void __thiscall FUN_0049dab0(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int unaff_EDI;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int iStack_20;
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
  iVar6 = *(int *)(*param_1 + 8);
  FUN_00476310(*(undefined4 *)((int)param_1 + iVar6 + 0x80),
               *(undefined4 *)((int)param_1 + iVar6 + 0x8c),
               *(undefined4 *)((int)param_1 + iVar6 + 0x98),
               *(undefined4 *)((int)param_1 + iVar6 + 0xa4));
  iVar6 = *(int *)(*param_1 + 8);
  FUN_00476340(*(undefined4 *)((int)param_1 + iVar6 + 0x84),
               *(undefined4 *)((int)param_1 + iVar6 + 0x90),
               *(undefined4 *)((int)param_1 + iVar6 + 0x9c),
               *(undefined4 *)((int)param_1 + iVar6 + 0xa8));
  iVar6 = *(int *)(*param_1 + 8);
  FUN_00476370(*(undefined4 *)((int)param_1 + iVar6 + 0x88),
               *(undefined4 *)((int)param_1 + iVar6 + 0x94),
               *(undefined4 *)((int)param_1 + iVar6 + 0xa0),
               *(undefined4 *)((int)param_1 + iVar6 + 0xac));
  iVar6 = *(int *)(*param_1 + 8);
  FUN_004762d0(*(undefined4 *)((int)param_1 + iVar6 + 0x74),
               *(undefined4 *)((int)param_1 + iVar6 + 0x78),
               *(undefined4 *)((int)param_1 + iVar6 + 0x7c),0);
  iStack_20 = 0;
  iVar4 = *(int *)(*param_1 + 8);
  iVar9 = *(int *)(iVar4 + 0xd0 + (int)param_1);
  iVar6 = iVar9 + -1;
  if (-2 < iVar6) {
    *(undefined4 *)((int)param_1 + iVar4 + 0xcc) = *(undefined4 *)((int)param_1 + iVar4 + 200);
    iVar2 = 1;
    if (0 < iVar9) {
      do {
        iVar2 = iVar2 + -1;
        *(undefined4 *)((int)param_1 + iVar4 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar4 + 0xcc) + 0x10);
      } while (iVar2 != 0);
      *(int *)((int)param_1 + iVar4 + 0xd4) = iVar6;
    }
  }
  if (0 < (int)param_2) {
    uStack_18 = param_2;
    do {
      iVar6 = *(int *)(*param_1 + 8);
      iVar4 = *(int *)(iVar6 + 200 + (int)param_1);
      if (iVar4 != 0) {
        iVar9 = *(int *)((int)param_1 + iVar6 + 0xd4) + 1;
        uVar5 = *(undefined4 *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 0xc);
        *(int *)((int)param_1 + iVar6 + 0xd4) = iVar9;
        *(undefined4 *)((int)param_1 + iVar6 + 0xcc) = uVar5;
        if (iVar9 == *(int *)((int)param_1 + iVar6 + 0xd0)) {
          *(undefined4 *)((int)param_1 + iVar6 + 0xd4) = 0;
        }
      }
      iVar6 = *(int *)((int)param_1 + iVar6 + 0xcc);
      if (iVar6 != 0) {
        if (iVar4 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 8);
        }
        if (1 < *(int *)(iVar6 + 8)) {
          if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
            iStack_1c = 0;
          }
          else {
            iStack_1c = *(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8
                                         ) + 8);
          }
          iVar6 = *(int *)(*param_1 + 8);
          iVar4 = *(int *)(iVar6 + 0x6c + (int)param_1);
          iVar9 = FUN_00477580();
          if (iVar4 <= iVar9 * iStack_1c) {
            if (*(int *)((int)param_1 + iVar6 + 200) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 8) + 8);
            }
            iVar4 = FUN_00477580();
            iVar4 = iVar4 * iVar6;
          }
          iStack_20 = iStack_20 + (iVar4 - *(int *)(*(int *)(*param_1 + 8) + 0x6c + (int)param_1));
        }
      }
      uStack_18 = uStack_18 - 1;
    } while (uStack_18 != 0);
  }
  iVar6 = *(int *)(*param_1 + 8);
  iVar4 = *(int *)((int)param_1 + iVar6 + 0x5c);
  iVar9 = *(int *)((int)param_1 + iVar6 + 0x48);
  iVar3 = (int)param_2 / iVar4;
  iVar10 = (*(int *)((int)param_1 + iVar6 + 0x68) + iVar9) * iVar3 +
           *(int *)((int)param_1 + iVar6 + 0x44);
  iVar2 = *(int *)((int)param_1 + iVar6 + 0xd0);
  iStack_20 = (iVar9 >> 1) +
              iStack_20 +
              (param_2 - iVar3 * iVar4) * (*(int *)((int)param_1 + iVar6 + 0x6c) + iVar9);
  if (iVar2 + -1 < (int)param_2) {
    return;
  }
  *(undefined4 *)((int)param_1 + iVar6 + 0xcc) = *(undefined4 *)((int)param_1 + iVar6 + 200);
  if ((int)param_2 < 0) {
    iVar4 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
    if (iVar2 < iVar4) {
      return;
    }
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        *(undefined4 *)((int)param_1 + iVar6 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 0x10);
      } while (iVar4 != 0);
    }
    uVar8 = iVar2 + param_2;
  }
  else {
    uVar8 = param_2;
    uVar11 = param_2;
    if (0 < (int)param_2) {
      do {
        uVar11 = uVar11 - 1;
        *(undefined4 *)((int)param_1 + iVar6 + 0xcc) =
             *(undefined4 *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 0xc);
      } while (uVar11 != 0);
    }
  }
  *(uint *)((int)param_1 + iVar6 + 0xd4) = uVar8;
  if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(int *)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 8);
  }
  iVar6 = *(int *)(*param_1 + 8);
  iStack_1c = *(int *)(iVar6 + 0x6c + (int)param_1);
  iVar9 = FUN_00477580();
  iVar4 = iStack_1c;
  if (iStack_1c <= (int)(iVar9 * uStack_18)) {
    if (*(int *)((int)param_1 + iVar6 + 200) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 8) + 8);
    }
    iVar4 = FUN_00477580();
    iVar4 = iVar4 * iVar6;
  }
  iVar6 = *param_1;
  iStack_c = iStack_20;
  iStack_8 = *(int *)((int)param_1 + *(int *)(iVar6 + 8) + 0x68) + iVar10;
  iStack_4 = iStack_20 + iVar4;
  if (param_3 == 0) {
    uVar8 = (uint)(*(uint *)((int)param_1 + *(int *)(iVar6 + 8) + 0xf4) == param_2);
  }
  else {
    uVar8 = 2;
  }
  if (param_1 == (int *)0x0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(int *)(iVar6 + 4) + (int)param_1;
  }
  iVar6 = *local_14;
  piVar14 = &iStack_10;
  iStack_10 = iVar10;
  uVar5 = FUN_00489a30(param_2);
  iVar6 = (**(code **)(iVar6 + 0x2c))(uStack_18,uVar5,uVar8,piVar14);
  if (iVar6 == 0) {
    if (param_1 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*param_1 + 4) + 0x274 + (int)param_1;
    }
    iVar9 = *(int *)(*param_1 + 8);
    FUN_00475c60(iVar6,*(int *)((int)param_1 + iVar9 + 0x28) + iVar10,
                 *(int *)((int)param_1 + iVar9 + 0x2c) + unaff_EDI,iVar10,unaff_EDI,
                 *(undefined4 *)(iVar9 + 0x68 + (int)param_1),iVar4);
    if ((param_1[2] != 0) && (param_1[1] != 0)) {
      if (iStack_8 == 0) {
        iVar6 = *param_1;
        if (*(int *)(*(int *)(iVar6 + 8) + 0xf4 + (int)param_1) != iStack_c) {
          if (param_1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 4) + 0x274 + (int)param_1;
          }
          FUN_00473e60(iVar6,iVar10,
                       ((int)local_14 + (-iStack_1c - *(int *)(param_1[1] + 0x1c)) >> 1) + unaff_EDI
                       ,0);
          goto LAB_0049dfde;
        }
        if (param_1 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4) + 0x274 + (int)param_1;
        }
        FUN_00473e60(iVar6,iVar10,
                     ((int)local_14 + (-iStack_1c - *(int *)(param_1[3] + 0x1c)) >> 1) + unaff_EDI,0
                    );
        iVar6 = param_1[6];
      }
      else {
        if (param_1 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*param_1 + 4) + 0x274 + (int)param_1;
        }
        FUN_00473e60(iVar6,iVar10,
                     ((int)local_14 + (-iStack_1c - *(int *)(param_1[2] + 0x1c)) >> 1) + unaff_EDI,0
                    );
        iVar6 = param_1[7];
      }
      FUN_00476310(iVar6,0xffffffff,2,2);
    }
  }
LAB_0049dfde:
  iStack_20 = iStack_20 + *(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0x38);
  iVar6 = *(int *)(*param_1 + 8);
  if (*(int *)((int)param_1 + iVar6 + 200) == 0) {
LAB_0049e11a:
    pcVar7 = (char *)0x0;
LAB_0049e11c:
    pcVar7 = _strchr(pcVar7,0x7c);
    if (pcVar7 == (char *)0x0) {
      if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)
                 (*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 4);
      }
      FUN_004782d0(uVar5,&iStack_20,0,0);
      goto LAB_0049e1d8;
    }
    *pcVar7 = '\0';
    if (*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)
               (*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) + 4);
    }
    FUN_004782d0(uVar5,&iStack_20,0,0);
    *pcVar7 = '|';
    pcVar7 = pcVar7 + 1;
    if (pcVar7 == (char *)0x0) goto LAB_0049e1d8;
    uVar8 = 0xffffffff;
    pcVar13 = pcVar7;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar4 = *(int *)((int)param_1 + iVar6 + 200);
    if (*(int *)(*(int *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 8) + 8) != 1) {
      if (iVar4 == 0) goto LAB_0049e11a;
      pcVar7 = *(char **)(*(int *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 8) + 4);
      goto LAB_0049e11c;
    }
    if (iVar4 == 0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = *(char **)(*(int *)(*(int *)((int)param_1 + iVar6 + 0xcc) + 8) + 4);
    }
    pcVar7 = _strchr(pcVar7,0x7c);
    if (pcVar7 == (char *)0x0) {
      if ((*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) != 0) &&
         (pcVar7 = *(char **)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) +
                             4), pcVar7 != (char *)0x0)) {
        uVar8 = 0xffffffff;
        pcVar13 = pcVar7;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        FUN_00477cd0(pcVar7,&iStack_20,~uVar8 - 1);
      }
      goto LAB_0049e1d8;
    }
    *pcVar7 = '\0';
    if ((*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) != 0) &&
       (pcVar13 = *(char **)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8) +
                            4), pcVar13 != (char *)0x0)) {
      uVar8 = 0xffffffff;
      pcVar12 = pcVar13;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_00477cd0(pcVar13,&iStack_20,~uVar8 - 1);
    }
    *pcVar7 = '|';
    pcVar7 = pcVar7 + 1;
    if (pcVar7 == (char *)0x0) goto LAB_0049e1d8;
    uVar8 = 0xffffffff;
    pcVar13 = pcVar7;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004781f0(pcVar7,&iStack_20,~uVar8 - 1);
LAB_0049e1d8:
  if ((*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xbc) != -1) && (iStack_8 != 0)) {
    iStack_20 = iStack_20 + -2;
    FUN_00479670(&iStack_20,*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 8) + 0xbc));
  }
  return;
}

