/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c640 @ 0x0048C640 */


undefined4 __thiscall FUN_0048c640(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 3;
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x34 + param_1) - DAT_0083ff10;
  if (0 < iVar3) {
    FUN_00476e20(param_2,iVar3,0,0);
  }
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x294 + param_1);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3;
  if (param_4 != '\0') {
    iVar3 = 1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  *(int *)(iVar1 + 0xe0 + param_1) = param_2;
  param_1 = iVar1 + 0xc4 + param_1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x24) = iVar3;
  uVar2 = FUN_00401d10(param_3);
  return uVar2;
}

