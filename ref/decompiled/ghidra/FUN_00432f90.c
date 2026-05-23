/* Ghidra decompiled: golf.exe */
/* Function: FUN_00432f90 @ 0x00432F90 */
/* Body size: 167 addresses */


int FUN_00432f90(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar6 = 0;
  iVar2 = FUN_00467170(param_1 + -0xed,param_2 + -0x20d);
  if (iVar2 < 0x14) {
    iVar4 = 0x16;
  }
  iVar2 = FUN_00467170(param_1 + -0x105,param_2 + -0x242);
  if (iVar2 < 0xf) {
    iVar4 = 0x15;
  }
  psVar3 = &DAT_004c79b6;
  piVar5 = &DAT_00570cd4;
  while( true ) {
    if ((((psVar3[-1] <= param_1) && (param_1 < psVar3[-1] + 0x3e)) &&
        (iVar2 = *piVar5 + -10 + (int)*psVar3, iVar2 + -0x2c <= param_2)) && (param_2 < iVar2))
    break;
    pcVar1 = &DAT_004c79a1 + iVar6;
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 0x2c;
    psVar3 = psVar3 + 2;
    if (*pcVar1 == -1) {
      return iVar4;
    }
  }
  return iVar6;
}

