/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492000 @ 0x00492000 */


int __thiscall
FUN_00492000(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int unaff_EBX;
  int iVar12;
  int unaff_EBP;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int unaff_retaddr;
  
  if ((((param_2 != 0) && (*(int **)(param_2 + 4) != (int *)0x0)) &&
      (iVar3 = (**(code **)(**(int **)(param_2 + 4) + 0x10))(), iVar3 != 0)) &&
     ((FUN_00473ae0(), param_5 != 0 && (param_6 != 0)))) {
    if (*(int **)(param_2 + 4) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_2 + 4) + 0xd8))();
    }
    if (param_3 + param_5 <= iVar3) {
      if (*(int **)(param_2 + 4) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_2 + 4) + 0xdc))();
      }
      if (param_4 + param_6 <= iVar3) {
        if (param_1 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1 + 4;
        }
        piVar4 = (int *)(**(code **)(*DAT_0083ad50 + 0x80))(iVar3,param_7);
        *(int **)(param_1 + 4) = piVar4;
        *(undefined4 *)(param_1 + 0x28) = param_7;
        (**(code **)(*piVar4 + 0x18))(0xff);
        *(int *)(param_1 + 0x18) = param_5;
        *(int *)(param_1 + 0x1c) = param_6;
        if ((*(int **)(unaff_EBP + 4) == (int *)0x0) ||
           (iVar3 = (**(code **)(**(int **)(unaff_EBP + 4) + 0x14))(unaff_EBX,unaff_retaddr),
           iVar3 == 0)) {
          if (*(int **)(unaff_EBP + 4) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(1);
          }
          return 7;
        }
        if (*(int **)(unaff_EBP + 4) == (int *)0x0) {
          param_3 = 0;
        }
        else {
          param_3 = (**(code **)(**(int **)(unaff_EBP + 4) + 0xe0))();
        }
        iVar9 = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        if (0 < param_6) {
          do {
            iVar5 = 0;
            if (0 < param_5) {
              do {
                if ((*(char *)(iVar5 + iVar3) != -1) || ((char)param_5 == '\0')) goto LAB_00492159;
                iVar5 = iVar5 + 1;
              } while (iVar5 < param_5);
            }
            iVar3 = iVar3 + param_3;
            iVar9 = iVar9 + 1;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          } while (iVar9 < param_6);
        }
LAB_00492159:
        piVar4 = *(int **)(unaff_EBP + 4);
        if (*(int *)(param_1 + 0x24) == param_6) {
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x24))(2);
          }
          return 9;
        }
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x24))(1);
        }
        if (*(int **)(unaff_EBP + 4) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(unaff_EBP + 4) + 0x14))
                            (unaff_EBX,unaff_retaddr + param_6 + -1);
        }
        iVar9 = 0;
        *(int *)(param_1 + 0x14) = param_6 - *(int *)(param_1 + 0x24);
        if (0 < param_6) {
          iVar3 = iVar3 + -1;
          iVar5 = param_5;
          do {
            for (; 0 < iVar5; iVar5 = iVar5 + -1) {
              if ((*(char *)(iVar3 + iVar5) != -1) || ((char)param_5 == '\0')) goto LAB_004921ec;
            }
            iVar3 = iVar3 - param_3;
            iVar9 = iVar9 + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
            iVar5 = param_5;
          } while (iVar9 < param_6);
        }
LAB_004921ec:
        if (*(int *)(param_1 + 0x14) == 0) {
          if (*(int **)(unaff_EBP + 4) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(2);
          }
          return 9;
        }
        if (*(int **)(unaff_EBP + 4) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(1);
        }
        if (*(int **)(unaff_EBP + 4) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(unaff_EBP + 4) + 0x14))
                            (unaff_EBX,*(int *)(param_1 + 0x24) + unaff_retaddr);
        }
        iVar9 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x20) = param_5;
        if (0 < iVar9) {
          do {
            iVar5 = 0;
            if (0 < param_5) {
              do {
                if ((*(char *)(iVar5 + iVar3) != -1) || ((char)param_5 == '\0')) break;
                iVar5 = iVar5 + 1;
              } while (iVar5 < param_5);
            }
            if (iVar5 < *(int *)(param_1 + 0x20)) {
              *(int *)(param_1 + 0x20) = iVar5;
            }
            iVar3 = iVar3 + param_3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (*(int **)(unaff_EBP + 4) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(1);
        }
        if (*(int **)(unaff_EBP + 4) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(unaff_EBP + 4) + 0x14))
                            (unaff_EBX,*(int *)(param_1 + 0x24) + unaff_retaddr);
        }
        iVar9 = *(int *)(param_1 + 0x14);
        iVar12 = param_5;
        iVar5 = param_5;
        iVar14 = param_5;
        if (0 < iVar9) {
          do {
            iVar11 = 0;
            iVar12 = iVar5;
            while (((0 < iVar5 && (iVar12 = param_2, *(char *)(iVar3 + -1 + iVar5) == -1)) &&
                   ((char)param_5 != '\0'))) {
              iVar11 = iVar11 + 1;
              iVar5 = iVar5 + -1;
            }
            if (iVar11 < iVar14) {
              iVar14 = iVar11;
            }
            iVar3 = iVar3 + param_3;
            iVar9 = iVar9 + -1;
            iVar5 = iVar12;
          } while (iVar9 != 0);
        }
        if (*(int **)(unaff_EBP + 4) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(1);
        }
        iVar3 = (iVar12 - iVar14) - *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x10) = iVar3;
        if (iVar3 == 0) {
          return 9;
        }
        puVar6 = _malloc(iVar3 * *(int *)(param_1 + 0x14));
        if (puVar6 == (undefined4 *)0x0) {
          FUN_00473ae0();
          return 4;
        }
        uVar1 = *(uint *)(param_1 + 0x10);
        iVar3 = *(int *)(param_1 + 0x14);
        puVar2 = puVar6;
        if (*(int **)(unaff_EBP + 4) == (int *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = (undefined4 *)
                   (**(code **)(**(int **)(unaff_EBP + 4) + 0x14))
                             (unaff_EBX + *(int *)(param_1 + 0x20),
                              *(int *)(param_1 + 0x24) + unaff_retaddr);
        }
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar13 = puVar7;
          puVar15 = puVar2;
          for (uVar10 = uVar1 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar10 = uVar1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          puVar7 = (undefined4 *)((int)puVar7 + param_3);
          puVar2 = (undefined4 *)((int)puVar2 + uVar1);
        }
        iVar3 = **(int **)(param_1 + 4);
        uVar8 = (**(code **)(**(int **)(unaff_EBP + 4) + 0xe8))();
        iVar3 = (**(code **)(iVar3 + 4))
                          (puVar6,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),8,
                           param_4,uVar8);
        if (iVar3 != 0) {
          FUN_00473ae0();
          return iVar3;
        }
        FUN_004a5007(puVar6);
        if (*(int **)(unaff_EBP + 4) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 4) + 0x24))(1);
        }
        return 0;
      }
    }
  }
  return 3;
}

