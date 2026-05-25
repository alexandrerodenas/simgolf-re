/* Ghidra decompiled: golf.exe */
/* Function: FUN_00467600 @ 0x00467600 */


void FUN_00467600(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  param_1 = param_1 * 0x4c;
  pcVar8 = &DAT_0058587a + param_1;
  if ((&DAT_0058587a)[param_1] == '\0') {
    iVar5 = (((byte)(&DAT_00585862)[param_1] & 8) >> 3) - ((char)(&DAT_00585863)[param_1] * 2 + 4);
    if ((&DAT_00585863)[param_1] != -6) {
      uVar2 = 0xffffffff;
      pcVar8 = (&PTR_s_Chuck_004c148c)[iVar5];
      do {
        pcVar7 = pcVar8;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      iVar3 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar6 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar6;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar2;
      pcVar7 = pcVar6 + -1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar2 = 0xffffffff;
      pcVar8 = (&PTR_s_Club_Pro_004c1464)[iVar5];
      do {
        pcVar7 = pcVar8;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      iVar5 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar6 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar6;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar2;
      pcVar7 = pcVar6 + -1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      return;
    }
    pcVar8 = s_Gary_Golf_004d6098;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar7 = pcVar8;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar6 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar6 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
  } while (cVar1 != '\0');
  pcVar8 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

