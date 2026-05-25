/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0220 @ 0x004B0220 */


void FUN_004b0220(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  FUN_004afbf0(param_1,0xda);
  FUN_004afc10(param_1,*(int *)(param_1 + 0xec) * 2 + 6);
  FUN_004afbb0(param_1,*(undefined4 *)(param_1 + 0xec));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xec)) {
    piVar3 = (int *)(param_1 + 0xf0);
    do {
      puVar1 = (undefined4 *)*piVar3;
      FUN_004afbb0(param_1,*puVar1);
      iVar2 = puVar1[5];
      iVar5 = puVar1[6];
      if ((*(int *)(param_1 + 0xdc) != 0) &&
         ((*(int *)(param_1 + 0x134) != 0 ||
          ((iVar5 = 0, *(int *)(param_1 + 0x13c) != 0 && (*(int *)(param_1 + 0xac) == 0)))))) {
        iVar2 = 0;
      }
      FUN_004afbb0(param_1,iVar2 * 0x10 + iVar5);
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xec));
  }
  FUN_004afbb0(param_1,*(undefined4 *)(param_1 + 0x134));
  FUN_004afbb0(param_1,*(undefined4 *)(param_1 + 0x138));
  FUN_004afbb0(param_1,*(int *)(param_1 + 0x13c) * 0x10 + *(int *)(param_1 + 0x140));
  return;
}

