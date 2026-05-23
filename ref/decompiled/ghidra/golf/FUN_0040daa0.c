/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040daa0 @ 0x0040DAA0 */
/* Body size: 237 addresses */


void FUN_0040daa0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = FUN_0045b9f0(0);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_Ocean_s_Edge_004c1ea8 + (char)(&DAT_00571ff4)[DAT_0059bf90 * 0x2e] * 0x82 + 1;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar2 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar6 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  if (param_1 != -1) {
    iVar2 = FUN_0044faf0(DAT_005685f0 + -1);
    if (iVar2 == 1) {
      pcVar5 = s_Golf_Club_004c5364;
      if (param_1 != 1) {
        pcVar5 = &DAT_004c5360;
      }
    }
    else if (iVar2 == 2) {
      pcVar5 = s_Country_Club_004c5374;
      if (param_1 != 1) {
        pcVar5 = &DAT_004c5370;
      }
    }
    else if (iVar2 == 3) {
      pcVar5 = s_Championship_004c5384;
      if (param_1 != 1) {
        pcVar5 = &DAT_004e9a84;
      }
    }
    else {
      pcVar5 = s_Municipal_004c5398;
      if (param_1 != 1) {
        pcVar5 = &DAT_004c5394;
      }
    }
    uVar3 = 0xffffffff;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar2 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar6 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  return;
}

