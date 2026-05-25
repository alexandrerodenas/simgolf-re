/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084918b @ 0x0084918B */


int FUN_0084918b(int param_1)

{
  int local_14;
  int local_10 [3];
  
  local_10[1] = 0xfffffff;
  FUN_00848fd3(param_1,&local_14,local_10);
  return ((((*(int *)(local_14 + 0x3c) + param_1 + 0x18 + (uint)*(ushort *)(local_10[0] + 0x14)) -
           local_14) + (uint)*(ushort *)(local_10[0] + 6) * 0x28 >> 0xc) + 1) * 0x1000;
}

