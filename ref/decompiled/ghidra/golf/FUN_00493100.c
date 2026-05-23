/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493100 @ 0x00493100 */
/* Body size: 463 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00493100(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_48 [3];
  int iStack_3c;
  undefined4 auStack_24 [3];
  int iStack_18;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      _DAT_0083d380 = 0;
    }
    else {
      _DAT_0083d380 = (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    }
    if (_DAT_0083d380 != 0) {
      DAT_0083d358 = param_2;
      DAT_0083d378 = param_3;
      _DAT_0083d34c = param_4;
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        DAT_0083d388 = 0;
      }
      else {
        DAT_0083d388 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
      }
      if ((*(int **)(param_1 + 4) != (int *)0x0) &&
         (puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))(),
         puVar2 != (undefined4 *)0x0)) {
        iVar7 = -0x7ffd;
        DAT_0083d38c = puVar2[2] + -1;
        iVar6 = 0x7fff;
        DAT_0083d35c = *puVar2;
        DAT_0083d390 = puVar2[3] + -1;
        DAT_0083d360 = puVar2[1];
        iVar4 = 0;
        if (0 < param_3) {
          iVar5 = param_2 - DAT_0083d358;
          piVar3 = (int *)(DAT_0083d358 + 4);
          do {
            iVar1 = *(int *)(iVar5 + (int)piVar3);
            if (iVar1 < iVar6) {
              iVar6 = *piVar3;
              param_2 = iVar4;
            }
            if (iVar7 < iVar1) {
              iVar7 = *piVar3;
              DAT_0083d350 = iVar4;
            }
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 2;
          } while (iVar4 < param_3);
          if (iVar6 < iVar7) {
            auStack_48[0] = 0xffffffff;
            DAT_0083d384 = iVar6;
            iVar6 = FUN_00492ed0(auStack_48,param_2);
            if (iVar6 != 0) {
              auStack_24[0] = 1;
              iVar6 = FUN_00492ed0(auStack_24,param_2);
              if ((iVar6 != 0) && (DAT_0083d384 < DAT_0083d390)) {
                do {
                  if (DAT_0083d360 <= DAT_0083d384) {
                    iVar6 = iStack_18;
                    iVar7 = iStack_3c;
                    if (iStack_3c < iStack_18) {
                      iVar6 = iStack_3c;
                      iVar7 = iStack_18;
                    }
                    FUN_00493080(iVar6,iVar7);
                  }
                  iVar6 = FUN_00492fa0(auStack_48);
                } while (((iVar6 != 0) && (iVar6 = FUN_00492fa0(auStack_24), iVar6 != 0)) &&
                        (DAT_0083d384 = DAT_0083d384 + 1, DAT_0083d384 < DAT_0083d390));
              }
            }
          }
        }
      }
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
    }
    return 0;
  }
  return 0x10;
}

