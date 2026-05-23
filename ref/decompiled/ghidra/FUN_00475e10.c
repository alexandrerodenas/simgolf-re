/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475e10 @ 0x00475E10 */
/* Body size: 411 addresses */


undefined4 __thiscall
FUN_00475e10(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  int iVar8;
  int unaff_retaddr;
  RECT local_24;
  RECT RStack_14;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    local_24.left = param_1;
    (**(code **)(**(int **)(param_1 + 4) + 200))(&RStack_14.top);
    iVar2 = param_6 + param_4;
    local_24.left = param_4;
    local_24.top = param_5;
    local_24.right = iVar2;
    local_24.bottom = param_7 + param_5;
    BVar3 = IntersectRect(&local_24,&local_24,&RStack_14);
    if (BVar3 != 0) {
      FUN_00475b00(&local_24);
      if (*(int **)(unaff_retaddr + 4) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(**(int **)(unaff_retaddr + 4) + 0xd8))();
      }
      if (*(int **)(unaff_retaddr + 4) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(**(int **)(unaff_retaddr + 4) + 0xdc))();
      }
      if ((iVar4 != 0) && (iVar5 != 0)) {
        iVar6 = param_6 / iVar4;
        bVar1 = iVar6 * iVar4 < param_6;
        param_6 = iVar6;
        if (bVar1) {
          param_6 = iVar6 + 1;
        }
        iVar6 = param_7 / iVar5;
        if (iVar6 * iVar5 < param_7) {
          iVar6 = iVar6 + 1;
        }
        iVar8 = param_4 - param_2 % iVar4;
        iVar7 = param_5 - param_3 % iVar5;
        if (param_6 * iVar4 + iVar8 < iVar2) {
          param_6 = param_6 + 1;
        }
        if (iVar6 * iVar5 + iVar7 < param_7 + param_5) {
          iVar6 = iVar6 + 1;
        }
        param_4 = iVar6;
        if (0 < iVar6) {
          do {
            iVar2 = iVar8;
            param_7 = param_6;
            if (0 < param_6) {
              do {
                (**(code **)(**(int **)(unaff_retaddr + 4) + 0x38))
                          (*(undefined4 *)(unaff_EBX + 4),0,0,iVar2,iVar7,iVar4,iVar5,param_8);
                param_7 = param_7 + -1;
                iVar2 = iVar2 + iVar4;
              } while (param_7 != 0);
            }
            iVar7 = iVar7 + iVar5;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
        FUN_00475b00(&RStack_14);
      }
    }
    return 0;
  }
  return 7;
}

