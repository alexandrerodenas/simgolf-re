/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401c00 @ 0x00401C00 */


void FUN_00401c00(void)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  psVar1 = &DAT_0056d1d8;
  do {
    if (*psVar1 != -1) {
      FUN_004017d0(iVar2);
    }
    psVar1 = psVar1 + 0x1e;
    iVar2 = iVar2 + 1;
  } while ((int)psVar1 < 0x56e948);
  return;
}

