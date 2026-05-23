/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045b8b0 @ 0x0045B8B0 */
/* Body size: 310 addresses */


int FUN_0045b8b0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  
  if ((param_1 != -1) && ((&DAT_0059d81c)[param_1] != -1)) {
    iVar8 = (int)(short)(&DAT_0059d81c)[param_1];
    uVar4 = 0xffffffff;
    pcVar10 = (char *)((int)&DAT_0056fcb0 + iVar8);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    uVar5 = (0x1002 - uVar4) - iVar8;
    pcVar10 = (char *)((int)&DAT_0056fcb0 + iVar8 + uVar4);
    pcVar11 = (char *)((int)&DAT_0056fcb0 + iVar8);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    (&DAT_0059d81c)[param_1] = 0xffff;
    psVar7 = &DAT_0059d81c;
    do {
      if (iVar8 < *psVar7) {
        *psVar7 = *psVar7 - (short)uVar4;
      }
      psVar7 = psVar7 + 1;
    } while ((int)psVar7 < 0x59d91c);
  }
  iVar8 = 0;
  iVar9 = -1;
  iVar3 = 0;
  do {
    sVar2 = (&DAT_0059d81c)[iVar3];
    if (sVar2 == -1) {
LAB_0045b962:
      if ((iVar9 == -1) && (0x20 < iVar3)) {
        iVar9 = iVar3;
      }
    }
    else {
      if (iVar8 < (int)(short)(&DAT_005a46b8)[iVar3] + (int)sVar2) {
        iVar8 = (int)(short)(&DAT_005a46b8)[iVar3] + (int)sVar2;
      }
      if (sVar2 == -1) goto LAB_0045b962;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x80);
  if (param_1 != -1) {
    iVar9 = param_1;
  }
  uVar4 = 0xffffffff;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  if (0x1001 < (int)(~uVar4 + iVar8)) {
    return -1;
  }
  uVar6 = 0xffffffff;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar11 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  (&DAT_0059d81c)[iVar9] = (short)iVar8;
  pcVar10 = pcVar11 + -uVar6;
  pcVar11 = (char *)((int)&DAT_0056fcb0 + iVar8);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  (&DAT_005a46b8)[iVar9] = (short)~uVar4;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return iVar9;
}

