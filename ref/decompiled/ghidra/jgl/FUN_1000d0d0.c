/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000d0d0 @ 0x1000D0D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1000d0d0(void *this,int *param_1,int param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  LONG LVar2;
  int iVar3;
  RECT *pRVar4;
  BOOL BVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  RECT local_20;
  int local_10;
  void *local_c;
  int *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_c = this, iVar3 = (**(code **)(*param_1 + 0x10))(), iVar3 == 0)) {
    return 3;
  }
  local_8 = *(int **)((int)this + 0x10);
  if (local_8 == (int *)0x0) {
    local_8 = *(int **)(DAT_10057d9c + 4);
  }
  if (local_8 == (int *)0x0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0x10;
  }
  _DAT_10057c44 =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  local_10 = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057c48 = (float)local_10 / (float)(int)DAT_10055104;
  DAT_10057c34 = *(int *)((int)this + 0x2c);
  DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
  if ((param_4 & 0x80000000) == 0) {
    iVar3 = (**(code **)(*param_1 + 0xe4))();
    if (*(int *)(iVar3 + 4) == 0) {
      iVar3 = (**(code **)(*local_8 + 0x18))();
    }
    else {
      if (*(int *)(iVar3 + 4) != 1) {
        return 1;
      }
      iVar3 = (**(code **)(*local_8 + 0x1c))();
    }
    DAT_10057be8 = *(undefined2 *)(iVar3 + (param_4 & 0xff) * 2);
  }
  else {
    DAT_10057be8 = (undefined2)param_4;
  }
  iVar3 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar3) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar3)) {
    local_20.right = *(int *)((int)this + 0x30) + param_2;
    local_20.bottom = *(int *)((int)this + 0x34) + param_3;
    local_20.top = param_3;
    local_20.left = param_2;
    pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar5 = IntersectRect(&local_20,&local_20,pRVar4);
    if (BVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((int)DAT_100550fc < 0) {
      if ((int)DAT_10055100 < 0) {
        pbVar6 = (byte *)(((local_20.top - param_3) * DAT_10057c34 - param_2) + local_20.left +
                         *(int *)((int)this + 0x14));
        iVar3 = (**(code **)(*param_1 + 0x20))();
        uVar1 = DAT_10057be8;
        puVar11 = (undefined2 *)(iVar3 + (DAT_10057c14 * local_20.top + local_20.left) * 2);
        DAT_10057c30 = local_20.bottom - local_20.top;
        DAT_10057c1c = local_20.right - local_20.left;
        _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
        _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
        iVar3 = DAT_10057c1c;
        do {
          do {
            if (*pbVar6 < 0xfe) {
              *puVar11 = uVar1;
            }
            pbVar6 = pbVar6 + -1;
            puVar11 = puVar11 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          pbVar6 = pbVar6 + -_DAT_10057bf4;
          puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
          DAT_10057c30 = DAT_10057c30 + -1;
          iVar3 = DAT_10057c1c;
        } while (DAT_10057c30 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar6 = (byte *)(((local_20.top - param_3) * DAT_10057c34 - param_2) + local_20.left +
                       *(int *)((int)this + 0x14));
      iVar3 = (**(code **)(*param_1 + 0x20))();
      uVar1 = DAT_10057be8;
      puVar11 = (undefined2 *)(iVar3 + (DAT_10057c14 * local_20.top + local_20.left) * 2);
      DAT_10057c30 = local_20.bottom - local_20.top;
      DAT_10057c1c = local_20.right - local_20.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar3 = DAT_10057c1c;
      do {
        do {
          if (*pbVar6 < 0xfe) {
            *puVar11 = uVar1;
          }
          pbVar6 = pbVar6 + -1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pbVar6 = pbVar6 + _DAT_10057bf4;
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar3 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar6 = (byte *)(((local_20.top - param_3) * DAT_10057c34 - param_2) + local_20.left +
                       *(int *)((int)this + 0x14));
      iVar3 = (**(code **)(*param_1 + 0x20))();
      uVar1 = DAT_10057be8;
      puVar11 = (undefined2 *)(iVar3 + (DAT_10057c14 * local_20.top + local_20.left) * 2);
      DAT_10057c30 = local_20.bottom - local_20.top;
      DAT_10057c1c = local_20.right - local_20.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar3 = DAT_10057c1c;
      do {
        do {
          if (*pbVar6 < 0xfe) {
            *puVar11 = uVar1;
          }
          pbVar6 = pbVar6 + 1;
          puVar11 = puVar11 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pbVar6 = pbVar6 + -_DAT_10057bf4;
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar3 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar6 = (byte *)(((local_20.top - param_3) * DAT_10057c34 - param_2) + local_20.left +
                     *(int *)((int)this + 0x14));
    iVar3 = (**(code **)(*param_1 + 0x20))();
    uVar1 = DAT_10057be8;
    puVar11 = (undefined2 *)(iVar3 + (DAT_10057c14 * local_20.top + local_20.left) * 2);
    DAT_10057c30 = local_20.bottom - local_20.top;
    DAT_10057c1c = local_20.right - local_20.left;
    _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
    _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
    iVar3 = DAT_10057c1c;
    do {
      do {
        if (*pbVar6 < 0xfe) {
          *puVar11 = uVar1;
        }
        pbVar6 = pbVar6 + 1;
        puVar11 = puVar11 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      pbVar6 = pbVar6 + _DAT_10057bf4;
      puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
      DAT_10057c30 = DAT_10057c30 + -1;
      iVar3 = DAT_10057c1c;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  lVar13 = __ftol();
  iVar9 = (int)lVar13 + param_3;
  lVar13 = __ftol();
  iVar3 = (int)lVar13 + param_2;
  local_20.left = iVar3;
  local_20.top = iVar9;
  lVar13 = __ftol();
  local_20.right = (int)lVar13 + iVar3;
  lVar13 = __ftol();
  LVar2 = local_20.left;
  local_20.bottom = (int)lVar13 + iVar9;
  pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar5 = IntersectRect(&local_20,&local_20,pRVar4);
  if (BVar5 == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x20))();
  puVar11 = (undefined2 *)(iVar3 + (DAT_10057c14 * local_20.top + local_20.left) * 2);
  DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
  DAT_10057c1c = local_20.right - local_20.left;
  _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
  DAT_10057c30 = local_20.bottom - local_20.top;
  _DAT_10057c40 =
       (int)(DAT_10055104 << 0x10) /
       (int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f));
  DAT_10057bf8 = (int)(DAT_10055104 << 0x10) /
                 (int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f));
  if ((int)DAT_100550fc < 0) {
    if ((int)DAT_10055100 < 0) {
      _DAT_10057c0c = (local_20.left - LVar2) * _DAT_10057c40;
      DAT_10057c10 = (local_20.top - iVar9) * DAT_10057bf8;
      _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
      _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
      pbVar6 = (byte *)((((*(int *)((int)local_c + 0x34) - (DAT_10057c10 >> 0x10)) + -1) *
                         DAT_10057c34 - (_DAT_10057c0c >> 0x10)) + *(int *)((int)local_c + 0x30) +
                        -1 + *(int *)((int)local_c + 0x14));
      _DAT_10057bf4 = _DAT_10057c28 - DAT_10057c34;
      *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 - _DAT_10057c28;
      *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
      iVar3 = DAT_10057c10 << 0x10;
      DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
      uVar10 = _DAT_10057c40 >> 0x10;
      _DAT_10057bfc = DAT_10057bf8 << 0x10;
      do {
        iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
        uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057c0c);
        do {
          if (*pbVar6 < 0xfe) {
            *puVar11 = DAT_10057be8;
          }
          uVar7 = (ushort)uVar8;
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
          pbVar6 = pbVar6 + (-(uint)CARRY2(uVar7,(ushort)iVar9) - uVar10);
          puVar11 = puVar11 + 1;
          iVar9 = iVar9 + -0x10000;
        } while (-1 < iVar9);
        puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
        iVar3 = uVar8 + _DAT_10057bfc;
        pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar8,_DAT_10057bfc) * -4);
        DAT_10057c30 = DAT_10057c30 + -1;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057c0c = (local_20.left - LVar2) * _DAT_10057c40;
    DAT_10057c10 = (local_20.top - iVar9) * DAT_10057bf8;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar12 = (DAT_10057c10 >> 0x10) * DAT_10057c34;
    uVar10 = _DAT_10057c0c >> 0x10;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    iVar3 = *(int *)((int)local_c + 0x30);
    iVar9 = *(int *)((int)local_c + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar6 = (byte *)((iVar12 - uVar10) + iVar3 + -1 + iVar9);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar3 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    uVar10 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057c0c);
      do {
        if (*pbVar6 < 0xfe) {
          *puVar11 = DAT_10057be8;
        }
        uVar7 = (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
        pbVar6 = pbVar6 + (-(uint)CARRY2(uVar7,(ushort)iVar9) - uVar10);
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -0x10000;
      } while (-1 < iVar9);
      puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
      iVar3 = uVar8 + _DAT_10057bfc;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar8,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057c0c = (local_20.left - LVar2) * _DAT_10057c40;
    DAT_10057c10 = (local_20.top - iVar9) * DAT_10057bf8;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar9 = ((*(int *)((int)local_c + 0x34) - (DAT_10057c10 >> 0x10)) + -1) * DAT_10057c34;
    uVar10 = _DAT_10057c0c >> 0x10;
    iVar3 = *(int *)((int)local_c + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar6 = (byte *)(iVar9 + uVar10 + iVar3);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar3 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    uVar10 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057c0c);
      do {
        if (*pbVar6 < 0xfe) {
          *puVar11 = DAT_10057be8;
        }
        uVar7 = (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
        pbVar6 = pbVar6 + CARRY2(uVar7,(ushort)iVar9) + uVar10;
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -0x10000;
      } while (-1 < iVar9);
      puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
      iVar3 = uVar8 + _DAT_10057bfc;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar8,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057c0c = (local_20.left - LVar2) * _DAT_10057c40;
  DAT_10057c10 = (local_20.top - iVar9) * DAT_10057bf8;
  _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
  _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
  _DAT_10057bf4 = DAT_10057c34 - _DAT_10057c28;
  pbVar6 = (byte *)((DAT_10057c10 >> 0x10) * DAT_10057c34 + (_DAT_10057c0c >> 0x10) +
                   *(int *)((int)local_c + 0x14));
  *(uint *)PTR_DAT_1005510c = ((DAT_10057bf8 >> 0x10) - 1) * DAT_10057c34 + _DAT_10057bf4;
  *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
  iVar3 = DAT_10057c10 << 0x10;
  DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
  uVar10 = _DAT_10057c40 >> 0x10;
  _DAT_10057bfc = DAT_10057bf8 << 0x10;
  do {
    iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
    uVar8 = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_10057c0c);
    do {
      if (*pbVar6 < 0xfe) {
        *puVar11 = DAT_10057be8;
      }
      uVar7 = (ushort)uVar8;
      uVar8 = CONCAT22((short)(uVar8 >> 0x10),uVar7 + (ushort)iVar9);
      pbVar6 = pbVar6 + CARRY2(uVar7,(ushort)iVar9) + uVar10;
      puVar11 = puVar11 + 1;
      iVar9 = iVar9 + -0x10000;
    } while (-1 < iVar9);
    puVar11 = (undefined2 *)((int)puVar11 + _DAT_10057c18);
    iVar3 = uVar8 + _DAT_10057bfc;
    pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar8,_DAT_10057bfc) * -4);
    DAT_10057c30 = DAT_10057c30 + -1;
  } while (DAT_10057c30 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

