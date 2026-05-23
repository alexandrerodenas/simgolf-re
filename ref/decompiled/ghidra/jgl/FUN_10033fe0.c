/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10033fe0 @ 0x10033FE0 */
/* Body size: 1452 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10033fe0(void *this,int *param_1,int param_2,undefined2 *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  RECT *pRVar5;
  BOOL BVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  longlong lVar17;
  undefined2 *puStack_38;
  int iStack_34;
  RECT RStack_20;
  int iStack_10;
  undefined2 *puStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar14 = param_2;
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) {
    return 3;
  }
  piVar13 = *(int **)((int)this + 0x10);
  if (piVar13 == (int *)0x0) {
    piVar13 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar13 == (int *)0x0) {
    return 0x10;
  }
  _DAT_10057c5c =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)(int)DAT_10055104;
  _DAT_10057c58 =
       (float)(int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f)) /
       (float)(int)DAT_10055104;
  DAT_10057c98 = *(int *)((int)this + 0x2c);
  *(uint *)((int)this + 0x28) = (uint)*(byte *)((int)this + 0x28);
  DAT_10057c80 = (**(code **)(*param_1 + 0xe0))();
  iVar4 = (**(code **)(*param_1 + 0xe4))();
  if (*(int *)(iVar4 + 4) == 0) {
    DAT_10057ca4 = (**(code **)(*piVar13 + 0x18))();
  }
  else {
    if (*(int *)(iVar4 + 4) != 1) {
      return 1;
    }
    DAT_10057ca4 = (**(code **)(*piVar13 + 0x1c))();
  }
  iVar4 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar4) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar4)) {
    iVar14 = *(int *)((int)this + 0x30) + param_2;
    RStack_20.bottom = *(int *)((int)this + 0x34) + (int)param_3;
    RStack_20.left = param_2;
    iStack_10 = param_2;
    RStack_20.top = (LONG)param_3;
    puStack_c = param_3;
    RStack_20.right = iVar14;
    iStack_4 = RStack_20.bottom;
    pRVar5 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar6 = IntersectRect(&RStack_20,&RStack_20,pRVar5);
    if (BVar6 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
      iVar4 = (**(code **)(*param_1 + 0x20))();
      param_2 = 0;
      param_3 = (undefined2 *)(iVar4 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2);
      DAT_10057c94 = RStack_20.bottom - RStack_20.top;
      DAT_10057c88 = RStack_20.right - RStack_20.left;
      _DAT_10057c60 = DAT_10057c98 - DAT_10057c88;
      _DAT_10057c84 = DAT_10057c80 - DAT_10057c88;
      pbVar10 = (byte *)(*(int *)((int)this + 0x1c) + (RStack_20.top - (int)puStack_c) * 4);
      if (0 < DAT_10057c94) {
        do {
          uVar9 = (uint)*pbVar10;
          uVar11 = uVar9 - (RStack_20.left - iStack_10);
          uVar12 = (RStack_20.left - iStack_10) - uVar9;
          pbVar15 = (byte *)((uint)*(ushort *)(pbVar10 + 2) + (((int)uVar12 < 0) - 1 & uVar12) +
                            *(int *)((int)this + 0x14));
          uVar9 = (iVar14 - RStack_20.right) -
                  ((*(int *)((int)this + 0x30) - uVar9) - (uint)pbVar10[1]);
          iVar4 = ((uint)pbVar10[1] - (((int)uVar9 < 0) - 1 & uVar9)) -
                  (uVar12 & ((int)uVar12 < 0) - 1);
          if (0 < iVar4) {
            puVar8 = param_3 + (((int)uVar11 < 0) - 1 & uVar11);
            do {
              if (*pbVar15 < 0xfe) {
                *puVar8 = *(undefined2 *)(DAT_10057ca4 + (uint)*pbVar15 * 2);
              }
              puVar8 = puVar8 + 1;
              pbVar15 = pbVar15 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          pbVar10 = pbVar10 + 4;
          param_3 = param_3 + DAT_10057c80;
          param_2 = param_2 + 1;
        } while (param_2 < DAT_10057c94);
        (**(code **)(*param_1 + 0x24))(1);
        return 0;
      }
    }
  }
  else {
    RStack_20.left = param_2;
    RStack_20.top = (LONG)param_3;
    lVar17 = __ftol();
    iVar4 = (int)lVar17 + param_2;
    RStack_20.right = iVar4;
    lVar17 = __ftol();
    RStack_20.bottom = (int)lVar17 + (int)param_3;
    puStack_c = (undefined2 *)RStack_20.top;
    iStack_8 = iVar4;
    iStack_4 = RStack_20.bottom;
    pRVar5 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar6 = IntersectRect(&RStack_20,&RStack_20,pRVar5);
    if (BVar6 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    (**(code **)(*param_1 + 0x20))();
    DAT_10057c80 = (**(code **)(*param_1 + 0xe0))();
    DAT_10057c88 = RStack_20.right - RStack_20.left;
    DAT_10057c94 = RStack_20.bottom - RStack_20.top;
    _DAT_10057c84 = (DAT_10057c80 - DAT_10057c88) * 2;
    DAT_10057ca0 = (int)(DAT_10055104 << 0x10) /
                   (int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f));
    DAT_10057c64 = (int)(DAT_10055104 << 0x10) /
                   (int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f));
    if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
      iVar4 = (**(code **)(*param_1 + 0x20))();
      param_2 = 0;
      param_3 = (undefined2 *)(iVar4 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2);
      iVar16 = RStack_20.right - RStack_20.left;
      DAT_10057c94 = RStack_20.bottom - RStack_20.top;
      uVar9 = (RStack_20.top - (int)puStack_c) * DAT_10057c64;
      iVar4 = *(int *)((int)this + 0x1c);
      DAT_10057c7c = uVar9;
      DAT_10057c88 = iVar16;
      if (0 < DAT_10057c94) {
        do {
          uVar11 = uVar9 >> 0x10;
          if (*(char *)(iVar4 + 1 + uVar11 * 4) != '\0') {
            DAT_10057c78 = DAT_10057ca0 * (RStack_20.left - iVar14);
            uVar2 = *(ushort *)(iVar4 + 2 + uVar11 * 4);
            iVar3 = *(int *)((int)this + 0x14);
            iStack_34 = 0;
            if (0 < iVar16) {
              puStack_38 = param_3;
              do {
                iVar7 = (DAT_10057c78 >> 0x10) - (uint)*(byte *)(iVar4 + uVar11 * 4);
                if (-1 < iVar7) {
                  if ((int)(uint)*(byte *)(iVar4 + 1 + uVar11 * 4) < iVar7) break;
                  bVar1 = *(byte *)(iVar7 + (uint)uVar2 + iVar3);
                  if (bVar1 < 0xfe) {
                    *puStack_38 = *(undefined2 *)(DAT_10057ca4 + (uint)bVar1 * 2);
                    iVar16 = DAT_10057c88;
                  }
                }
                DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                iStack_34 = iStack_34 + 1;
                puStack_38 = puStack_38 + 1;
              } while (iStack_34 < iVar16);
            }
            uVar9 = DAT_10057c7c + DAT_10057c64;
            param_3 = param_3 + DAT_10057c80;
            DAT_10057c7c = uVar9;
          }
          param_2 = param_2 + 1;
        } while (param_2 < DAT_10057c94);
      }
    }
  }
  (**(code **)(*param_1 + 0x24))(1);
  return 0;
}

