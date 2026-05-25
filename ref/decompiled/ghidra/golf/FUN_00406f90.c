/* Ghidra decompiled: golf.exe */
/* Function: FUN_00406f90 @ 0x00406F90 */


void FUN_00406f90(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  param_2 = param_2 + param_1 * 0x22;
  bVar1 = *(byte *)((int)&DAT_005a4998 + param_2 + param_1 * 0x11);
  psVar3 = &DAT_004c2f68;
  iVar4 = param_1 * 0x11 + param_2 + 0x5a4930;
  do {
    iVar2 = 0;
    do {
      if ((int)((int)*psVar3 + (uint)bVar1) < (int)(uint)*(byte *)(iVar4 + iVar2)) {
        *(byte *)(iVar4 + iVar2) = *(byte *)(iVar4 + iVar2) - 1;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < 5);
    iVar4 = iVar4 + 0x33;
  } while ((int)psVar3 < 0x4c2f9a);
  return;
}

