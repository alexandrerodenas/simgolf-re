/* Ghidra decompiled: golf.exe */
/* Function: FUN_004099f0 @ 0x004099F0 */
/* Body size: 151 addresses */


void FUN_004099f0(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  psVar2 = &DAT_0059fc60;
  do {
    if (*psVar2 == -1) {
      iVar3 = iVar1 * 0x388;
      (&DAT_0059fc60)[iVar1 * 0x1c4] = (short)param_1;
      *(undefined2 *)(iVar3 + 0x59fc62) = (&DAT_0057955a)[param_1 * 0x80];
      *(undefined2 *)(&DAT_0059fc64 + iVar3) = 0;
      FUN_00409950(iVar1);
      puVar4 = &DAT_005794b8 + param_1 * 0x40;
      puVar5 = (undefined4 *)(&DAT_0059fde8 + iVar3);
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = &DAT_005794b8 + (short)(&DAT_0057955a)[param_1 * 0x80] * 0x40;
      puVar5 = (undefined4 *)(&DAT_0059fee8 + iVar3);
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      return;
    }
    psVar2 = psVar2 + 0x1c4;
    iVar1 = iVar1 + 1;
  } while ((int)psVar2 < 0x5a34e0);
  return;
}

