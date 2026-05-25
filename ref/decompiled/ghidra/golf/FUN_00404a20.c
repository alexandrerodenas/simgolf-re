/* Ghidra decompiled: golf.exe */
/* Function: FUN_00404a20 @ 0x00404A20 */


void FUN_00404a20(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  
  FUN_00476310(param_4,0xffffffff,2,2);
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
  uVar4 = FUN_00404970(param_3);
  uVar5 = FUN_00404970(param_2);
  if (param_1 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00477c30(param_1,uVar5,uVar4,~uVar6 - 1);
  }
  return;
}

