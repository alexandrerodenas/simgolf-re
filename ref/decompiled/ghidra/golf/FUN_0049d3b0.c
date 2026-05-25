/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049d3b0 @ 0x0049D3B0 */


undefined4 FUN_0049d3b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_0049d460();
  iVar2 = FUN_00487e70(s_jackal_004e4680,s_FILEWIN_004e4a08);
  if (iVar2 != 0) {
    return 6;
  }
  pcVar3 = (char *)FUN_00487e90();
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  if (DAT_00840820 != (char *)0x0) {
    FUN_004a5007(DAT_00840820);
    DAT_00840820 = (char *)0x0;
  }
  uVar4 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  DAT_00840820 = _malloc(~uVar4);
  if (DAT_00840820 == (char *)0x0) {
    return 4;
  }
  *DAT_00840820 = '\0';
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar3 = DAT_00840820;
  do {
    pcVar6 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  pcVar3 = pcVar7 + -uVar4;
  pcVar7 = pcVar6 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 0;
}

