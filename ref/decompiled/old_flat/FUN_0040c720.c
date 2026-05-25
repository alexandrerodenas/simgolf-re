/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c720 @ 0x0040C720 */


void FUN_0040c720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  (&DAT_0056c770)[DAT_0053bba8] = param_1;
  (&DAT_0056c794)[DAT_0053bba8] = param_2;
  (&DAT_0056a794)[DAT_0053bba8] = param_3;
  uVar2 = 0xffffffff;
  (&DAT_0056a924)[DAT_0053bba8] = 0x30;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = &DAT_0056c570 + DAT_0053bba8 * 0x40;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  DAT_0053bba8 = DAT_0053bba8 + 1 & 0x80000007;
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if ((int)DAT_0053bba8 < 0) {
    DAT_0053bba8 = (DAT_0053bba8 - 1 | 0xfffffff8) + 1;
  }
  return;
}

