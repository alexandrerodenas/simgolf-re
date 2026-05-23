/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043d520 @ 0x0043D520 */
/* Body size: 171 addresses */


void FUN_0043d520(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  while (((int)(&DAT_00820b70)[iVar2] < 0 ||
         (param_1 != (&DAT_00820d00)[iVar2] + (&DAT_00820b70)[iVar2]))) {
    iVar2 = iVar2 + 1;
    if (99 < iVar2) {
      iVar2 = 0;
      piVar3 = &DAT_00820b70;
      do {
        if (*piVar3 < 0) {
          (&DAT_00820b70)[iVar2] = param_1;
          (&DAT_00820d00)[iVar2] = param_2;
          return;
        }
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + 1;
      } while ((int)piVar3 < 0x820d00);
      return;
    }
  }
  piVar3 = &DAT_00820d00 + iVar2;
  *piVar3 = (&DAT_00820d00)[iVar2] + param_2;
  iVar4 = 0;
  do {
    iVar1 = *piVar3;
    if (*(int *)((int)&DAT_00820b70 + iVar4) == (&DAT_00820b70)[iVar2] + iVar1) {
      *(undefined4 *)((int)&DAT_00820b70 + iVar4) = 0xffffffff;
      *piVar3 = *(int *)((int)&DAT_00820d00 + iVar4) + iVar1;
      *(undefined4 *)((int)&DAT_00820d00 + iVar4) = 0;
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 400);
  return;
}

