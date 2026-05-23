/* Ghidra decompiled: golf.exe */
/* Function: FUN_00431ee0 @ 0x00431EE0 */
/* Body size: 184 addresses */


void FUN_00431ee0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar2 = _strchr(param_1,0x2e);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_004c7838;
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
  pcVar6 = param_1;
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
  FUN_00431d20(param_1,PTR_DAT_004c1570,0,0,800,600,2);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  uVar3 = 0xffffffff;
  pcVar2 = &DAT_004c782c;
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
  pcVar2 = param_1;
  do {
    pcVar8 = pcVar2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar6 + -uVar3;
  pcVar6 = pcVar8 + -1;
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
  FUN_00431d20(param_1,PTR_DAT_004c1570,0,0,800,600,10);
  return;
}

