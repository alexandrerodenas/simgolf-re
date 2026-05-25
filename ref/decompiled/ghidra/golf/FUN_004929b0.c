/* Ghidra decompiled: golf.exe */
/* Function: FUN_004929b0 @ 0x004929B0 */


int __thiscall
FUN_004929b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,char *param_8)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0x58)) {
    FUN_00492690();
  }
  iVar2 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar2 + 1;
  iVar8 = iVar2 * 0x20;
  FUN_00492660();
  iVar6 = *(int *)(param_1 + 0x50);
  *(int *)(iVar6 + 4 + iVar8) = param_4;
  iVar6 = iVar6 + 4 + iVar8;
  *(int *)(iVar6 + 8) = param_4 + param_6;
  *(int *)(iVar6 + 4) = param_5;
  *(int *)(iVar6 + 0xc) = param_5 + param_7;
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18 + iVar8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x14 + iVar8) = param_3;
  if (param_8 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar9 = param_8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pvVar4 = _malloc(~uVar5);
    *(void **)(*(int *)(param_1 + 0x50) + 0x1c + iVar8) = pvVar4;
    puVar3 = *(undefined1 **)(*(int *)(param_1 + 0x50) + 0x1c + iVar8);
    if (puVar3 == (undefined1 *)0x0) {
      return 4;
    }
    *puVar3 = 0;
    uVar5 = 0xffffffff;
    do {
      pcVar9 = param_8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = param_8 + 1;
      cVar1 = *param_8;
      param_8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar11 = *(char **)(*(int *)(param_1 + 0x50) + 0x1c + iVar8);
    do {
      pcVar10 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -uVar5;
    pcVar11 = pcVar10 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  return iVar2;
}

