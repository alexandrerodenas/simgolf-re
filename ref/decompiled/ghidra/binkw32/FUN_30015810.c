/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015810 @ 0x30015810 */


int __cdecl FUN_30015810(int param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  uint3 uVar4;
  int iVar5;
  
  iVar5 = param_1;
  do {
    iVar5 = iVar5 + -2;
    uVar4 = CONCAT21(CONCAT11(*DAT_300458a4,DAT_30045898[1]),*DAT_300458a0);
    uVar2 = *DAT_30045898;
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 = CONCAT31(uVar4,uVar2);
    pbVar1 = DAT_3004589c + 1;
    bVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 = (uint)*pbVar1 << 0x10 | (uVar4 & 0xff00ff) << 8 | (uint)bVar3;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
  } while (0 < iVar5);
  return param_2 + param_1;
}

