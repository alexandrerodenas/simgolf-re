/* Ghidra decompiled: golf.exe */
/* Function: FUN_00494cb0 @ 0x00494CB0 */


undefined4 FUN_00494cb0(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((param_2 == (char *)0x0) || (9 < param_1)) {
    return 3;
  }
  if (param_3 < 0) {
    param_3 = DAT_0083f35c;
  }
  *(int *)(&DAT_0083e8b8 + param_1 * 4) = param_3;
  if (param_4 < 0) {
    param_4 = DAT_0083f360;
  }
  *(int *)(&DAT_0083d3c8 + param_1 * 4) = param_4;
  uVar2 = 0xffffffff;
  (&DAT_0083e8e0)[param_1 * 0x100] = '\0';
  do {
    pcVar5 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar7 = &DAT_0083e8e0 + param_1 * 0x100;
  do {
    pcVar6 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 0;
}

