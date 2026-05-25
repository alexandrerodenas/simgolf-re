/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043d5d0 @ 0x0043D5D0 */


int FUN_0043d5d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (((int)(&DAT_00820b70)[iVar3] < 0 || ((int)(&DAT_00820d00)[iVar3] < param_1))) {
    iVar3 = iVar3 + 1;
    if (99 < iVar3) {
      return -1;
    }
  }
  iVar2 = (&DAT_00820b70)[iVar3];
  piVar1 = &DAT_00820d00 + iVar3;
  if (param_1 < *piVar1) {
    (&DAT_00820b70)[iVar3] = (&DAT_00820b70)[iVar3] + param_1;
    *piVar1 = *piVar1 - param_1;
    return iVar2;
  }
  *piVar1 = 0;
  (&DAT_00820b70)[iVar3] = -1;
  return iVar2;
}

