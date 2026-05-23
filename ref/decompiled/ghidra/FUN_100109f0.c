/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100109f0 @ 0x100109F0 */
/* Body size: 725 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_100109f0(void *this,int param_1,int *param_2,int *param_3,int param_4,ushort *param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  RECT *lprcSrc2;
  BOOL BVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  ushort *puVar10;
  RECT local_18;
  byte *local_8;
  
  piVar8 = *(int **)((int)this + 0x10);
  if (piVar8 == (int *)0x0) {
    piVar8 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar8 == (int *)0x0) {
    (**(code **)(*param_2 + 0x24))(1);
    return 0x10;
  }
  DAT_10057c34 = *(int *)((int)this + 0x2c);
  DAT_10057c14 = (**(code **)(*param_2 + 0xe0))();
  iVar4 = (**(code **)(*param_2 + 0xe4))();
  if (*(int *)(iVar4 + 4) == 0) {
    DAT_10057c24 = (**(code **)(*piVar8 + 0x18))();
  }
  else {
    if (*(int *)(iVar4 + 4) != 1) {
      (**(code **)(*param_2 + 0x24))(1);
      return 1;
    }
    DAT_10057c24 = (**(code **)(*piVar8 + 0x1c))();
  }
  local_18.right = *(int *)((int)this + 0x30) + param_4;
  local_18.bottom = *(int *)((int)this + 0x34) + (int)param_5;
  local_18.left = param_4;
  local_18.top = (LONG)param_5;
  lprcSrc2 = (RECT *)(**(code **)(*param_2 + 0xcc))();
  BVar5 = IntersectRect(&local_18,&local_18,lprcSrc2);
  if (BVar5 != 0) {
    iVar4 = (local_18.top - (int)param_5) * DAT_10057c34;
    local_8 = (byte *)((*(int *)((int)this + 0x14) - param_4) + iVar4 + local_18.left);
    pbVar7 = (byte *)((*(int *)(param_1 + 0x14) - param_4) + iVar4 + local_18.left);
    iVar4 = (**(code **)(*param_2 + 0x20))();
    puVar10 = (ushort *)(iVar4 + (DAT_10057c14 * local_18.top + local_18.left) * 2);
    iVar6 = (**(code **)(*param_3 + 0x20))();
    iVar4 = DAT_10057c24;
    param_5 = (ushort *)(iVar6 + (DAT_10057c14 * local_18.top + local_18.left) * 2);
    DAT_10057c30 = local_18.bottom - local_18.top;
    DAT_10057c1c = local_18.right - local_18.left;
    _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
    _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
    iVar6 = DAT_10057c1c;
    pbVar9 = local_8;
    do {
      do {
        if ((*pbVar9 != 0xff) && (*pbVar7 != 0xff)) {
          if (*pbVar7 == 0) {
            *param_5 = *(ushort *)(iVar4 + (uint)*pbVar9 * 2);
          }
          else {
            uVar2 = *(ushort *)(iVar4 + (uint)*pbVar9 * 2);
            uVar3 = *puVar10;
            bVar1 = *pbVar7;
            *param_5 = ((ushort)(((ushort)((ushort)((byte)(uVar3 >> 7) & 0xf8) * (ushort)bVar1) >> 8
                                 ) + (uVar2 >> 7 & 0xf8)) >> 3) << 10 |
                       ((ushort)(((ushort)((uVar3 >> 2 & 0xf8) * (ushort)bVar1) >> 8) +
                                (uVar2 >> 2 & 0xf8)) >> 3) << 5 |
                       (ushort)(((ushort)((uVar3 & 0x1f) * 8 * (ushort)bVar1) >> 8) +
                               (uVar2 & 0x1f) * 8) >> 3;
          }
        }
        pbVar9 = pbVar9 + 1;
        pbVar7 = pbVar7 + 1;
        puVar10 = puVar10 + 1;
        param_5 = param_5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pbVar9 = pbVar9 + _DAT_10057bf4;
      pbVar7 = pbVar7 + _DAT_10057bf4;
      puVar10 = (ushort *)((int)puVar10 + _DAT_10057c18);
      param_5 = (ushort *)((int)param_5 + _DAT_10057c18);
      DAT_10057c30 = DAT_10057c30 + -1;
      iVar6 = DAT_10057c1c;
    } while (DAT_10057c30 != 0);
    (**(code **)(*param_2 + 0x24))(2);
    return 0;
  }
  (**(code **)(*param_2 + 0x24))(1);
  return 0;
}

