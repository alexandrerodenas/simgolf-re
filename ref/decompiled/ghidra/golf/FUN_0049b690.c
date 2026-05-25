/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049b690 @ 0x0049B690 */


void __thiscall FUN_0049b690(int *param_1,char *param_2,int param_3,byte param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar6 = 0;
  piVar5 = param_1 + 0x5c;
  do {
    if (*piVar5 == 0) {
      if (iVar6 < 0x10) {
        uVar2 = 0xffffffff;
        param_1[iVar6 * 0x16 + 0x5c] = param_3;
        *(byte *)(param_1 + iVar6 * 0x16 + 0x61) = param_4;
        pcVar7 = (char *)((int)param_1 + iVar6 * 0x58 + 0x185);
        *pcVar7 = '\0';
        goto code_r0x0049b6ec;
      }
      break;
    }
    if (*piVar5 == param_3) {
      return;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 0x16;
  } while (iVar6 < 0x10);
  goto LAB_0049b729;
  while( true ) {
    uVar2 = uVar2 - 1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x0049b6ec:
    pcVar9 = param_2;
    if (uVar2 == 0) break;
  }
  uVar2 = ~uVar2;
  iVar3 = -1;
  do {
    pcVar8 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar9 + -uVar2;
  pcVar9 = pcVar8 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if ((param_4 & 1) != 0) {
    param_1[0x1e0] = param_3;
  }
LAB_0049b729:
  param_1[0x1be] = param_1[0x1be] + 1;
  if (param_1[0x1df] == param_1[0x1e0]) {
    FUN_00497b40();
  }
  (**(code **)(*param_1 + 8))((int)param_1 + iVar6 * 0x58 + 0x185,param_1[iVar6 * 0x16 + 0x5c]);
  FUN_0049b970(param_1[iVar6 * 0x16 + 0x5c]);
  if (param_1[0x32] == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(param_1[0x33] + 8);
  }
  (**(code **)(*piVar5 + 0x84))(0x1000,0,0);
  return;
}

