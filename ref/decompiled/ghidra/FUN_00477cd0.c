/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477cd0 @ 0x00477CD0 */
/* Body size: 206 addresses */


undefined4 __thiscall FUN_00477cd0(int param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if ((((param_2 != (char *)0x0) && (param_3 != (undefined4 *)0x0)) &&
      (*(int *)(param_1 + 0x5c) != 0)) && (*(int *)(*(int *)(param_1 + 0x5c) + 4) != 0)) {
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = param_4;
    if ((int)(~uVar5 - 1) < param_4) {
      uVar5 = 0xffffffff;
      pcVar7 = param_2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar6 = ~uVar5 - 1;
    }
    if (-1 < iVar6) {
      uVar5 = 0xffffffff;
      pcVar7 = param_2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if ((int)(~uVar5 - 1) < param_4) {
        uVar5 = 0xffffffff;
        pcVar7 = param_2;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        param_4 = ~uVar5 - 1;
      }
      if (param_4 != 0) {
        uVar4 = *param_3;
        iVar6 = param_3[1];
        iVar2 = param_3[3];
        iVar3 = FUN_00477560();
        uVar4 = FUN_004775b0(param_2,uVar4,((iVar2 - iVar6) - iVar3) / 2 + iVar6,param_4);
        return uVar4;
      }
    }
  }
  return 0;
}

