/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015ba0 @ 0x30015BA0 */


int __cdecl FUN_30015ba0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -2;
    *DAT_30045890 = ((uint)*DAT_30045898 << 0x10 | (uint)*DAT_30045898) << 8 | 0x800080;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890[1] = ((uint)*pbVar1 << 0x10 | (uint)*pbVar1) << 8 | 0x800080;
    *DAT_30045894 = ((uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c) << 8 | 0x800080;
    pbVar1 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045894[1] = ((uint)*pbVar1 << 0x10 | (uint)*pbVar1) << 8 | 0x800080;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar2);
  return param_1 + param_2;
}

