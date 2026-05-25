/* Ghidra decompiled: golf.exe */
/* Function: FUN_004011b0 @ 0x004011B0 */


void FUN_004011b0(int param_1,int param_2)

{
  short *psVar1;
  
  psVar1 = &DAT_0056d1e0;
  do {
    if ((psVar1[-1] == param_1) && (*psVar1 == param_2)) {
      psVar1[-4] = -1;
    }
    psVar1 = psVar1 + 0x1e;
  } while ((int)psVar1 < 0x56e950);
  return;
}

