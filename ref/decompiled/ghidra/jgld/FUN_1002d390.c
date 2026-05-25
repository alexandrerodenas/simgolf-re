/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1002d390 @ 0x1002D390 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1002d390(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  RECT *pRVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  longlong lVar12;
  undefined4 local_74 [16];
  int local_34;
  int local_30;
  int local_2c;
  ushort *local_28;
  int *local_24;
  byte *local_20;
  ushort *local_1c;
  RECT local_18;
  int local_8;
  
  puVar10 = local_74;
  for (iVar6 = 0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0xcccccccc;
    puVar10 = puVar10 + 1;
  }
  local_28 = (ushort *)0x0;
  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 0x20))();
    local_28 = (ushort *)__chkesp();
    local_2c = FUN_1007f370(DAT_10122dc0);
    _DAT_1012858c = (float)local_2c / (float)param_5;
    local_30 = FUN_1007f370(DAT_10122dc4);
    _DAT_10128590 = (float)local_30 / (float)param_5;
    lVar12 = __ftol();
    iVar6 = (int)lVar12;
    lVar12 = __ftol();
    iVar8 = (int)lVar12;
    lVar12 = __ftol();
    iVar7 = param_3 + (int)lVar12;
    lVar12 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2 + (int)lVar12,iVar7,iVar8,iVar6);
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    iVar6 = thunk_FUN_10008590(&local_18,&local_18,pRVar4);
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
    }
    else {
      if (*(int *)(local_8 + 0x10) == 0) {
        local_24 = *(int **)(DAT_1012873c + 4);
      }
      else {
        local_24 = *(int **)(local_8 + 0x10);
      }
      if (local_24 == (int *)0x0) {
        (**(code **)(*param_1 + 0x24))(1);
        __chkesp();
      }
      else {
        DAT_1012857c = *(int *)(local_8 + 0x2c);
        (**(code **)(*param_1 + 0xe0))();
        DAT_1012855c = __chkesp();
        local_20 = *(byte **)(local_8 + 0x14);
        (**(code **)(*param_1 + 0x20))();
        iVar6 = __chkesp();
        local_1c = (ushort *)(iVar6 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        local_28 = local_28 + local_18.left + local_18.top * DAT_1012855c;
        DAT_10128564 = local_18.right - local_18.left;
        DAT_10128578 = local_18.bottom - local_18.top;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        _DAT_10128588 = FUN_1007f370(param_4);
        _DAT_10128588 = (param_5 << 0x10) / _DAT_10128588;
        iVar6 = FUN_1007f370(param_4);
        DAT_10128540 = (param_5 << 0x10) / iVar6;
        DAT_10128548 = param_6;
        (**(code **)(*param_1 + 0xe4))();
        iVar6 = __chkesp();
        local_34 = *(int *)(iVar6 + 4);
        if (local_34 == 0) {
          (**(code **)(*local_24 + 0x18))();
          DAT_1012856c = __chkesp();
        }
        else {
          if (local_34 != 1) {
            (**(code **)(*param_1 + 0x24))(1);
            __chkesp();
            goto LAB_1002d77d;
          }
          (**(code **)(*local_24 + 0x1c))();
          DAT_1012856c = __chkesp();
        }
        if (-1 < param_4) {
          DAT_10128570 = (uint)(_DAT_10128588 * DAT_10128564) >> 0x10;
          _DAT_10128584 = DAT_10128540 * DAT_10128578 >> 0x10;
          _DAT_1012853c = DAT_1012857c - DAT_10128570;
          *(uint *)PTR_DAT_10122e20 =
               ((DAT_10128540 >> 0x10) * DAT_1012857c - DAT_1012857c) + _DAT_1012853c;
          iVar6 = DAT_1012856c;
          DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
          iVar8 = DAT_10128564;
          pbVar9 = local_20;
          puVar11 = local_1c;
          do {
            do {
              if (*pbVar9 != 0xff) {
                bVar1 = *pbVar9;
                if (bVar1 < 0xe0) {
                  *local_28 = *(ushort *)(iVar6 + (uint)bVar1 * 2);
                }
                else {
                  if (bVar1 < 0xf0) {
                    cVar2 = '/';
                  }
                  else {
                    cVar2 = '\x10';
                  }
                  iVar7 = (uint)(byte)(bVar1 + cVar2) << 0xf;
                  uVar3 = (ushort)iVar7;
                  uVar5 = (undefined2)((uint)iVar7 >> 0x10);
                  if (*local_28 == 0x7c1f) {
                    *local_28 = *(ushort *)(DAT_10128548 + CONCAT22(uVar5,uVar3 | *puVar11) * 2);
                  }
                  else {
                    *local_28 = *(ushort *)(DAT_10128548 + CONCAT22(uVar5,uVar3 | *local_28) * 2);
                  }
                }
              }
              pbVar9 = pbVar9 + 2;
              puVar11 = puVar11 + 1;
              local_28 = local_28 + 1;
              iVar8 = iVar8 + -0x10000;
            } while (-1 < iVar8);
            puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
            local_28 = (ushort *)((int)local_28 + _DAT_10128560);
            pbVar9 = pbVar9 + *(int *)PTR_DAT_10122e20;
            DAT_10128578 = DAT_10128578 + -1;
            iVar8 = DAT_10128564;
          } while (DAT_10128578 != 0);
        }
      }
    }
  }
LAB_1002d77d:
  local_8 = 0x1002d78a;
  __chkesp();
  return;
}

