/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449330 @ 0x00449330 */
/* Body size: 128 addresses */


int FUN_00449330(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 + param_1 * 0x32;
  if ((1 << ((byte)param_3 & 0x1f) & (int)(char)(&DAT_005619a0)[iVar1]) == 0) {
    return 0;
  }
  if ((&DAT_00578378)[*(char *)((int)&DAT_005722e8 + iVar1) * 0x30] != '\0') {
    return (int)(char)(&DAT_00578378)[*(char *)((int)&DAT_005722e8 + iVar1) * 0x30];
  }
  return (int)(char)(&DAT_00578378)
                    [*(char *)((int)&DAT_005722e8 +
                              param_2 + (&DAT_004c2898)[param_3] +
                                        ((&DAT_004c2878)[param_3] + param_1) * 0x32) * 0x30];
}

