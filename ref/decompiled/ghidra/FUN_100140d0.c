/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100140d0 @ 0x100140D0 */
/* Body size: 3003 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100140d0(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  LONG LVar1;
  int iVar2;
  RECT *pRVar3;
  BOOL BVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  longlong lVar11;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_8 = this, iVar2 = (**(code **)(*param_1 + 0x10))(), iVar2 == 0)) {
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
  iVar2 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar2) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar2)) {
    local_1c.right = *(int *)((int)this + 0x30) + param_2;
    local_1c.bottom = *(int *)((int)this + 0x34) + param_3;
    local_1c.top = param_3;
    local_1c.left = param_2;
    pRVar3 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar4 = IntersectRect(&local_1c,&local_1c,pRVar3);
    if (BVar4 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((int)DAT_100550fc < 0) {
      if ((int)DAT_10055100 < 0) {
        pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                         *(int *)((int)this + 0x14));
        iVar6 = (**(code **)(*param_1 + 0x20))();
        iVar2 = DAT_10057c00;
        puVar10 = (ushort *)(iVar6 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
        DAT_10057c30 = local_1c.bottom - local_1c.top;
        DAT_10057c1c = local_1c.right - local_1c.left;
        _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
        _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
        iVar6 = DAT_10057c1c;
        do {
          do {
            if (*pbVar5 < 0xfe) {
              iVar7 = (uint)(byte)(*pbVar5 + 8) << 0xf;
              *puVar10 = *(ushort *)
                          (iVar2 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar10) *
                                   2);
            }
            pbVar5 = pbVar5 + -1;
            puVar10 = puVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          pbVar5 = pbVar5 + -_DAT_10057bf4;
          puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
          DAT_10057c30 = DAT_10057c30 + -1;
          iVar6 = DAT_10057c1c;
        } while (DAT_10057c30 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar6 = (**(code **)(*param_1 + 0x20))();
      iVar2 = DAT_10057c00;
      puVar10 = (ushort *)(iVar6 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar6 = DAT_10057c1c;
      do {
        do {
          if (*pbVar5 < 0xfe) {
            iVar7 = (uint)(byte)(*pbVar5 + 8) << 0xf;
            *puVar10 = *(ushort *)
                        (iVar2 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar10) * 2
                        );
          }
          pbVar5 = pbVar5 + -1;
          puVar10 = puVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pbVar5 = pbVar5 + _DAT_10057bf4;
        puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar6 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar6 = (**(code **)(*param_1 + 0x20))();
      iVar2 = DAT_10057c00;
      puVar10 = (ushort *)(iVar6 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
      DAT_10057c30 = local_1c.bottom - local_1c.top;
      DAT_10057c1c = local_1c.right - local_1c.left;
      _DAT_10057bf4 = DAT_10057c34 + DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar6 = DAT_10057c1c;
      do {
        do {
          if (*pbVar5 < 0xfe) {
            iVar7 = (uint)(byte)(*pbVar5 + 8) << 0xf;
            *puVar10 = *(ushort *)
                        (iVar2 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar10) * 2
                        );
          }
          pbVar5 = pbVar5 + 1;
          puVar10 = puVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pbVar5 = pbVar5 + -_DAT_10057bf4;
        puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar6 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057c34 - param_2) + local_1c.left +
                     *(int *)((int)this + 0x14));
    iVar6 = (**(code **)(*param_1 + 0x20))();
    iVar2 = DAT_10057c00;
    puVar10 = (ushort *)(iVar6 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
    DAT_10057c30 = local_1c.bottom - local_1c.top;
    DAT_10057c1c = local_1c.right - local_1c.left;
    _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
    _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
    iVar6 = DAT_10057c1c;
    do {
      do {
        if (*pbVar5 < 0xfe) {
          iVar7 = (uint)(byte)(*pbVar5 + 8) << 0xf;
          *puVar10 = *(ushort *)
                      (iVar2 + CONCAT22((short)((uint)iVar7 >> 0x10),(ushort)iVar7 | *puVar10) * 2);
        }
        pbVar5 = pbVar5 + 1;
        puVar10 = puVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pbVar5 = pbVar5 + _DAT_10057bf4;
      puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
      DAT_10057c30 = DAT_10057c30 + -1;
      iVar6 = DAT_10057c1c;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  lVar11 = __ftol();
  iVar6 = (int)lVar11 + param_3;
  lVar11 = __ftol();
  iVar2 = (int)lVar11 + param_2;
  local_1c.left = iVar2;
  local_1c.top = iVar6;
  lVar11 = __ftol();
  local_1c.right = (int)lVar11 + iVar2;
  lVar11 = __ftol();
  LVar1 = local_1c.left;
  local_1c.bottom = (int)lVar11 + iVar6;
  pRVar3 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar4 = IntersectRect(&local_1c,&local_1c,pRVar3);
  if (BVar4 == 0) {
    (**(code **)(*param_1 + 0x24))(1);
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x20))();
  puVar10 = (ushort *)(iVar2 + (DAT_10057c14 * local_1c.top + local_1c.left) * 2);
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
      DAT_10057c10 = (local_1c.top - iVar6) * DAT_10057bf8;
      _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
      _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
      pbVar5 = (byte *)((((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) *
                         DAT_10057c34 - (_DAT_10057c0c >> 0x10)) + *(int *)((int)local_8 + 0x30) +
                        -1 + *(int *)((int)local_8 + 0x14));
      _DAT_10057bf4 = _DAT_10057c28 - DAT_10057c34;
      *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 - _DAT_10057c28;
      *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
      iVar2 = DAT_10057c00;
      iVar6 = DAT_10057c10 << 0x10;
      DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
      _DAT_10057c38 = _DAT_10057c40 >> 0x10;
      _DAT_10057bfc = DAT_10057bf8 << 0x10;
      do {
        iVar7 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
        uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057c0c);
        do {
          if (*pbVar5 < 0xfe) {
            iVar6 = (uint)(byte)(*pbVar5 + 8) << 0xf;
            *puVar10 = *(ushort *)
                        (iVar2 + CONCAT22((short)((uint)iVar6 >> 0x10),(ushort)iVar6 | *puVar10) * 2
                        );
          }
          uVar8 = (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar8 + (ushort)iVar7);
          pbVar5 = pbVar5 + (-(uint)CARRY2(uVar8,(ushort)iVar7) - _DAT_10057c38);
          puVar10 = puVar10 + 1;
          iVar7 = iVar7 + -0x10000;
        } while (-1 < iVar7);
        puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
        iVar6 = uVar9 + _DAT_10057bfc;
        pbVar5 = pbVar5 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar9,_DAT_10057bfc) * -4);
        DAT_10057c30 = DAT_10057c30 + -1;
      } while (DAT_10057c30 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar6) * DAT_10057bf8;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar7 = (DAT_10057c10 >> 0x10) * DAT_10057c34;
    uVar9 = _DAT_10057c0c >> 0x10;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    iVar2 = *(int *)((int)local_8 + 0x30);
    iVar6 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar5 = (byte *)((iVar7 - uVar9) + iVar2 + -1 + iVar6);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar2 = DAT_10057c00;
    iVar6 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    _DAT_10057c38 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar7 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057c0c);
      do {
        if (*pbVar5 < 0xfe) {
          iVar6 = (uint)(byte)(*pbVar5 + 8) << 0xf;
          *puVar10 = *(ushort *)
                      (iVar2 + CONCAT22((short)((uint)iVar6 >> 0x10),(ushort)iVar6 | *puVar10) * 2);
        }
        uVar8 = (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar8 + (ushort)iVar7);
        pbVar5 = pbVar5 + (-(uint)CARRY2(uVar8,(ushort)iVar7) - _DAT_10057c38);
        puVar10 = puVar10 + 1;
        iVar7 = iVar7 + -0x10000;
      } while (-1 < iVar7);
      puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
      iVar6 = uVar9 + _DAT_10057bfc;
      pbVar5 = pbVar5 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar9,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
    DAT_10057c10 = (local_1c.top - iVar6) * DAT_10057bf8;
    _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
    _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
    iVar6 = ((*(int *)((int)local_8 + 0x34) - (DAT_10057c10 >> 0x10)) + -1) * DAT_10057c34;
    uVar9 = _DAT_10057c0c >> 0x10;
    iVar2 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005510c = (DAT_10057bf8 >> 0x10) * DAT_10057c34 + _DAT_10057c28;
    pbVar5 = (byte *)(iVar6 + uVar9 + iVar2);
    *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
    iVar2 = DAT_10057c00;
    iVar6 = DAT_10057c10 << 0x10;
    DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
    _DAT_10057c38 = _DAT_10057c40 >> 0x10;
    _DAT_10057bfc = DAT_10057bf8 << 0x10;
    do {
      iVar7 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
      uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057c0c);
      do {
        if (*pbVar5 < 0xfe) {
          iVar6 = (uint)(byte)(*pbVar5 + 8) << 0xf;
          *puVar10 = *(ushort *)
                      (iVar2 + CONCAT22((short)((uint)iVar6 >> 0x10),(ushort)iVar6 | *puVar10) * 2);
        }
        uVar8 = (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar8 + (ushort)iVar7);
        pbVar5 = pbVar5 + CARRY2(uVar8,(ushort)iVar7) + _DAT_10057c38;
        puVar10 = puVar10 + 1;
        iVar7 = iVar7 + -0x10000;
      } while (-1 < iVar7);
      puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
      iVar6 = uVar9 + _DAT_10057bfc;
      pbVar5 = pbVar5 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar9,_DAT_10057bfc) * -4);
      DAT_10057c30 = DAT_10057c30 + -1;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057c0c = (local_1c.left - LVar1) * _DAT_10057c40;
  DAT_10057c10 = (local_1c.top - iVar6) * DAT_10057bf8;
  _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 + (DAT_10057c10 & 0xffff) >> 0x10;
  _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c + (_DAT_10057c0c & 0xffff) >> 0x10;
  _DAT_10057bf4 = DAT_10057c34 - _DAT_10057c28;
  pbVar5 = (byte *)((DAT_10057c10 >> 0x10) * DAT_10057c34 + (_DAT_10057c0c >> 0x10) +
                   *(int *)((int)local_8 + 0x14));
  *(uint *)PTR_DAT_1005510c = ((DAT_10057bf8 >> 0x10) - 1) * DAT_10057c34 + _DAT_10057bf4;
  *(int *)PTR_DAT_10055108 = *(int *)PTR_DAT_1005510c + DAT_10057c34;
  iVar2 = DAT_10057c00;
  iVar6 = DAT_10057c10 << 0x10;
  DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
  _DAT_10057c38 = _DAT_10057c40 >> 0x10;
  _DAT_10057bfc = DAT_10057bf8 << 0x10;
  do {
    iVar7 = CONCAT22((short)((uint)DAT_10057c1c >> 0x10),DAT_10057c40);
    uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057c0c);
    do {
      if (*pbVar5 < 0xfe) {
        iVar6 = (uint)(byte)(*pbVar5 + 8) << 0xf;
        *puVar10 = *(ushort *)
                    (iVar2 + CONCAT22((short)((uint)iVar6 >> 0x10),(ushort)iVar6 | *puVar10) * 2);
      }
      uVar8 = (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar8 + (ushort)iVar7);
      pbVar5 = pbVar5 + CARRY2(uVar8,(ushort)iVar7) + _DAT_10057c38;
      puVar10 = puVar10 + 1;
      iVar7 = iVar7 + -0x10000;
    } while (-1 < iVar7);
    puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
    iVar6 = uVar9 + _DAT_10057bfc;
    pbVar5 = pbVar5 + *(int *)(PTR_DAT_1005510c + (uint)CARRY4(uVar9,_DAT_10057bfc) * -4);
    DAT_10057c30 = DAT_10057c30 + -1;
  } while (DAT_10057c30 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

