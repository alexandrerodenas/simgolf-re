/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011810 @ 0x10011810 */


undefined4 FUN_10011810(undefined4 *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  
  puVar4 = operator_new(0x14);
  iVar2 = *(int *)(param_4 + 4);
  *(int *)(param_4 + 0x148) = *(int *)(param_4 + 0x148) + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(param_4 + 4) = puVar4;
  }
  else {
    for (iVar3 = *(int *)(iVar2 + 0x10); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
      iVar2 = iVar3;
    }
    *(undefined4 **)(iVar2 + 0x10) = puVar4;
  }
  uVar7 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar7);
  uVar7 = 0xffffffff;
  *puVar4 = pcVar5;
  do {
    pcVar9 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar5 = param_3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar7);
  uVar7 = 0xffffffff;
  puVar4[1] = pcVar5;
  do {
    pcVar9 = param_3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar4[2] = 0;
  }
  else {
    puVar6 = operator_new(0x10);
    puVar4[2] = puVar6;
    *puVar6 = *param_1;
    puVar6[1] = param_1[1];
    puVar6[2] = param_1[2];
    puVar6[3] = param_1[3];
  }
  puVar4[3] = param_4;
  puVar4[4] = 0;
  DAT_100b4a44 = DAT_100b4a44 + 1;
  return 1;
}

