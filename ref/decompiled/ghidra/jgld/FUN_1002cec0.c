/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1002cec0 @ 0x1002CEC0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1002cec0(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  RECT *lprcSrc2;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  ushort *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  undefined4 local_7c [16];
  int local_3c;
  ushort *local_38;
  int *local_34;
  byte *local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  int local_8;
  
  puVar12 = local_7c;
  for (iVar9 = 0x1e; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0xcccccccc;
    puVar12 = puVar12 + 1;
  }
  local_38 = (ushort *)0x0;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 0x20))();
    local_38 = (ushort *)__chkesp();
    if ((*(int *)(local_8 + 0x14) != 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0x10))();
      iVar9 = __chkesp();
      if (iVar9 != 0) {
        if (*(int *)(local_8 + 0x10) == 0) {
          local_34 = *(int **)(DAT_1012873c + 4);
        }
        else {
          local_34 = *(int **)(local_8 + 0x10);
        }
        if (local_34 == (int *)0x0) {
          (**(code **)(*param_1 + 0x24))(1);
          __chkesp();
        }
        else {
          DAT_1012857c = *(int *)(local_8 + 0x2c);
          (**(code **)(*param_1 + 0xe0))();
          DAT_1012855c = __chkesp();
          local_30 = *(byte **)(local_8 + 0x14);
          DAT_10128548 = param_4;
          (**(code **)(*param_1 + 0xe4))();
          iVar9 = __chkesp();
          local_3c = *(int *)(iVar9 + 4);
          if (local_3c == 0) {
            (**(code **)(*local_34 + 0x18))();
            DAT_1012856c = __chkesp();
          }
          else {
            if (local_3c != 1) {
              (**(code **)(*param_1 + 0x24))(1);
              __chkesp();
              goto LAB_1002d283;
            }
            (**(code **)(*local_34 + 0x1c))();
            DAT_1012856c = __chkesp();
          }
          iVar9 = FUN_1007f370(DAT_10122dc0);
          iVar5 = FUN_1007f370(DAT_10122dc8);
          if (iVar9 == iVar5) {
            iVar9 = FUN_1007f370(DAT_10122dc4);
            iVar5 = FUN_1007f370(DAT_10122dc8);
            if (iVar9 == iVar5) {
              thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)(local_8 + 0x30),
                                 *(int *)(local_8 + 0x34));
              local_28 = local_18.left;
              local_24 = local_18.top;
              local_20 = local_18.right;
              local_1c = local_18.bottom;
              (**(code **)(*param_1 + 0xcc))();
              lprcSrc2 = (RECT *)__chkesp();
              IntersectRect(&local_18,&local_18,lprcSrc2);
              iVar9 = __chkesp();
              if (iVar9 == 0) {
                (**(code **)(*param_1 + 0x24))(1);
                __chkesp();
                goto LAB_1002d283;
              }
              local_30 = (byte *)(*(int *)(local_8 + 0x14) + (local_18.left - local_28) +
                                 (local_18.top - local_24) * DAT_1012857c);
              (**(code **)(*param_1 + 0x20))();
              iVar9 = __chkesp();
              local_2c = (ushort *)(iVar9 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
              (**(code **)(*param_5 + 0x20))();
              iVar6 = __chkesp();
              iVar9 = local_18.left * 2;
              (**(code **)(*param_5 + 0xe0))();
              iVar7 = __chkesp();
              iVar3 = DAT_1012856c;
              iVar5 = DAT_10128548;
              local_38 = (ushort *)(iVar6 + iVar9 + local_18.top * iVar7 * 2);
              DAT_10128578 = local_18.bottom - local_18.top;
              DAT_10128564 = local_18.right - local_18.left;
              _DAT_1012853c = DAT_1012857c - DAT_10128564;
              _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
              iVar9 = DAT_10128564;
              puVar10 = local_38;
              pbVar11 = local_30;
              puVar13 = local_2c;
              do {
                do {
                  if (*pbVar11 != 0xff) {
                    bVar1 = *pbVar11;
                    if (bVar1 < 0xe0) {
                      *puVar10 = *(ushort *)(iVar3 + (uint)bVar1 * 2);
                    }
                    else {
                      if (bVar1 < 0xf0) {
                        cVar2 = '/';
                      }
                      else {
                        cVar2 = '\x10';
                      }
                      iVar6 = (uint)(byte)(bVar1 + cVar2) << 0xf;
                      uVar4 = (ushort)iVar6;
                      uVar8 = (undefined2)((uint)iVar6 >> 0x10);
                      if (*puVar10 == 0x7c1f) {
                        *puVar10 = *(ushort *)(iVar5 + CONCAT22(uVar8,uVar4 | *puVar13) * 2);
                      }
                      else {
                        *puVar10 = *(ushort *)(iVar5 + CONCAT22(uVar8,uVar4 | *puVar10) * 2);
                      }
                    }
                  }
                  pbVar11 = pbVar11 + 1;
                  puVar13 = puVar13 + 1;
                  puVar10 = puVar10 + 1;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
                pbVar11 = pbVar11 + _DAT_1012853c;
                puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
                puVar10 = (ushort *)((int)puVar10 + _DAT_10128560);
                DAT_10128578 = DAT_10128578 + -1;
                iVar9 = DAT_10128564;
              } while (DAT_10128578 != 0);
            }
          }
          (**(code **)(*param_1 + 0x24))(2);
          __chkesp();
        }
      }
    }
  }
LAB_1002d283:
  local_8 = 0x1002d290;
  __chkesp();
  return;
}

