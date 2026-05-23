/* Ghidra decompiled: golf.exe */
/* Function: FUN_004932d0 @ 0x004932D0 */
/* Body size: 578 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004932d0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_48 [3];
  int iStack_3c;
  undefined4 auStack_24 [3];
  int iStack_18;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    return 0x10;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    _DAT_0083d37c = 0;
  }
  else {
    _DAT_0083d37c = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  iVar3 = DAT_0083ad0c;
  if (_DAT_0083d37c == 0) goto LAB_004934ed;
  if (((param_4 & 0x80000000) == 0) && (DAT_0083ad0c != 0)) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xe4))();
    }
    if (*(int *)(iVar2 + 4) == 0) {
      piVar5 = *(int **)(iVar3 + 4);
      if (piVar5 == (int *)0x0) goto LAB_00493369;
      iVar3 = (**(code **)(*piVar5 + 0x18))();
    }
    else {
      if (*(int *)(iVar2 + 4) != 1) {
        return 1;
      }
      piVar5 = *(int **)(iVar3 + 4);
      if (piVar5 == (int *)0x0) {
LAB_00493369:
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*piVar5 + 0x1c))();
      }
    }
    param_4 = (uint)*(ushort *)(iVar3 + (param_4 & 0xff) * 2);
  }
  DAT_0083d358 = param_2;
  _DAT_0083d34c = param_4 & 0xffff;
  DAT_0083d378 = param_3;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
  }
  DAT_0083d388 = iVar3 * 2;
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))(),
     puVar4 != (undefined4 *)0x0)) {
    iVar2 = -0x7ffd;
    DAT_0083d38c = puVar4[2] + -1;
    iVar3 = 0x7fff;
    DAT_0083d35c = *puVar4;
    DAT_0083d390 = puVar4[3] + -1;
    DAT_0083d360 = puVar4[1];
    iVar6 = 0;
    if (0 < param_3) {
      iVar7 = param_2 - DAT_0083d358;
      piVar5 = (int *)(DAT_0083d358 + 4);
      do {
        iVar1 = *(int *)(iVar7 + (int)piVar5);
        if (iVar1 < iVar3) {
          iVar3 = *piVar5;
          param_2 = iVar6;
        }
        if (iVar2 < iVar1) {
          iVar2 = *piVar5;
          DAT_0083d350 = iVar6;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 2;
      } while (iVar6 < param_3);
      if (iVar3 < iVar2) {
        auStack_48[0] = 0xffffffff;
        DAT_0083d384 = iVar3;
        iVar3 = FUN_00492ed0(auStack_48,param_2);
        if (iVar3 != 0) {
          auStack_24[0] = 1;
          iVar3 = FUN_00492ed0(auStack_24,param_2);
          if ((iVar3 != 0) && (DAT_0083d384 < DAT_0083d390)) {
            do {
              if (DAT_0083d360 <= DAT_0083d384) {
                iVar3 = iStack_18;
                iVar2 = iStack_3c;
                if (iStack_3c < iStack_18) {
                  iVar3 = iStack_3c;
                  iVar2 = iStack_18;
                }
                FUN_00493000(iVar3,iVar2);
              }
              iVar3 = FUN_00492fa0(auStack_48);
            } while (((iVar3 != 0) && (iVar3 = FUN_00492fa0(auStack_24), iVar3 != 0)) &&
                    (DAT_0083d384 = DAT_0083d384 + 1, DAT_0083d384 < DAT_0083d390));
          }
        }
      }
    }
  }
LAB_004934ed:
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
  }
  return 0;
}

