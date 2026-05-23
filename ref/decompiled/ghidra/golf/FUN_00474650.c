/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474650 @ 0x00474650 */
/* Body size: 161 addresses */


undefined4 __thiscall FUN_00474650(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x1c);
  pcVar6 = *(char **)(param_1 + 0x20);
  if (pcVar6 == (char *)0x0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x24);
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar2 = _malloc(~uVar3);
  }
  else {
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar2 = (undefined1 *)FUN_00474860(~uVar3);
  }
  *(undefined1 **)(param_2 + 8) = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    return 4;
  }
  *puVar2 = 0;
  uVar3 = 0xffffffff;
  pcVar6 = *(char **)(param_1 + 0x20);
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = *(char **)(param_2 + 8);
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  return 0;
}

