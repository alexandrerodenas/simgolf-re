/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084a4cb @ 0x0084A4CB */


bool FUN_0084a4cb(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char local_120 [18];
  char acStack_10e [2];
  undefined4 local_10c [65];
  int local_8;
  
  local_8 = *param_1;
  uVar2 = FUN_0084aa1e(0x16);
  FUN_0084ad10(local_120,uVar2);
  puVar8 = local_10c;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar3 = (char *)local_10c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = (char *)FUN_0084b630(*(undefined4 *)(local_8 + 0x8c),local_10c,0x5c);
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_10c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != acStack_10e + ~uVar5) {
    uVar5 = 0xffffffff;
    pcVar7 = (char *)local_10c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    acStack_10e[~uVar5 + 1] = '\\';
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar3 = (char *)local_10c;
  do {
    pcVar9 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar5;
  pcVar3 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = (char *)FUN_0084b630(*(undefined4 *)(local_8 + 0x8c),local_10c,0x5c);
  uVar5 = 0xffffffff;
  pcVar7 = (char *)local_10c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != acStack_10e + ~uVar5) {
    uVar5 = 0xffffffff;
    pcVar7 = (char *)local_10c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    acStack_10e[~uVar5 + 1] = '\\';
  }
  uVar5 = 0xffffffff;
  pcVar7 = local_120;
  do {
    pcVar3 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = -1;
  pcVar7 = (char *)local_10c;
  do {
    pcVar9 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar7 = pcVar3 + -uVar5;
  pcVar3 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar4 = (**(code **)(local_8 + 0x10))(local_10c,0xc0000000,0,0,2,0x10000000,0);
  if (iVar4 == -1) {
    uVar2 = (**(code **)(local_8 + 0x78))(local_10c);
    FUN_0084ae2d(param_1,uVar2);
  }
  return iVar4 != -1;
}

