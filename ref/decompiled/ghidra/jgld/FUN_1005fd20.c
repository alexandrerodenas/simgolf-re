/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1005fd20 @ 0x1005FD20 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005fd20(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  RECT *pRVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 local_80 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  undefined1 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar10 = local_80;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0xcccccccc;
    puVar10 = puVar10 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_100609af;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar5 = __chkesp();
  if (iVar5 == 0) goto LAB_100609af;
  local_3c = FUN_1007f370(DAT_10122dc0);
  _DAT_1012868c = (float)local_3c / (float)DAT_10122dc8;
  local_40 = FUN_1007f370(DAT_10122dc4);
  _DAT_10128690 = (float)local_40 / (float)DAT_10122dc8;
  DAT_10128678 = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_10128644 = __chkesp();
  local_30 = *(byte **)((int)local_8 + 0x14);
  _DAT_10128664 = param_4 & 0xff;
  iVar5 = FUN_1007f370(DAT_10122dc0);
  iVar3 = FUN_1007f370(DAT_10122dc8);
  if (iVar5 == iVar3) {
    iVar5 = FUN_1007f370(DAT_10122dc4);
    iVar3 = FUN_1007f370(DAT_10122dc8);
    if (iVar5 != iVar3) goto LAB_100601f1;
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
      goto LAB_100609af;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_10128678);
        (**(code **)(*param_1 + 0x18))();
        iVar5 = __chkesp();
        local_2c = (undefined1 *)(iVar5 + local_18.left + local_18.top * DAT_10128644);
        DAT_10128670 = local_18.bottom - local_18.top;
        DAT_10128650 = local_18.right - local_18.left;
        _DAT_1012861c = DAT_10128678 - DAT_10128650;
        _DAT_10128648 = DAT_10128644 - DAT_10128650;
        uVar2 = DAT_10128664;
        iVar5 = DAT_10128650;
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
          pbVar9 = pbVar9 + -_DAT_1012861c;
          puVar11 = puVar11 + _DAT_10128648;
          DAT_10128670 = DAT_10128670 + -1;
          iVar5 = DAT_10128650;
        } while (DAT_10128670 != 0);
      }
      else {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_10128678);
        (**(code **)(*param_1 + 0x18))();
        iVar5 = __chkesp();
        local_2c = (undefined1 *)(iVar5 + local_18.left + local_18.top * DAT_10128644);
        DAT_10128670 = local_18.bottom - local_18.top;
        DAT_10128650 = local_18.right - local_18.left;
        _DAT_1012861c = DAT_10128678 + DAT_10128650;
        _DAT_10128648 = DAT_10128644 - DAT_10128650;
        uVar2 = DAT_10128664;
        iVar5 = DAT_10128650;
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
          pbVar9 = pbVar9 + _DAT_1012861c;
          puVar11 = puVar11 + _DAT_10128648;
          DAT_10128670 = DAT_10128670 + -1;
          iVar5 = DAT_10128650;
        } while (DAT_10128670 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_10128678);
      (**(code **)(*param_1 + 0x18))();
      iVar5 = __chkesp();
      local_2c = (undefined1 *)(iVar5 + local_18.left + local_18.top * DAT_10128644);
      DAT_10128670 = local_18.bottom - local_18.top;
      DAT_10128650 = local_18.right - local_18.left;
      _DAT_1012861c = DAT_10128678 + DAT_10128650;
      _DAT_10128648 = DAT_10128644 - DAT_10128650;
      uVar2 = DAT_10128664;
      iVar5 = DAT_10128650;
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
        pbVar9 = pbVar9 + -_DAT_1012861c;
        puVar11 = puVar11 + _DAT_10128648;
        DAT_10128670 = DAT_10128670 + -1;
        iVar5 = DAT_10128650;
      } while (DAT_10128670 != 0);
    }
    else {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_10128678);
      (**(code **)(*param_1 + 0x18))();
      iVar5 = __chkesp();
      local_2c = (undefined1 *)(iVar5 + local_18.left + local_18.top * DAT_10128644);
      DAT_10128670 = local_18.bottom - local_18.top;
      DAT_10128650 = local_18.right - local_18.left;
      _DAT_1012861c = DAT_10128678 - DAT_10128650;
      _DAT_10128648 = DAT_10128644 - DAT_10128650;
      uVar2 = DAT_10128664;
      iVar5 = DAT_10128650;
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
        pbVar9 = pbVar9 + _DAT_1012861c;
        puVar11 = puVar11 + _DAT_10128648;
        DAT_10128670 = DAT_10128670 + -1;
        iVar5 = DAT_10128650;
      } while (DAT_10128670 != 0);
    }
  }
  else {
LAB_100601f1:
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
      goto LAB_100609af;
    }
    (**(code **)(*param_1 + 0x18))();
    iVar5 = __chkesp();
    local_2c = (undefined1 *)(iVar5 + local_18.left + local_18.top * DAT_10128644);
    (**(code **)(*param_1 + 0xe0))();
    DAT_10128644 = __chkesp();
    DAT_10128650 = local_18.right - local_18.left;
    DAT_10128670 = local_18.bottom - local_18.top;
    _DAT_10128648 = DAT_10128644 - DAT_10128650;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar5 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128688 = iVar3 / iVar5;
    iVar3 = DAT_10122dc8 << 0x10;
    iVar5 = FUN_1007f370(DAT_10122dc4);
    DAT_10128624 = iVar3 / iVar5;
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_34 = local_18.left - local_28;
        local_38 = local_18.top - local_24;
        _DAT_1012863c = _DAT_10128688 * local_34;
        DAT_10128640 = DAT_10128624 * local_38;
        DAT_10128660 = (_DAT_1012863c & 0xffff) + _DAT_10128688 * DAT_10128650 >> 0x10;
        _DAT_10128680 = (DAT_10128640 & 0xffff) + DAT_10128624 * DAT_10128670 >> 0x10;
        local_30 = (byte *)((*(int *)((int)local_8 + 0x14) +
                             ((*(int *)((int)local_8 + 0x34) + -1) - (DAT_10128640 >> 0x10)) *
                             DAT_10128678 + -1 + *(int *)((int)local_8 + 0x30)) -
                           (_DAT_1012863c >> 0x10));
        _DAT_1012861c = DAT_10128660 - DAT_10128678;
        *(uint *)PTR_DAT_10122e58 = (DAT_10128624 >> 0x10) * DAT_10128678 - DAT_10128660;
        *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
        iVar5 = DAT_10128640 << 0x10;
        DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
        uVar1 = _DAT_10128688 >> 0x10;
        _DAT_10128628 = DAT_10128624 << 0x10;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          iVar3 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
          uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_1012863c);
          do {
            if (*pbVar9 < 0xfe) {
              *puVar11 = 0;
            }
            uVar6 = (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
            pbVar9 = pbVar9 + (-(uint)CARRY2(uVar6,(ushort)iVar3) - uVar1);
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -0x10000;
          } while (-1 < iVar3);
          puVar11 = puVar11 + _DAT_10128648;
          iVar5 = uVar8 + _DAT_10128628;
          pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar8,_DAT_10128628) * -4);
          DAT_10128670 = DAT_10128670 + -1;
        } while (DAT_10128670 != 0);
      }
      else {
        local_34 = local_18.left - local_28;
        local_38 = local_18.top - local_24;
        _DAT_1012863c = _DAT_10128688 * local_34;
        DAT_10128640 = DAT_10128624 * local_38;
        DAT_10128660 = (_DAT_1012863c & 0xffff) + _DAT_10128688 * DAT_10128650 >> 0x10;
        _DAT_10128680 = (DAT_10128640 & 0xffff) + DAT_10128624 * DAT_10128670 >> 0x10;
        local_30 = (byte *)((*(int *)((int)local_8 + 0x14) + (DAT_10128640 >> 0x10) * DAT_10128678 +
                             -1 + *(int *)((int)local_8 + 0x30)) - (_DAT_1012863c >> 0x10));
        *(uint *)PTR_DAT_10122e58 = (DAT_10128624 >> 0x10) * DAT_10128678 + DAT_10128660;
        *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
        iVar5 = DAT_10128640 << 0x10;
        DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
        uVar1 = _DAT_10128688 >> 0x10;
        _DAT_10128628 = DAT_10128624 << 0x10;
        pbVar9 = local_30;
        puVar11 = local_2c;
        do {
          iVar3 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
          uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_1012863c);
          do {
            if (*pbVar9 < 0xfe) {
              *puVar11 = 0;
            }
            uVar6 = (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
            pbVar9 = pbVar9 + (-(uint)CARRY2(uVar6,(ushort)iVar3) - uVar1);
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -0x10000;
          } while (-1 < iVar3);
          puVar11 = puVar11 + _DAT_10128648;
          iVar5 = uVar8 + _DAT_10128628;
          pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar8,_DAT_10128628) * -4);
          DAT_10128670 = DAT_10128670 + -1;
        } while (DAT_10128670 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_34 = local_18.left - local_28;
      local_38 = local_18.top - local_24;
      _DAT_1012863c = _DAT_10128688 * local_34;
      DAT_10128640 = DAT_10128624 * local_38;
      DAT_10128660 = (_DAT_1012863c & 0xffff) + _DAT_10128688 * DAT_10128650 >> 0x10;
      _DAT_10128680 = (DAT_10128640 & 0xffff) + DAT_10128624 * DAT_10128670 >> 0x10;
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) +
                          ((*(int *)((int)local_8 + 0x34) + -1) - (DAT_10128640 >> 0x10)) *
                          DAT_10128678 + (_DAT_1012863c >> 0x10));
      *(uint *)PTR_DAT_10122e58 = (DAT_10128624 >> 0x10) * DAT_10128678 + DAT_10128660;
      *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
      iVar5 = DAT_10128640 << 0x10;
      DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
      uVar1 = _DAT_10128688 >> 0x10;
      _DAT_10128628 = DAT_10128624 << 0x10;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        iVar3 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
        uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_1012863c);
        do {
          if (*pbVar9 < 0xfe) {
            *puVar11 = 0;
          }
          uVar6 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
          pbVar9 = pbVar9 + CARRY2(uVar6,(ushort)iVar3) + uVar1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -0x10000;
        } while (-1 < iVar3);
        puVar11 = puVar11 + _DAT_10128648;
        iVar5 = uVar8 + _DAT_10128628;
        pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar8,_DAT_10128628) * -4);
        DAT_10128670 = DAT_10128670 + -1;
      } while (DAT_10128670 != 0);
    }
    else {
      local_34 = local_18.left - local_28;
      local_38 = local_18.top - local_24;
      _DAT_1012863c = _DAT_10128688 * local_34;
      DAT_10128640 = DAT_10128624 * local_38;
      DAT_10128660 = (_DAT_1012863c & 0xffff) + _DAT_10128688 * DAT_10128650 >> 0x10;
      _DAT_10128680 = (DAT_10128640 & 0xffff) + DAT_10128624 * DAT_10128670 >> 0x10;
      _DAT_1012861c = DAT_10128678 - DAT_10128660;
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (DAT_10128640 >> 0x10) * DAT_10128678 +
                         (_DAT_1012863c >> 0x10));
      *(uint *)PTR_DAT_10122e58 =
           ((DAT_10128624 >> 0x10) * DAT_10128678 - DAT_10128678) + _DAT_1012861c;
      *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
      iVar5 = DAT_10128640 << 0x10;
      DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
      uVar1 = _DAT_10128688 >> 0x10;
      _DAT_10128628 = DAT_10128624 << 0x10;
      pbVar9 = local_30;
      puVar11 = local_2c;
      do {
        iVar3 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
        uVar8 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_1012863c);
        do {
          if (*pbVar9 < 0xfe) {
            *puVar11 = 0;
          }
          uVar6 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar6 + (ushort)iVar3);
          pbVar9 = pbVar9 + CARRY2(uVar6,(ushort)iVar3) + uVar1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -0x10000;
        } while (-1 < iVar3);
        puVar11 = puVar11 + _DAT_10128648;
        iVar5 = uVar8 + _DAT_10128628;
        pbVar9 = pbVar9 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar8,_DAT_10128628) * -4);
        DAT_10128670 = DAT_10128670 + -1;
      } while (DAT_10128670 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(2);
  __chkesp();
LAB_100609af:
  local_8 = (void *)0x100609bc;
  __chkesp();
  return;
}

