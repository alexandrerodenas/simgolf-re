/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1002f2f0 @ 0x1002F2F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1002f2f0(void *this,int *param_1,int param_2,int param_3,char param_4)

{
  LONG LVar1;
  int iVar2;
  RECT *pRVar3;
  BOOL BVar4;
  int iVar5;
  byte *pbVar6;
  ushort uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  longlong lVar12;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_8 = this, iVar2 = (**(code **)(*param_1 + 0x10))(), iVar2 == 0)) {
    return 3;
  }
  piVar8 = *(int **)((int)this + 0x10);
  if (piVar8 == (int *)0x0) {
    piVar8 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar8 == (int *)0x0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0x10;
  }
  _DAT_10057c44 =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  local_c = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057c48 = (float)local_c / (float)(int)DAT_10055104;
  DAT_10057c34 = *(int *)((int)this + 0x2c);
  DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
  iVar2 = (**(code **)(*param_1 + 0xe4))();
  if (*(int *)(iVar2 + 4) == 0) {
    DAT_10057c24 = (**(code **)(*piVar8 + 0x18))();
  }
  else {
    if (*(int *)(iVar2 + 4) != 1) {
      (**(code **)(*param_1 + 0x24))(1);
      return 1;
    }
    DAT_10057c24 = (**(code **)(*piVar8 + 0x1c))();
  }
  iVar2 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar2) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar2)) {
    local_1c.right = *(int *)((int)this + 0x30) + param_2;
    local_1c.bottom = *(int *)((int)this + 0x34) + param_3;
    local_1c.left = param_2;
    local_1c.top = param_3;
    pRVar3 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar4 = IntersectRect(&local_1c,&local_1c,pRVar3);
    if (BVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((int)DAT_100550fc < 0) {
      if ((int)DAT_10055100 < 0) {
        pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                         *(int *)((int)this + 0x14));
        iVar5 = (**(code **)(*param_1 + 0x20))();
        iVar2 = DAT_10057c24;
        puVar11 = (ushort *)(iVar5 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
        DAT_10057c30 = local_1c.bottom - local_1c.top;
        DAT_10057c1c = local_1c.right - local_1c.left;
        _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
        _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
        iVar5 = DAT_10057c1c;
        do {
          do {
            if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
              uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
              *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) &
                         0x81f0) + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4
                                            ) & 0x7e00);
            }
            pbVar6 = pbVar6 + -1;
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          pbVar6 = pbVar6 + -_DAT_10057bf4;
          puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
          DAT_10057c30 = DAT_10057c30 + -1;
          iVar5 = DAT_10057c1c;
        } while (DAT_10057c30 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar5 = (**(code **)(*param_1 + 0x20))();
      iVar2 = DAT_10057c24;
      puVar11 = (ushort *)(iVar5 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar5 = DAT_10057c1c;
      do {
        do {
          if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
            uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
            *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0
                       ) + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) &
                           0x7e00);
          }
          pbVar6 = pbVar6 + -1;
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pbVar6 = pbVar6 + _DAT_10057bf4;
        puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar5 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar5 = (**(code **)(*param_1 + 0x20))();
      iVar2 = DAT_10057c24;
      puVar11 = (ushort *)(iVar5 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar5 = DAT_10057c1c;
      do {
        do {
          if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
            uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
            *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0
                       ) + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) &
                           0x7e00);
          }
          pbVar6 = pbVar6 + 1;
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pbVar6 = pbVar6 + -_DAT_10057bf4;
        puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar5 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                     *(int *)((int)this + 0x14));
    iVar5 = (**(code **)(*param_1 + 0x20))();
    iVar2 = DAT_10057c24;
    puVar11 = (ushort *)(iVar5 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
    DAT_10057c30 = local_1c.bottom - local_1c.top;
    DAT_10057c1c = local_1c.right - local_1c.left;
    _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
    _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
    iVar5 = DAT_10057c1c;
    do {
      do {
        if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
          uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
          *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0)
                     + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) & 0x7e00);
        }
        pbVar6 = pbVar6 + 1;
        puVar11 = puVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      pbVar6 = pbVar6 + _DAT_10057bf4;
      puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
      DAT_10057c30 = DAT_10057c30 + -1;
      iVar5 = DAT_10057c1c;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  lVar12 = __ftol();
  iVar5 = (int)lVar12 + param_3;
  lVar12 = __ftol();
  iVar2 = (int)lVar12 + param_2;
  local_1c.left = iVar2;
  local_1c.top = iVar5;
  lVar12 = __ftol();
  local_1c.right = (int)lVar12 + iVar2;
  lVar12 = __ftol();
  LVar1 = local_1c.left;
  local_1c.bottom = (int)lVar12 + iVar5;
  pRVar3 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar4 = IntersectRect(&local_1c,&local_1c,pRVar3);
  if (BVar4 == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x20))();
  puVar11 = (ushort *)(iVar2 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
  DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
  DAT_10057c1c = local_1c.right - local_1c.left;
  _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
  DAT_10057c30 = local_1c.bottom - local_1c.top;
  _DAT_10057c40 =
       (int)(DAT_10055104 << 0x10) /
       (int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f));
  DAT_10057bf8 = (int)(DAT_10055104 << 0x10) /
                 (int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f));
  if ((int)DAT_100550fc < 0) {
    if ((int)DAT_10055100 < 0) {
      _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
      DAT_10057c10 = (local_1c.top - iVar5) * DAT_10057bf8;
      _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
      _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
      pbVar6 = (byte *)((((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) *
                         DAT_10057c34 - (_DAT_10057c0c >> 0x10)) + *(int *)((int)local_8 + 0x30) +
                        -1 + *(int *)((int)local_8 + 0x14));
      _DAT_10057bf4 = _DAT_10057c28 - DAT_10057c34;
      *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 - _DAT_10057c28;
      *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
      iVar2 = DAT_10057c24;
      iVar5 = DAT_10057c10 << 0x10;
      DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
      _DAT_10057c38 = _DAT_10057c40 >> 0x10;
      _DAT_10057bfc = DAT_10057bf8 << 0x10;
      do {
        iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
        uVar10 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10057c0c);
        do {
          if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
            uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
            *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0
                       ) + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) &
                           0x7e00);
          }
          uVar7 = (ushort)uVar10;
          uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar7 + (ushort)iVar9);
          pbVar6 = pbVar6 + (-(uint)CARRY2(uVar7,(ushort)iVar9) - _DAT_10057c38);
          puVar11 = puVar11 + 1;
          iVar9 = iVar9 + -0x10000;
        } while (-1 < iVar9);
        puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
        iVar5 = uVar10 + _DAT_10057bfc;
        pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
        DAT_10057c30 = DAT_10057c30 + -1;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar5) * DAT_10057bf8;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar9 = (DAT_10057c10 >> 0x10) * DAT_10057c34;
    uVar10 = _DAT_10057c0c >> 0x10;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    iVar2 = *(int *)((int)local_8 + 0x30);
    iVar5 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar6 = (byte *)((iVar9 - uVar10) + iVar2 + -1 + iVar5);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar2 = DAT_10057c24;
    iVar5 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    _DAT_10057c38 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar10 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10057c0c);
      do {
        if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
          uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
          *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0)
                     + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) & 0x7e00);
        }
        uVar7 = (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar7 + (ushort)iVar9);
        pbVar6 = pbVar6 + (-(uint)CARRY2(uVar7,(ushort)iVar9) - _DAT_10057c38);
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -0x10000;
      } while (-1 < iVar9);
      puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
      iVar5 = uVar10 + _DAT_10057bfc;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar5) * DAT_10057bf8;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar5 = ((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) * DAT_10057c34;
    uVar10 = _DAT_10057c0c >> 0x10;
    iVar2 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar6 = (byte *)(iVar5 + uVar10 + iVar2);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar2 = DAT_10057c24;
    iVar5 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    _DAT_10057c38 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar10 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10057c0c);
      do {
        if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
          uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
          *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0)
                     + ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) & 0x7e00);
        }
        uVar7 = (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar7 + (ushort)iVar9);
        pbVar6 = pbVar6 + CARRY2(uVar7,(ushort)iVar9) + _DAT_10057c38;
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -0x10000;
      } while (-1 < iVar9);
      puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
      iVar5 = uVar10 + _DAT_10057bfc;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
  DAT_10057c10 = (local_1c.top - iVar5) * DAT_10057bf8;
  _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
  _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
  _DAT_10057bf4 = DAT_10057c34 - _DAT_10057c28;
  pbVar6 = (byte *)((DAT_10057c10 >> 0x10) * DAT_10057c34 + (_DAT_10057c0c >> 0x10) +
                   *(int *)((int)local_8 + 0x14));
  *(uint *)PTR_DAT_1005510c = ((DAT_10057bf8 >> 0x10) - 1) * DAT_10057c34 + _DAT_10057bf4;
  *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
  iVar2 = DAT_10057c24;
  iVar5 = DAT_10057c10 << 0x10;
  DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
  _DAT_10057c38 = _DAT_10057c40 >> 0x10;
  _DAT_10057bfc = DAT_10057bf8 << 0x10;
  do {
    iVar9 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
    uVar10 = CONCAT22((short)((uint)iVar5 >> 0x10),DAT_10057c0c);
    do {
      if ((*pbVar6 != 0xff) && ((param_4 == '\0' || (*pbVar6 < 0xf8)))) {
        uVar7 = *(ushort *)(iVar2 + (uint)*pbVar6 * 2);
        *puVar11 = ((ushort)((uVar7 & 0xf81f) * 0xd0 + (*puVar11 & 0xf81f) * 0x30 >> 4) & 0x81f0) +
                   ((ushort)((uVar7 & 0x7e0) * 0xd0 + (*puVar11 & 0x7e0) * 0x30 >> 4) & 0x7e00);
      }
      uVar7 = (ushort)uVar10;
      uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar7 + (ushort)iVar9);
      pbVar6 = pbVar6 + CARRY2(uVar7,(ushort)iVar9) + _DAT_10057c38;
      puVar11 = puVar11 + 1;
      iVar9 = iVar9 + -0x10000;
    } while (-1 < iVar9);
    puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
    iVar5 = uVar10 + _DAT_10057bfc;
    pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
    DAT_10057c30 = DAT_10057c30 + -1;
  } while (DAT_10057c30 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

