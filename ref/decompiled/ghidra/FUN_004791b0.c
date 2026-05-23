/* Ghidra decompiled: golf.exe */
/* Function: FUN_004791b0 @ 0x004791B0 */
/* Body size: 937 addresses */


void __thiscall FUN_004791b0(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
    }
    iVar4 = *param_3;
    if (iVar4 != 0) {
      iVar3 = param_2[1];
      iVar5 = *param_2;
      FUN_00473e60(param_1,iVar5,iVar3,0);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar5,iVar3,iVar5,iVar3,*(undefined4 *)(iVar4 + 0x18),
                     *(undefined4 *)(iVar4 + 0x1c),param_3[9]);
      }
    }
    iVar4 = param_3[1];
    if (iVar4 != 0) {
      iVar5 = param_2[2] - *(int *)(iVar4 + 0x18);
      iVar3 = param_2[1];
      FUN_00473e60(param_1,iVar5,iVar3,0);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar5,iVar3,iVar5,iVar3,*(undefined4 *)(iVar4 + 0x18),
                     *(undefined4 *)(iVar4 + 0x1c),param_3[9]);
      }
    }
    iVar4 = param_3[2];
    if (iVar4 != 0) {
      iVar3 = *param_2;
      iVar5 = param_2[3] - *(int *)(iVar4 + 0x1c);
      FUN_00473e60(param_1,iVar3,iVar5,0);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar3,iVar5,iVar3,iVar5,*(undefined4 *)(iVar4 + 0x18),
                     *(undefined4 *)(iVar4 + 0x1c),param_3[9]);
      }
    }
    iVar4 = param_3[3];
    if (iVar4 != 0) {
      iVar5 = param_2[2] - *(int *)(iVar4 + 0x18);
      iVar3 = param_2[3] - *(int *)(iVar4 + 0x1c);
      FUN_00473e60(param_1,iVar5,iVar3,0);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar5,iVar3,iVar5,iVar3,*(undefined4 *)(iVar4 + 0x18),
                     *(undefined4 *)(iVar4 + 0x1c),param_3[9]);
      }
    }
    iVar4 = param_3[4];
    if (iVar4 != 0) {
      iVar3 = param_2[1];
      iVar5 = *param_2;
      uVar1 = *(undefined4 *)(iVar4 + 0x1c);
      iVar6 = param_2[2] - iVar5;
      if (*param_3 != 0) {
        iVar2 = *(int *)(*param_3 + 0x18);
        iVar5 = iVar5 + iVar2;
        iVar6 = iVar6 - iVar2;
      }
      if (param_3[1] != 0) {
        iVar6 = iVar6 - *(int *)(param_3[1] + 0x18);
      }
      FUN_00476140(iVar4,0,0,iVar5,iVar3,iVar6,uVar1);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar5,iVar3,iVar5,iVar3,iVar6,uVar1,param_3[9]);
      }
    }
    if (param_3[5] != 0) {
      iVar4 = *(int *)(param_3[5] + 0x1c);
      iVar3 = *param_2;
      iVar5 = param_2[3] - iVar4;
      iVar6 = param_2[2] - iVar3;
      if (param_3[2] != 0) {
        iVar2 = *(int *)(param_3[2] + 0x18);
        iVar6 = iVar6 - iVar2;
        iVar3 = iVar3 + iVar2;
      }
      if (param_3[3] != 0) {
        iVar6 = iVar6 - *(int *)(param_3[3] + 0x18);
      }
      FUN_00476140(param_3[5],0,0,iVar3,iVar5,iVar6,iVar4);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar3,iVar5,iVar3,iVar5,iVar6,iVar4,param_3[9]);
      }
    }
    iVar4 = param_3[6];
    if (iVar4 != 0) {
      iVar3 = *param_2;
      uVar1 = *(undefined4 *)(iVar4 + 0x18);
      iVar5 = param_2[1];
      iVar6 = param_2[3] - iVar5;
      if (*param_3 != 0) {
        iVar2 = *(int *)(*param_3 + 0x1c);
        iVar5 = iVar5 + iVar2;
        iVar6 = iVar6 - iVar2;
      }
      if (param_3[2] != 0) {
        iVar6 = iVar6 - *(int *)(param_3[2] + 0x1c);
      }
      FUN_00476140(iVar4,0,0,iVar3,iVar5,uVar1,iVar6);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar3,iVar5,iVar3,iVar5,uVar1,iVar6,param_3[9]);
      }
    }
    if (param_3[7] != 0) {
      iVar4 = *(int *)(param_3[7] + 0x18);
      iVar5 = param_2[2] - iVar4;
      iVar3 = param_2[1];
      iVar6 = param_2[3] - iVar3;
      if (param_3[1] != 0) {
        iVar2 = *(int *)(param_3[1] + 0x1c);
        iVar3 = iVar3 + iVar2;
        iVar6 = iVar6 - iVar2;
      }
      if (param_3[3] != 0) {
        iVar6 = iVar6 - *(int *)(param_3[3] + 0x1c);
      }
      FUN_00476140(param_3[7],0,0,iVar5,iVar3,iVar4,iVar6);
      if (param_3[8] != 0) {
        FUN_00475e10(param_3[8],iVar5,iVar3,iVar5,iVar3,iVar4,iVar6,param_3[9]);
      }
    }
    if (param_3[8] != 0) {
      iVar4 = *param_2;
      iVar3 = param_2[1];
      iVar5 = param_2[2] - iVar4;
      iVar6 = param_2[3] - iVar3;
      if (param_3[6] != 0) {
        iVar2 = *(int *)(param_3[6] + 0x18);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 - iVar2;
      }
      if (param_3[4] != 0) {
        iVar2 = *(int *)(param_3[4] + 0x1c);
        iVar3 = iVar3 + iVar2;
        iVar6 = iVar6 - iVar2;
      }
      if (param_3[7] != 0) {
        iVar5 = iVar5 - *(int *)(param_3[7] + 0x18);
      }
      if (param_3[5] != 0) {
        iVar6 = iVar6 - *(int *)(param_3[5] + 0x1c);
      }
      FUN_00475fb0(param_3[8],iVar4,iVar3,iVar4,iVar3,iVar5,iVar6);
    }
  }
  return;
}

