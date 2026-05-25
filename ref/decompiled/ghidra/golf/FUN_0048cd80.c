/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048cd80 @ 0x0048CD80 */


int FUN_0048cd80(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  int iVar6;
  char *pcVar7;
  
  piVar2 = param_1;
  iVar6 = -1;
  if (param_1 != (int *)0x0) {
    param_1 = (int *)0x0;
    ppuVar5 = &PTR_DAT_004e4584;
    do {
      if (0x4e45db < (int)ppuVar5) {
        return iVar6;
      }
      uVar4 = 0xffffffff;
      pcVar7 = *ppuVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar3 = FUN_004ad580(*piVar2,*ppuVar5,~uVar4 - 1);
      if (iVar3 == 0) {
        uVar4 = 0xffffffff;
        pcVar7 = *ppuVar5;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar6 = *piVar2 + (~uVar4 - 1);
        *piVar2 = iVar6;
        FUN_004925b0(iVar6);
        iVar6 = (int)param_1;
      }
      ppuVar5 = ppuVar5 + 1;
      param_1 = (int *)((int)param_1 + 1);
    } while (iVar6 == -1);
  }
  return iVar6;
}

