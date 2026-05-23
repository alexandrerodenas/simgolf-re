/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001f2d0 @ 0x1001F2D0 */
/* Body size: 3556 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001f2d0(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  RECT *pRVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined4 local_88 [16];
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  undefined2 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar10 = local_88;
  for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0xcccccccc;
    puVar10 = puVar10 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1002009e;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar5 = __chkesp();
  if (iVar5 == 0) goto LAB_1002009e;
  if (*(int *)((int)local_8 + 0x10) == 0) {
    local_3c = *(int **)(DAT_1012873c + 4);
  }
  else {
    local_3c = *(int **)((int)local_8 + 0x10);
  }
  if (local_3c == (int *)0x0) {
    (**(code **)(*param_1 + 0x24))(1);
    __chkesp();
    goto LAB_1002009e;
  }
  local_40 = FUN_1007f370(DAT_10122dc0);
  _DAT_1012858c = (float)local_40 / (float)DAT_10122dc8;
  local_44 = FUN_1007f370(DAT_10122dc4);
  _DAT_10128590 = (float)local_44 / (float)DAT_10122dc8;
  DAT_1012857c = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_1012855c = __chkesp();
  local_30 = *(byte **)((int)local_8 + 0x14);
  if ((int)param_4 < 0) {
    DAT_10128530 = (undefined2)param_4;
  }
  else {
    (**(code **)(*param_1 + 0xe4))();
    iVar5 = __chkesp();
    local_48 = *(int *)(iVar5 + 4);
    if (local_48 == 0) {
      (**(code **)(*local_3c + 0x18))();
      iVar5 = __chkesp();
      DAT_10128530 = *(undefined2 *)(iVar5 + (param_4 & 0xff) * 2);
    }
    else {
      if (local_48 != 1) goto LAB_1002009e;
      (**(code **)(*local_3c + 0x1c))();
      iVar5 = __chkesp();
      DAT_10128530 = *(undefined2 *)(iVar5 + (param_4 & 0xff) * 2);
    }
  }
  iVar5 = FUN_1007f370(DAT_10122dc0);
  iVar3 = FUN_1007f370(DAT_10122dc8);
  if (iVar5 == iVar3) {
    iVar5 = FUN_1007f370(DAT_10122dc4);
    iVar3 = FUN_1007f370(DAT_10122dc8);
    if (iVar5 != iVar3) goto LAB_1001f8aa;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,pRVar4);
    iVar5 = __chkesp();
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1002009e;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_1012857c);
        (**(code **)(*param_1 + 0x20))();
        iVar5 = __chkesp();
        uVar2 = DAT_10128530;
        local_2c = (undefined2 *)(iVar5 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        DAT_10128578 = local_18.bottom - local_18.top;
        DAT_10128564 = local_18.right - local_18.left;
        _DAT_1012853c = DAT_1012857c - DAT_10128564;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        iVar5 = DAT_10128564;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          do {
            if (*pbVar9 < 0xfe) {
              *puVar11 = uVar2;
            }
            pbVar9 = pbVar9 + -1;
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          pbVar9 = pbVar9 + -_DAT_1012853c;
          puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
          DAT_10128578 = DAT_10128578 + -1;
          iVar5 = DAT_10128564;
        } while (DAT_10128578 != 0);
      }
      else {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_1012857c);
        (**(code **)(*param_1 + 0x20))();
        iVar5 = __chkesp();
        uVar2 = DAT_10128530;
        local_2c = (undefined2 *)(iVar5 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
        DAT_10128578 = local_18.bottom - local_18.top;
        DAT_10128564 = local_18.right - local_18.left;
        _DAT_1012853c = DAT_1012857c + DAT_10128564;
        _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
        iVar5 = DAT_10128564;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          do {
            if (*pbVar9 < 0xfe) {
              *puVar11 = uVar2;
            }
            pbVar9 = pbVar9 + -1;
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          pbVar9 = pbVar9 + _DAT_1012853c;
          puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
          DAT_10128578 = DAT_10128578 + -1;
          iVar5 = DAT_10128564;
        } while (DAT_10128578 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_1 + 0x20))();
      iVar5 = __chkesp();
      uVar2 = DAT_10128530;
      local_2c = (undefined2 *)(iVar5 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c + DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar5 = DAT_10128564;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        do {
          if (*pbVar9 < 0xfe) {
            *puVar11 = uVar2;
          }
          pbVar9 = pbVar9 + 1;
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pbVar9 = pbVar9 + -_DAT_1012853c;
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar5 = DAT_10128564;
      } while (DAT_10128578 != 0);
    }
    else {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_1012857c);
      (**(code **)(*param_1 + 0x20))();
      iVar5 = __chkesp();
      uVar2 = DAT_10128530;
      local_2c = (undefined2 *)(iVar5 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
      DAT_10128578 = local_18.bottom - local_18.top;
      DAT_10128564 = local_18.right - local_18.left;
      _DAT_1012853c = DAT_1012857c - DAT_10128564;
      _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
      iVar5 = DAT_10128564;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        do {
          if (*pbVar9 < 0xfe) {
            *puVar11 = uVar2;
          }
          pbVar9 = pbVar9 + 1;
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pbVar9 = pbVar9 + _DAT_1012853c;
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
        DAT_10128578 = DAT_10128578 + -1;
        iVar5 = DAT_10128564;
      } while (DAT_10128578 != 0);
    }
  }
  else {
LAB_1001f8aa:
    lVar12 = __ftol();
    iVar5 = (int)lVar12;
    lVar12 = __ftol();
    iVar3 = (int)lVar12;
    lVar12 = __ftol();
    iVar7 = param_3 + (int)lVar12;
    lVar12 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2 + (int)lVar12,iVar7,iVar3,iVar5);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar4 = (RECT *)__chkesp();
    iVar5 = thunk_FUN_10008590(&local_18,&local_18,pRVar4);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1002009e;
    }
    (**(code **)(*param_1 + 0x20))();
    iVar5 = __chkesp();
    local_2c = (undefined2 *)(iVar5 + local_18.left * 2 + local_18.top * DAT_1012855c * 2);
    (**(code **)(*param_1 + 0xe0))();
    DAT_1012855c = __chkesp();
    DAT_10128564 = local_18.right - local_18.left;
    DAT_10128578 = local_18.bottom - local_18.top;
    _DAT_10128560 = (DAT_1012855c - DAT_10128564) * 2;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar5 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128588 = iVar3 / iVar5;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar5 = FUN_1007f370(DAT_10122dc4);
    DAT_10128540 = iVar3 / iVar5;
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
        iVar5 = DAT_10128558 << 0x10;
        DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
        uVar1 = _DAT_10128588 >> 0x10;
        _DAT_10128544 = DAT_10128540 << 0x10;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          iVar3 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
          uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10128554);
          do {
            if (*pbVar9 < 0xfe) {
              *puVar11 = DAT_10128530;
            }
            uVar6 = (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
            pbVar9 = pbVar9 + (-(uint)CARRY2(uVar6,(ushort)iVar3) - uVar1);
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -0x10000;
          } while (-1 < iVar3);
          puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
          iVar5 = uVar8 + _DAT_10128544;
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
        iVar5 = DAT_10128558 << 0x10;
        DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
        uVar1 = _DAT_10128588 >> 0x10;
        _DAT_10128544 = DAT_10128540 << 0x10;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          iVar3 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
          uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10128554);
          do {
            if (*pbVar9 < 0xfe) {
              *puVar11 = DAT_10128530;
            }
            uVar6 = (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
            pbVar9 = pbVar9 + (-(uint)CARRY2(uVar6,(ushort)iVar3) - uVar1);
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -0x10000;
          } while (-1 < iVar3);
          puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
          iVar5 = uVar8 + _DAT_10128544;
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
      iVar5 = DAT_10128558 << 0x10;
      DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
      uVar1 = _DAT_10128588 >> 0x10;
      _DAT_10128544 = DAT_10128540 << 0x10;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        iVar3 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
        uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10128554);
        do {
          if (*pbVar9 < 0xfe) {
            *puVar11 = DAT_10128530;
          }
          uVar6 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
          pbVar9 = pbVar9 + CARRY2(uVar6,(ushort)iVar3) + uVar1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -0x10000;
        } while (-1 < iVar3);
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
        iVar5 = uVar8 + _DAT_10128544;
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
      iVar5 = DAT_10128558 << 0x10;
      DAT_10128564 = (DAT_10128564 + -1) * 0x10000;
      uVar1 = _DAT_10128588 >> 0x10;
      _DAT_10128544 = DAT_10128540 << 0x10;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        iVar3 = CONCAT22((short)((uint)DAT_10128564 >> 0x10),DAT_10128588);
        uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10128554);
        do {
          if (*pbVar9 < 0xfe) {
            *puVar11 = DAT_10128530;
          }
          uVar6 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
          pbVar9 = pbVar9 + CARRY2(uVar6,(ushort)iVar3) + uVar1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -0x10000;
        } while (-1 < iVar3);
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10128560);
        iVar5 = uVar8 + _DAT_10128544;
        pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e20 + (uint)CARRY4(uVar8,_DAT_10128544) * -4);
        DAT_10128578 = DAT_10128578 + -1;
      } while (DAT_10128578 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(2);
  __chkesp();
LAB_1002009e:
  local_8 = (void *)0x100200ae;
  __chkesp();
  return;
}

