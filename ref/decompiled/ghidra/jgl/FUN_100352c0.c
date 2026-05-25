/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100352c0 @ 0x100352C0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_100352c0(void *this,int *param_1,int param_2,undefined2 *param_3,uint param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  RECT *pRVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  longlong lVar15;
  int iStack_30;
  RECT RStack_20;
  int iStack_10;
  undefined2 *puStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar2 = param_1;
  if ((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) {
    return 3;
  }
  piVar13 = *(int **)((int)this + 0x10);
  if ((piVar13 == (int *)0x0) && (piVar13 = *(int **)(DAT_10057d9c + 4), piVar13 == (int *)0x0)) {
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
  iVar3 = (**(code **)(*param_1 + 0xe4))();
  if (*(int *)(iVar3 + 4) == 0) {
    iVar3 = (**(code **)(*piVar13 + 0x18))();
  }
  else {
    if (*(int *)(iVar3 + 4) != 1) {
      return 1;
    }
    iVar3 = (**(code **)(*piVar13 + 0x1c))();
  }
  DAT_10057c4c = *(undefined2 *)(iVar3 + (param_4 & 0xff) * 2);
  iVar3 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
  if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar3) &&
     ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar3)) {
    iVar3 = *(int *)((int)this + 0x30) + param_2;
    RStack_20.bottom = *(int *)((int)this + 0x34) + (int)param_3;
    RStack_20.left = param_2;
    iStack_10 = param_2;
    RStack_20.top = (LONG)param_3;
    puStack_c = param_3;
    RStack_20.right = iVar3;
    iStack_4 = RStack_20.bottom;
    pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar5 = IntersectRect(&RStack_20,&RStack_20,pRVar4);
    if (BVar5 == 0) {
      (**(code **)(*param_1 + 0x24))(1);
      return 0;
    }
    if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
      iVar6 = (**(code **)(*param_1 + 0x20))();
      param_4 = 0;
      param_3 = (undefined2 *)(iVar6 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2);
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
          pcVar14 = (char *)((uint)*(ushort *)(pbVar10 + 2) + (((int)uVar12 < 0) - 1 & uVar12) +
                            *(int *)((int)this + 0x14));
          uVar9 = (iVar3 - RStack_20.right) -
                  ((*(int *)((int)this + 0x30) - uVar9) - (uint)pbVar10[1]);
          iVar6 = ((uint)pbVar10[1] - (((int)uVar9 < 0) - 1 & uVar9)) -
                  (uVar12 & ((int)uVar12 < 0) - 1);
          if (0 < iVar6) {
            puVar8 = param_3 + (((int)uVar11 < 0) - 1 & uVar11);
            do {
              if (*pcVar14 != -1) {
                *puVar8 = DAT_10057c4c;
              }
              puVar8 = puVar8 + 1;
              pcVar14 = pcVar14 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          pbVar10 = pbVar10 + 4;
          param_3 = param_3 + DAT_10057c80;
          param_4 = param_4 + 1;
        } while ((int)param_4 < DAT_10057c94);
        (**(code **)(*param_1 + 0x24))(1);
        return 0;
      }
    }
  }
  else {
    RStack_20.left = param_2;
    RStack_20.top = (LONG)param_3;
    lVar15 = __ftol();
    iVar3 = (int)lVar15 + param_2;
    RStack_20.right = iVar3;
    lVar15 = __ftol();
    RStack_20.bottom = (int)lVar15 + (int)param_3;
    puStack_c = (undefined2 *)RStack_20.top;
    iStack_8 = iVar3;
    iStack_4 = RStack_20.bottom;
    pRVar4 = (RECT *)(**(code **)(*param_1 + 0xcc))();
    BVar5 = IntersectRect(&RStack_20,&RStack_20,pRVar4);
    if (BVar5 == 0) {
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
      iVar3 = (**(code **)(*param_1 + 0x20))();
      param_4 = 0;
      param_3 = (undefined2 *)(iVar3 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2);
      DAT_10057c88 = RStack_20.right - RStack_20.left;
      iVar6 = RStack_20.bottom - RStack_20.top;
      DAT_10057c7c = (RStack_20.top - (int)puStack_c) * DAT_10057c64;
      iVar3 = *(int *)((int)this + 0x1c);
      DAT_10057c94 = iVar6;
      if (0 < iVar6) {
        do {
          uVar9 = DAT_10057c7c >> 0x10;
          if (*(char *)(iVar3 + 1 + uVar9 * 4) != '\0') {
            DAT_10057c78 = DAT_10057ca0 * (RStack_20.left - param_2);
            uVar1 = *(ushort *)(iVar3 + 2 + uVar9 * 4);
            iVar6 = *(int *)((int)this + 0x14);
            iStack_30 = 0;
            if (0 < DAT_10057c88) {
              param_1 = (int *)param_3;
              do {
                iVar7 = (DAT_10057c78 >> 0x10) - (uint)*(byte *)(iVar3 + uVar9 * 4);
                if (iVar7 < 0) {
                  DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                }
                else {
                  if ((int)(uint)*(byte *)(iVar3 + 1 + uVar9 * 4) < iVar7) break;
                  if (*(char *)(iVar7 + (uint)uVar1 + iVar6) != -1) {
                    *(undefined2 *)param_1 = DAT_10057c4c;
                  }
                  DAT_10057c78 = DAT_10057c78 + DAT_10057ca0;
                }
                param_1 = (int *)((int)param_1 + 2);
                iStack_30 = iStack_30 + 1;
              } while (iStack_30 < DAT_10057c88);
            }
            DAT_10057c7c = DAT_10057c7c + DAT_10057c64;
            param_3 = param_3 + DAT_10057c80;
            iVar6 = DAT_10057c94;
          }
          param_4 = param_4 + 1;
        } while ((int)param_4 < iVar6);
      }
    }
  }
  (**(code **)(*piVar2 + 0x24))(1);
  return 0;
}

