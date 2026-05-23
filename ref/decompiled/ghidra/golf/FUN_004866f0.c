/* Ghidra decompiled: golf.exe */
/* Function: FUN_004866f0 @ 0x004866F0 */
/* Body size: 185 addresses */


undefined4 __thiscall FUN_004866f0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (-1 < param_2) {
    if (param_2 < 0x20) {
      return 0;
    }
    if (((param_2 == 0) && (0x5f < param_3)) && (param_3 < 0x6a)) {
      param_2 = param_3 + -0x30;
    }
  }
  uVar2 = 0xffffffff;
  pcVar3 = (char *)param_1[0x15d];
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (~uVar2 - 1 == param_1[0x15e]) {
    MessageBeep(0);
    return 1;
  }
  pcVar3 = (char *)param_1[0x15d] + param_1[0x169];
  if (*pcVar3 == '\0') {
    pcVar3[1] = '\0';
  }
  else {
    uVar2 = 0xffffffff;
    pcVar4 = pcVar3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004a6d80(pcVar3 + 1,pcVar3,~uVar2);
  }
  *(char *)(param_1[0x15d] + param_1[0x169]) = (char)param_2;
  param_1[0x169] = param_1[0x169] + 1;
  (**(code **)(*param_1 + 0x120))();
  return 1;
}

