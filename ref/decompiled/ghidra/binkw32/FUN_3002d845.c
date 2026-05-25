/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d845 @ 0x3002D845 */


char * __cdecl FUN_3002d845(undefined4 param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = DAT_3004f230;
  if (DAT_3004f234 == '\0') {
    piVar1 = (int *)FUN_3002fee7();
    FUN_3002fe70(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,(int)piVar1);
  }
  else if (DAT_3004f238 == param_3) {
    iVar2 = (*DAT_3004f230 == 0x2d) + DAT_3004f238;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  pcVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    pcVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_3002da59(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_3002da59(pcVar3,1);
    *pcVar3 = DAT_30040e20;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_3004f234 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_3002da59(pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}

