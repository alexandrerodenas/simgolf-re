/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000f950 @ 0x1000F950 */
/* Body size: 4254 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_1000f950(void *this,int *param_1,int param_2,int param_3,ushort param_4)

{
  byte bVar1;
  byte bVar2;
  LONG LVar3;
  int iVar4;
  RECT *pRVar5;
  BOOL BVar6;
  int iVar7;
  byte *pbVar8;
  ushort uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  longlong lVar14;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_8 = this, iVar4 = (**(code **)(*param_1 + 0x10))(), iVar4 == 0)) {
    return 3;
  }
  piVar10 = *(int **)((int)this + 0x10);
  if (piVar10 == (int *)0x0) {
    piVar10 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar10 == (int *)0x0) {
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
  iVar4 = (**(code **)(*param_1 + 0xe4))();
  if (*(int *)(iVar4 + 4) == 0) {
    DAT_10057c24 = (**(code **)(*piVar10 + 0x18))();
  }
  else {
    if (*(int *)(iVar4 + 4) != 1) {
      (**(code **)(*param_1 + 0x24))(1);
      return 1;
    }
    DAT_10057c24 = (**(code **)(*piVar10 + 0x1c))();
  }
  iVar4 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  bVar1 = (byte)param_4;
  bVar2 = (byte)(param_4 >> 8);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar4) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar4)) {
    local_1c.right = *(int *)((int)this + 0x30) + param_2;
    local_1c.bottom = *(int *)((int)this + 0x34) + param_3;
    local_1c.left = param_2;
    local_1c.top = param_3;
    pRVar5 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar6 = IntersectRect(&local_1c,&local_1c,pRVar5);
    if (BVar6 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((int)DAT_100550fc < 0) {
      if ((int)DAT_10055100 < 0) {
        pbVar8 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                         *(int *)((int)this + 0x14));
        iVar7 = (**(code **)(*param_1 + 0x20))();
        iVar4 = DAT_10057c24;
        puVar13 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
        DAT_10057c30 = local_1c.bottom - local_1c.top;
        DAT_10057c1c = local_1c.right - local_1c.left;
        _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
        _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
        iVar7 = DAT_10057c1c;
        do {
          do {
            if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
              uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
              uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8
                              ) >> 2;
              *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                         ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                         ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
            }
            pbVar8 = pbVar8 + -1;
            puVar13 = puVar13 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          pbVar8 = pbVar8 + -_DAT_10057bf4;
          puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
          DAT_10057c30 = DAT_10057c30 + -1;
          iVar7 = DAT_10057c1c;
        } while (DAT_10057c30 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar8 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar7 = (**(code **)(*param_1 + 0x20))();
      iVar4 = DAT_10057c24;
      puVar13 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar7 = DAT_10057c1c;
      do {
        do {
          if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
            uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
            uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8)
                    >> 2;
            *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                       ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                       ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
          }
          pbVar8 = pbVar8 + -1;
          puVar13 = puVar13 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        pbVar8 = pbVar8 + _DAT_10057bf4;
        puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar7 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar8 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar7 = (**(code **)(*param_1 + 0x20))();
      iVar4 = DAT_10057c24;
      puVar13 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar7 = DAT_10057c1c;
      do {
        do {
          if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
            uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
            uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8)
                    >> 2;
            *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                       ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                       ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
          }
          pbVar8 = pbVar8 + 1;
          puVar13 = puVar13 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        pbVar8 = pbVar8 + -_DAT_10057bf4;
        puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar7 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar8 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                     *(int *)((int)this + 0x14));
    iVar7 = (**(code **)(*param_1 + 0x20))();
    iVar4 = DAT_10057c24;
    puVar13 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
    DAT_10057c30 = local_1c.bottom - local_1c.top;
    DAT_10057c1c = local_1c.right - local_1c.left;
    _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
    _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
    iVar7 = DAT_10057c1c;
    do {
      do {
        if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
          uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
          uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8) >>
                  2;
          *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                     ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                     ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
        }
        pbVar8 = pbVar8 + 1;
        puVar13 = puVar13 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      pbVar8 = pbVar8 + _DAT_10057bf4;
      puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
      DAT_10057c30 = DAT_10057c30 + -1;
      iVar7 = DAT_10057c1c;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  lVar14 = __ftol();
  iVar7 = (int)lVar14 + param_3;
  lVar14 = __ftol();
  iVar4 = (int)lVar14 + param_2;
  local_1c.left = iVar4;
  local_1c.top = iVar7;
  lVar14 = __ftol();
  local_1c.right = (int)lVar14 + iVar4;
  lVar14 = __ftol();
  LVar3 = local_1c.left;
  local_1c.bottom = (int)lVar14 + iVar7;
  pRVar5 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar6 = IntersectRect(&local_1c,&local_1c,pRVar5);
  if (BVar6 == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0;
  }
  iVar4 = (**(code **)(*param_1 + 0x20))();
  puVar13 = (ushort *)(iVar4 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
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
      _DAT_10057c0c = (local_1c.left - LVar3) * _DAT_10057c40;
      DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
      _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
      _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
      pbVar8 = (byte *)((((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) *
                         DAT_10057c34 - (_DAT_10057c0c >> 0x10)) + *(int *)((int)local_8 + 0x30) +
                        -1 + *(int *)((int)local_8 + 0x14));
      _DAT_10057bf4 = _DAT_10057c28 - DAT_10057c34;
      *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 - _DAT_10057c28;
      *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
      iVar4 = DAT_10057c24;
      iVar7 = DAT_10057c10 << 0x10;
      DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
      _DAT_10057c38 = _DAT_10057c40 >> 0x10;
      _DAT_10057bfc = DAT_10057bf8 << 0x10;
      do {
        iVar11 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
        uVar12 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
        do {
          if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
            uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
            uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8)
                    >> 2;
            *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                       ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                       ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
          }
          uVar9 = (ushort)uVar12;
          uVar12 = CONCAT22((short)(uVar12 >> 0x10),uVar9 + (ushort)iVar11);
          pbVar8 = pbVar8 + (-(uint)CARRY2(uVar9,(ushort)iVar11) - _DAT_10057c38);
          puVar13 = puVar13 + 1;
          iVar11 = iVar11 + -0x10000;
        } while (-1 < iVar11);
        puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
        iVar7 = uVar12 + _DAT_10057bfc;
        pbVar8 = pbVar8 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar12,_DAT_10057bfc) * -4);
        DAT_10057c30 = DAT_10057c30 + -1;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057c0c = (local_1c.left - LVar3) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar11 = (DAT_10057c10 >> 0x10) * DAT_10057c34;
    uVar12 = _DAT_10057c0c >> 0x10;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    iVar4 = *(int *)((int)local_8 + 0x30);
    iVar7 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar8 = (byte *)((iVar11 - uVar12) + iVar4 + -1 + iVar7);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar4 = DAT_10057c24;
    iVar7 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    _DAT_10057c38 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar11 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar12 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
      do {
        if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
          uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
          uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8) >>
                  2;
          *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                     ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                     ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
        }
        uVar9 = (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 >> 0x10),uVar9 + (ushort)iVar11);
        pbVar8 = pbVar8 + (-(uint)CARRY2(uVar9,(ushort)iVar11) - _DAT_10057c38);
        puVar13 = puVar13 + 1;
        iVar11 = iVar11 + -0x10000;
      } while (-1 < iVar11);
      puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
      iVar7 = uVar12 + _DAT_10057bfc;
      pbVar8 = pbVar8 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar12,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057c0c = (local_1c.left - LVar3) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar7 = ((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) * DAT_10057c34;
    uVar12 = _DAT_10057c0c >> 0x10;
    iVar4 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar8 = (byte *)(iVar7 + uVar12 + iVar4);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar4 = DAT_10057c24;
    iVar7 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    _DAT_10057c38 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar11 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar12 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
      do {
        if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
          uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
          uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8) >>
                  2;
          *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                     ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                     ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
        }
        uVar9 = (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 >> 0x10),uVar9 + (ushort)iVar11);
        pbVar8 = pbVar8 + CARRY2(uVar9,(ushort)iVar11) + _DAT_10057c38;
        puVar13 = puVar13 + 1;
        iVar11 = iVar11 + -0x10000;
      } while (-1 < iVar11);
      puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
      iVar7 = uVar12 + _DAT_10057bfc;
      pbVar8 = pbVar8 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar12,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057c0c = (local_1c.left - LVar3) * _DAT_10057c40;
  DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
  _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
  _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
  _DAT_10057bf4 = DAT_10057c34 - _DAT_10057c28;
  pbVar8 = (byte *)((DAT_10057c10 >> 0x10) * DAT_10057c34 + (_DAT_10057c0c >> 0x10) +
                   *(int *)((int)local_8 + 0x14));
  *(uint *)PTR_DAT_1005510c = ((DAT_10057bf8 >> 0x10) - 1) * DAT_10057c34 + _DAT_10057bf4;
  *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
  iVar4 = DAT_10057c24;
  iVar7 = DAT_10057c10 << 0x10;
  DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
  _DAT_10057c38 = _DAT_10057c40 >> 0x10;
  _DAT_10057bfc = DAT_10057bf8 << 0x10;
  do {
    iVar11 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
    uVar12 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
    do {
      if ((*pbVar8 != 0xff) && (*pbVar8 < 0xf8)) {
        uVar9 = *(ushort *)(iVar4 + (uint)*pbVar8 * 2);
        uVar9 = (ushort)(((uVar9 & 0x7c00) >> 7) + ((uVar9 & 0x3e0) >> 1) + (uVar9 & 0x1f) * 8) >> 2
        ;
        *puVar13 = (ushort)((ushort)(bVar1 & 0x1f) * (uVar9 & 0xff)) >> 8 |
                   ((ushort)(((param_4 & 0x3e0) >> 5) * (uVar9 & 0xff)) >> 8) << 5 |
                   ((ushort)((ushort)((bVar2 & 0x7c) >> 2) * (uVar9 & 0xff)) >> 8) << 10;
      }
      uVar9 = (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 >> 0x10),uVar9 + (ushort)iVar11);
      pbVar8 = pbVar8 + CARRY2(uVar9,(ushort)iVar11) + _DAT_10057c38;
      puVar13 = puVar13 + 1;
      iVar11 = iVar11 + -0x10000;
    } while (-1 < iVar11);
    puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
    iVar7 = uVar12 + _DAT_10057bfc;
    pbVar8 = pbVar8 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar12,_DAT_10057bfc) * -4);
    DAT_10057c30 = DAT_10057c30 + -1;
  } while (DAT_10057c30 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

