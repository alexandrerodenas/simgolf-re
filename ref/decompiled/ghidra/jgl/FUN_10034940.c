/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10034940 @ 0x10034940 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10034940(void *this,int *param_1,int param_2,int param_3,int *param_4,byte param_5)

{
  int iVar1;
  RECT *lprcSrc2;
  BOOL BVar2;
  undefined2 *puVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iStack_30;
  int local_2c;
  RECT RStack_20;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (((*(int *)((int)this + 0x14) == 0) || (param_1 == (int *)0x0)) || (param_4 == (int *)0x0)) {
    return 3;
  }
  piVar5 = *(int **)((int)this + 0x10);
  if (piVar5 == (int *)0x0) {
    piVar5 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar5 != (int *)0x0) {
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
    iVar1 = (**(code **)(*param_1 + 0xe4))();
    if (*(int *)(iVar1 + 4) == 0) {
      DAT_10057ca4 = (**(code **)(*piVar5 + 0x18))();
    }
    else {
      if (*(int *)(iVar1 + 4) != 1) {
        return 1;
      }
      DAT_10057ca4 = (**(code **)(*piVar5 + 0x1c))();
    }
    iVar1 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
    if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar1) &&
       ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar1)) {
      RStack_20.right = param_2 + *(int *)((int)this + 0x30);
      RStack_20.left = param_2;
      RStack_20.bottom = *(int *)((int)this + 0x34) + param_3;
      iStack_10 = param_2;
      RStack_20.top = param_3;
      iStack_c = param_3;
      iStack_8 = RStack_20.right;
      iStack_4 = RStack_20.bottom;
      lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
      BVar2 = IntersectRect(&RStack_20,&RStack_20,lprcSrc2);
      if (BVar2 == 0) {
        (**(code **)(*param_4 + 0x24))(1);
        (**(code **)(*param_1 + 0x24))(1);
        return 0;
      }
      if ((-1 < (int)DAT_100550fc) && (-1 < (int)DAT_10055100)) {
        iVar1 = (**(code **)(*param_1 + 0x20))();
        param_2 = iVar1 + (DAT_10057c80 * RStack_20.top + RStack_20.left) * 2;
        iVar1 = (**(code **)(*param_4 + 0x18))();
        local_2c = 0;
        param_3 = DAT_10057c54 * RStack_20.top + RStack_20.left + iVar1;
        DAT_10057c88 = RStack_20.right - RStack_20.left;
        _DAT_10057c60 = DAT_10057c98 - DAT_10057c88;
        _DAT_10057c84 = DAT_10057c80 - DAT_10057c88;
        _DAT_10057c50 = DAT_10057c54 - DAT_10057c88;
        DAT_10057c94 = RStack_20.bottom - RStack_20.top;
        pbVar6 = (byte *)(*(int *)((int)this + 0x1c) + (RStack_20.top - iStack_c) * 4);
        if (0 < DAT_10057c94) {
          do {
            uVar4 = (uint)*pbVar6;
            uVar7 = uVar4 - (RStack_20.left - iStack_10);
            uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
            uVar8 = (RStack_20.left - iStack_10) - uVar4;
            pbVar10 = (byte *)((uint)*(ushort *)(pbVar6 + 2) + (((int)uVar8 < 0) - 1 & uVar8) +
                              *(int *)((int)this + 0x14));
            uVar4 = (iStack_8 - RStack_20.right) -
                    ((*(int *)((int)this + 0x30) - uVar4) - (uint)pbVar6[1]);
            iStack_30 = ((uint)pbVar6[1] - (((int)uVar4 < 0) - 1 & uVar4)) -
                        (uVar8 & ((int)uVar8 < 0) - 1);
            if (0 < iStack_30) {
              pbVar9 = (byte *)(uVar7 + param_3);
              puVar3 = (undefined2 *)(param_2 + uVar7 * 2);
              do {
                if ((*pbVar10 < 0xfe) && (param_5 < *pbVar9)) {
                  *puVar3 = *(undefined2 *)(DAT_10057ca4 + (uint)*pbVar10 * 2);
                }
                pbVar9 = pbVar9 + 1;
                puVar3 = puVar3 + 1;
                pbVar10 = pbVar10 + 1;
                iStack_30 = iStack_30 + -1;
              } while (iStack_30 != 0);
            }
            pbVar6 = pbVar6 + 4;
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

