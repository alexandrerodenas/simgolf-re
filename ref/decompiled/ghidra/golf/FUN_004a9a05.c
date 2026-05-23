/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9a05 @ 0x004A9A05 */
/* Body size: 164 addresses */


int FUN_004a9a05(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_004a79b2(2);
  iVar3 = 0;
  if (0 < DAT_00842020) {
    do {
      iVar1 = *(int *)(DAT_00841010 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_004a98a3(iVar3,iVar1);
        iVar1 = *(int *)(DAT_00841010 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_004a9972(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_004a9972(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_004a98f5(iVar3,*(undefined4 *)(DAT_00841010 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00842020);
  }
  FUN_004a7a13(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

