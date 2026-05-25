/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1005dde0 @ 0x1005DDE0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005dde0(void *this,int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  RECT *pRVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  longlong lVar11;
  undefined4 local_80 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  void *local_8;
  
  puVar9 = local_80;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0xcccccccc;
    puVar9 = puVar9 + 1;
  }
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) goto LAB_1005ea49;
  local_8 = this;
  (**(code **)(*param_1 + 0x10))();
  iVar4 = __chkesp();
  if (iVar4 == 0) goto LAB_1005ea49;
  local_3c = FUN_1007f370(DAT_10122dc0);
  _DAT_1012868c = (float)local_3c / (float)DAT_10122dc8;
  local_40 = FUN_1007f370(DAT_10122dc4);
  _DAT_10128690 = (float)local_40 / (float)DAT_10122dc8;
  DAT_10128678 = *(int *)((int)local_8 + 0x2c);
  (**(code **)(*param_1 + 0xe0))();
  DAT_10128644 = __chkesp();
  local_30 = *(char **)((int)local_8 + 0x14);
  iVar4 = FUN_1007f370(DAT_10122dc0);
  iVar2 = FUN_1007f370(DAT_10122dc8);
  if (iVar4 == iVar2) {
    iVar4 = FUN_1007f370(DAT_10122dc4);
    iVar2 = FUN_1007f370(DAT_10122dc8);
    if (iVar4 != iVar2) goto LAB_1005e297;
    thunk_FUN_10008360(&local_18.left,param_2,param_3,*(int *)((int)local_8 + 0x30),
                       *(int *)((int)local_8 + 0x34));
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    IntersectRect(&local_18,&local_18,pRVar3);
    iVar4 = __chkesp();
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1005ea49;
    }
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_30 = (char *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_10128678);
        (**(code **)(*param_1 + 0x18))();
        iVar4 = __chkesp();
        local_2c = (char *)(iVar4 + local_18.left + local_18.top * DAT_10128644);
        DAT_10128670 = local_18.bottom - local_18.top;
        DAT_10128650 = local_18.right - local_18.left;
        _DAT_1012861c = DAT_10128678 - DAT_10128650;
        _DAT_10128648 = DAT_10128644 - DAT_10128650;
        iVar4 = DAT_10128650;
        pcVar8 = local_30;
        pcVar10 = local_2c;
        do {
          do {
            if (*pcVar8 != -1) {
              *pcVar10 = *pcVar8;
            }
            pcVar8 = pcVar8 + -1;
            pcVar10 = pcVar10 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          pcVar8 = pcVar8 + -_DAT_1012861c;
          pcVar10 = pcVar10 + _DAT_10128648;
          DAT_10128670 = DAT_10128670 + -1;
          iVar4 = DAT_10128650;
        } while (DAT_10128670 != 0);
      }
      else {
        local_30 = (char *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                           (local_18.top - local_24) * DAT_10128678);
        (**(code **)(*param_1 + 0x18))();
        iVar4 = __chkesp();
        local_2c = (char *)(iVar4 + local_18.left + local_18.top * DAT_10128644);
        DAT_10128670 = local_18.bottom - local_18.top;
        DAT_10128650 = local_18.right - local_18.left;
        _DAT_1012861c = DAT_10128678 + DAT_10128650;
        _DAT_10128648 = DAT_10128644 - DAT_10128650;
        iVar4 = DAT_10128650;
        pcVar8 = local_30;
        pcVar10 = local_2c;
        do {
          do {
            if (*pcVar8 != -1) {
              *pcVar10 = *pcVar8;
            }
            pcVar8 = pcVar8 + -1;
            pcVar10 = pcVar10 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          pcVar8 = pcVar8 + _DAT_1012861c;
          pcVar10 = pcVar10 + _DAT_10128648;
          DAT_10128670 = DAT_10128670 + -1;
          iVar4 = DAT_10128650;
        } while (DAT_10128670 != 0);
      }
    }
    else if (DAT_10122dc4 < 0) {
      local_30 = (char *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_10128678);
      (**(code **)(*param_1 + 0x18))();
      iVar4 = __chkesp();
      local_2c = (char *)(iVar4 + local_18.left + local_18.top * DAT_10128644);
      DAT_10128670 = local_18.bottom - local_18.top;
      DAT_10128650 = local_18.right - local_18.left;
      _DAT_1012861c = DAT_10128678 + DAT_10128650;
      _DAT_10128648 = DAT_10128644 - DAT_10128650;
      iVar4 = DAT_10128650;
      pcVar8 = local_30;
      pcVar10 = local_2c;
      do {
        do {
          if (*pcVar8 != -1) {
            *pcVar10 = *pcVar8;
          }
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pcVar8 = pcVar8 + -_DAT_1012861c;
        pcVar10 = pcVar10 + _DAT_10128648;
        DAT_10128670 = DAT_10128670 + -1;
        iVar4 = DAT_10128650;
      } while (DAT_10128670 != 0);
    }
    else {
      local_30 = (char *)(*(int *)((int)local_8 + 0x14) + (local_18.left - local_28) +
                         (local_18.top - local_24) * DAT_10128678);
      (**(code **)(*param_1 + 0x18))();
      iVar4 = __chkesp();
      local_2c = (char *)(iVar4 + local_18.left + local_18.top * DAT_10128644);
      DAT_10128670 = local_18.bottom - local_18.top;
      DAT_10128650 = local_18.right - local_18.left;
      _DAT_1012861c = DAT_10128678 - DAT_10128650;
      _DAT_10128648 = DAT_10128644 - DAT_10128650;
      iVar4 = DAT_10128650;
      pcVar8 = local_30;
      pcVar10 = local_2c;
      do {
        do {
          if (*pcVar8 != -1) {
            *pcVar10 = *pcVar8;
          }
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pcVar8 = pcVar8 + _DAT_1012861c;
        pcVar10 = pcVar10 + _DAT_10128648;
        DAT_10128670 = DAT_10128670 + -1;
        iVar4 = DAT_10128650;
      } while (DAT_10128670 != 0);
    }
  }
  else {
LAB_1005e297:
    lVar11 = __ftol();
    iVar4 = (int)lVar11;
    lVar11 = __ftol();
    iVar2 = (int)lVar11;
    lVar11 = __ftol();
    iVar6 = param_3 + (int)lVar11;
    lVar11 = __ftol();
    thunk_FUN_10008360(&local_18.left,param_2 + (int)lVar11,iVar6,iVar2,iVar4);
    local_28 = local_18.left;
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    (**(code **)(*param_1 + 0xcc))();
    pRVar3 = (RECT *)__chkesp();
    iVar4 = thunk_FUN_10008590(&local_18,&local_18,pRVar3);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      __chkesp();
      goto LAB_1005ea49;
    }
    (**(code **)(*param_1 + 0x18))();
    iVar4 = __chkesp();
    local_2c = (char *)(iVar4 + local_18.left + local_18.top * DAT_10128644);
    (**(code **)(*param_1 + 0xe0))();
    DAT_10128644 = __chkesp();
    DAT_10128650 = local_18.right - local_18.left;
    DAT_10128670 = local_18.bottom - local_18.top;
    _DAT_10128648 = DAT_10128644 - DAT_10128650;
    iVar2 = DAT_10122dc8 << 0x10;
    iVar4 = FUN_1007f370(DAT_10122dc0);
    _DAT_10128688 = iVar2 / iVar4;
    iVar2 = DAT_10122dc8 << 0x10;
    iVar4 = FUN_1007f370(DAT_10122dc4);
    DAT_10128624 = iVar2 / iVar4;
    if (DAT_10122dc0 < 0) {
      if (DAT_10122dc4 < 0) {
        local_34 = local_18.left - local_28;
        local_38 = local_18.top - local_24;
        _DAT_1012863c = _DAT_10128688 * local_34;
        DAT_10128640 = DAT_10128624 * local_38;
        DAT_10128660 = (_DAT_1012863c & 0xffff) + _DAT_10128688 * DAT_10128650 >> 0x10;
        _DAT_10128680 = (DAT_10128640 & 0xffff) + DAT_10128624 * DAT_10128670 >> 0x10;
        local_30 = (char *)((*(int *)((int)local_8 + 0x14) +
                             ((*(int *)((int)local_8 + 0x34) + -1) - (DAT_10128640 >> 0x10)) *
                             DAT_10128678 + -1 + *(int *)((int)local_8 + 0x30)) -
                           (_DAT_1012863c >> 0x10));
        _DAT_1012861c = DAT_10128660 - DAT_10128678;
        *(uint *)PTR_DAT_10122e58 = (DAT_10128624 >> 0x10) * DAT_10128678 - DAT_10128660;
        *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
        iVar4 = DAT_10128640 << 0x10;
        DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
        uVar1 = _DAT_10128688 >> 0x10;
        _DAT_10128628 = DAT_10128624 << 0x10;
        pcVar8 = local_30;
        pcVar10 = local_2c;
        do {
          iVar2 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
          uVar7 = CONCAT22((short)((uint)iVar4 >> 0x10),DAT_1012863c);
          do {
            if (*pcVar8 != -1) {
              *pcVar10 = *pcVar8;
            }
            uVar5 = (ushort)uVar7;
            uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar2);
            pcVar8 = pcVar8 + (-(uint)CARRY2(uVar5,(ushort)iVar2) - uVar1);
            pcVar10 = pcVar10 + 1;
            iVar2 = iVar2 + -0x10000;
          } while (-1 < iVar2);
          pcVar10 = pcVar10 + _DAT_10128648;
          iVar4 = uVar7 + _DAT_10128628;
          pcVar8 = pcVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
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
        local_30 = (char *)((*(int *)((int)local_8 + 0x14) + (DAT_10128640 >> 0x10) * DAT_10128678 +
                             -1 + *(int *)((int)local_8 + 0x30)) - (_DAT_1012863c >> 0x10));
        *(uint *)PTR_DAT_10122e58 = (DAT_10128624 >> 0x10) * DAT_10128678 + DAT_10128660;
        *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
        iVar4 = DAT_10128640 << 0x10;
        DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
        uVar1 = _DAT_10128688 >> 0x10;
        _DAT_10128628 = DAT_10128624 << 0x10;
        pcVar8 = local_30;
        pcVar10 = local_2c;
        do {
          iVar2 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
          uVar7 = CONCAT22((short)((uint)iVar4 >> 0x10),DAT_1012863c);
          do {
            if (*pcVar8 != -1) {
              *pcVar10 = *pcVar8;
            }
            uVar5 = (ushort)uVar7;
            uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar2);
            pcVar8 = pcVar8 + (-(uint)CARRY2(uVar5,(ushort)iVar2) - uVar1);
            pcVar10 = pcVar10 + 1;
            iVar2 = iVar2 + -0x10000;
          } while (-1 < iVar2);
          pcVar10 = pcVar10 + _DAT_10128648;
          iVar4 = uVar7 + _DAT_10128628;
          pcVar8 = pcVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
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
      local_30 = (char *)(*(int *)((int)local_8 + 0x14) +
                          ((*(int *)((int)local_8 + 0x34) + -1) - (DAT_10128640 >> 0x10)) *
                          DAT_10128678 + (_DAT_1012863c >> 0x10));
      *(uint *)PTR_DAT_10122e58 = (DAT_10128624 >> 0x10) * DAT_10128678 + DAT_10128660;
      *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
      iVar4 = DAT_10128640 << 0x10;
      DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
      uVar1 = _DAT_10128688 >> 0x10;
      _DAT_10128628 = DAT_10128624 << 0x10;
      pcVar8 = local_30;
      pcVar10 = local_2c;
      do {
        iVar2 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
        uVar7 = CONCAT22((short)((uint)iVar4 >> 0x10),DAT_1012863c);
        do {
          if (*pcVar8 != -1) {
            *pcVar10 = *pcVar8;
          }
          uVar5 = (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar2);
          pcVar8 = pcVar8 + CARRY2(uVar5,(ushort)iVar2) + uVar1;
          pcVar10 = pcVar10 + 1;
          iVar2 = iVar2 + -0x10000;
        } while (-1 < iVar2);
        pcVar10 = pcVar10 + _DAT_10128648;
        iVar4 = uVar7 + _DAT_10128628;
        pcVar8 = pcVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
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
      local_30 = (char *)(*(int *)((int)local_8 + 0x14) + (DAT_10128640 >> 0x10) * DAT_10128678 +
                         (_DAT_1012863c >> 0x10));
      *(uint *)PTR_DAT_10122e58 =
           ((DAT_10128624 >> 0x10) * DAT_10128678 - DAT_10128678) + _DAT_1012861c;
      *(int *)PTR_DAT_10122e54 = *(int *)PTR_DAT_10122e58 + DAT_10128678;
      iVar4 = DAT_10128640 << 0x10;
      DAT_10128650 = (DAT_10128650 + -1) * 0x10000;
      uVar1 = _DAT_10128688 >> 0x10;
      _DAT_10128628 = DAT_10128624 << 0x10;
      pcVar8 = local_30;
      pcVar10 = local_2c;
      do {
        iVar2 = CONCAT22((short)((uint)DAT_10128650 >> 0x10),DAT_10128688);
        uVar7 = CONCAT22((short)((uint)iVar4 >> 0x10),DAT_1012863c);
        do {
          if (*pcVar8 != -1) {
            *pcVar10 = *pcVar8;
          }
          uVar5 = (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5 + (ushort)iVar2);
          pcVar8 = pcVar8 + CARRY2(uVar5,(ushort)iVar2) + uVar1;
          pcVar10 = pcVar10 + 1;
          iVar2 = iVar2 + -0x10000;
        } while (-1 < iVar2);
        pcVar10 = pcVar10 + _DAT_10128648;
        iVar4 = uVar7 + _DAT_10128628;
        pcVar8 = pcVar8 + *(int *)(PTR_DAT_10122e58 + (uint)CARRY4(uVar7,_DAT_10128628) * -4);
        DAT_10128670 = DAT_10128670 + -1;
      } while (DAT_10128670 != 0);
    }
  }
  (**(code **)(*param_1 + 0x24))(2);
  __chkesp();
LAB_1005ea49:
  local_8 = (void *)0x1005ea56;
  __chkesp();
  return;
}

