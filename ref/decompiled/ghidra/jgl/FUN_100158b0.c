/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100158b0 @ 0x100158B0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_100158b0(void *this,int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  RECT *lprcSrc2;
  BOOL BVar6;
  byte *pbVar7;
  int iVar8;
  undefined2 uVar9;
  int *piVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  RECT local_14;
  
  if ((((param_5 == (int *)0x0) ||
       ((**(code **)(*param_5 + 0x20))(), *(int *)((int)this + 0x14) == 0)) ||
      (param_1 == (int *)0x0)) || (iVar5 = (**(code **)(*param_1 + 0x10))(), iVar5 == 0)) {
    return 3;
  }
  piVar10 = *(int **)((int)this + 0x10);
  if (piVar10 == (int *)0x0) {
    piVar10 = *(int **)(DAT_10057d9c + 4);
  }
  if (piVar10 != (int *)0x0) {
    DAT_10057c34 = *(int *)((int)this + 0x2c);
    DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
    DAT_10057c00 = param_4;
    iVar5 = (**(code **)(*param_1 + 0xe4))();
    if (*(int *)(iVar5 + 4) == 0) {
      DAT_10057c24 = (**(code **)(*piVar10 + 0x18))();
    }
    else {
      if (*(int *)(iVar5 + 4) != 1) {
        (**(code **)(*param_1 + 0x24))(1);
        return 1;
      }
      DAT_10057c24 = (**(code **)(*piVar10 + 0x1c))();
    }
    iVar5 = (DAT_10055104 ^ (int)DAT_10055104 >> 0x1f) - ((int)DAT_10055104 >> 0x1f);
    if (((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f) == iVar5) &&
       ((DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f) == iVar5)) {
      local_14.right = *(int *)((int)this + 0x30) + param_2;
      local_14.bottom = *(int *)((int)this + 0x34) + param_3;
      local_14.left = param_2;
      local_14.top = param_3;
      lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
      BVar6 = IntersectRect(&local_14,&local_14,lprcSrc2);
      if (BVar6 == 0) {
        (**(code **)(*param_1 + 0x24))(1);
        return 0;
      }
      pbVar7 = (byte *)(((local_14.top - param_3) * DAT_10057c34 - param_2) +
                        *(int *)((int)this + 0x14) + local_14.left);
      iVar5 = (**(code **)(*param_1 + 0x20))();
      puVar13 = (ushort *)(iVar5 + (DAT_10057c14 * local_14.top + local_14.left) * 2);
      iVar5 = (**(code **)(*param_5 + 0xe0))();
      iVar12 = iVar5 * local_14.top + local_14.left;
      iVar8 = (**(code **)(*param_5 + 0x20))();
      iVar3 = DAT_10057c24;
      iVar5 = DAT_10057c00;
      puVar11 = (ushort *)(iVar8 + iVar12 * 2);
      DAT_10057c30 = local_14.bottom - local_14.top;
      DAT_10057c1c = local_14.right - local_14.left;
      _DAT_10057bf4 = DAT_10057c34 - DAT_10057c1c;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      iVar8 = DAT_10057c1c;
      do {
        do {
          if (*pbVar7 != 0xff) {
            bVar1 = *pbVar7;
            if (bVar1 < 0xe0) {
              *puVar11 = *(ushort *)(iVar3 + (uint)bVar1 * 2);
            }
            else {
              if (bVar1 < 0xf0) {
                cVar2 = '/';
              }
              else {
                cVar2 = '\x10';
              }
              iVar12 = (uint)(byte)(bVar1 + cVar2) << 0xf;
              uVar4 = (ushort)iVar12;
              uVar9 = (undefined2)((uint)iVar12 >> 0x10);
              if (*puVar11 == 0x7c1f) {
                *puVar11 = *(ushort *)(iVar5 + CONCAT22(uVar9,uVar4 | *puVar13) * 2);
              }
              else {
                *puVar11 = *(ushort *)(iVar5 + CONCAT22(uVar9,uVar4 | *puVar11) * 2);
              }
            }
          }
          pbVar7 = pbVar7 + 1;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        pbVar7 = pbVar7 + _DAT_10057bf4;
        puVar13 = (ushort *)((int)puVar13 + _DAT_10057c18);
        puVar11 = (ushort *)((int)puVar11 + _DAT_10057c18);
        DAT_10057c30 = DAT_10057c30 + -1;
        iVar8 = DAT_10057c1c;
      } while (DAT_10057c30 != 0);
    }
    (**(code **)(*param_1 + 0x24))(2);
    return 0;
  }
  (**(code **)(*param_1 + 0x24))(1);
  return 0x10;
}

