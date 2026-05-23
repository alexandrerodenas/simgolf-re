/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a3f10 @ 0x004A3F10 */
/* Body size: 1065 addresses */


void __thiscall FUN_004a3f10(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)(*(int *)(*param_1 + 4) + 0x130 + (int)param_1) != 0) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(param_1[0x1c],param_1[0x1c],param_1[0x1d]);
    }
    iVar12 = *(int *)(*param_1 + 8);
    iVar5 = *(int *)((int)param_1 + iVar12 + 0x5c);
    iVar4 = (int)param_2 / iVar5;
    iVar7 = *(int *)((int)param_1 + iVar12 + 0x48);
    iVar11 = (*(int *)((int)param_1 + iVar12 + 0x68) + iVar7) * iVar4;
    iVar2 = param_1[0x22];
    iVar12 = (param_2 - iVar5 * iVar4) * *(int *)((int)param_1 + iVar12 + 0x6c) + (iVar7 >> 1);
    if ((int)param_2 <= iVar2 + -1) {
      param_1[0x21] = param_1[0x20];
      uVar10 = (int)param_2 >> 0x1f;
      if ((int)param_2 < 0) {
        iVar5 = (param_2 ^ uVar10) - uVar10;
        if (iVar2 < iVar5) {
          return;
        }
        if (0 < iVar5) {
          do {
            iVar5 = iVar5 + -1;
            param_1[0x21] = *(int *)(param_1[0x21] + 0x10);
          } while (iVar5 != 0);
        }
        uVar6 = iVar2 + param_2;
      }
      else {
        uVar6 = param_2;
        uVar9 = param_2;
        if (0 < (int)param_2) {
          do {
            uVar9 = uVar9 - 1;
            param_1[0x21] = *(int *)(param_1[0x21] + 0xc);
          } while (uVar9 != 0);
        }
      }
      param_1[0x23] = uVar6;
      iVar5 = *(int *)(*param_1 + 8);
      if ((int)param_2 <= *(int *)(iVar5 + 0xd0 + (int)param_1) + -1) {
        *(undefined4 *)((int)param_1 + iVar5 + 0xcc) = *(undefined4 *)((int)param_1 + iVar5 + 200);
        if ((int)param_2 < 0) {
          iVar7 = (param_2 ^ uVar10) - uVar10;
          if (*(int *)((int)param_1 + iVar5 + 0xd0) < iVar7) {
            return;
          }
          if (0 < iVar7) {
            do {
              iVar7 = iVar7 + -1;
              *(undefined4 *)((int)param_1 + iVar5 + 0xcc) =
                   *(undefined4 *)(*(int *)((int)param_1 + iVar5 + 0xcc) + 0x10);
            } while (iVar7 != 0);
          }
          uVar6 = param_2 + *(int *)((int)param_1 + iVar5 + 0xd0);
        }
        else {
          uVar10 = param_2;
          uVar6 = param_2;
          if (0 < (int)param_2) {
            do {
              uVar10 = uVar10 - 1;
              *(undefined4 *)((int)param_1 + iVar5 + 0xcc) =
                   *(undefined4 *)(*(int *)((int)param_1 + iVar5 + 0xcc) + 0xc);
            } while (uVar10 != 0);
          }
        }
        *(uint *)((int)param_1 + iVar5 + 0xd4) = uVar6;
        iVar5 = *param_1;
        iStack_4 = *(int *)((int)param_1 + *(int *)(iVar5 + 8) + 0x6c) + iVar12;
        iStack_8 = *(int *)((int)param_1 + *(int *)(iVar5 + 8) + 0x68) + iVar11;
        iStack_10 = iVar11 + 4 + param_1[0x2a];
        if (param_1 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar5 + 4) + 0x274 + (int)param_1;
        }
        iVar5 = *(int *)(iVar5 + 8);
        iStack_c = iVar12;
        FUN_00475c60(iVar7,*(int *)((int)param_1 + iVar5 + 0x28) + iVar11,
                     *(int *)((int)param_1 + iVar5 + 0x2c) + iVar12,iVar11,iVar12,
                     *(undefined4 *)((int)param_1 + iVar5 + 0x68),
                     *(undefined4 *)((int)param_1 + iVar5 + 0x6c));
        if (param_1[0x20] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1[0x21] + 8) + 4);
        }
        iVar12 = iVar12 + (*(int *)(*(int *)(*param_1 + 8) + 0x6c + (int)param_1) -
                          (*(int *)(iVar5 + 0x1c) * param_1[0x1c]) / param_1[0x1d]) / 2;
        if (param_1[0x20] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1[0x21] + 8) + 4);
        }
        iVar11 = iVar11 + (param_1[0x2a] - (*(int *)(iVar5 + 0x18) * param_1[0x1c]) / param_1[0x1d])
                          / 2;
        if ((code *)param_1[0x2e] == (code *)0x0) {
          if (param_1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*param_1 + 4) + 0x274 + (int)param_1;
          }
          if (param_1[0x20] == 0) {
            FUN_00473e60(iVar5,iVar11,iVar12,0);
          }
          else {
            FUN_00473e60(iVar5,iVar11,iVar12,0);
          }
        }
        else {
          if (param_1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*param_1 + 4) + (int)param_1;
          }
          if (param_1[0x20] == 0) {
            local_14 = 0;
          }
          else {
            local_14 = *(undefined4 *)(param_1[0x21] + 4);
          }
          if (param_1[0x20] == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(*(int *)(param_1[0x21] + 8) + 4);
          }
          (*(code *)param_1[0x2e])(uVar8,iVar5,local_14,iVar11,iVar12);
          iVar5 = *(int *)(*param_1 + 8);
          FUN_00476310(*(undefined4 *)((int)param_1 + iVar5 + 0x80),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x8c),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x98),
                       *(undefined4 *)((int)param_1 + iVar5 + 0xa4));
          iVar5 = *(int *)(*param_1 + 8);
          FUN_00476340(*(undefined4 *)((int)param_1 + iVar5 + 0x84),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x90),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x9c),
                       *(undefined4 *)((int)param_1 + iVar5 + 0xa8));
          iVar5 = *(int *)(*param_1 + 8);
          FUN_00476370(*(undefined4 *)((int)param_1 + iVar5 + 0x88),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x94),
                       *(undefined4 *)((int)param_1 + iVar5 + 0xa0),
                       *(undefined4 *)((int)param_1 + iVar5 + 0xac));
          iVar5 = *(int *)(*param_1 + 8);
          FUN_004762d0(*(undefined4 *)((int)param_1 + iVar5 + 0x74),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x78),
                       *(undefined4 *)((int)param_1 + iVar5 + 0x7c),0);
        }
        if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 8) + 0xf0) == param_2) &&
           (param_1[1] != 0)) {
          if (param_1[0x20] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1[0x21] + 8) + 4);
          }
          FUN_00479560(iVar11,iVar12 + 1,
                       (*(int *)(iVar5 + 0x18) * param_1[0x1c]) / param_1[0x1d] + -1 + iVar11,
                       *(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0x6c) + -3 + iVar12 + 1,
                       param_1[2],param_1[2]);
        }
        if ((*(int *)(*(int *)(*param_1 + 8) + 200 + (int)param_1) != 0) &&
           (pcVar3 = *(char **)(*(int *)(*(int *)((int)param_1 + *(int *)(*param_1 + 8) + 0xcc) + 8)
                               + 4), pcVar3 != (char *)0x0)) {
          uVar10 = 0xffffffff;
          pcVar13 = pcVar3;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          FUN_00477cd0(pcVar3,&iStack_10,~uVar10 - 1);
        }
      }
    }
  }
  return;
}

