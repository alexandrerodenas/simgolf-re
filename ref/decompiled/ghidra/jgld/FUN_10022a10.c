/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10022a10 @ 0x10022A10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_10022a10(void *this,int *param_1,int param_2,int param_3,ushort param_4)

{
  int iVar1;
  RECT *pRVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar9;
  ushort uVar10;
  uint uVar8;
  byte *pbVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  longlong lVar14;
  undefined4 local_88 [16];
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
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
  
  puVar12 = local_88;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0xcccccccc;
    puVar12 = puVar12 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_10023c84;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar3 = __chkesp();
  if (iVar3 == 0) goto LAB_10023c84;
  if (*(int *)((int)local_8 + 0x10) == 0) {
    local_3c = *(int **)(DAT_1012873c + 4);
  }
  else {
    local_3c = *(int **)((int)local_8 + 0x10);
  }
  if (local_3c == (int *)0x0) {
    (**(code **)(*param_1 + 0x24))(1);
    __chkesp();
    goto LAB_10023c84;
  }
  local_40 = FUN_1007f370(DAT_10122dc0);
  _DAT_1012858c = (float)local_40 / (float)DAT_10122dc8;
  local_44 = FUN_1007f370(DAT_10122dc4);
  _DAT_10128590 = (float)local_44 / (float)DAT_10122dc8;
  DAT_1012857c = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_1012855c = __chkesp();
  local_30 = *(byte **)((int)local_8 + 0x14);
  (**(code **)(*param_1 + 0xe4))();
  iVar3 = __chkesp();
  local_48 = *(int *)(iVar3 + 4);
  if (local_48 == 0) {
    (**(code **)(*local_3c + 0x18))();
    DAT_1012856c = __chkesp();
  }
  else {
    if (local_48 != 1) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_10023c84;
    }
    (**(code **)(*local_3c + 0x1c))();
    DAT_1012856c = __chkesp();
  }
  iVar3 = FUN_1007f370(DAT_10122dc0);
  iVar1 = FUN_1007f370(DAT_10122dc8);
  if (iVar3 == iVar1) {
    iVar3 = FUN_1007f370(DAT_10122dc4);
    iVar1 = FUN_1007f370(DAT_10122dc8);
    if (iVar3 != iVar1) goto LAB_10023228;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar2 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,pRVar2);
    iVar3 = __chkesp();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_10023c84;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_1012857c);
        (**(code **)(*param_1 + 0x20))();
        iVar1 = __chkesp();
        iVar3 = DAT_1012856c;
        local_2c = (ushort *)(iVar1 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        DAT_10128578 = local_18.bottom - local_18.top;
        DAT_10128564 = local_18.right - local_18.left;
        _DAT_1012853c = DAT_1012857c - DAT_10128564;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        iVar1 = DAT_10128564;
        pbVar11 = local_30;
        puVar13 = local_2c;
        do {
          do {
            if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
              uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
              uVar6 = CONCAT22(param_4,uVar4) & 0xffff83ff;
              uVar7 = (ushort)uVar6;
              uVar9 = (ushort)(uVar6 >> 0x10);
              uVar6 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) +
                                             ((param_4 & 0x7c00) >> 0xb)) * 0x400) & 0xfffffc1f;
              uVar4 = (ushort)uVar6;
              uVar10 = (ushort)(uVar6 >> 0x10);
              uVar6 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) *
                                              0x20) & 0xffffffe0;
              param_4 = (ushort)(uVar6 >> 0x10);
              *puVar13 = (ushort)uVar6 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
            }
            pbVar11 = pbVar11 + -1;
            puVar13 = puVar13 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          pbVar11 = pbVar11 + -_DAT_1012853c;
          puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
          DAT_10128578 = DAT_10128578 + -1;
          iVar1 = DAT_10128564;
        } while (DAT_10128578 != 0);
      }
      else {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_1012857c);
        (**(code **)(*param_1 + 0x20))();
        iVar1 = __chkesp();
        iVar3 = DAT_1012856c;
        local_2c = (ushort *)(iVar1 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        DAT_10128578 = local_18.bottom - local_18.top;
        DAT_10128564 = local_18.right - local_18.left;
        _DAT_1012853c = DAT_1012857c + DAT_10128564;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        iVar1 = DAT_10128564;
        pbVar11 = local_30;
        puVar13 = local_2c;
        do {
          do {
            if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
              uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
              uVar6 = CONCAT22(param_4,uVar4) & 0xffff83ff;
              uVar7 = (ushort)uVar6;
              uVar9 = (ushort)(uVar6 >> 0x10);
              uVar6 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) +
                                             ((param_4 & 0x7c00) >> 0xb)) * 0x400) & 0xfffffc1f;
              uVar4 = (ushort)uVar6;
              uVar10 = (ushort)(uVar6 >> 0x10);
              uVar6 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) *
                                              0x20) & 0xffffffe0;
              param_4 = (ushort)(uVar6 >> 0x10);
              *puVar13 = (ushort)uVar6 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
            }
            pbVar11 = pbVar11 + -1;
            puVar13 = puVar13 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          pbVar11 = pbVar11 + _DAT_1012853c;
          puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
          DAT_10128578 = DAT_10128578 + -1;
          iVar1 = DAT_10128564;
        } while (DAT_10128578 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_1 + 0x20))();
      iVar1 = __chkesp();
      iVar3 = DAT_1012856c;
      local_2c = (ushort *)(iVar1 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c + DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar1 = DAT_10128564;
      pbVar11 = local_30;
      puVar13 = local_2c;
      do {
        do {
          if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
            uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
            uVar6 = CONCAT22(param_4,uVar4) & 0xffff83ff;
            uVar7 = (ushort)uVar6;
            uVar9 = (ushort)(uVar6 >> 0x10);
            uVar6 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) + ((param_4 & 0x7c00) >> 0xb))
                                           * 0x400) & 0xfffffc1f;
            uVar4 = (ushort)uVar6;
            uVar10 = (ushort)(uVar6 >> 0x10);
            uVar6 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) * 0x20
                            ) & 0xffffffe0;
            param_4 = (ushort)(uVar6 >> 0x10);
            *puVar13 = (ushort)uVar6 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
          }
          pbVar11 = pbVar11 + 1;
          puVar13 = puVar13 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        pbVar11 = pbVar11 + -_DAT_1012853c;
        puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar1 = DAT_10128564;
      } while (DAT_10128578 != 0);
    }
    else {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_1 + 0x20))();
      iVar1 = __chkesp();
      iVar3 = DAT_1012856c;
      local_2c = (ushort *)(iVar1 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c - DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar1 = DAT_10128564;
      pbVar11 = local_30;
      puVar13 = local_2c;
      do {
        do {
          if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
            uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
            uVar6 = CONCAT22(param_4,uVar4) & 0xffff83ff;
            uVar7 = (ushort)uVar6;
            uVar9 = (ushort)(uVar6 >> 0x10);
            uVar6 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) + ((param_4 & 0x7c00) >> 0xb))
                                           * 0x400) & 0xfffffc1f;
            uVar4 = (ushort)uVar6;
            uVar10 = (ushort)(uVar6 >> 0x10);
            uVar6 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) * 0x20
                            ) & 0xffffffe0;
            param_4 = (ushort)(uVar6 >> 0x10);
            *puVar13 = (ushort)uVar6 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
          }
          pbVar11 = pbVar11 + 1;
          puVar13 = puVar13 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        pbVar11 = pbVar11 + _DAT_1012853c;
        puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar1 = DAT_10128564;
      } while (DAT_10128578 != 0);
    }
  }
  else {
LAB_10023228:
    lVar14 = __ftol();
    iVar3 = (int)lVar14;
    lVar14 = __ftol();
    iVar1 = (int)lVar14;
    lVar14 = __ftol();
    iVar5 = param_3 + (int)lVar14;
    lVar14 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2 + (int)lVar14,iVar5,iVar1,iVar3);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar2 = (RECT *)__chkesp();
    iVar3 = thunk_FUN_10008590(&local_18,&local_18,pRVar2);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_10023c84;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar3 = __chkesp();
    local_2c = (ushort *)(iVar3 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
    (**(code **)(*param_1 + 0xe0))();
    DAT_1012855c = __chkesp();
    DAT_10128564 = local_18.right - local_18.left;
    DAT_10128578 = local_18.bottom - local_18.top;
    _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
    iVar1 = DAT_10122dc8 << 0x10;
    iVar3 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128588 = iVar1 / iVar3;
    iVar1 = DAT_10122dc8 << 0x10;
    iVar3 = FUN_1007f370(DAT_10122dc4);
    DAT_10128540 = iVar1 / iVar3;
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
        iVar3 = DAT_1012856c;
        iVar1 = DAT_10128558 << 0x10;
        DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
        _DAT_10128580 = _DAT_10128588 >> 0x10;
        _DAT_10128544 = DAT_10128540 << 0x10;
        pbVar11 = local_30;
        puVar13 = local_2c;
        do {
          iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
          uVar6 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_10128554);
          do {
            if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
              uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
              uVar8 = CONCAT22(param_4,uVar4) & 0xffff83ff;
              uVar7 = (ushort)uVar8;
              uVar9 = (ushort)(uVar8 >> 0x10);
              uVar8 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) +
                                             ((param_4 & 0x7c00) >> 0xb)) * 0x400) & 0xfffffc1f;
              uVar4 = (ushort)uVar8;
              uVar10 = (ushort)(uVar8 >> 0x10);
              uVar8 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) *
                                              0x20) & 0xffffffe0;
              param_4 = (ushort)(uVar8 >> 0x10);
              *puVar13 = (ushort)uVar8 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
            }
            uVar4 = (ushort)uVar6;
            uVar6 = CONCAT22((short)(uVar6 >> 0x10),uVar4 + (ushort)iVar5);
            pbVar11 = pbVar11 + (-(uint)CARRY2(uVar4,(ushort)iVar5) - _DAT_10128580);
            puVar13 = puVar13 + 1;
            iVar5 = iVar5 + -0x10000;
          } while (-1 < iVar5);
          puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
          iVar1 = uVar6 + _DAT_10128544;
          pbVar11 = pbVar11 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar6,_DAT_10128544) * -4);
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
        iVar3 = DAT_1012856c;
        iVar1 = DAT_10128558 << 0x10;
        DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
        _DAT_10128580 = _DAT_10128588 >> 0x10;
        _DAT_10128544 = DAT_10128540 << 0x10;
        pbVar11 = local_30;
        puVar13 = local_2c;
        do {
          iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
          uVar6 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_10128554);
          do {
            if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
              uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
              uVar8 = CONCAT22(param_4,uVar4) & 0xffff83ff;
              uVar7 = (ushort)uVar8;
              uVar9 = (ushort)(uVar8 >> 0x10);
              uVar8 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) +
                                             ((param_4 & 0x7c00) >> 0xb)) * 0x400) & 0xfffffc1f;
              uVar4 = (ushort)uVar8;
              uVar10 = (ushort)(uVar8 >> 0x10);
              uVar8 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) *
                                              0x20) & 0xffffffe0;
              param_4 = (ushort)(uVar8 >> 0x10);
              *puVar13 = (ushort)uVar8 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
            }
            uVar4 = (ushort)uVar6;
            uVar6 = CONCAT22((short)(uVar6 >> 0x10),uVar4 + (ushort)iVar5);
            pbVar11 = pbVar11 + (-(uint)CARRY2(uVar4,(ushort)iVar5) - _DAT_10128580);
            puVar13 = puVar13 + 1;
            iVar5 = iVar5 + -0x10000;
          } while (-1 < iVar5);
          puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
          iVar1 = uVar6 + _DAT_10128544;
          pbVar11 = pbVar11 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar6,_DAT_10128544) * -4);
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
      iVar3 = DAT_1012856c;
      iVar1 = DAT_10128558 << 0x10;
      DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
      _DAT_10128580 = _DAT_10128588 >> 0x10;
      _DAT_10128544 = DAT_10128540 << 0x10;
      pbVar11 = local_30;
      puVar13 = local_2c;
      do {
        iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
        uVar6 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_10128554);
        do {
          if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
            uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
            uVar8 = CONCAT22(param_4,uVar4) & 0xffff83ff;
            uVar7 = (ushort)uVar8;
            uVar9 = (ushort)(uVar8 >> 0x10);
            uVar8 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) + ((param_4 & 0x7c00) >> 0xb))
                                           * 0x400) & 0xfffffc1f;
            uVar4 = (ushort)uVar8;
            uVar10 = (ushort)(uVar8 >> 0x10);
            uVar8 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) * 0x20
                            ) & 0xffffffe0;
            param_4 = (ushort)(uVar8 >> 0x10);
            *puVar13 = (ushort)uVar8 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
          }
          uVar4 = (ushort)uVar6;
          uVar6 = CONCAT22((short)(uVar6 >> 0x10),uVar4 + (ushort)iVar5);
          pbVar11 = pbVar11 + CARRY2(uVar4,(ushort)iVar5) + _DAT_10128580;
          puVar13 = puVar13 + 1;
          iVar5 = iVar5 + -0x10000;
        } while (-1 < iVar5);
        puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
        iVar1 = uVar6 + _DAT_10128544;
        pbVar11 = pbVar11 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar6,_DAT_10128544) * -4);
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
      iVar3 = DAT_1012856c;
      iVar1 = DAT_10128558 << 0x10;
      DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
      _DAT_10128580 = _DAT_10128588 >> 0x10;
      _DAT_10128544 = DAT_10128540 << 0x10;
      pbVar11 = local_30;
      puVar13 = local_2c;
      do {
        iVar5 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
        uVar6 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_10128554);
        do {
          if ((*pbVar11 != 0xff) && (*pbVar11 < 0xf8)) {
            uVar4 = *(ushort *)(iVar3 + (uint)*pbVar11 * 2);
            uVar8 = CONCAT22(param_4,uVar4) & 0xffff83ff;
            uVar7 = (ushort)uVar8;
            uVar9 = (ushort)(uVar8 >> 0x10);
            uVar8 = CONCAT22(uVar9,uVar7 | (((uVar4 & 0x7c00) >> 0xb) + ((param_4 & 0x7c00) >> 0xb))
                                           * 0x400) & 0xfffffc1f;
            uVar4 = (ushort)uVar8;
            uVar10 = (ushort)(uVar8 >> 0x10);
            uVar8 = CONCAT22(uVar10,uVar4 | (((uVar7 & 0x3e0) >> 6) + ((uVar9 & 0x3e0) >> 6)) * 0x20
                            ) & 0xffffffe0;
            param_4 = (ushort)(uVar8 >> 0x10);
            *puVar13 = (ushort)uVar8 | ((uVar4 & 0x1f) >> 1) + ((uVar10 & 0x1f) >> 1);
          }
          uVar4 = (ushort)uVar6;
          uVar6 = CONCAT22((short)(uVar6 >> 0x10),uVar4 + (ushort)iVar5);
          pbVar11 = pbVar11 + CARRY2(uVar4,(ushort)iVar5) + _DAT_10128580;
          puVar13 = puVar13 + 1;
          iVar5 = iVar5 + -0x10000;
        } while (-1 < iVar5);
        puVar13 = (ushort *)((int)puVar13 + _DAT_10128560);
        iVar1 = uVar6 + _DAT_10128544;
        pbVar11 = pbVar11 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar6,_DAT_10128544) * -4);
        DAT_10128578 = DAT_10128578 + -1;
      } while (DAT_10128578 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(2);
  __chkesp();
LAB_10023c84:
  local_8 = (void *)0x10023c94;
  __chkesp();
  return;
}

