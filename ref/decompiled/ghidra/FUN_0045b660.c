/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045b660 @ 0x0045B660 */
/* Body size: 343 addresses */


int FUN_0045b660(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 local_104;
  char local_100 [256];
  
  iVar6 = 0;
  uVar2 = FUN_004a614d(param_1,&DAT_004d3884);
  do {
    FUN_004a65ee(local_100,0xfa,uVar2);
    uVar4 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar10 = param_2;
    local_100[~uVar4 - 2] = '\0';
    iVar3 = FUN_004ad4b0(local_100,uVar10);
    if (iVar3 == 0) {
      if (iVar6 < 100) {
        iVar6 = 0;
        local_104 = 0;
        FUN_004a65ee(local_100,0xfa,uVar2);
        uVar4 = 0xffffffff;
        pcVar7 = local_100;
        break;
      }
      goto LAB_0045b6c8;
    }
    iVar6 = iVar6 + 1;
    if (99 < iVar6) {
LAB_0045b6c8:
      FUN_004a609f(uVar2);
      return -1;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
    if (uVar4 == 0) break;
  }
  local_100[~uVar4 - 2] = '\0';
  do {
    uVar4 = 0xffffffff;
    pcVar7 = local_100;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar8 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_004c3f70;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar8 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004a65ee(local_100,0xfa,uVar2);
    uVar4 = 0xffffffff;
    pcVar7 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = iVar6 + 1;
    local_100[~uVar4 - 2] = '\0';
    if ((local_100[0] == '*') || (local_104 = local_104 + 1, 99 < local_104)) {
      FUN_004a609f(uVar2);
      return iVar6;
    }
  } while( true );
}

