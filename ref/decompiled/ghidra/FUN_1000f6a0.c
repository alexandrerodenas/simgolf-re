/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000f6a0 @ 0x1000F6A0 */
/* Body size: 374 addresses */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1000f6a0(LPRECT param_1,int *param_2,undefined4 param_3,int param_4)

{
  RECT *lprcSrc2;
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined4 local_64 [16];
  int local_24;
  int local_20;
  short local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  int *local_8;
  
  puVar6 = local_64;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  lVar8 = __ftol();
  local_20 = (0xf - (int)lVar8) * 0x8000;
  local_24 = param_4;
  (**(code **)(*local_8 + 0xd4))();
  lprcSrc2 = (RECT *)__chkesp();
  IntersectRect(param_1,param_1,lprcSrc2);
  iVar3 = __chkesp();
  if (iVar3 != 0) {
    (**(code **)(*local_8 + 0x1c))();
    local_c = (ushort *)__chkesp();
    (**(code **)(*param_2 + 0x1c))();
    local_10 = (ushort *)__chkesp();
    local_18 = param_1->right - param_1->left;
    local_1c = (short)param_1->bottom - (short)param_1->top;
    (**(code **)(*local_8 + 0xe0))();
    iVar3 = __chkesp();
    iVar3 = iVar3 - local_18;
    local_14 = iVar3 * 2;
    puVar5 = local_10;
    puVar7 = local_c;
    sVar2 = (short)local_18;
    sVar4 = local_1c;
    do {
      do {
        uVar1 = (undefined2)((uint)local_20 >> 0x10);
        if (*puVar7 == 0x7c1f) {
          *puVar7 = *(ushort *)(local_24 + CONCAT22(uVar1,(ushort)local_20 | *puVar5) * 2);
        }
        else {
          *puVar7 = *(ushort *)(local_24 + CONCAT22(uVar1,(ushort)local_20 | *puVar7) * 2);
        }
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      puVar5 = puVar5 + iVar3;
      puVar7 = puVar7 + iVar3;
      sVar4 = sVar4 + -1;
      sVar2 = (short)local_18;
    } while (sVar4 != 0);
  }
  local_8 = (int *)0x1000f810;
  __chkesp();
  return;
}

