/* Ghidra decompiled: golf.exe */
/* Function: FUN_00422430 @ 0x00422430 */


int FUN_00422430(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005a9ce0;
  iVar2 = 0;
  while ((param_1 != (&DAT_005a47b8)[iVar2] || (param_2 != (&DAT_005685c8)[iVar2]))) {
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      (&DAT_005a47b8)[DAT_005a9ce0] = param_1;
      (&DAT_005685c8)[iVar1] = param_2;
      iVar1 = (param_1 * 0x14) / 0x19;
      iVar4 = (iVar1 * 0x21 - (iVar1 * iVar1) / 0x30) + 0x40;
      iVar1 = (param_1 << 10) / 0x19;
      iVar2 = iVar4 / 2;
      do {
        if (param_3 == 0) {
          iVar3 = FUN_004223f0(iVar4,param_2);
        }
        else {
          iVar3 = FUN_004223c0(iVar4);
        }
        if (iVar1 < iVar3) {
          iVar4 = iVar4 - iVar2;
        }
        if (iVar3 < iVar1) {
          iVar4 = iVar4 + iVar2;
        }
        iVar2 = iVar2 / 2;
      } while (2 < iVar2);
      *(int *)(&DAT_0053fd20 + DAT_005a9ce0 * 4) = iVar4;
      DAT_005a9ce0 = (DAT_005a9ce0 + 1) % 10;
      return iVar4;
    }
  }
  return *(int *)(&DAT_0053fd20 + iVar2 * 4);
}

