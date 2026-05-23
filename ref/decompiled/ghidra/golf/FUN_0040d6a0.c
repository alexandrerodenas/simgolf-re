/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040d6a0 @ 0x0040D6A0 */
/* Body size: 183 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040d6a0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  if (DAT_005694a4 != 0) {
    DAT_005694a4 = DAT_005694a4 - 1;
    return DAT_005694a4;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_005a6d40;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = (char *)&DAT_0051a068;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar2 = -1;
  if (DAT_00569498 == '\x01') {
    if (DAT_005a9ccc < 3) {
      iVar2 = DAT_005a9ccc + 1;
      DAT_005a9ccc = DAT_005a9ccc + 1;
    }
  }
  else if ((DAT_005a9ccc != 0) &&
          (iVar5 = DAT_005a9ccc + -1, bVar8 = DAT_005a9ccc == 0, iVar2 = DAT_005a9ccc,
          DAT_005a9ccc = iVar5, bVar8)) {
    return 0;
  }
  FUN_0040d320(0xf0,0xfffffff8,DAT_005a34ec,iVar2);
  uVar3 = _DAT_0059e7b8;
  if ((((_DAT_0059e7b8 & 0x8000) == 0) && (uVar3 = DAT_00834170 / 3, DAT_00834170 % 3 != 0)) &&
     (uVar3 = DAT_005a7144 - 1, DAT_005a7144 = uVar3, (int)uVar3 < 1)) {
    DAT_00569498 = '\0';
  }
  return uVar3;
}

