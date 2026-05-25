/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487fb0 @ 0x00487FB0 */


undefined4 __thiscall FUN_00487fb0(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char local_50 [80];
  
  bVar2 = false;
  if (param_2 == (char *)0x0) {
LAB_00488073:
    if (*(int *)(param_1 + 0x158) != 0) {
      bVar2 = true;
      goto LAB_004880d6;
    }
    iVar3 = FUN_004a00f0(param_1 + 4,&DAT_004d3884);
    *(int *)(param_1 + 0x158) = iVar3;
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = (char *)(param_1 + 4);
    pcVar4 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_004ad580(param_2,pcVar7,~uVar5 - 1);
    if (iVar3 == 0) goto LAB_00488073;
    uVar5 = 0xffffffff;
    do {
      pcVar4 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar4 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar4;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar4 = pcVar4 + -uVar5;
    pcVar9 = pcVar7;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcVar4 = _strchr(pcVar7,0x2e);
    if (pcVar4 == (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar4 = &DAT_004e4418;
      do {
        pcVar9 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      pcVar4 = pcVar7;
      do {
        pcVar8 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar8;
      } while (cVar1 != '\0');
      pcVar4 = pcVar9 + -uVar5;
      pcVar9 = pcVar8 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_00487f80();
    iVar3 = FUN_004a00f0(pcVar7,&DAT_004d3884);
    *(int *)(param_1 + 0x158) = iVar3;
    if (iVar3 == 0) {
      return 1;
    }
  }
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_0083c004;
  do {
    pcVar4 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar4 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar4;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar4 + -uVar5;
  pcVar4 = (char *)(param_1 + 0x54);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
LAB_004880d6:
  if (param_3 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_004e4438;
    do {
      pcVar4 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar4 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar4;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar4 + -uVar5;
    pcVar4 = local_50;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar7 = param_3;
    do {
      pcVar4 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar4 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar4;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pcVar7 = local_50;
    do {
      pcVar9 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar7 = pcVar4 + -uVar5;
    pcVar4 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar4 = pcVar4 + 1;
    }
    iVar3 = FUN_00488420(param_1 + 4,param_3);
    if (-1 < iVar3) {
      FUN_004a0320(s_Seeking_to_004e442c,param_3,iVar3,0,0);
      FUN_004a7119(*(undefined4 *)(param_1 + 0x158),iVar3,0);
      bVar2 = true;
    }
    do {
      if ((*(byte *)(*(int *)(param_1 + 0x158) + 0xc) & 0x10) != 0) {
        if (!bVar2) goto LAB_004881fc;
        bVar2 = false;
        FUN_004a70b5(*(int *)(param_1 + 0x158));
      }
      iVar3 = FUN_004a65ee(*(undefined4 *)(param_1 + 0x15c),0x1ff,*(undefined4 *)(param_1 + 0x158));
      if ((iVar3 == 0) && ((*(byte *)(*(int *)(param_1 + 0x158) + 0xc) & 0x10) == 0)) {
LAB_004881fc:
        FUN_00487f80();
        return 1;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x158) + 0xc) & 0x10) == 0) {
        FUN_004925d0(*(undefined4 *)(param_1 + 0x15c));
        FUN_004925b0(*(undefined4 *)(param_1 + 0x15c));
      }
      iVar3 = FUN_004ad4b0(local_50,*(undefined4 *)(param_1 + 0x15c));
    } while (iVar3 != 0);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x15c);
  }
  return 0;
}

