/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10047587 @ 0x10047587 */
/* Body size: 222 addresses */


char * __cdecl FUN_10047587(undefined4 param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = DAT_10057e14;
  if (DAT_10057e18 == '\0') {
    piVar1 = (int *)FUN_1004ba07();
    FUN_1004b990(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,(int)piVar1);
  }
  else if (DAT_10057e1c == param_3) {
    iVar2 = (*DAT_10057e14 == 0x2d) + DAT_10057e1c;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  pcVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    pcVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_1004779b(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_1004779b(pcVar3,1);
    *pcVar3 = DAT_100567a4;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_10057e18 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_1004779b(pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}

