/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040df80 @ 0x0040DF80 */


int FUN_0040df80(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar2 = 0;
  psVar4 = &DAT_0058bcb8;
  do {
    sVar1 = *psVar4;
    if (sVar1 != -1) {
      iVar3 = (int)(char)(&DAT_004c26c0)[sVar1 * 0x14];
      if (((5 < sVar1) && (sVar1 != 5)) && (sVar1 != 7)) {
        iVar3 = iVar3 + -1 + (&DAT_005a8c38)[sVar1];
      }
      if (((psVar4[1] <= param_1) && (param_1 < psVar4[1] + iVar3)) &&
         ((psVar4[2] <= param_2 && (param_2 < psVar4[2] + iVar3)))) {
        return iVar2;
      }
    }
    psVar4 = psVar4 + 8;
    iVar2 = iVar2 + 1;
    if (0x58ccb7 < (int)psVar4) {
      return -1;
    }
  } while( true );
}

