/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409a90 @ 0x00409A90 */
/* Body size: 345 addresses */


void FUN_00409a90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = &DAT_005736b4;
  do {
    if (piVar5[1] != -1) {
      FUN_0045c1e0(((int)(DAT_00822c88 * 0x400 + (DAT_00822c88 * 0x400 >> 0x1f & 3U)) >> 2) + 0x600)
      ;
      FUN_0040acd0(piVar5[-1] - (&DAT_0057958c)[param_1 * 0x40],
                   *piVar5 - (&DAT_00579590)[param_1 * 0x40]);
    }
    if ((DAT_0056c7b4 & 1) != 0) {
      DAT_0056c7b4 = DAT_0056c7b4 & 0xfffffffe;
      FUN_00467a00(param_1,0x18,0x14);
    }
    FUN_00407000((&DAT_0057958c)[param_1 * 0x40],(&DAT_00579590)[param_1 * 0x40],6);
    piVar5 = piVar5 + 9;
  } while ((int)piVar5 < 0x575ab4);
  iVar4 = 0;
  piVar5 = &DAT_005736b8;
  do {
    if (*piVar5 == -1) {
      uVar1 = (&DAT_0057958c)[param_1 * 0x40];
      uVar2 = (&DAT_00579594)[param_1 * 0x40];
      (&DAT_005736b0)[iVar4 * 9] = uVar1;
      (&DAT_005736b8)[iVar4 * 9] = uVar1;
      uVar1 = (&DAT_00579590)[param_1 * 0x40];
      (&DAT_005736b4)[iVar4 * 9] = uVar1;
      (&DAT_005736bc)[iVar4 * 9] = uVar1;
      uVar1 = *(undefined4 *)(&DAT_00579598 + param_1 * 0x100);
      (&DAT_005736c0)[iVar4 * 9] = uVar2;
      (&DAT_005736c4)[iVar4 * 9] = uVar1;
      iVar3 = *(int *)(&DAT_005795a0 + param_1 * 0x100);
      (&DAT_005736c8)[iVar4 * 9] = (int)(&DAT_0057959c)[param_1 * 0x40] / 2;
      (&DAT_005736cc)[iVar4 * 9] = iVar3 / 3;
      (&DAT_005736d0)[iVar4 * 9] = DAT_00834170;
      return;
    }
    piVar5 = piVar5 + 9;
    iVar4 = iVar4 + 1;
  } while ((int)piVar5 < 0x575ab8);
  return;
}

