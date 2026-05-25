/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488310 @ 0x00488310 */


undefined4 __thiscall FUN_00488310(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_200 [512];
  
  uVar4 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar2 + -uVar4;
  pcVar7 = local_200;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar2 = _strchr(local_200,0x2e);
  if (pcVar2 == (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar2 = &DAT_004e4418;
    do {
      pcVar7 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar2 = local_200;
    do {
      pcVar8 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar4;
    pcVar7 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  iVar6 = FUN_004ad4b0(local_200,param_1 + 4);
  if (iVar6 == 0) {
    if (*param_3 == '#') {
      param_3 = param_3 + 1;
    }
    pcVar2 = *(char **)(param_1 + 0x110);
    iVar6 = *(int *)(param_1 + 0x104);
    pcVar7 = pcVar2 + 4;
    iVar3 = FUN_004ad4b0(param_3,pcVar7);
    while( true ) {
      if (iVar3 == 0) {
        return *(undefined4 *)pcVar2;
      }
      cVar1 = *pcVar7;
      while (cVar1 != '\0') {
        pcVar2 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar2;
      }
      pcVar2 = pcVar7 + 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      pcVar7 = pcVar7 + 5;
      iVar3 = FUN_004ad4b0(param_3,pcVar7);
    }
  }
  return 0xffffffff;
}

