/* Ghidra decompiled: golf.exe */
/* Function: FUN_004add10 @ 0x004ADD10 */


undefined4 FUN_004add10(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_004adf56(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_00840a88 == DAT_00840a8c) {
    DAT_00840a88 = (int *)FUN_004adeef(DAT_00840a88);
  }
  if (DAT_00840a88 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_00840a90 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_00840a88 = _malloc(4);
      if (DAT_00840a88 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_00840a88 = 0;
      if (DAT_00840a90 == (undefined4 *)0x0) {
        DAT_00840a90 = _malloc(4);
        if (DAT_00840a90 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_00840a90 = 0;
      }
    }
    else {
      iVar2 = FUN_004ad9fa();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_00840a88;
  iVar2 = FUN_004ade97(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_004a6980(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_004ade44;
    }
    piVar5 = piVar3 + iVar2;
    FUN_004a5007(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_004a6980(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_004ade44;
  }
  DAT_00840a88 = piVar3;
LAB_004ade44:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_004abca0(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_004a5007(lpName);
    }
  }
  return 0;
}

