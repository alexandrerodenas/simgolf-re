/* Ghidra decompiled: golf.exe */
/* Function: FUN_004011e0 @ 0x004011E0 */
/* Body size: 237 addresses */


void FUN_004011e0(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  
  iVar4 = 0;
  psVar5 = &DAT_0056d1d8;
  do {
    if (*psVar5 == -1) {
      cVar1 = (&DAT_0055d758)[param_2 * 0x25];
      iVar6 = iVar4 * 0x3c;
      *(undefined4 *)(&DAT_0056d1b8 + iVar6) = 0;
      *(short *)(&DAT_0056d1da + iVar6) = (short)param_1;
      (&DAT_0056d1d8)[iVar4 * 0x1e] = (short)cVar1;
      (&DAT_0056d1de)[iVar4 * 0x1e] = param_3;
      (&DAT_0056d1e0)[iVar4 * 0x1e] = param_4;
      *(undefined2 *)(&DAT_0056d1e4 + iVar6) = 0x140;
      do {
        uVar2 = FUN_0045c1e0(4);
        uVar3 = FUN_0045c1e0(4);
      } while ((&DAT_004e6d70)[(uint)uVar3 + param_1 * 0x74 + (uint)uVar2 * 6] != -1);
      *(uint *)(&DAT_0056d1e8 + iVar6) = ((uint)uVar2 * 0x400 + 0x200) / 2;
      *(uint *)(&DAT_0056d1ec + iVar6) = ((uint)uVar3 * 0x400 + 0x200) / 2;
      return;
    }
    psVar5 = psVar5 + 0x1e;
    iVar4 = iVar4 + 1;
  } while ((int)psVar5 < 0x56e948);
  return;
}

