/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474260 @ 0x00474260 */


undefined4 __thiscall
FUN_00474260(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_retaddr;
  int iVar5;
  int iVar6;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  if (param_2 == 0) {
    return 0x10;
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_2 + 4) != 0)) {
    (**(code **)(*DAT_0083ad50 + 0xa0))(&local_4,&local_8,&local_c);
    iVar6 = param_3;
    (**(code **)(*DAT_0083ad50 + 0x9c))(param_3,param_4,param_5);
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = (iVar1 * local_4) / param_5;
    *(int *)(param_1 + 0x20) = iVar3;
    param_5 = (iVar2 * unaff_retaddr) / param_5;
    *(int *)(param_1 + 0x24) = param_5;
    if (param_3 == 0) {
      local_4 = 0;
    }
    else {
      local_4 = *(int *)(param_3 + 4);
    }
    iVar5 = local_4;
    uVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x4c))
                      (*(undefined4 *)(unaff_EBX + 4),iVar3 + unaff_ESI,param_5 + local_c,local_8,
                       local_4,param_4);
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar2;
    (**(code **)(*DAT_0083ad50 + 0x9c))(iVar6,param_4,iVar5);
    return uVar4;
  }
  return 7;
}

