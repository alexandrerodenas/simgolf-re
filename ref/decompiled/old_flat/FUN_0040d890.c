/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040d890 @ 0x0040D890 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d890(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = DAT_004c2848;
  DAT_0059e7b8 = DAT_0059e7b8 & 0xfffffffd;
  if (DAT_00567afc == 3) {
    DAT_004c2848 = iVar2;
    switch(param_1) {
    case 3:
      DAT_0058f330 = 0;
      return;
    case 4:
      DAT_0058f330 = 0xffffffff;
      return;
    case 5:
      DAT_0058f330 = 1;
      return;
    case 6:
      DAT_0058f330 = 3;
      return;
    case 7:
      DAT_0058f330 = 4;
      return;
    }
  }
  else {
    if (DAT_00567afc == 2) {
      if (DAT_0056199c <= param_1) {
        DAT_0053df54 = 0;
        return;
      }
      if ((DAT_0053df54 < 1) &&
         (iVar2 = *(int *)(&DAT_0054131c + param_1 * 4), (&DAT_005794c0)[iVar2 * 0x40] == -1)) {
        DAT_0053df54 = 0;
      }
      else {
        iVar2 = *(int *)(&DAT_0054131c + param_1 * 4);
        DAT_0053df54 = iVar2 + 1;
      }
      DAT_004c2ba0 = (int)(&DAT_005794b8)[iVar2 * 0x40] >> 10;
      DAT_004c2ba4 = (int)(&DAT_005794bc)[iVar2 * 0x40] >> 10;
      return;
    }
    if (DAT_00567afc == 1) {
      DAT_004c2854 = *(int *)(&DAT_0054131c + param_1 * 4);
      if ((DAT_005a6364 <= DAT_004c2854) || ((DAT_004c2854 == 4 && (DAT_00543cfc == 0)))) {
        DAT_004c2854 = -1;
      }
      _DAT_0056a514 = DAT_004c2e20;
      DAT_004c2e20 = 0xffffffff;
      FUN_004481b0(0xfc,0x50,0,0,0);
      return;
    }
    if (param_2 == 0) {
      DAT_004c2848 = (&DAT_0059bfc4)[param_1];
    }
    else {
      DAT_004c2848 = param_1;
    }
    FUN_004481b0(0xfb,0x50,0,0,0);
    if (((&DAT_00578376)[DAT_004c2848 * 0x30] == '\r') && (3 < DAT_00822c88)) {
      uVar3 = 0xffffffff;
      pcVar5 = s_Trees_must_be_transplanted__004c5344;
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      pcVar6 = (char *)&DAT_0051a068;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      FUN_0040cb00(0x80004210,1,0xffffffff);
      FUN_004481b0(0x18,100,0,0,0);
      DAT_004c2848 = iVar2;
    }
  }
  return;
}

