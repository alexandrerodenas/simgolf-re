/* Ghidra decompiled: golf.exe */
/* Function: FUN_004668f0 @ 0x004668F0 */
/* Body size: 254 addresses */


int FUN_004668f0(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (((&DAT_005794c8)[param_3 * 0x40] & 0x100000) == 0) {
    cVar1 = (&DAT_00579502)[param_2 + (short)(&DAT_0057955a)[param_3 * 0x80] * 0x100];
  }
  else {
    cVar1 = (&DAT_00579502)[param_2 + param_3 * 0x100];
  }
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = param_3;
  if (((&DAT_005794c8)[param_3 * 0x40] & 0x100000) == 0) {
    uVar3 = param_3 ^ 1;
  }
  FUN_004669f0(param_1,cVar1,param_2,uVar3);
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  if (((&DAT_005794c8)[param_3 * 0x40] & 0x100000) == 0) {
    iVar2 = 0;
    if (0 < iVar4) {
      do {
        if (*(char *)((int)&DAT_0051a068 + iVar2) == '\n') {
          uVar3 = 0xffffffff;
          pcVar6 = (char *)((int)&DAT_0051a068 + iVar2 + 1);
          goto code_r0x004669c8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
    DAT_0051a068._0_1_ = '\0';
  }
  else {
    iVar2 = 0;
    if (0 < iVar4) {
      do {
        if (*(char *)((int)&DAT_0051a068 + iVar2) == '\n') {
          *(undefined1 *)((int)&DAT_0051a068 + iVar2) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
      return (int)(char)DAT_0051a068;
    }
  }
  return (int)(char)DAT_0051a068;
  while( true ) {
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x004669c8:
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = (char *)&DAT_0051a068;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return (int)(char)DAT_0051a068;
}

