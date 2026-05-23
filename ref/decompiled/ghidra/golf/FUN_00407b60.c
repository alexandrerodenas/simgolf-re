/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407b60 @ 0x00407B60 */
/* Body size: 255 addresses */


undefined4 FUN_00407b60(int param_1,int param_2,int param_3)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar3 = 0;
  psVar2 = (short *)&DAT_005689ea;
  do {
    if ((psVar2[-1] == param_1) && (*psVar2 == param_2)) {
      if (param_3 == 0) {
        return 1;
      }
      uVar4 = 0xffffffff;
      pcVar6 = s_Gary_Golf_004d6098 + (short)(&DAT_005689ec)[iVar3 * 4] * 0x230;
      goto code_r0x00407bff;
    }
    psVar2 = psVar2 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)psVar2 < 0x568d0a);
  if (param_3 != 0) {
    uVar4 = 0xffffffff;
    pcVar6 = s_Scenic_004c4e38;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  return 0;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x00407bff:
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar7 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_004c4e34;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar7 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_00407700(param_1,param_2,0xffffffff);
  return 1;
}

