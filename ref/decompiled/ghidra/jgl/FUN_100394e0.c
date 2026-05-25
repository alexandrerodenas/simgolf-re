/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100394e0 @ 0x100394E0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_100394e0(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  LONG LVar1;
  int iVar2;
  RECT *pRVar3;
  BOOL BVar4;
  byte *pbVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  RECT local_1c;
  int local_c;
  void *local_8;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) ||
     (local_8 = this, iVar2 = (**(code **)(*param_1 + 0x10))(), iVar2 == 0)) {
    return 3;
  }
  _DAT_10057d1c =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  local_c = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057d20 = (float)local_c / (float)(int)DAT_10055104;
  DAT_10057d08 = *(int *)((int)this + 0x2c);
  DAT_10057cd4 = (**(code **)(*param_1 + 0xe0))();
  DAT_10057cfc = param_5;
  DAT_10057cbc = param_4;
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
        pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                         *(int *)((int)this + 0x14));
        iVar6 = (**(code **)(*param_1 + 0x18))();
        iVar2 = DAT_10057ce8;
        DAT_10057d00 = local_1c.bottom - local_1c.top;
        DAT_10057ce0 = local_1c.right - local_1c.left;
        pbVar10 = (byte *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar6);
        _DAT_10057cac = DAT_10057d08 - DAT_10057ce0;
        _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
        iVar6 = DAT_10057ce0;
        do {
          do {
            if (*pbVar5 < 0xfe) {
              if (*pbVar5 == 0xf8) {
                *pbVar10 = *(byte *)(DAT_10057cfc + (uint)*pbVar10);
              }
              else {
                *pbVar10 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar5));
              }
            }
            pbVar5 = pbVar5 + -1;
            pbVar10 = pbVar10 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          pbVar5 = pbVar5 + -_DAT_10057cac;
          pbVar10 = pbVar10 + _DAT_10057cd8;
          DAT_10057d00 = DAT_10057d00 + -1;
          iVar6 = DAT_10057ce0;
        } while (DAT_10057d00 != 0);
        (**(code **)(*param_1 + 0x24))(2);
        return 0;
      }
      pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar6 = (**(code **)(*param_1 + 0x18))();
      iVar2 = DAT_10057ce8;
      DAT_10057d00 = local_1c.bottom - local_1c.top;
      DAT_10057ce0 = local_1c.right - local_1c.left;
      pbVar10 = (byte *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar6);
      _DAT_10057cac = DAT_10057d08 + DAT_10057ce0;
      _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
      iVar6 = DAT_10057ce0;
      do {
        do {
          if (*pbVar5 < 0xfe) {
            if (*pbVar5 == 0xf8) {
              *pbVar10 = *(byte *)(DAT_10057cfc + (uint)*pbVar10);
            }
            else {
              *pbVar10 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar5));
            }
          }
          pbVar5 = pbVar5 + -1;
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pbVar5 = pbVar5 + _DAT_10057cac;
        pbVar10 = pbVar10 + _DAT_10057cd8;
        DAT_10057d00 = DAT_10057d00 + -1;
        iVar6 = DAT_10057ce0;
      } while (DAT_10057d00 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    if ((int)DAT_10055100 < 0) {
      pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                       *(int *)((int)this + 0x14));
      iVar6 = (**(code **)(*param_1 + 0x18))();
      iVar2 = DAT_10057ce8;
      DAT_10057d00 = local_1c.bottom - local_1c.top;
      DAT_10057ce0 = local_1c.right - local_1c.left;
      pbVar10 = (byte *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar6);
      _DAT_10057cac = DAT_10057d08 + DAT_10057ce0;
      _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
      iVar6 = DAT_10057ce0;
      do {
        do {
          if (*pbVar5 < 0xfe) {
            if (*pbVar5 == 0xf8) {
              *pbVar10 = *(byte *)(DAT_10057cfc + (uint)*pbVar10);
            }
            else {
              *pbVar10 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar5));
            }
          }
          pbVar5 = pbVar5 + 1;
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pbVar5 = pbVar5 + -_DAT_10057cac;
        pbVar10 = pbVar10 + _DAT_10057cd8;
        DAT_10057d00 = DAT_10057d00 + -1;
        iVar6 = DAT_10057ce0;
      } while (DAT_10057d00 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    pbVar5 = (byte *)(((local_1c.top - param_3) * DAT_10057d08 - param_2) + local_1c.left +
                     *(int *)((int)this + 0x14));
    iVar6 = (**(code **)(*param_1 + 0x18))();
    iVar2 = DAT_10057ce8;
    DAT_10057d00 = local_1c.bottom - local_1c.top;
    DAT_10057ce0 = local_1c.right - local_1c.left;
    pbVar10 = (byte *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar6);
    _DAT_10057cac = DAT_10057d08 - DAT_10057ce0;
    _DAT_10057cd8 = DAT_10057cd4 - DAT_10057ce0;
    iVar6 = DAT_10057ce0;
    do {
      do {
        if (*pbVar5 < 0xfe) {
          if (*pbVar5 == 0xf8) {
            *pbVar10 = *(byte *)(DAT_10057cfc + (uint)*pbVar10);
          }
          else {
            *pbVar10 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar5));
          }
        }
        pbVar5 = pbVar5 + 1;
        pbVar10 = pbVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pbVar5 = pbVar5 + _DAT_10057cac;
      pbVar10 = pbVar10 + _DAT_10057cd8;
      DAT_10057d00 = DAT_10057d00 + -1;
      iVar6 = DAT_10057ce0;
    } while (DAT_10057d00 != 0);
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
  iVar2 = (**(code **)(*param_1 + 0x18))();
  pbVar5 = (byte *)(DAT_10057cd4 * local_1c.top + local_1c.left + iVar2);
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
      _DAT_10057ccc = (local_1c.left - LVar1) * _DAT_10057d18;
      DAT_10057cd0 = (local_1c.top - iVar6) * DAT_10057cb4;
      _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
      _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
      pbVar10 = (byte *)((((*(int *)((int)local_8 + 0x34) - (DAT_10057cd0 >> 0x10)) + -1) *
                          DAT_10057d08 - (_DAT_10057ccc >> 0x10)) + *(int *)((int)local_8 + 0x30) +
                         -1 + *(int *)((int)local_8 + 0x14));
      _DAT_10057cac = _DAT_10057cf0 - DAT_10057d08;
      *(uint *)PTR_DAT_1005511c = (DAT_10057cb4 >> 0x10) * DAT_10057d08 - _DAT_10057cf0;
      *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
      iVar2 = DAT_10057ce8;
      iVar6 = DAT_10057cd0 << 0x10;
      DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
      _DAT_10057d0c = _DAT_10057d18 >> 0x10;
      _DAT_10057cb8 = DAT_10057cb4 << 0x10;
      do {
        iVar8 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
        uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057ccc);
        do {
          if (*pbVar10 < 0xfe) {
            if (*pbVar10 == 0xf8) {
              *pbVar5 = *(byte *)(DAT_10057cfc + (uint)*pbVar5);
            }
            else {
              *pbVar5 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar10));
            }
          }
          uVar7 = (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar7 + (ushort)iVar8);
          pbVar10 = pbVar10 + (-(uint)CARRY2(uVar7,(ushort)iVar8) - _DAT_10057d0c);
          pbVar5 = pbVar5 + 1;
          iVar8 = iVar8 + -0x10000;
        } while (-1 < iVar8);
        pbVar5 = pbVar5 + _DAT_10057cd8;
        iVar6 = uVar9 + _DAT_10057cb8;
        pbVar10 = pbVar10 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar9,_DAT_10057cb8) * -4);
        DAT_10057d00 = DAT_10057d00 + -1;
      } while (DAT_10057d00 != 0);
      (**(code **)(*param_1 + 0x24))(2);
      return 0;
    }
    _DAT_10057ccc = (local_1c.left - LVar1) * _DAT_10057d18;
    DAT_10057cd0 = (local_1c.top - iVar6) * DAT_10057cb4;
    _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
    iVar8 = (DAT_10057cd0 >> 0x10) * DAT_10057d08;
    uVar9 = _DAT_10057ccc >> 0x10;
    _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
    iVar2 = *(int *)((int)local_8 + 0x30);
    iVar6 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005511c = (DAT_10057cb4 >> 0x10) * DAT_10057d08 + _DAT_10057cf0;
    pbVar10 = (byte *)((iVar8 - uVar9) + iVar2 + -1 + iVar6);
    *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
    iVar2 = DAT_10057ce8;
    iVar6 = DAT_10057cd0 << 0x10;
    DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
    _DAT_10057d0c = _DAT_10057d18 >> 0x10;
    _DAT_10057cb8 = DAT_10057cb4 << 0x10;
    do {
      iVar8 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
      uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057ccc);
      do {
        if (*pbVar10 < 0xfe) {
          if (*pbVar10 == 0xf8) {
            *pbVar5 = *(byte *)(DAT_10057cfc + (uint)*pbVar5);
          }
          else {
            *pbVar5 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar10));
          }
        }
        uVar7 = (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar7 + (ushort)iVar8);
        pbVar10 = pbVar10 + (-(uint)CARRY2(uVar7,(ushort)iVar8) - _DAT_10057d0c);
        pbVar5 = pbVar5 + 1;
        iVar8 = iVar8 + -0x10000;
      } while (-1 < iVar8);
      pbVar5 = pbVar5 + _DAT_10057cd8;
      iVar6 = uVar9 + _DAT_10057cb8;
      pbVar10 = pbVar10 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar9,_DAT_10057cb8) * -4);
      DAT_10057d00 = DAT_10057d00 + -1;
    } while (DAT_10057d00 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  if ((int)DAT_10055100 < 0) {
    _DAT_10057ccc = (local_1c.left - LVar1) * _DAT_10057d18;
    DAT_10057cd0 = (local_1c.top - iVar6) * DAT_10057cb4;
    _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
    _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
    iVar6 = ((*(int *)((int)local_8 + 0x34) - (DAT_10057cd0 >> 0x10)) + -1) * DAT_10057d08;
    uVar9 = _DAT_10057ccc >> 0x10;
    iVar2 = *(int *)((int)local_8 + 0x14);
    *(uint *)PTR_DAT_1005511c = (DAT_10057cb4 >> 0x10) * DAT_10057d08 + _DAT_10057cf0;
    pbVar10 = (byte *)(iVar6 + uVar9 + iVar2);
    *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
    iVar2 = DAT_10057ce8;
    iVar6 = DAT_10057cd0 << 0x10;
    DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
    _DAT_10057d0c = _DAT_10057d18 >> 0x10;
    _DAT_10057cb8 = DAT_10057cb4 << 0x10;
    do {
      iVar8 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
      uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057ccc);
      do {
        if (*pbVar10 < 0xfe) {
          if (*pbVar10 == 0xf8) {
            *pbVar5 = *(byte *)(DAT_10057cfc + (uint)*pbVar5);
          }
          else {
            *pbVar5 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar10));
          }
        }
        uVar7 = (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar7 + (ushort)iVar8);
        pbVar10 = pbVar10 + CARRY2(uVar7,(ushort)iVar8) + _DAT_10057d0c;
        pbVar5 = pbVar5 + 1;
        iVar8 = iVar8 + -0x10000;
      } while (-1 < iVar8);
      pbVar5 = pbVar5 + _DAT_10057cd8;
      iVar6 = uVar9 + _DAT_10057cb8;
      pbVar10 = pbVar10 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar9,_DAT_10057cb8) * -4);
      DAT_10057d00 = DAT_10057d00 + -1;
    } while (DAT_10057d00 != 0);
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  _DAT_10057ccc = (local_1c.left - LVar1) * _DAT_10057d18;
  DAT_10057cd0 = (local_1c.top - iVar6) * DAT_10057cb4;
  _DAT_10057d10 = DAT_10057cb4 * DAT_10057d00 + (DAT_10057cd0 & 0xffff) >> 0x10;
  _DAT_10057cf0 = _DAT_10057d18 * DAT_10057ce0 + (_DAT_10057ccc & 0xffff) >> 0x10;
  _DAT_10057cac = DAT_10057d08 - _DAT_10057cf0;
  pbVar10 = (byte *)((DAT_10057cd0 >> 0x10) * DAT_10057d08 + (_DAT_10057ccc >> 0x10) +
                    *(int *)((int)local_8 + 0x14));
  *(uint *)PTR_DAT_1005511c = ((DAT_10057cb4 >> 0x10) - 1) * DAT_10057d08 + _DAT_10057cac;
  *(int *)PTR_DAT_10055118 = *(int *)PTR_DAT_1005511c + DAT_10057d08;
  iVar2 = DAT_10057ce8;
  iVar6 = DAT_10057cd0 << 0x10;
  DAT_10057ce0 = (DAT_10057ce0 + -1) * 0x10000;
  _DAT_10057d0c = _DAT_10057d18 >> 0x10;
  _DAT_10057cb8 = DAT_10057cb4 << 0x10;
  do {
    iVar8 = CONCAT22((short)((uint)DAT_10057ce0 >> 0x10),DAT_10057d18);
    uVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),DAT_10057ccc);
    do {
      if (*pbVar10 < 0xfe) {
        if (*pbVar10 == 0xf8) {
          *pbVar5 = *(byte *)(DAT_10057cfc + (uint)*pbVar5);
        }
        else {
          *pbVar5 = *(byte *)(iVar2 + (uint)*(byte *)(DAT_10057cbc + (uint)*pbVar10));
        }
      }
      uVar7 = (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar7 + (ushort)iVar8);
      pbVar10 = pbVar10 + CARRY2(uVar7,(ushort)iVar8) + _DAT_10057d0c;
      pbVar5 = pbVar5 + 1;
      iVar8 = iVar8 + -0x10000;
    } while (-1 < iVar8);
    pbVar5 = pbVar5 + _DAT_10057cd8;
    iVar6 = uVar9 + _DAT_10057cb8;
    pbVar10 = pbVar10 + *(int *)(PTR_DAT_1005511c + (uint)CARRY4(uVar9,_DAT_10057cb8) * -4);
    DAT_10057d00 = DAT_10057d00 + -1;
  } while (DAT_10057d00 != 0);
  (**(code **)(*param_1 + 0x24))(2);
  return 0;
}

