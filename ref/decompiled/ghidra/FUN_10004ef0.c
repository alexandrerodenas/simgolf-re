/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10004ef0 @ 0x10004EF0 */
/* Body size: 265 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_10004ef0(void *this,LPRECT param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  RECT *lprcSrc2;
  BOOL BVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  longlong lVar12;
  
  lVar12 = __ftol();
  iVar9 = (0xf - (int)lVar12) * 0x8000;
  lprcSrc2 = (RECT *)(**(code **)(*(int *)this + 0xd4))();
  BVar2 = IntersectRect(param_1,param_1,lprcSrc2);
  if (BVar2 != 0) {
    puVar3 = (ushort *)(**(code **)(*(int *)this + 0x1c))(param_1->left,param_1->top);
    puVar4 = (ushort *)(**(code **)(*param_2 + 0x1c))(param_1->left,param_1->top);
    iVar11 = param_1->right - param_1->left;
    sVar7 = (short)param_1->bottom - (short)param_1->top;
    iVar5 = (**(code **)(*(int *)this + 0xe0))();
    iVar5 = iVar5 - iVar11;
    sVar10 = (short)iVar11;
    sVar8 = sVar10;
    do {
      do {
        uVar1 = (ushort)iVar9;
        uVar6 = (undefined2)((uint)iVar9 >> 0x10);
        if (*puVar3 == 0x7c1f) {
          *puVar3 = *(ushort *)(param_4 + CONCAT22(uVar6,uVar1 | *puVar4) * 2);
        }
        else {
          *puVar3 = *(ushort *)(param_4 + CONCAT22(uVar6,uVar1 | *puVar3) * 2);
        }
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        sVar8 = sVar8 + -1;
      } while (sVar8 != 0);
      puVar4 = puVar4 + iVar5;
      puVar3 = puVar3 + iVar5;
      sVar7 = sVar7 + -1;
      sVar8 = sVar10;
    } while (sVar7 != 0);
    return 0;
  }
  return 3;
}

