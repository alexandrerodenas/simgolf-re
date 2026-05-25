/* Ghidra decompiled: golf.exe */
/* Function: FUN_00476140 @ 0x00476140 */


undefined4 __thiscall
FUN_00476140(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  RECT RStack_20;
  RECT local_10;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 200))(&local_10);
    }
    iVar6 = param_5 + param_7;
    RStack_20.left = param_5;
    RStack_20.top = param_6;
    RStack_20.right = iVar6;
    RStack_20.bottom = param_6 + param_8;
    BVar3 = IntersectRect(&RStack_20,&RStack_20,&local_10);
    if (BVar3 != 0) {
      FUN_00475b00(&RStack_20);
      iVar1 = *(int *)(param_2 + 0x18);
      iVar2 = *(int *)(param_2 + 0x1c);
      if ((iVar1 != 0) && (iVar2 != 0)) {
        iVar4 = param_7 / iVar1;
        if (iVar4 * iVar1 < param_7) {
          iVar4 = iVar4 + 1;
        }
        param_7 = param_8 / iVar2;
        if (param_7 * iVar2 < param_8) {
          param_7 = param_7 + 1;
        }
        iVar7 = param_5 - param_3 % iVar1;
        iVar5 = param_6 - param_4 % iVar2;
        param_5 = iVar4;
        if (iVar4 * iVar1 + iVar7 < iVar6) {
          param_5 = iVar4 + 1;
        }
        if (param_7 * iVar2 + iVar5 < param_6 + param_8) {
          param_7 = param_7 + 1;
        }
        param_8 = param_7;
        if (0 < param_7) {
          do {
            iVar6 = param_5;
            iVar4 = iVar7;
            if (0 < param_5) {
              do {
                FUN_00473e60(param_1,iVar4,iVar5,0);
                iVar4 = iVar4 + iVar1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            iVar5 = iVar5 + iVar2;
            param_8 = param_8 + -1;
          } while (param_8 != 0);
        }
        FUN_00475b00(&local_10);
      }
    }
    return 0;
  }
  return 7;
}

