/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a28a0 @ 0x004A28A0 */
/* Body size: 220 addresses */


undefined4 __thiscall FUN_004a28a0(int *param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar2 = *(int *)(*(int *)(*param_1 + 8) + 0xd0 + (int)param_1);
  if (iVar2 == 10) {
    return 1;
  }
  if (param_3 != (char *)0x0) {
    if (param_1[iVar2 + 0xb] != 0) {
      FUN_004a5007(param_1[iVar2 + 0xb]);
    }
    uVar4 = 0xffffffff;
    pcVar7 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puVar3 = _malloc(~uVar4);
    param_1[iVar2 + 0xb] = (int)puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      return 4;
    }
    *puVar3 = 0;
    uVar4 = 0xffffffff;
    do {
      pcVar7 = param_3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar9 = (char *)param_1[iVar2 + 0xb];
    do {
      pcVar8 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  iVar5 = *(int *)(*param_1 + 8);
  *(undefined4 *)(iVar5 + 0xdc + (int)param_1) = param_2;
  *(undefined4 *)(iVar5 + 0xe0 + (int)param_1) = 0;
  *(undefined4 *)((int)param_1 + iVar5 + 0xe4) = 0;
  iVar5 = FUN_00401d10(iVar2);
  if (iVar5 != 0) {
    return 4;
  }
  param_1[iVar2 + 0x15] = param_4;
  return 0;
}

