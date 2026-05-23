/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401040 @ 0x00401040 */
/* Body size: 356 addresses */


undefined4 FUN_00401040(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  bVar1 = true;
  iVar4 = param_3 * 6;
  pcVar6 = &DAT_004c11e0 + param_2 * 0x27;
  iVar5 = iVar4;
  do {
    if ((pcVar6[iVar7] != '\0') && (bVar1)) {
      if (5 < param_3 + iVar7) break;
      iVar2 = 0;
      do {
        if ((((int)pcVar6[iVar7] & 1 << ((byte)iVar2 & 0x1f)) != 0) && (bVar1)) {
          if (5 < param_4 + iVar2) {
            bVar1 = false;
          }
          if ((&DAT_004e6d70)[param_4 + iVar2 + iVar5 + param_1 * 0x74] != -1) {
            bVar1 = false;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 6;
  } while (iVar7 < 6);
  iVar5 = 0;
  iVar7 = param_1 * 0x74;
  psVar3 = (short *)(&DAT_004e6d20 + iVar7);
  do {
    if (*psVar3 == -1) {
      *(undefined2 *)(&DAT_004e6d20 + (iVar5 + param_1 * 0x3a) * 2) = (undefined2)param_2;
      (&DAT_004e6d40)[iVar5 + iVar7] = (undefined1)param_3;
      (&DAT_004e6d50)[iVar5 + iVar7] = (undefined1)param_4;
      (&DAT_004e6d60)[iVar5 + iVar7] = 0xff;
      param_3 = 6;
      do {
        iVar2 = 0;
        do {
          if (((int)*pcVar6 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
            (&DAT_004e6d70)[param_4 + iVar4 + iVar7 + iVar2] = (char)iVar5;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 6);
        iVar4 = iVar4 + 6;
        pcVar6 = pcVar6 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 1;
    }
    iVar5 = iVar5 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar5 < 0x10);
  return 0;
}

