/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004352d @ 0x1004352D */
/* Body size: 164 addresses */


int __cdecl FUN_1004352d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10047710(2);
  iVar4 = 0;
  if (0 < DAT_100b7080) {
    do {
      iVar2 = *(int *)(DAT_100b5d40 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100436bc(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100b5d40 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1004349a(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1004349a(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1004370e(iVar4,*(int *)(DAT_100b5d40 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100b7080);
  }
  FUN_10047771(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}

