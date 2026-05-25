/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10035860 @ 0x10035860 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10035860(void *this,int *param_1,int param_2,ushort *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  int iVar5;
  RECT *pRVar6;
  BOOL BVar7;
  ushort *puVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  longlong lVar18;
  RECT RStack_20;
  int iStack_10;
  ushort *puStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar14 = param_2;
  piVar3 = param_1;
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
  DAT_10057c90 = param_5;
  DAT_10057c6c = param_4;
  iVar5 = (**(code **)(*param_1 + 0xe4))();
  if (*(int *)(iVar5 + 4) == 0) {
    DAT_10057ca4 = (**(code **)(*piVar13 + 0x18))();
  }
  else {
    if (*(int *)(iVar5 + 4) != 1) {
      return 1;
    }
    DAT_10057ca4 = (**(code **)(*piVar13 + 0x1c))();
  }
  iVar5 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar5) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar5)) {
    iVar14 = *(int *)((int)this + 0x30) + param_2;
    RStack_20.top = (LONG)param_3;
    RStack_20.bottom = *(int *)((int)this + 0x34) + (int)param_3;
    puStack_c = param_3;
    RStack_20.left = param_2;
    iStack_10 = param_2;
    RStack_20.right = iVar14;
    iStack_4 = RStack_20.bottom;
    pRVar6 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar7 = IntersectRect(&RStack_20,&RStack_20,pRVar6);
    if (BVar7 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
      iVar5 = (**(code **)(*param_1 + 0x20))();
      DAT_10057c94 = RStack_20.bottom - RStack_20.top;
      param_2 = 0;
      param_3 = (ushort *)(iVar5 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2);
      DAT_10057c88 = RStack_20.right - RStack_20.left;
      _DAT_10057c60 = DAT_10057c98 - DAT_10057c88;
      _DAT_10057c84 = DAT_10057c80 - DAT_10057c88;
      pbVar12 = (byte *)(*(int *)((int)this + 0x1c) + (RStack_20.top - (int)puStack_c) * 4);
      if (0 < DAT_10057c94) {
        do {
          uVar11 = (uint)*pbVar12;
          uVar15 = uVar11 - (RStack_20.left - iStack_10);
          uVar16 = (RStack_20.left - iStack_10) - uVar11;
          pbVar17 = (byte *)((uint)*(ushort *)(pbVar12 + 2) + (((int)uVar16 < 0) - 1 & uVar16) +
                            *(int *)((int)this + 0x14));
          uVar11 = (iVar14 - RStack_20.right) -
                   ((*(int *)((int)this + 0x30) - uVar11) - (uint)pbVar12[1]);
          iVar5 = ((uint)pbVar12[1] - (((int)uVar11 < 0) - 1 & uVar11)) -
                  (uVar16 & ((int)uVar16 < 0) - 1);
          if (0 < iVar5) {
            puVar8 = param_3 + (((int)uVar15 < 0) - 1 & uVar15);
            do {
              bVar1 = *pbVar17;
              if (bVar1 != 0xff) {
                if (bVar1 < 0xf8) {
                  uVar10 = *(ushort *)
                            (DAT_10057ca4 + (uint)*(byte *)((uint)bVar1 + DAT_10057c6c) * 2);
                }
                else {
                  uVar10 = *(ushort *)(DAT_10057c90 + (uint)*puVar8 * 2);
                }
                *puVar8 = uVar10;
              }
              puVar8 = puVar8 + 1;
              pbVar17 = pbVar17 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          pbVar12 = pbVar12 + 4;
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
    lVar18 = __ftol();
    iVar5 = (int)lVar18 + param_2;
    RStack_20.right = iVar5;
    lVar18 = __ftol();
    LVar4 = RStack_20.top;
    RStack_20.bottom = (int)lVar18 + (int)param_3;
    iStack_8 = iVar5;
    iStack_4 = RStack_20.bottom;
    pRVar6 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar7 = IntersectRect(&RStack_20,&RStack_20,pRVar6);
    if (BVar7 == 0) {
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
      iVar5 = (**(code **)(*param_1 + 0x20))();
      param_2 = 0;
      param_3 = (ushort *)(iVar5 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2);
      DAT_10057c94 = RStack_20.bottom - RStack_20.top;
      uVar11 = (RStack_20.top - LVar4) * DAT_10057c64;
      DAT_10057c88 = RStack_20.right - RStack_20.left;
      iVar5 = *(int *)((int)this + 0x1c);
      DAT_10057c7c = uVar11;
      if (0 < DAT_10057c94) {
        do {
          uVar15 = uVar11 >> 0x10;
          if (*(char *)(iVar5 + 1 + uVar15 * 4) != '\0') {
            DAT_10057c78 = DAT_10057ca0 * (RStack_20.left - iVar14);
            uVar10 = *(ushort *)(iVar5 + 2 + uVar15 * 4);
            iVar2 = *(int *)((int)this + 0x14);
            param_1 = (int *)0x0;
            puVar8 = param_3;
            if (0 < DAT_10057c88) {
              do {
                iVar9 = (DAT_10057c78 >> 0x10) - (uint)*(byte *)(iVar5 + uVar15 * 4);
                if (iVar9 < 0) {
                  DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                }
                else {
                  if ((int)(uint)*(byte *)(iVar5 + 1 + uVar15 * 4) < iVar9) break;
                  bVar1 = *(byte *)(iVar9 + (uint)uVar10 + iVar2);
                  if (bVar1 != 0xff) {
                    if (bVar1 < 0xf8) {
                      uVar11 = (uint)*(byte *)((uint)bVar1 + DAT_10057c6c);
                      iVar9 = DAT_10057ca4;
                    }
                    else {
                      uVar11 = (uint)*puVar8;
                      iVar9 = DAT_10057c90;
                    }
                    *puVar8 = *(ushort *)(iVar9 + uVar11 * 2);
                  }
                  DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                }
                param_1 = (int *)((int)param_1 + 1);
                puVar8 = puVar8 + 1;
              } while ((int)param_1 < DAT_10057c88);
            }
            uVar11 = DAT_10057c7c + DAT_10057c64;
            param_3 = param_3 + DAT_10057c80;
            DAT_10057c7c = uVar11;
          }
          param_2 = param_2 + 1;
        } while (param_2 < DAT_10057c94);
      }
    }
  }
  (**(code **)(*piVar3 + 0x24))(1);
  return 0;
}

