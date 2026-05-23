/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409bf0 @ 0x00409BF0 */
/* Body size: 187 addresses */


void FUN_00409bf0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_005736bc;
  do {
    if (piVar3[-1] != -1) {
      iVar1 = FUN_00467270(piVar3[2],(int)(piVar3[3] + (piVar3[3] >> 0x1f & 0xfU)) >> 4);
      piVar3[-1] = piVar3[-1] + iVar1;
      iVar1 = FUN_004672b0(piVar3[2],(int)(piVar3[3] + (piVar3[3] >> 0x1f & 0xfU)) >> 4);
      *piVar3 = *piVar3 - iVar1;
      iVar2 = piVar3[1] + ((int)(piVar3[4] + (piVar3[4] >> 0x1f & 0x1fU)) >> 5);
      piVar3[1] = iVar2;
      iVar1 = DAT_00834170;
      if (iVar2 < 1) {
        piVar3[4] = 0;
        piVar3[3] = 0;
        piVar3[1] = 0;
        if (piVar3[5] + 0x400 < iVar1) {
          piVar3[-1] = -1;
        }
      }
      piVar3[3] = piVar3[3] - (piVar3[3] >> 4);
      if ((piVar3[1] != 0) || (piVar3[4] != 0)) {
        piVar3[4] = piVar3[4] + -0x40;
      }
    }
    piVar3 = piVar3 + 9;
  } while ((int)piVar3 < 0x575abc);
  return;
}

