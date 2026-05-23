/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10034ce0 @ 0x10034CE0 */
/* Body size: 1504 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10034ce0(void *this,int *param_1,int param_2,ushort *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  LONG LVar4;
  int iVar5;
  RECT *pRVar6;
  BOOL BVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  longlong lVar18;
  RECT RStack_20;
  int iStack_10;
  ushort *puStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar13 = param_2;
  piVar3 = param_1;
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) {
    return 3;
  }
  piVar12 = *(int **)((int)this + 0x10);
  if (piVar12 == (int *)0x0) {
    piVar12 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar12 == (int *)0x0) {
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
  DAT_10057c90 = param_4;
  iVar5 = (**(code **)(*param_1 + 0xe4))();
  if (*(int *)(iVar5 + 4) == 0) {
    DAT_10057ca4 = (**(code **)(*piVar12 + 0x18))();
  }
  else {
    if (*(int *)(iVar5 + 4) != 1) {
      return 1;
    }
    DAT_10057ca4 = (**(code **)(*piVar12 + 0x1c))();
  }
  iVar5 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar5) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar5)) {
    iVar13 = *(int *)((int)this + 0x30) + param_2;
    RStack_20.bottom = *(int *)((int)this + 0x34) + (int)param_3;
    RStack_20.left = param_2;
    iStack_10 = param_2;
    RStack_20.top = (LONG)param_3;
    puStack_c = param_3;
    RStack_20.right = iVar13;
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
      pbVar11 = (byte *)(*(int *)((int)this + 0x1c) + (RStack_20.top - (int)puStack_c) * 4);
      if (0 < DAT_10057c94) {
        do {
          uVar10 = (uint)*pbVar11;
          uVar14 = uVar10 - (RStack_20.left - iStack_10);
          uVar15 = (RStack_20.left - iStack_10) - uVar10;
          pbVar17 = (byte *)((uint)*(ushort *)(pbVar11 + 2) + (((int)uVar15 < 0) - 1 & uVar15) +
                            *(int *)((int)this + 0x14));
          uVar10 = (iVar13 - RStack_20.right) -
                   ((*(int *)((int)this + 0x30) - uVar10) - (uint)pbVar11[1]);
          iVar5 = ((uint)pbVar11[1] - (((int)uVar10 < 0) - 1 & uVar10)) -
                  (uVar15 & ((int)uVar15 < 0) - 1);
          if (0 < iVar5) {
            puVar8 = param_3 + (((int)uVar14 < 0) - 1 & uVar14);
            do {
              bVar1 = *pbVar17;
              if (bVar1 != 0xff) {
                if (bVar1 < 0xf8) {
                  uVar10 = (uint)bVar1;
                  iVar16 = DAT_10057ca4;
                }
                else {
                  uVar10 = (uint)*puVar8;
                  iVar16 = DAT_10057c90;
                }
                *puVar8 = *(ushort *)(iVar16 + uVar10 * 2);
              }
              puVar8 = puVar8 + 1;
              pbVar17 = pbVar17 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          pbVar11 = pbVar11 + 4;
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
      uVar10 = (RStack_20.top - LVar4) * DAT_10057c64;
      DAT_10057c88 = RStack_20.right - RStack_20.left;
      iVar5 = *(int *)((int)this + 0x1c);
      DAT_10057c7c = uVar10;
      if (0 < DAT_10057c94) {
        do {
          uVar14 = uVar10 >> 0x10;
          if (*(char *)(iVar5 + 1 + uVar14 * 4) != '\0') {
            DAT_10057c78 = DAT_10057ca0 * (RStack_20.left - iVar13);
            uVar2 = *(ushort *)(iVar5 + 2 + uVar14 * 4);
            iVar16 = *(int *)((int)this + 0x14);
            param_1 = (int *)0x0;
            puVar8 = param_3;
            if (0 < DAT_10057c88) {
              do {
                iVar9 = (DAT_10057c78 >> 0x10) - (uint)*(byte *)(iVar5 + uVar14 * 4);
                if (iVar9 < 0) {
                  DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                }
                else {
                  if ((int)(uint)*(byte *)(iVar5 + 1 + uVar14 * 4) < iVar9) break;
                  bVar1 = *(byte *)(iVar9 + (uint)uVar2 + iVar16);
                  if (bVar1 != 0xff) {
                    if (bVar1 < 0xf8) {
                      *puVar8 = *(ushort *)(DAT_10057ca4 + (uint)bVar1 * 2);
                    }
                    else {
                      *puVar8 = *(ushort *)(DAT_10057c90 + (uint)*puVar8 * 2);
                    }
                  }
                  DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                }
                param_1 = (int *)((int)param_1 + 1);
                puVar8 = puVar8 + 1;
              } while ((int)param_1 < DAT_10057c88);
            }
            uVar10 = DAT_10057c7c + DAT_10057c64;
            param_3 = param_3 + DAT_10057c80;
            DAT_10057c7c = uVar10;
          }
          param_2 = param_2 + 1;
        } while (param_2 < DAT_10057c94);
      }
    }
  }
  (**(code **)(*piVar3 + 0x24))(1);
  return 0;
}

