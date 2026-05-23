/* Ghidra decompiled: golf.exe */
/* Function: FUN_004787a0 @ 0x004787A0 */
/* Body size: 463 addresses */


int __thiscall FUN_004787a0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int local_4;
  
  if (DAT_00839aa4 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return DAT_00839aa0;
  }
  local_4 = param_1;
  if (*param_2 == '\0') {
    return DAT_00839aa0;
  }
LAB_004787dd:
  if ((char)DAT_00839658 != '\0') {
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_004c3f70;
    do {
      pcVar6 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = (char *)&DAT_00839658;
    do {
      pcVar7 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar6 + -uVar3;
    pcVar6 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    iVar4 = FUN_00477250(&DAT_004c3f70);
    DAT_00839aa8 = DAT_00839aa8 + iVar4;
  }
  pcVar2 = param_2;
  if (DAT_00839aa8 < DAT_00839aa4) {
    uVar3 = 0xffffffff;
    local_4 = DAT_00839aa4 - DAT_00839aa8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00476ef0(param_2,&local_4,~uVar3 - 1);
  }
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = (char *)&DAT_00839658;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = param_2;
    pcVar7 = &DAT_00839657 + ~uVar3;
    for (uVar5 = (uint)((int)pcVar2 - (int)param_2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = (int)pcVar2 - (int)param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcVar2[(int)(&DAT_00839657 + ~uVar3) - (int)param_2] = '\0';
    uVar3 = 0xffffffff;
    pcVar6 = (char *)&DAT_00839658;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00477c30(&DAT_00839658,DAT_00839a9c,DAT_00839aa0,~uVar3 - 1);
    DAT_00839658._0_1_ = '\0';
    DAT_00839aa8 = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    iVar4 = FUN_00477580();
    DAT_00839aa0 = DAT_00839aa0 + iVar4;
    param_2 = pcVar2;
    if (*(int *)(param_1 + 0x18) != 0) {
      DAT_00839aa4 = DAT_00839aa4 - *(int *)(param_1 + 0x18);
      DAT_00839a9c = DAT_00839a9c + *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    goto LAB_004787dd;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = (char *)&DAT_00839658;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + -uVar3;
  pcVar6 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  iVar4 = DAT_00839aa0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return iVar4;
}

