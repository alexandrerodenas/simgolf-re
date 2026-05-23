/* Ghidra decompiled: golf.exe */
/* Function: FUN_004732d0 @ 0x004732D0 */
/* Body size: 409 addresses */


int FUN_004732d0(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  
  DAT_008392a8 = 0xffffffff;
  iVar8 = 0;
  piVar4 = &DAT_00541d64;
  while ((DAT_00571fd4 / 10 + DAT_00541cd8 + DAT_0059ae78) * (DAT_00822c88 + 1) <
         (piVar4[1] / 10 + piVar4[-1] + *piVar4) * (*(short *)((int)piVar4 + 0x12) + 1)) {
    if (piVar4[5] == DAT_00822c78) {
      DAT_008392a8 = 0xffffffff;
      return -1;
    }
    piVar4 = piVar4 + 0x27;
    iVar8 = iVar8 + 1;
    if (0x54237b < (int)piVar4) {
      return -1;
    }
  }
  iVar3 = 9;
  iVar5 = 9;
  if (iVar8 < 10) {
    piVar4 = &DAT_005422f4;
    do {
      if (*piVar4 == DAT_00822c78) {
        iVar3 = iVar5;
      }
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + -0x27;
    } while (iVar8 <= iVar5);
  }
  if (iVar8 < iVar3) {
    iVar5 = iVar3 - iVar8;
    puVar11 = &DAT_00541ce0 + iVar3 * 0x27;
    do {
      iVar5 = iVar5 + -1;
      puVar9 = puVar11 + -0x27;
      puVar12 = puVar11;
      for (iVar3 = 0x27; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = puVar11 + -0x27;
    } while (iVar5 != 0);
  }
  iVar5 = DAT_0059ae78;
  iVar3 = DAT_00541cd8;
  DAT_0051a068._0_1_ = 0;
  (&DAT_00541d68)[iVar8 * 0x27] = DAT_00571fd4;
  uVar2 = (undefined2)DAT_00822c88;
  (&DAT_00541d60)[iVar8 * 0x27] = iVar5;
  iVar5 = DAT_00822c78;
  (&DAT_00541d64)[iVar8 * 0x27] = iVar3;
  (&DAT_00541d76)[iVar8 * 0x4e] = uVar2;
  (&DAT_00541d78)[iVar8 * 0x27] = iVar5;
  uVar6 = 0xffffffff;
  pcVar10 = s_Gary_Golf_004d6098;
  do {
    pcVar13 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar13 + -uVar6;
  pcVar13 = (char *)(&DAT_00541ce0 + iVar8 * 0x27);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_0040daa0(0);
  uVar6 = 0xffffffff;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar13 + -uVar6;
  pcVar13 = (char *)(&DAT_00541d20 + iVar8 * 0x27);
  DAT_008392a8 = iVar8;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar13 = pcVar13 + 1;
  }
  return iVar8;
}

