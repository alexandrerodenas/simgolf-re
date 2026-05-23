/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407280 @ 0x00407280 */
/* Body size: 192 addresses */


void FUN_00407280(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((*(byte *)(&DAT_00575cb0 + param_1 * 0x82) & 0x81) == 0) {
    uVar4 = 0xffffffff;
    pcVar3 = s_Hole_004c4978;
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
    pcVar3 = (char *)&DAT_0051a068;
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
    pcVar3 = (char *)FUN_004ad425(param_1,&DAT_0058a528,10);
  }
  else {
    iVar2 = FUN_0045b9f0(param_1);
    if (iVar2 != 0) {
      return;
    }
    if (*(char *)(&DAT_00575ab0 + param_1 * 0x82) == '\x03') {
      pcVar3 = (&PTR_DAT_004c2e88)[param_1];
    }
    else if (*(char *)(&DAT_00575ab0 + param_1 * 0x82) == '\x04') {
      pcVar3 = (&PTR_DAT_004c2e38)[param_1];
    }
    else {
      pcVar3 = (&PTR_DAT_004c2ed8)[param_1];
    }
  }
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
  pcVar3 = (char *)&DAT_0051a068;
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
  return;
}

