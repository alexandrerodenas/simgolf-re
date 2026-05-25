/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10015b60 @ 0x10015B60 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_10015b60(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
            ushort *param_7)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  RECT *lprcSrc2;
  BOOL BVar5;
  ushort *puVar6;
  undefined2 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  longlong lVar12;
  RECT local_18;
  int local_8;
  
  if (param_7 == (ushort *)0x0) {
    return 3;
  }
  iVar4 = (**(code **)(*(int *)param_7 + 0x20))();
  _DAT_10057c44 =
       (float)(int)((DAT_100550fc ^ (int)DAT_100550fc >> 0x1f) - ((int)DAT_100550fc >> 0x1f)) /
       (float)param_5;
  local_8 = (DAT_10055100 ^ (int)DAT_10055100 >> 0x1f) - ((int)DAT_10055100 >> 0x1f);
  _DAT_10057c48 = (float)local_8 / (float)param_5;
  lVar12 = __ftol();
  iVar10 = (int)lVar12 + param_3;
  lVar12 = __ftol();
  iVar8 = (int)lVar12 + param_2;
  local_18.left = iVar8;
  local_18.top = iVar10;
  lVar12 = __ftol();
  local_18.right = (int)lVar12 + iVar8;
  lVar12 = __ftol();
  local_18.bottom = (int)lVar12 + iVar10;
  lprcSrc2 = (RECT *)(**(code **)(*param_1 + 0xcc))();
  BVar5 = IntersectRect(&local_18,&local_18,lprcSrc2);
  if (BVar5 != 0) {
    piVar9 = *(int **)((int)this + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = *(int **)(DAT_10057d9c + 4);
    }
    if (piVar9 != (int *)0x0) {
      DAT_10057c34 = *(int *)((int)this + 0x2c);
      DAT_10057c14 = (**(code **)(*param_1 + 0xe0))();
      pbVar11 = *(byte **)((int)this + 0x14);
      iVar8 = (DAT_10057c14 * local_18.top + local_18.left) * 2;
      iVar10 = (**(code **)(*param_1 + 0x20))();
      puVar6 = (ushort *)(iVar10 + iVar8);
      DAT_10057c30 = local_18.bottom - local_18.top;
      param_7 = (ushort *)(iVar4 + iVar8);
      DAT_10057c1c = local_18.right - local_18.left;
      _DAT_10057c18 = (DAT_10057c14 - DAT_10057c1c) * 2;
      DAT_10057bf8 = (param_5 << 0x10) /
                     (int)((param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f));
      DAT_10057c00 = param_6;
      _DAT_10057c40 = DAT_10057bf8;
      iVar4 = (**(code **)(*param_1 + 0xe4))();
      if (*(int *)(iVar4 + 4) == 0) {
        DAT_10057c24 = (**(code **)(*piVar9 + 0x18))();
      }
      else {
        if (*(int *)(iVar4 + 4) != 1) {
          (**(code **)(*param_1 + 0x24))(1);
          return 1;
        }
        DAT_10057c24 = (**(code **)(*piVar9 + 0x1c))();
      }
      if (-1 < (int)param_4) {
        _DAT_10057c3c = DAT_10057bf8 * DAT_10057c30 >> 0x10;
        _DAT_10057c28 = _DAT_10057c40 * DAT_10057c1c >> 0x10;
        _DAT_10057bf4 = DAT_10057c34 - _DAT_10057c28;
        *(uint *)PTR_DAT_1005510c = ((DAT_10057bf8 >> 0x10) - 1) * DAT_10057c34 + _DAT_10057bf4;
        iVar4 = DAT_10057c24;
        DAT_10057c1c = (DAT_10057c1c + -1) * 0x10000;
        iVar8 = DAT_10057c1c;
        do {
          do {
            if (*pbVar11 != 0xff) {
              bVar1 = *pbVar11;
              if (bVar1 < 0xe0) {
                *param_7 = *(ushort *)(iVar4 + (uint)bVar1 * 2);
              }
              else {
                if (bVar1 < 0xf0) {
                  cVar2 = '/';
                }
                else {
                  cVar2 = '\x10';
                }
                iVar10 = (uint)(byte)(bVar1 + cVar2) << 0xf;
                uVar3 = (ushort)iVar10;
                uVar7 = (undefined2)((uint)iVar10 >> 0x10);
                if (*param_7 == 0x7c1f) {
                  *param_7 = *(ushort *)(DAT_10057c00 + CONCAT22(uVar7,uVar3 | *puVar6) * 2);
                }
                else {
                  *param_7 = *(ushort *)(DAT_10057c00 + CONCAT22(uVar7,uVar3 | *param_7) * 2);
                }
              }
            }
            pbVar11 = pbVar11 + 2;
            puVar6 = puVar6 + 1;
            param_7 = param_7 + 1;
            iVar8 = iVar8 + -0x10000;
          } while (-1 < iVar8);
          puVar6 = (ushort *)((int)puVar6 + _DAT_10057c18);
          param_7 = (ushort *)((int)param_7 + _DAT_10057c18);
          pbVar11 = pbVar11 + *(int *)PTR_DAT_1005510c;
          DAT_10057c30 = DAT_10057c30 + -1;
          iVar8 = DAT_10057c1c;
        } while (DAT_10057c30 != 0);
      }
      return 0;
    }
    (**(code **)(*param_1 + 0x24))(1);
    return 0x10;
  }
  (**(code **)(*param_1 + 0x24))(1);
  return 0;
}

