/* Ghidra decompiled: golf.exe */
/* Function: FUN_00404ad0 @ 0x00404AD0 */


void FUN_00404ad0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  FUN_00476310(param_4,1,0,1);
  if (*(int **)(PTR_DAT_004c1570 + 4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(PTR_DAT_004c1570 + 4) + 0xdc))();
  }
  iVar3 = FUN_00477580();
  if (iVar2 <= iVar3 + param_3) {
    if (*(int **)(PTR_DAT_004c1570 + 4) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(PTR_DAT_004c1570 + 4) + 0xdc))();
    }
    iVar3 = FUN_00477580();
    param_3 = (iVar2 - iVar3) + -1;
  }
  if (param_1 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00477c30(param_1,param_2,param_3,~uVar4 - 1);
  }
  return;
}

