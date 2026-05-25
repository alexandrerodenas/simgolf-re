/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477c30 @ 0x00477C30 */


undefined4 __thiscall
FUN_00477c30(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 == (char *)0x0) {
    return param_3;
  }
  if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(*(int *)(param_1 + 0x5c) + 4) == 0)) {
    return 3;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = param_5;
  if ((int)(~uVar3 - 1) < param_5) {
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
  }
  if (-1 < iVar4) {
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((int)(~uVar3 - 1) < param_5) {
      uVar3 = 0xffffffff;
      pcVar5 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      param_5 = ~uVar3 - 1;
    }
    if (param_5 != 0) {
      uVar2 = FUN_004775b0(param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return param_3;
}

