/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040ddb0 @ 0x0040DDB0 */
/* Body size: 183 addresses */


int FUN_0040ddb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  local_4 = -1;
  DAT_00568d0c = 0xffff;
  local_8 = 0;
  pbVar2 = &DAT_0058bcbf;
  do {
    if (*(short *)(pbVar2 + -7) == param_1) {
      if ((5 < param_1) && ((*pbVar2 & 0x40) == 0)) {
        return local_4;
      }
      iVar1 = FUN_0040acd0((((int)*(short *)(pbVar2 + -5) +
                            (int)(char)(&DAT_004c26c0)[param_1 * 0x14] / 2) * 0x400 - param_2) +
                           0x200,(((int)*(short *)(pbVar2 + -3) +
                                  (int)(char)(&DAT_004c26c0)[param_1 * 0x14] / 2) * 0x400 - param_3)
                                 + 0x200);
      if (iVar1 < DAT_00568d0c) {
        local_4 = local_8;
        DAT_00568d0c = iVar1;
      }
    }
    pbVar2 = pbVar2 + 0x10;
    local_8 = local_8 + 1;
    if (0x58ccbe < (int)pbVar2) {
      return local_4;
    }
  } while( true );
}

