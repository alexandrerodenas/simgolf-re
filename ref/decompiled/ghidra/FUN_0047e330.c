/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e330 @ 0x0047E330 */
/* Body size: 286 addresses */


void FUN_0047e330(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  iVar4 = 0;
  iVar2 = DAT_0083aae0;
  if (0 < *(int *)(param_1 + 0x22c)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x224) + iVar4 * 4);
      if ((*(byte *)(iVar3 + 0x9c) & 0x20) == 0) {
        if ((iVar2 != 0) && (iVar2 == iVar3)) {
          DAT_0083ab90 = 0;
          bVar1 = true;
        }
        iVar2 = FUN_004801f0();
        if (iVar2 != 0) {
          FUN_0047e330(*(undefined4 *)(*(int *)(param_1 + 0x224) + iVar4 * 4));
        }
        iVar2 = DAT_0083aae0;
        if ((DAT_0083aae0 != 0) && (bVar1)) break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x22c));
  }
  if (((iVar2 == 0) || (!bVar1)) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x22c))) {
    do {
      if ((iVar2 != 0) && (iVar2 == *(int *)(*(int *)(param_1 + 0x224) + iVar4 * 4))) {
        DAT_0083ab90 = 0;
        bVar1 = true;
      }
      if (((*(int *)(param_1 + 0xb0) == param_1) &&
          ((*(byte *)(*(int *)(*(int *)(param_1 + 0x224) + iVar4 * 4) + 0x9c) & 0x20) != 0)) &&
         (iVar3 = FUN_004801f0(), iVar2 = DAT_0083aae0, iVar3 != 0)) {
        FUN_0047e330(*(undefined4 *)(*(int *)(param_1 + 0x224) + iVar4 * 4));
        iVar2 = DAT_0083aae0;
      }
    } while (((iVar2 == 0) || (!bVar1)) && (iVar4 = iVar4 + 1, iVar4 < *(int *)(param_1 + 0x22c)));
  }
  iVar2 = FUN_004801f0();
  if (iVar2 != 0) {
    (&DAT_00839ac0)[DAT_0083ab90] = param_1;
    DAT_0083ab90 = DAT_0083ab90 + 1;
  }
  return;
}

