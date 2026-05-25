/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1002bcf0 @ 0x1002BCF0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_1002bcf0(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  RECT *pRVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  longlong lVar12;
  undefined4 local_84 [16];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar10 = local_84;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0xcccccccc;
    puVar10 = puVar10 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1002cb11;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar6 = __chkesp();
  if (iVar6 == 0) goto LAB_1002cb11;
  if (*(int *)((int)local_8 + 0x10) == 0) {
    local_3c = *(int *)(DAT_1012873c + 4);
  }
  else {
    local_3c = *(int *)((int)local_8 + 0x10);
  }
  if (local_3c == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    __chkesp();
    goto LAB_1002cb11;
  }
  local_40 = FUN_1007f370(DAT_10122dc0);
  _DAT_1012858c = (float)local_40 / (float)DAT_10122dc8;
  local_44 = FUN_1007f370(DAT_10122dc4);
  _DAT_10128590 = (float)local_44 / (float)DAT_10122dc8;
  DAT_1012857c = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_1012855c = __chkesp();
  local_30 = *(byte **)((int)local_8 + 0x14);
  DAT_10128548 = param_4;
  iVar6 = FUN_1007f370(DAT_10122dc0);
  iVar3 = FUN_1007f370(DAT_10122dc8);
  if (iVar6 == iVar3) {
    iVar6 = FUN_1007f370(DAT_10122dc4);
    iVar3 = FUN_1007f370(DAT_10122dc8);
    if (iVar6 != iVar3) goto LAB_1002c2b5;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,pRVar4);
    iVar6 = __chkesp();
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1002cb11;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_1012857c);
        (**(code **)(*param_1 + 0x20))();
        iVar3 = __chkesp();
        iVar6 = DAT_10128548;
        local_2c = (ushort *)(iVar3 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        DAT_10128578 = local_18.bottom - local_18.top;
        DAT_10128564 = local_18.right - local_18.left;
        _DAT_1012853c = DAT_1012857c - DAT_10128564;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        iVar3 = DAT_10128564;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          do {
            if (*pbVar9 < 0xfe) {
              if (*pbVar9 == 0) {
                *puVar11 = 0;
              }
              else {
                bVar2 = *pbVar9 - 1;
                if (bVar2 < 0xf) {
                  iVar5 = (uint)bVar2 << 0xf;
                  *puVar11 = *(ushort *)
                              (iVar6 + CONCAT22((short)((uint)iVar5 >> 0x10),
                                                (ushort)iVar5 | *puVar11) * 2);
                }
              }
            }
            pbVar9 = pbVar9 + -1;
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          pbVar9 = pbVar9 + -_DAT_1012853c;
          puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
          DAT_10128578 = DAT_10128578 + -1;
          iVar3 = DAT_10128564;
        } while (DAT_10128578 != 0);
      }
      else {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_1012857c);
        (**(code **)(*param_1 + 0x20))();
        iVar3 = __chkesp();
        iVar6 = DAT_10128548;
        local_2c = (ushort *)(iVar3 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        DAT_10128578 = local_18.bottom - local_18.top;
        DAT_10128564 = local_18.right - local_18.left;
        _DAT_1012853c = DAT_1012857c + DAT_10128564;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        iVar3 = DAT_10128564;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          do {
            if (*pbVar9 < 0xfe) {
              if (*pbVar9 == 0) {
                *puVar11 = 0;
              }
              else {
                bVar2 = *pbVar9 - 1;
                if (bVar2 < 0xf) {
                  iVar5 = (uint)bVar2 << 0xf;
                  *puVar11 = *(ushort *)
                              (iVar6 + CONCAT22((short)((uint)iVar5 >> 0x10),
                                                (ushort)iVar5 | *puVar11) * 2);
                }
              }
            }
            pbVar9 = pbVar9 + -1;
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          pbVar9 = pbVar9 + _DAT_1012853c;
          puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
          DAT_10128578 = DAT_10128578 + -1;
          iVar3 = DAT_10128564;
        } while (DAT_10128578 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_1 + 0x20))();
      iVar3 = __chkesp();
      iVar6 = DAT_10128548;
      local_2c = (ushort *)(iVar3 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c + DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar3 = DAT_10128564;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        do {
          if (*pbVar9 < 0xfe) {
            if (*pbVar9 == 0) {
              *puVar11 = 0;
            }
            else {
              bVar2 = *pbVar9 - 1;
              if (bVar2 < 0xf) {
                iVar5 = (uint)bVar2 << 0xf;
                *puVar11 = *(ushort *)
                            (iVar6 + CONCAT22((short)((uint)iVar5 >> 0x10),(ushort)iVar5 | *puVar11)
                                     * 2);
              }
            }
          }
          pbVar9 = pbVar9 + 1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pbVar9 = pbVar9 + -_DAT_1012853c;
        puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar3 = DAT_10128564;
      } while (DAT_10128578 != 0);
    }
    else {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_1 + 0x20))();
      iVar3 = __chkesp();
      iVar6 = DAT_10128548;
      local_2c = (ushort *)(iVar3 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c - DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar3 = DAT_10128564;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        do {
          if (*pbVar9 < 0xfe) {
            if (*pbVar9 == 0) {
              *puVar11 = 0;
            }
            else {
              bVar2 = *pbVar9 - 1;
              if (bVar2 < 0xf) {
                iVar5 = (uint)bVar2 << 0xf;
                *puVar11 = *(ushort *)
                            (iVar6 + CONCAT22((short)((uint)iVar5 >> 0x10),(ushort)iVar5 | *puVar11)
                                     * 2);
              }
            }
          }
          pbVar9 = pbVar9 + 1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pbVar9 = pbVar9 + _DAT_1012853c;
        puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar3 = DAT_10128564;
      } while (DAT_10128578 != 0);
    }
  }
  else {
LAB_1002c2b5:
    lVar12 = __ftol();
    iVar6 = (int)lVar12;
    lVar12 = __ftol();
    iVar3 = (int)lVar12;
    lVar12 = __ftol();
    iVar5 = param_3 + (int)lVar12;
    lVar12 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2 + (int)lVar12,iVar5,iVar3,iVar6);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    iVar6 = thunk_FUN_10008590(&local_18,&local_18,pRVar4);
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1002cb11;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar6 = __chkesp();
    local_2c = (ushort *)(iVar6 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
    (**(code **)(*param_1 + 0xe0))();
    DAT_1012855c = __chkesp();
    DAT_10128564 = local_18.right - local_18.left;
    DAT_10128578 = local_18.bottom - local_18.top;
    _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar6 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128588 = iVar3 / iVar6;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar6 = FUN_1007f370(DAT_10122dc4);
    DAT_10128540 = iVar3 / iVar6;
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_34 = local_18.left - local_28;
        local_38 = local_18.top - local_24;
        _DAT_10128554 = _DAT_10128588 * local_34;
        DAT_10128558 = DAT_10128540 * local_38;
        DAT_10128570 = (_DAT_10128554 & 0xffff) + _DAT_10128588 * DAT_10128564 >> 0x10;
        _DAT_10128584 = (DAT_10128558 & 0xffff) + DAT_10128540 * DAT_10128578 >> 0x10;
        local_30 = (byte *)((*(int *)((int)local_8 + 0x14) +
                             ((*(int *)((int)local_8 + 0x34) + -1) - (DAT_10128558 >> 0x10)) *
                             DAT_1012857c + -1 + *(int *)((int)local_8 + 0x30)) -
                           (_DAT_10128554 >> 0x10));
        _DAT_1012853c = DAT_10128570 - DAT_1012857c;
        *(uint *)PTR_DAT_10122e20 = (DAT_10128540 >> 0x10) * DAT_1012857c - DAT_10128570;
        *(int *)PTR_DAT_10122e1c = *(int *)PTR_DAT_10122e20 + DAT_1012857c;
        iVar6 = DAT_10128548;
        iVar3 = DAT_10128558 << 0x10;
        DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
        uVar1 = _DAT_10128588 >> 0x10;
        _DAT_10128544 = DAT_10128540 << 0x10;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
          uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10128554);
          do {
            if (*pbVar9 < 0xfe) {
              if (*pbVar9 == 0) {
                *puVar11 = 0;
              }
              else {
                bVar2 = *pbVar9 - 1;
                if (bVar2 < 0xf) {
                  iVar3 = (uint)bVar2 << 0xf;
                  *puVar11 = *(ushort *)
                              (iVar6 + CONCAT22((short)((uint)iVar3 >> 0x10),
                                                (ushort)iVar3 | *puVar11) * 2);
                }
              }
            }
            uVar7 = (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar5);
            pbVar9 = pbVar9 + (-(uint)CARRY2(uVar7,(ushort)iVar5) - uVar1);
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + -0x10000;
          } while (-1 < iVar5);
          puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
          iVar3 = uVar8 + _DAT_10128544;
          pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar8,_DAT_10128544) * -4);
          DAT_10128578 = DAT_10128578 + -1;
        } while (DAT_10128578 != 0);
      }
      else {
        local_34 = local_18.left - local_28;
        local_38 = local_18.top - local_24;
        _DAT_10128554 = _DAT_10128588 * local_34;
        DAT_10128558 = DAT_10128540 * local_38;
        DAT_10128570 = (_DAT_10128554 & 0xffff) + _DAT_10128588 * DAT_10128564 >> 0x10;
        _DAT_10128584 = (DAT_10128558 & 0xffff) + DAT_10128540 * DAT_10128578 >> 0x10;
        local_30 = (byte *)((*(int *)((int)local_8 + 0x14) + (DAT_10128558 >> 0x10) * DAT_1012857c +
                             -1 + *(int *)((int)local_8 + 0x30)) - (_DAT_10128554 >> 0x10));
        *(uint *)PTR_DAT_10122e20 = (DAT_10128540 >> 0x10) * DAT_1012857c + DAT_10128570;
        *(int *)PTR_DAT_10122e1c = *(int *)PTR_DAT_10122e20 + DAT_1012857c;
        iVar6 = DAT_10128548;
        iVar3 = DAT_10128558 << 0x10;
        DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
        uVar1 = _DAT_10128588 >> 0x10;
        _DAT_10128544 = DAT_10128540 << 0x10;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
          uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10128554);
          do {
            if (*pbVar9 < 0xfe) {
              if (*pbVar9 == 0) {
                *puVar11 = 0;
              }
              else {
                bVar2 = *pbVar9 - 1;
                if (bVar2 < 0xf) {
                  iVar3 = (uint)bVar2 << 0xf;
                  *puVar11 = *(ushort *)
                              (iVar6 + CONCAT22((short)((uint)iVar3 >> 0x10),
                                                (ushort)iVar3 | *puVar11) * 2);
                }
              }
            }
            uVar7 = (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar5);
            pbVar9 = pbVar9 + (-(uint)CARRY2(uVar7,(ushort)iVar5) - uVar1);
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + -0x10000;
          } while (-1 < iVar5);
          puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
          iVar3 = uVar8 + _DAT_10128544;
          pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar8,_DAT_10128544) * -4);
          DAT_10128578 = DAT_10128578 + -1;
        } while (DAT_10128578 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_34 = local_18.left - local_28;
      local_38 = local_18.top - local_24;
      _DAT_10128554 = _DAT_10128588 * local_34;
      DAT_10128558 = DAT_10128540 * local_38;
      DAT_10128570 = (_DAT_10128554 & 0xffff) + _DAT_10128588 * DAT_10128564 >> 0x10;
      _DAT_10128584 = (DAT_10128558 & 0xffff) + DAT_10128540 * DAT_10128578 >> 0x10;
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) +
                          ((*(int *)((int)local_8 + 0x34) + -1) - (DAT_10128558 >> 0x10)) *
                          DAT_1012857c + (_DAT_10128554 >> 0x10));
      *(uint *)PTR_DAT_10122e20 = (DAT_10128540 >> 0x10) * DAT_1012857c + DAT_10128570;
      *(int *)PTR_DAT_10122e1c = *(int *)PTR_DAT_10122e20 + DAT_1012857c;
      iVar6 = DAT_10128548;
      iVar3 = DAT_10128558 << 0x10;
      DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
      uVar1 = _DAT_10128588 >> 0x10;
      _DAT_10128544 = DAT_10128540 << 0x10;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
        uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10128554);
        do {
          if (*pbVar9 < 0xfe) {
            if (*pbVar9 == 0) {
              *puVar11 = 0;
            }
            else {
              bVar2 = *pbVar9 - 1;
              if (bVar2 < 0xf) {
                iVar3 = (uint)bVar2 << 0xf;
                *puVar11 = *(ushort *)
                            (iVar6 + CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)iVar3 | *puVar11)
                                     * 2);
              }
            }
          }
          uVar7 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar5);
          pbVar9 = pbVar9 + CARRY2(uVar7,(ushort)iVar5) + uVar1;
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + -0x10000;
        } while (-1 < iVar5);
        puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
        iVar3 = uVar8 + _DAT_10128544;
        pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar8,_DAT_10128544) * -4);
        DAT_10128578 = DAT_10128578 + -1;
      } while (DAT_10128578 != 0);
    }
    else {
      local_34 = local_18.left - local_28;
      local_38 = local_18.top - local_24;
      _DAT_10128554 = _DAT_10128588 * local_34;
      DAT_10128558 = DAT_10128540 * local_38;
      DAT_10128570 = (_DAT_10128554 & 0xffff) + _DAT_10128588 * DAT_10128564 >> 0x10;
      _DAT_10128584 = (DAT_10128558 & 0xffff) + DAT_10128540 * DAT_10128578 >> 0x10;
      _DAT_1012853c = DAT_1012857c - DAT_10128570;
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (DAT_10128558 >> 0x10) * DAT_1012857c +
                         (_DAT_10128554 >> 0x10));
      *(uint *)PTR_DAT_10122e20 =
           ((DAT_10128540 >> 0x10) * DAT_1012857c - DAT_1012857c) + _DAT_1012853c;
      *(int *)PTR_DAT_10122e1c = *(int *)PTR_DAT_10122e20 + DAT_1012857c;
      iVar6 = DAT_10128548;
      iVar3 = DAT_10128558 << 0x10;
      DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
      uVar1 = _DAT_10128588 >> 0x10;
      _DAT_10128544 = DAT_10128540 << 0x10;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
        uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10128554);
        do {
          if (*pbVar9 < 0xfe) {
            if (*pbVar9 == 0) {
              *puVar11 = 0;
            }
            else {
              bVar2 = *pbVar9 - 1;
              if (bVar2 < 0xf) {
                iVar3 = (uint)bVar2 << 0xf;
                *puVar11 = *(ushort *)
                            (iVar6 + CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)iVar3 | *puVar11)
                                     * 2);
              }
            }
          }
          uVar7 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar5);
          pbVar9 = pbVar9 + CARRY2(uVar7,(ushort)iVar5) + uVar1;
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + -0x10000;
        } while (-1 < iVar5);
        puVar11 = (ushort *)((int)puVar11 + _DAT_10128560);
        iVar3 = uVar8 + _DAT_10128544;
        pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar8,_DAT_10128544) * -4);
        DAT_10128578 = DAT_10128578 + -1;
      } while (DAT_10128578 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(2);
  __chkesp();
LAB_1002cb11:
  local_8 = (void *)0x1002cb21;
  __chkesp();
  return;
}

