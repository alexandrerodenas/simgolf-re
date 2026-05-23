/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478140 @ 0x00478140 */
/* Body size: 169 addresses */


int __thiscall FUN_00478140(int param_1,char *param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    return param_3;
  }
  if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(*(int *)(param_1 + 0x5c) + 4) == 0)) {
    return 3;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = param_5;
  if ((int)(~uVar3 - 1) < param_5) {
    uVar3 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar3 - 1;
  }
  if (-1 < iVar2) {
    uVar3 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((int)(~uVar3 - 1) < param_5) {
      uVar3 = 0xffffffff;
      pcVar4 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_5 = ~uVar3 - 1;
    }
    if (param_5 != 0) {
      iVar2 = FUN_00477280(param_2,param_5);
      iVar2 = FUN_004775b0(param_2,param_3 - iVar2,param_4,param_5);
      return iVar2;
    }
  }
  return param_3;
}

