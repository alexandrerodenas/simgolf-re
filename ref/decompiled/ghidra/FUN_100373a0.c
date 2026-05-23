/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100373a0 @ 0x100373A0 */
/* Body size: 2743 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100373a0(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  LONG LVar2;
  int iVar3;
  RECT *pRVar4;
  BOOL BVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_8 = this, iVar3 = (**(code **)(*param_1 + 0x10))(), iVar3 == 0)) {
    return 3;
  }
  _DAT_10057d1c =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  local_c = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057d20 = (float)local_c / (float)(int)DAT_10055104;
  DAT_10057d08 = *(int *)((int)this + 0x2c);
  DAT_10057cd4 = (**(code **)(*param_1 + 0xe0))();
  _DAT_10057cf4 = param_4 & 0xff;
  iVar3 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar3) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar3)) {
    local_1c.right = *(int *)((int)this + 0x30) + param_2;
    local_1c.bottom = *(int *)((int)this + 0x34) + param_3;
    local_1c.top = param_3;
    local_1c.left = param_2;
    pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar5 = IntersectRect(&local_1c,&local_1c,pRVar4);
    if (BVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((int)DAT_100550fc < 0) {
      if ((int)DAT_10055100 < 0) {
        pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                         *(int *)((int)this + 0x14));
        iVar3 = (**(code **)(*param_1 + 0x18))();
        DAT_10057d00 = local_1c.bottom - local_1c.top;
        DAT_10057ce0 = local_1c.right - local_1c.left;
        puVar11 = (undefined1 *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar3);
        _DAT_10057cac = DAT_10057d08 - DAT_10057ce0;
        _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
        uVar1 = DAT_10057cf4;
        iVar3 = DAT_10057ce0;
        do {
          do {
            if (*pbVar6 < 0xfe) {
              *puVar11 = uVar1;
            }
            pbVar6 = pbVar6 + -1;
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          pbVar6 = pbVar6 + -_DAT_10057cac;
          puVar11 = puVar11 + _DAT_10057cd8;
          DAT_10057d00 = DAT_10057d00 + -1;
          iVar3 = DAT_10057ce0;
        } while (DAT_10057d00 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar3 = (**(code **)(*param_1 + 0x18))();
      DAT_10057d00 = local_1c.bottom - local_1c.top;
      DAT_10057ce0 = local_1c.right - local_1c.left;
      puVar11 = (undefined1 *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar3);
      _DAT_10057cac = DAT_10057d08 + DAT_10057ce0;
      _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
      uVar1 = DAT_10057cf4;
      iVar3 = DAT_10057ce0;
      do {
        do {
          if (*pbVar6 < 0xfe) {
            *puVar11 = uVar1;
          }
          pbVar6 = pbVar6 + -1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pbVar6 = pbVar6 + _DAT_10057cac;
        puVar11 = puVar11 + _DAT_10057cd8;
        DAT_10057d00 = DAT_10057d00 + -1;
        iVar3 = DAT_10057ce0;
      } while (DAT_10057d00 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar3 = (**(code **)(*param_1 + 0x18))();
      DAT_10057d00 = local_1c.bottom - local_1c.top;
      DAT_10057ce0 = local_1c.right - local_1c.left;
      puVar11 = (undefined1 *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar3);
      _DAT_10057cac = DAT_10057d08 + DAT_10057ce0;
      _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
      uVar1 = DAT_10057cf4;
      iVar3 = DAT_10057ce0;
      do {
        do {
          if (*pbVar6 < 0xfe) {
            *puVar11 = uVar1;
          }
          pbVar6 = pbVar6 + 1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pbVar6 = pbVar6 + -_DAT_10057cac;
        puVar11 = puVar11 + _DAT_10057cd8;
        DAT_10057d00 = DAT_10057d00 + -1;
        iVar3 = DAT_10057ce0;
      } while (DAT_10057d00 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                     *(int *)((int)this + 0x14));
    iVar3 = (**(code **)(*param_1 + 0x18))();
    DAT_10057d00 = local_1c.bottom - local_1c.top;
    DAT_10057ce0 = local_1c.right - local_1c.left;
    puVar11 = (undefined1 *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar3);
    _DAT_10057cac = DAT_10057d08 - DAT_10057ce0;
    _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
    uVar1 = DAT_10057cf4;
    iVar3 = DAT_10057ce0;
    do {
      do {
        if (*pbVar6 < 0xfe) {
          *puVar11 = uVar1;
        }
        pbVar6 = pbVar6 + 1;
        puVar11 = puVar11 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      pbVar6 = pbVar6 + _DAT_10057cac;
      puVar11 = puVar11 + _DAT_10057cd8;
      DAT_10057d00 = DAT_10057d00 + -1;
      iVar3 = DAT_10057ce0;
    } while (DAT_10057d00 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  lVar13 = __ftol();
  iVar9 = (int)lVar13 + param_3;
  lVar13 = __ftol();
  iVar3 = (int)lVar13 + param_2;
  local_1c.left = iVar3;
  local_1c.top = iVar9;
  lVar13 = __ftol();
  local_1c.right = (int)lVar13 + iVar3;
  lVar13 = __ftol();
  LVar2 = local_1c.left;
  local_1c.bottom = (int)lVar13 + iVar9;
  pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar5 = IntersectRect(&local_1c,&local_1c,pRVar4);
  if (BVar5 == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x18))();
  puVar11 = (undefined1 *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar3);
  DAT_10057cd4 = (**(code **)(*param_1 + 0xe0))();
  DAT_10057ce0 = local_1c.right - local_1c.left;
  _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
  DAT_10057d00 = local_1c.bottom - local_1c.top;
  _DAT_10057d18 =
       (int)(DAT_10055104 << 0x10) /
       (int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f));
  DAT_10057cb4 = (int)(DAT_10055104 << 0x10) /
                 (int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f));
  if ((int)DAT_100550fc < 0) {
    if ((int)DAT_10055100 < 0) {
      _DAT_10057ccc = (local_1c.left - LVar2) * _DAT_10057d18;
      DAT_10057cd0 = (local_1c.top - iVar9) * DAT_10057cb4;
      _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
      _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
      pbVar6 = (byte *)((((*(int *)((int)local_8 + 0x34) - (DAT_10057cd0 >> 0x10)) + -1) *
                         DAT_10057d08 - (_DAT_10057ccc >> 0x10)) + *(int *)((int)local_8 + 0x30) +
                        -1 + *(int *)((int)local_8 + 0x14));
      _DAT_10057cac = _DAT_10057cf0 - DAT_10057d08;
      *(uint *)PTR_DAT_1005511c = (DAT_10057cb4 >> 0x10) * DAT_10057d08 - _DAT_10057cf0;
      *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
      iVar3 = DAT_10057cd0 << 0x10;
      DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
      uVar10 = _DAT_10057d18 >> 0x10;
      _DAT_10057cb8 = DAT_10057cb4 << 0x10;
      do {
        iVar9 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
        uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057ccc);
        do {
          if (*pbVar6 < 0xfe) {
            *puVar11 = 0;
          }
          uVar7 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
          pbVar6 = pbVar6 + (-(uint)CARRY2(uVar7,(ushort)iVar9) - uVar10);
          puVar11 = puVar11 + 1;
          iVar9 = iVar9 + -0x10000;
        } while (-1 < iVar9);
        puVar11 = puVar11 + _DAT_10057cd8;
        iVar3 = uVar8 + _DAT_10057cb8;
        pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar8,_DAT_10057cb8) * -4);
        DAT_10057d00 = DAT_10057d00 + -1;
      } while (DAT_10057d00 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057ccc = (local_1c.left - LVar2) * _DAT_10057d18;
    DAT_10057cd0 = (local_1c.top - iVar9) * DAT_10057cb4;
    _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
    iVar12 = (DAT_10057cd0 >> 0x10) * DAT_10057d08;
    uVar10 = _DAT_10057ccc >> 0x10;
    _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
    iVar3 = *(int *)((int)local_8 + 0x30);
    iVar9 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005511c = (DAT_10057cb4 >> 0x10) * DAT_10057d08 + _DAT_10057cf0;
    pbVar6 = (byte *)((iVar12 - uVar10) + iVar3 + -1 + iVar9);
    *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
    iVar3 = DAT_10057cd0 << 0x10;
    DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
    uVar10 = _DAT_10057d18 >> 0x10;
    _DAT_10057cb8 = DAT_10057cb4 << 0x10;
    do {
      iVar9 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
      uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057ccc);
      do {
        if (*pbVar6 < 0xfe) {
          *puVar11 = 0;
        }
        uVar7 = (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
        pbVar6 = pbVar6 + (-(uint)CARRY2(uVar7,(ushort)iVar9) - uVar10);
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -0x10000;
      } while (-1 < iVar9);
      puVar11 = puVar11 + _DAT_10057cd8;
      iVar3 = uVar8 + _DAT_10057cb8;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar8,_DAT_10057cb8) * -4);
      DAT_10057d00 = DAT_10057d00 + -1;
    } while (DAT_10057d00 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057ccc = (local_1c.left - LVar2) * _DAT_10057d18;
    DAT_10057cd0 = (local_1c.top - iVar9) * DAT_10057cb4;
    _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
    _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
    iVar9 = ((*(int *)((int)local_8 + 0x34) - (DAT_10057cd0 >> 0x10)) + -1) * DAT_10057d08;
    uVar10 = _DAT_10057ccc >> 0x10;
    iVar3 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005511c = (DAT_10057cb4 >> 0x10) * DAT_10057d08 + _DAT_10057cf0;
    pbVar6 = (byte *)(iVar9 + uVar10 + iVar3);
    *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
    iVar3 = DAT_10057cd0 << 0x10;
    DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
    uVar10 = _DAT_10057d18 >> 0x10;
    _DAT_10057cb8 = DAT_10057cb4 << 0x10;
    do {
      iVar9 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
      uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057ccc);
      do {
        if (*pbVar6 < 0xfe) {
          *puVar11 = 0;
        }
        uVar7 = (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
        pbVar6 = pbVar6 + CARRY2(uVar7,(ushort)iVar9) + uVar10;
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -0x10000;
      } while (-1 < iVar9);
      puVar11 = puVar11 + _DAT_10057cd8;
      iVar3 = uVar8 + _DAT_10057cb8;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar8,_DAT_10057cb8) * -4);
      DAT_10057d00 = DAT_10057d00 + -1;
    } while (DAT_10057d00 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057ccc = (local_1c.left - LVar2) * _DAT_10057d18;
  DAT_10057cd0 = (local_1c.top - iVar9) * DAT_10057cb4;
  _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
  _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
  _DAT_10057cac = DAT_10057d08 - _DAT_10057cf0;
  pbVar6 = (byte *)((DAT_10057cd0 >> 0x10) * DAT_10057d08 + (_DAT_10057ccc >> 0x10) +
                   *(int *)((int)local_8 + 0x14));
  *(uint *)PTR_DAT_1005511c = ((DAT_10057cb4 >> 0x10) - 1) * DAT_10057d08 + _DAT_10057cac;
  *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
  iVar3 = DAT_10057cd0 << 0x10;
  DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
  uVar10 = _DAT_10057d18 >> 0x10;
  _DAT_10057cb8 = DAT_10057cb4 << 0x10;
  do {
    iVar9 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
    uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057ccc);
    do {
      if (*pbVar6 < 0xfe) {
        *puVar11 = 0;
      }
      uVar7 = (ushort)uVar8;
      uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
      pbVar6 = pbVar6 + CARRY2(uVar7,(ushort)iVar9) + uVar10;
      puVar11 = puVar11 + 1;
      iVar9 = iVar9 + -0x10000;
    } while (-1 < iVar9);
    puVar11 = puVar11 + _DAT_10057cd8;
    iVar3 = uVar8 + _DAT_10057cb8;
    pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar8,_DAT_10057cb8) * -4);
    DAT_10057d00 = DAT_10057d00 + -1;
  } while (DAT_10057d00 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

