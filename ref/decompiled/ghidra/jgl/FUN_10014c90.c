/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10014c90 @ 0x10014C90 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_10014c90(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  LONG LVar1;
  byte bVar2;
  int iVar3;
  RECT *pRVar4;
  BOOL BVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  longlong lVar13;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_8 = this, iVar3 = (**(code **)(*param_1 + 0x10))(), iVar3 == 0)) {
    return 3;
  }
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)(DAT_10057d9c + 4) == 0)) {
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
  DAT_10057c00 = param_4;
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
        pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                         *(int *)((int)this + 0x14));
        iVar7 = (**(code **)(*param_1 + 0x20))();
        iVar3 = DAT_10057c00;
        puVar12 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
        DAT_10057c30 = local_1c.bottom - local_1c.top;
        DAT_10057c1c = local_1c.right - local_1c.left;
        _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
        _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
        iVar7 = DAT_10057c1c;
        do {
          do {
            if (*pbVar6 < 0xfe) {
              if (*pbVar6 == 0) {
                *puVar12 = 0;
              }
              else {
                bVar2 = *pbVar6 - 1;
                if (bVar2 < 0xf) {
                  iVar8 = (uint)bVar2 << 0xf;
                  *puVar12 = *(ushort *)
                              (iVar3 + CONCAT22((short)((uint)iVar8 >> 0x10),
                                                (ushort)iVar8 | *puVar12) * 2);
                }
              }
            }
            pbVar6 = pbVar6 + -1;
            puVar12 = puVar12 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          pbVar6 = pbVar6 + -_DAT_10057bf4;
          puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
          DAT_10057c30 = DAT_10057c30 + -1;
          iVar7 = DAT_10057c1c;
        } while (DAT_10057c30 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar7 = (**(code **)(*param_1 + 0x20))();
      iVar3 = DAT_10057c00;
      puVar12 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar7 = DAT_10057c1c;
      do {
        do {
          if (*pbVar6 < 0xfe) {
            if (*pbVar6 == 0) {
              *puVar12 = 0;
            }
            else {
              bVar2 = *pbVar6 - 1;
              if (bVar2 < 0xf) {
                iVar8 = (uint)bVar2 << 0xf;
                *puVar12 = *(ushort *)
                            (iVar3 + CONCAT22((short)((uint)iVar8 >> 0x10),(ushort)iVar8 | *puVar12)
                                     * 2);
              }
            }
          }
          pbVar6 = pbVar6 + -1;
          puVar12 = puVar12 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        pbVar6 = pbVar6 + _DAT_10057bf4;
        puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar7 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar7 = (**(code **)(*param_1 + 0x20))();
      iVar3 = DAT_10057c00;
      puVar12 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar7 = DAT_10057c1c;
      do {
        do {
          if (*pbVar6 < 0xfe) {
            if (*pbVar6 == 0) {
              *puVar12 = 0;
            }
            else {
              bVar2 = *pbVar6 - 1;
              if (bVar2 < 0xf) {
                iVar8 = (uint)bVar2 << 0xf;
                *puVar12 = *(ushort *)
                            (iVar3 + CONCAT22((short)((uint)iVar8 >> 0x10),(ushort)iVar8 | *puVar12)
                                     * 2);
              }
            }
          }
          pbVar6 = pbVar6 + 1;
          puVar12 = puVar12 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        pbVar6 = pbVar6 + -_DAT_10057bf4;
        puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar7 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar6 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                     *(int *)((int)this + 0x14));
    iVar7 = (**(code **)(*param_1 + 0x20))();
    iVar3 = DAT_10057c00;
    puVar12 = (ushort *)(iVar7 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
    DAT_10057c30 = local_1c.bottom - local_1c.top;
    DAT_10057c1c = local_1c.right - local_1c.left;
    _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
    _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
    iVar7 = DAT_10057c1c;
    do {
      do {
        if (*pbVar6 < 0xfe) {
          if (*pbVar6 == 0) {
            *puVar12 = 0;
          }
          else {
            bVar2 = *pbVar6 - 1;
            if (bVar2 < 0xf) {
              iVar8 = (uint)bVar2 << 0xf;
              *puVar12 = *(ushort *)
                          (iVar3 + CONCAT22((short)((uint)iVar8 >> 0x10),(ushort)iVar8 | *puVar12) *
                                   2);
            }
          }
        }
        pbVar6 = pbVar6 + 1;
        puVar12 = puVar12 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      pbVar6 = pbVar6 + _DAT_10057bf4;
      puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
      DAT_10057c30 = DAT_10057c30 + -1;
      iVar7 = DAT_10057c1c;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  lVar13 = __ftol();
  iVar7 = (int)lVar13 + param_3;
  lVar13 = __ftol();
  iVar3 = (int)lVar13 + param_2;
  local_1c.left = iVar3;
  local_1c.top = iVar7;
  lVar13 = __ftol();
  local_1c.right = (int)lVar13 + iVar3;
  lVar13 = __ftol();
  LVar1 = local_1c.left;
  local_1c.bottom = (int)lVar13 + iVar7;
  pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar5 = IntersectRect(&local_1c,&local_1c,pRVar4);
  if (BVar5 == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x20))();
  puVar12 = (ushort *)(iVar3 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
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
      DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
      _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
      _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
      pbVar6 = (byte *)((((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) *
                         DAT_10057c34 - (_DAT_10057c0c >> 0x10)) + *(int *)((int)local_8 + 0x30) +
                        -1 + *(int *)((int)local_8 + 0x14));
      _DAT_10057bf4 = _DAT_10057c28 - DAT_10057c34;
      *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 - _DAT_10057c28;
      *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
      iVar3 = DAT_10057c00;
      iVar7 = DAT_10057c10 << 0x10;
      DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
      uVar11 = _DAT_10057c40 >> 0x10;
      _DAT_10057bfc = DAT_10057bf8 << 0x10;
      do {
        iVar8 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
        uVar10 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
        do {
          if (*pbVar6 < 0xfe) {
            if (*pbVar6 == 0) {
              *puVar12 = 0;
            }
            else {
              bVar2 = *pbVar6 - 1;
              if (bVar2 < 0xf) {
                iVar7 = (uint)bVar2 << 0xf;
                *puVar12 = *(ushort *)
                            (iVar3 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar12)
                                     * 2);
              }
            }
          }
          uVar9 = (ushort)uVar10;
          uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar9 + (ushort)iVar8);
          pbVar6 = pbVar6 + (-(uint)CARRY2(uVar9,(ushort)iVar8) - uVar11);
          puVar12 = puVar12 + 1;
          iVar8 = iVar8 + -0x10000;
        } while (-1 < iVar8);
        puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
        iVar7 = uVar10 + _DAT_10057bfc;
        pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
        DAT_10057c30 = DAT_10057c30 + -1;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar8 = (DAT_10057c10 >> 0x10) * DAT_10057c34;
    uVar11 = _DAT_10057c0c >> 0x10;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    iVar3 = *(int *)((int)local_8 + 0x30);
    iVar7 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar6 = (byte *)((iVar8 - uVar11) + iVar3 + -1 + iVar7);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar3 = DAT_10057c00;
    iVar7 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    uVar11 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar8 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar10 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
      do {
        if (*pbVar6 < 0xfe) {
          if (*pbVar6 == 0) {
            *puVar12 = 0;
          }
          else {
            bVar2 = *pbVar6 - 1;
            if (bVar2 < 0xf) {
              iVar7 = (uint)bVar2 << 0xf;
              *puVar12 = *(ushort *)
                          (iVar3 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar12) *
                                   2);
            }
          }
        }
        uVar9 = (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar9 + (ushort)iVar8);
        pbVar6 = pbVar6 + (-(uint)CARRY2(uVar9,(ushort)iVar8) - uVar11);
        puVar12 = puVar12 + 1;
        iVar8 = iVar8 + -0x10000;
      } while (-1 < iVar8);
      puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
      iVar7 = uVar10 + _DAT_10057bfc;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar7 = ((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) * DAT_10057c34;
    uVar11 = _DAT_10057c0c >> 0x10;
    iVar3 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar6 = (byte *)(iVar7 + uVar11 + iVar3);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar3 = DAT_10057c00;
    iVar7 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    uVar11 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar8 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar10 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
      do {
        if (*pbVar6 < 0xfe) {
          if (*pbVar6 == 0) {
            *puVar12 = 0;
          }
          else {
            bVar2 = *pbVar6 - 1;
            if (bVar2 < 0xf) {
              iVar7 = (uint)bVar2 << 0xf;
              *puVar12 = *(ushort *)
                          (iVar3 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar12) *
                                   2);
            }
          }
        }
        uVar9 = (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar9 + (ushort)iVar8);
        pbVar6 = pbVar6 + CARRY2(uVar9,(ushort)iVar8) + uVar11;
        puVar12 = puVar12 + 1;
        iVar8 = iVar8 + -0x10000;
      } while (-1 < iVar8);
      puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
      iVar7 = uVar10 + _DAT_10057bfc;
      pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
  DAT_10057c10 = (local_1c.top - iVar7) * DAT_10057bf8;
  _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
  _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
  _DAT_10057bf4 = DAT_10057c34 - _DAT_10057c28;
  pbVar6 = (byte *)((DAT_10057c10 >> 0x10) * DAT_10057c34 + (_DAT_10057c0c >> 0x10) +
                   *(int *)((int)local_8 + 0x14));
  *(uint *)PTR_DAT_1005510c = ((DAT_10057bf8 >> 0x10) - 1) * DAT_10057c34 + _DAT_10057bf4;
  *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
  iVar3 = DAT_10057c00;
  iVar7 = DAT_10057c10 << 0x10;
  DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
  uVar11 = _DAT_10057c40 >> 0x10;
  _DAT_10057bfc = DAT_10057bf8 << 0x10;
  do {
    iVar8 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
    uVar10 = CONCAT22((short)((uint)iVar7 >> 0x10),DAT_10057c0c);
    do {
      if (*pbVar6 < 0xfe) {
        if (*pbVar6 == 0) {
          *puVar12 = 0;
        }
        else {
          bVar2 = *pbVar6 - 1;
          if (bVar2 < 0xf) {
            iVar7 = (uint)bVar2 << 0xf;
            *puVar12 = *(ushort *)
                        (iVar3 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar12) * 2
                        );
          }
        }
      }
      uVar9 = (ushort)uVar10;
      uVar10 = CONCAT22((short)(uVar10 >> 0x10),uVar9 + (ushort)iVar8);
      pbVar6 = pbVar6 + CARRY2(uVar9,(ushort)iVar8) + uVar11;
      puVar12 = puVar12 + 1;
      iVar8 = iVar8 + -0x10000;
    } while (-1 < iVar8);
    puVar12 = (ushort *)((int)puVar12 + _DAT_10057c18);
    iVar7 = uVar10 + _DAT_10057bfc;
    pbVar6 = pbVar6 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar10,_DAT_10057bfc) * -4);
    DAT_10057c30 = DAT_10057c30 + -1;
  } while (DAT_10057c30 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

