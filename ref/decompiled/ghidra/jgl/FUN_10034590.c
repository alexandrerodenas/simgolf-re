/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10034590 @ 0x10034590 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10034590(void *this,int *param_1,int param_2,int param_3,int *param_4,byte param_5,
            undefined2 param_6)

{
  byte bVar1;
  int iVar2;
  RECT *lprcSrc2;
  BOOL BVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  byte *pbVar12;
  int iStack_30;
  int local_2c;
  RECT RStack_20;
  int iStack_10;
  int iStack_c;
  int iStack_4;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) || (param_4 == (int *)0x0)) {
    return 3;
  }
  piVar11 = *(int **)((int)this + 0x10);
  if (piVar11 == (int *)0x0) {
    piVar11 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar11 != (int *)0x0) {
    _DAT_10057c5c =
         (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
         (float)(int)DAT_10055104;
    _DAT_10057c58 =
         (float)(int)((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f)) /
         (float)(int)DAT_10055104;
    DAT_10057c98 = *(int *)((int)this + 0x2c);
    *(uint *)((int)this + 0x28) = (uint)*(byte *)((int)this + 0x28);
    DAT_10057c80 = (**(code **)(*param_1 + 0xe0))();
    DAT_10057c54 = (**(code **)(*param_4 + 0xe0))();
    iVar2 = (**(code **)(*param_1 + 0xe4))();
    if (*(int *)(iVar2 + 4) == 0) {
      DAT_10057ca4 = (**(code **)(*piVar11 + 0x18))();
    }
    else {
      if (*(int *)(iVar2 + 4) != 1) {
        return 1;
      }
      DAT_10057ca4 = (**(code **)(*piVar11 + 0x1c))();
    }
    iVar2 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
    if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar2) &&
       ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar2)) {
      iVar2 = param_2 + *(int *)((int)this + 0x30);
      RStack_20.bottom = *(int *)((int)this + 0x34) + param_3;
      RStack_20.left = param_2;
      iStack_10 = param_2;
      RStack_20.top = param_3;
      iStack_c = param_3;
      RStack_20.right = iVar2;
      iStack_4 = RStack_20.bottom;
      lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
      BVar3 = IntersectRect(&RStack_20,&RStack_20,lprcSrc2);
      if (BVar3 == 0) {
        (**(code **)(*param_4 + 0x24))(1);
        (**(code **)(*param_1 + 0x24))(1);
        return 0;
      }
      if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
        iVar4 = (**(code **)(*param_1 + 0x20))();
        param_2 = iVar4 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2;
        iVar4 = (**(code **)(*param_4 + 0x18))();
        local_2c = 0;
        param_3 = DAT_10057c54 * RStack_20.top + RStack_20.left + iVar4;
        DAT_10057c94 = RStack_20.bottom - RStack_20.top;
        DAT_10057c88 = RStack_20.right - RStack_20.left;
        _DAT_10057c60 = DAT_10057c98 - DAT_10057c88;
        _DAT_10057c50 = DAT_10057c54 - DAT_10057c88;
        _DAT_10057c84 = DAT_10057c80 - DAT_10057c88;
        pbVar7 = (byte *)(*(int *)((int)this + 0x1c) + (RStack_20.top - iStack_c) * 4);
        if (0 < DAT_10057c94) {
          do {
            uVar6 = (uint)*pbVar7;
            uVar8 = uVar6 - (RStack_20.left - iStack_10);
            uVar8 = ((int)uVar8 < 0) - 1 & uVar8;
            uVar9 = (RStack_20.left - iStack_10) - uVar6;
            pbVar12 = (byte *)((uint)*(ushort *)(pbVar7 + 2) + (((int)uVar9 < 0) - 1 & uVar9) +
                              *(int *)((int)this + 0x14));
            uVar6 = (iVar2 - RStack_20.right) -
                    ((*(int *)((int)this + 0x30) - uVar6) - (uint)pbVar7[1]);
            iStack_30 = ((uint)pbVar7[1] - (((int)uVar6 < 0) - 1 & uVar6)) -
                        (uVar9 & ((int)uVar9 < 0) - 1);
            if (0 < iStack_30) {
              pbVar10 = (byte *)(uVar8 + param_3);
              puVar5 = (undefined2 *)(param_2 + uVar8 * 2);
              do {
                bVar1 = *pbVar12;
                if (bVar1 != 0xff) {
                  if (param_5 < *pbVar10) {
                    if (bVar1 != 0xfe) {
                      *puVar5 = *(undefined2 *)(DAT_10057ca4 + (uint)bVar1 * 2);
                    }
                  }
                  else if (bVar1 == 0xfe) {
                    *puVar5 = param_6;
                  }
                }
                pbVar10 = pbVar10 + 1;
                puVar5 = puVar5 + 1;
                pbVar12 = pbVar12 + 1;
                iStack_30 = iStack_30 + -1;
              } while (iStack_30 != 0);
            }
            pbVar7 = pbVar7 + 4;
            param_2 = param_2 + DAT_10057c80 * 2;
            param_3 = param_3 + DAT_10057c80;
            local_2c = local_2c + 1;
          } while (local_2c < DAT_10057c94);
        }
      }
    }
    (**(code **)(*param_1 + 0x24))(1);
    (**(code **)(*param_4 + 0x24))(1);
    return 0;
  }
  return 0x10;
}

