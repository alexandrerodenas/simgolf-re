/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477eb0 @ 0x00477EB0 */


undefined4 __thiscall FUN_00477eb0(int param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  
  if ((param_2 != (char *)0x0) && (param_3 != (int *)0x0)) {
    iVar2 = *param_3;
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    iVar5 = param_3[1];
    if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(*(int *)(param_1 + 0x5c) + 4) == 0)) {
      return 3;
    }
    uVar9 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iVar6 = param_4;
    if ((int)(~uVar9 - 1) < param_4) {
      uVar9 = 0xffffffff;
      pcVar10 = param_2;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      iVar6 = ~uVar9 - 1;
    }
    if (-1 < iVar6) {
      uVar9 = 0xffffffff;
      pcVar10 = param_2;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if ((int)(~uVar9 - 1) < param_4) {
        uVar9 = 0xffffffff;
        pcVar10 = param_2;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        param_4 = ~uVar9 - 1;
      }
      if (param_4 != 0) {
        iVar6 = FUN_00477250(param_2);
        iVar7 = FUN_00477560();
        uVar8 = FUN_004775b0(param_2,((iVar3 - iVar2) - iVar6) / 2 + iVar2,
                             ((iVar4 - iVar5) - iVar7) / 2 + iVar5,param_4);
        return uVar8;
      }
    }
  }
  return 0;
}

