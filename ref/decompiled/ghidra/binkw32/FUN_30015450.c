/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015450 @ 0x30015450 */


int __cdecl FUN_30015450(int param_1,int param_2)

{
  byte *pbVar1;
  uint3 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1;
  do {
    iVar4 = iVar4 + -2;
    uVar2 = CONCAT21(CONCAT11(*DAT_300458a4,*DAT_30045898),*DAT_300458a0);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    *DAT_30045890 = CONCAT31(uVar2,*DAT_30045898);
    pbVar1 = DAT_30045898 + 1;
    uVar3 = (uVar2 & 0xff00ff) << 8;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890[1] = (uint)*pbVar1 << 0x10 | uVar3 | (uint)*pbVar1;
    *DAT_30045894 = (uint)*DAT_3004589c << 0x10 | uVar3 | (uint)*DAT_3004589c;
    pbVar1 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045894[1] = (uint)*pbVar1 << 0x10 | uVar3 | (uint)*pbVar1;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar4);
  return param_1 + param_2;
}

