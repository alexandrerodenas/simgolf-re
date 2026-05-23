/* Ghidra decompiled: golf.exe */
/* Function: FUN_004781f0 @ 0x004781F0 */
/* Body size: 221 addresses */


undefined4 __thiscall FUN_004781f0(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(*(int *)(param_1 + 0x5c) + 4) == 0)) {
      return 3;
    }
    uVar6 = 0xffffffff;
    pcVar8 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar7 = param_4;
    if ((int)(~uVar6 - 1) < param_4) {
      uVar6 = 0xffffffff;
      pcVar8 = param_2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar7 = ~uVar6 - 1;
    }
    if (-1 < iVar7) {
      uVar6 = 0xffffffff;
      pcVar8 = param_2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if ((int)(~uVar6 - 1) < param_4) {
        uVar6 = 0xffffffff;
        pcVar8 = param_2;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        param_4 = ~uVar6 - 1;
      }
      if (param_4 != 0) {
        iVar3 = FUN_00477280(param_2,param_4);
        iVar7 = *(int *)(param_3 + 8);
        iVar2 = *(int *)(param_3 + 4);
        iVar4 = FUN_00477560();
        uVar5 = FUN_004775b0(param_2,iVar7 - iVar3,
                             ((*(int *)(param_3 + 0xc) - iVar2) - iVar4) / 2 + iVar2,param_4);
        return uVar5;
      }
    }
  }
  return 0;
}

