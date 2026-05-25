/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2d50 @ 0x004A2D50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a2d50(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_8;
  int iStack_4;
  
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + -0x8c) + 4) + 0xa4 + param_1);
  if (iVar6 != 0) {
    if (param_1 == 0x8c) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(param_1 + -0x8c) + 4) + 0x1e8 + param_1;
    }
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + -0x8c) + 4) + 0x1ec + param_1);
    _DAT_0083ab2c = iVar6;
    if (piVar7 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar7 + 0xdc))();
    }
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + -0x8c) + 4) + 0x1ec + param_1);
    if (piVar7 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*piVar7 + 0xd8))();
    }
    iVar6 = *(int *)(*(int *)(param_1 + -0x8c) + 8);
    FUN_00475c60(iVar10,*(undefined4 *)(iVar6 + param_1 + -100),
                 *(undefined4 *)(iVar6 + -0x60 + param_1),0,0,uVar4,uVar3);
    iVar6 = *(int *)(*(int *)(param_1 + -0x8c) + 8);
    iVar10 = iVar6 + param_1;
    iVar9 = *(int *)(iVar6 + -0x54 + param_1) + *(int *)(iVar6 + -0x48 + param_1);
    iStack_8 = *(int *)(iVar10 + -0x24) + iVar9;
    iVar11 = *(int *)(iVar10 + -0x44) >> 1;
    iVar6 = *(int *)(iVar10 + 0x44) + -1;
    iStack_4 = (*(int *)(iVar10 + -0x20) - *(int *)(iVar10 + -0x44)) + iVar11;
    if (-2 < iVar6) {
      *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(iVar10 + 0x3c);
      iVar5 = 1;
      if (0 < *(int *)(iVar10 + 0x44)) {
        do {
          iVar5 = iVar5 + -1;
          *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(*(int *)(iVar10 + 0x40) + 0x10);
        } while (iVar5 != 0);
        *(int *)(iVar10 + 0x48) = iVar6;
      }
    }
    piVar7 = (int *)(*(int *)(param_1 + -0x8c) + 8);
    iStack_28 = 0;
    if (0 < *(int *)(param_1 + -0x34 + *piVar7)) {
      do {
        iStack_14 = iStack_4;
        iStack_20 = *(int *)(param_1 + -0x24 + *piVar7) * iStack_28;
        iStack_18 = iStack_8 + iStack_20;
        iStack_20 = iStack_20 + iVar9;
        iVar6 = *piVar7;
        iVar10 = 0;
        iStack_1c = iVar11;
        if (0 < *(int *)(param_1 + -0x30 + iVar6)) {
          do {
            iVar6 = param_1 + iVar6;
            if (*(int *)(iVar6 + 0x3c) != 0) {
              *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(*(int *)(iVar6 + 0x40) + 0xc);
              iVar5 = *(int *)(iVar6 + 0x48) + 1;
              *(int *)(iVar6 + 0x48) = iVar5;
              if (iVar5 == *(int *)(iVar6 + 0x44)) {
                *(undefined4 *)(iVar6 + 0x48) = 0;
              }
            }
            if (*(int *)(iVar6 + 0x40) != 0) {
              if (*(int *)(iVar6 + 0x3c) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(*(int *)(iVar6 + 0x40) + 8);
              }
              pcVar2 = *(char **)(iVar6 + 4);
              if (pcVar2 != (char *)0x0) {
                uVar8 = 0xffffffff;
                pcVar12 = pcVar2;
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                FUN_00477cd0(pcVar2,&iStack_20,~uVar8 - 1);
              }
            }
            iVar6 = *(int *)(param_1 + -0x20 + *(int *)(*(int *)(param_1 + -0x8c) + 8));
            iStack_1c = iStack_1c + iVar6;
            iStack_14 = iStack_14 + iVar6;
            iVar6 = *(int *)(*(int *)(param_1 + -0x8c) + 8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(param_1 + -0x30 + iVar6));
        }
        iStack_28 = iStack_28 + 1;
        piVar7 = (int *)(*(int *)(param_1 + -0x8c) + 8);
      } while (iStack_28 < *(int *)(param_1 + -0x34 + *piVar7));
    }
  }
  return;
}

