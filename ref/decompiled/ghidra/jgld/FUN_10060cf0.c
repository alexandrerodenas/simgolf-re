/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10060cf0 @ 0x10060CF0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_10060cf0(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  RECT *pRVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined4 local_80 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar9 = local_80;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0xcccccccc;
    puVar9 = puVar9 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_10061a41;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar3 = __chkesp();
  if (iVar3 == 0) goto LAB_10061a41;
  local_3c = FUN_1007f370(DAT_10122dc0);
  _DAT_1012868c = (float)local_3c / (float)DAT_10122dc8;
  local_40 = FUN_1007f370(DAT_10122dc4);
  _DAT_10128690 = (float)local_40 / (float)DAT_10122dc8;
  DAT_10128678 = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_10128644 = __chkesp();
  local_30 = *(byte **)((int)local_8 + 0x14);
  DAT_1012862c = param_4;
  iVar3 = FUN_1007f370(DAT_10122dc0);
  iVar1 = FUN_1007f370(DAT_10122dc8);
  if (iVar3 == iVar1) {
    iVar3 = FUN_1007f370(DAT_10122dc4);
    iVar1 = FUN_1007f370(DAT_10122dc8);
    if (iVar3 != iVar1) goto LAB_1006120b;
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
      goto LAB_10061a41;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_10128678);
        (**(code **)(*param_1 + 0x18))();
        iVar1 = __chkesp();
        iVar3 = DAT_1012862c;
        local_2c = (byte *)(iVar1 + local_18.left + local_18.top * DAT_10128644);
        DAT_10128670 = local_18.bottom - local_18.top;
        DAT_10128650 = local_18.right - local_18.left;
        _DAT_1012861c = DAT_10128678 - DAT_10128650;
        _DAT_10128648 = DAT_10128644 - DAT_10128650;
        iVar1 = DAT_10128650;
        pbVar8 = local_30;
        pbVar10 = local_2c;
        do {
          do {
            if (*pbVar8 < 0xfe) {
              if (*pbVar8 == 0xf8) {
                *pbVar10 = *(byte *)(iVar3 + (uint)*pbVar10);
              }
              else {
                *pbVar10 = *pbVar8;
              }
            }
            pbVar8 = pbVar8 + -1;
            pbVar10 = pbVar10 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          pbVar8 = pbVar8 + -_DAT_1012861c;
          pbVar10 = pbVar10 + _DAT_10128648;
          DAT_10128670 = DAT_10128670 + -1;
          iVar1 = DAT_10128650;
        } while (DAT_10128670 != 0);
      }
      else {
        local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_10128678);
        (**(code **)(*param_1 + 0x18))();
        iVar1 = __chkesp();
        iVar3 = DAT_1012862c;
        local_2c = (byte *)(iVar1 + local_18.left + local_18.top * DAT_10128644);
        DAT_10128670 = local_18.bottom - local_18.top;
        DAT_10128650 = local_18.right - local_18.left;
        _DAT_1012861c = DAT_10128678 + DAT_10128650;
        _DAT_10128648 = DAT_10128644 - DAT_10128650;
        iVar1 = DAT_10128650;
        pbVar8 = local_30;
        pbVar10 = local_2c;
        do {
          do {
            if (*pbVar8 < 0xfe) {
              if (*pbVar8 == 0xf8) {
                *pbVar10 = *(byte *)(iVar3 + (uint)*pbVar10);
              }
              else {
                *pbVar10 = *pbVar8;
              }
            }
            pbVar8 = pbVar8 + -1;
            pbVar10 = pbVar10 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          pbVar8 = pbVar8 + _DAT_1012861c;
          pbVar10 = pbVar10 + _DAT_10128648;
          DAT_10128670 = DAT_10128670 + -1;
          iVar1 = DAT_10128650;
        } while (DAT_10128670 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_10128678);
      (**(code **)(*param_1 + 0x18))();
      iVar1 = __chkesp();
      iVar3 = DAT_1012862c;
      local_2c = (byte *)(iVar1 + local_18.left + local_18.top * DAT_10128644);
      DAT_10128670 = local_18.bottom - local_18.top;
      DAT_10128650 = local_18.right - local_18.left;
      _DAT_1012861c = DAT_10128678 + DAT_10128650;
      _DAT_10128648 = DAT_10128644 - DAT_10128650;
      iVar1 = DAT_10128650;
      pbVar8 = local_30;
      pbVar10 = local_2c;
      do {
        do {
          if (*pbVar8 < 0xfe) {
            if (*pbVar8 == 0xf8) {
              *pbVar10 = *(byte *)(iVar3 + (uint)*pbVar10);
            }
            else {
              *pbVar10 = *pbVar8;
            }
          }
          pbVar8 = pbVar8 + 1;
          pbVar10 = pbVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        pbVar8 = pbVar8 + -_DAT_1012861c;
        pbVar10 = pbVar10 + _DAT_10128648;
        DAT_10128670 = DAT_10128670 + -1;
        iVar1 = DAT_10128650;
      } while (DAT_10128670 != 0);
    }
    else {
      local_30 = (byte *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_10128678);
      (**(code **)(*param_1 + 0x18))();
      iVar1 = __chkesp();
      iVar3 = DAT_1012862c;
      local_2c = (byte *)(iVar1 + local_18.left + local_18.top * DAT_10128644);
      DAT_10128670 = local_18.bottom - local_18.top;
      DAT_10128650 = local_18.right - local_18.left;
      _DAT_1012861c = DAT_10128678 - DAT_10128650;
      _DAT_10128648 = DAT_10128644 - DAT_10128650;
      iVar1 = DAT_10128650;
      pbVar8 = local_30;
      pbVar10 = local_2c;
      do {
        do {
          if (*pbVar8 < 0xfe) {
            if (*pbVar8 == 0xf8) {
              *pbVar10 = *(byte *)(iVar3 + (uint)*pbVar10);
            }
            else {
              *pbVar10 = *pbVar8;
            }
          }
          pbVar8 = pbVar8 + 1;
          pbVar10 = pbVar10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        pbVar8 = pbVar8 + _DAT_1012861c;
        pbVar10 = pbVar10 + _DAT_10128648;
        DAT_10128670 = DAT_10128670 + -1;
        iVar1 = DAT_10128650;
      } while (DAT_10128670 != 0);
    }
  }
  else {
LAB_1006120b:
    lVar11 = __ftol();
    iVar3 = (int)lVar11;
    lVar11 = __ftol();
    iVar1 = (int)lVar11;
    lVar11 = __ftol();
    iVar6 = param_3 + (int)lVar11;
    lVar11 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2 + (int)lVar11,iVar6,iVar1,iVar3);
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
      goto LAB_10061a41;
    }
    (**(code **)(*param_1 + 0x18))();
    iVar3 = __chkesp();
    local_2c = (byte *)(iVar3 + local_18.left + local_18.top * DAT_10128644);
    (**(code **)(*param_1 + 0xe0))();
    DAT_10128644 = __chkesp();
    DAT_10128650 = local_18.right - local_18.left;
    DAT_10128670 = local_18.bottom - local_18.top;
    _DAT_10128648 = DAT_10128644 - DAT_10128650;
    iVar1 = DAT_10122dc8 << 0x10;
    iVar3 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128688 = iVar1 / iVar3;
    iVar1 = DAT_10122dc8 << 0x10;
    iVar3 = FUN_1007f370(DAT_10122dc4);
    DAT_10128624 = iVar1 / iVar3;
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
        iVar3 = DAT_1012862c;
        iVar1 = DAT_10128640 << 0x10;
        DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
        uVar4 = _DAT_10128688 >> 0x10;
        _DAT_10128628 = DAT_10128624 << 0x10;
        pbVar8 = local_30;
        pbVar10 = local_2c;
        _DAT_1012867c = uVar4;
        do {
          iVar6 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
          uVar7 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_1012863c);
          do {
            if (*pbVar8 < 0xfe) {
              if (*pbVar8 == 0xf8) {
                uVar4 = CONCAT31((int3)(uVar4 >> 8),*pbVar10);
                *pbVar10 = *(byte *)(iVar3 + uVar4);
              }
              else {
                *pbVar10 = *pbVar8;
              }
            }
            uVar5 = (ushort)uVar7;
            uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar6);
            pbVar8 = pbVar8 + (-(uint)CARRY2(uVar5,(ushort)iVar6) - _DAT_1012867c);
            pbVar10 = pbVar10 + 1;
            iVar6 = iVar6 + -0x10000;
          } while (-1 < iVar6);
          pbVar10 = pbVar10 + _DAT_10128648;
          iVar1 = uVar7 + _DAT_10128628;
          pbVar8 = pbVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
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
        iVar3 = DAT_1012862c;
        iVar1 = DAT_10128640 << 0x10;
        DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
        uVar4 = _DAT_10128688 >> 0x10;
        _DAT_10128628 = DAT_10128624 << 0x10;
        pbVar8 = local_30;
        pbVar10 = local_2c;
        _DAT_1012867c = uVar4;
        do {
          iVar6 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
          uVar7 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_1012863c);
          do {
            if (*pbVar8 < 0xfe) {
              if (*pbVar8 == 0xf8) {
                uVar4 = CONCAT31((int3)(uVar4 >> 8),*pbVar10);
                *pbVar10 = *(byte *)(iVar3 + uVar4);
              }
              else {
                *pbVar10 = *pbVar8;
              }
            }
            uVar5 = (ushort)uVar7;
            uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar6);
            pbVar8 = pbVar8 + (-(uint)CARRY2(uVar5,(ushort)iVar6) - _DAT_1012867c);
            pbVar10 = pbVar10 + 1;
            iVar6 = iVar6 + -0x10000;
          } while (-1 < iVar6);
          pbVar10 = pbVar10 + _DAT_10128648;
          iVar1 = uVar7 + _DAT_10128628;
          pbVar8 = pbVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
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
      iVar3 = DAT_1012862c;
      iVar1 = DAT_10128640 << 0x10;
      DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
      uVar4 = _DAT_10128688 >> 0x10;
      _DAT_10128628 = DAT_10128624 << 0x10;
      pbVar8 = local_30;
      pbVar10 = local_2c;
      _DAT_1012867c = uVar4;
      do {
        iVar6 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
        uVar7 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_1012863c);
        do {
          if (*pbVar8 < 0xfe) {
            if (*pbVar8 == 0xf8) {
              uVar4 = CONCAT31((int3)(uVar4 >> 8),*pbVar10);
              *pbVar10 = *(byte *)(iVar3 + uVar4);
            }
            else {
              *pbVar10 = *pbVar8;
            }
          }
          uVar5 = (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar6);
          pbVar8 = pbVar8 + CARRY2(uVar5,(ushort)iVar6) + _DAT_1012867c;
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -0x10000;
        } while (-1 < iVar6);
        pbVar10 = pbVar10 + _DAT_10128648;
        iVar1 = uVar7 + _DAT_10128628;
        pbVar8 = pbVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
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
      iVar3 = DAT_1012862c;
      iVar1 = DAT_10128640 << 0x10;
      DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
      uVar4 = _DAT_10128688 >> 0x10;
      _DAT_10128628 = DAT_10128624 << 0x10;
      pbVar8 = local_30;
      pbVar10 = local_2c;
      _DAT_1012867c = uVar4;
      do {
        iVar6 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
        uVar7 = CONCAT22((short)((uint)iVar1 >> 0x10),DAT_1012863c);
        do {
          if (*pbVar8 < 0xfe) {
            if (*pbVar8 == 0xf8) {
              uVar4 = CONCAT31((int3)(uVar4 >> 8),*pbVar10);
              *pbVar10 = *(byte *)(iVar3 + uVar4);
            }
            else {
              *pbVar10 = *pbVar8;
            }
          }
          uVar5 = (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar6);
          pbVar8 = pbVar8 + CARRY2(uVar5,(ushort)iVar6) + _DAT_1012867c;
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -0x10000;
        } while (-1 < iVar6);
        pbVar10 = pbVar10 + _DAT_10128648;
        iVar1 = uVar7 + _DAT_10128628;
        pbVar8 = pbVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
        DAT_10128670 = DAT_10128670 + -1;
      } while (DAT_10128670 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(2);
  __chkesp();
LAB_10061a41:
  local_8 = (void *)0x10061a4e;
  __chkesp();
  return;
}

