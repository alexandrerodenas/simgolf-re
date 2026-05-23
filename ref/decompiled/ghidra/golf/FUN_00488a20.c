/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488a20 @ 0x00488A20 */
/* Body size: 137 addresses */


undefined4 __thiscall FUN_00488a20(int param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 0x5f8) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x5f8));
    *(undefined4 *)(param_1 + 0x5f8) = 0;
  }
  if (param_2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar2 = _malloc(~uVar3);
    *(undefined1 **)(param_1 + 0x5f8) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      return 4;
    }
    *puVar2 = 0;
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar8 = *(char **)(param_1 + 0x5f8);
    do {
      pcVar7 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar3;
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
  }
  return 0;
}

