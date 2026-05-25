/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30015e80 @ 0x30015E80 */


int __cdecl FUN_30015e80(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1;
  do {
    iVar5 = iVar5 + -2;
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*DAT_30045898,*DAT_300458a4),*DAT_30045898),*DAT_300458a0);
    DAT_300458a4 = DAT_300458a4 + 1;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar1 = DAT_30045898[1];
    uVar4 = uVar2 & 0xff00ff;
    *DAT_30045890 = uVar2;
    uVar3 = ((uint)bVar1 << 0x10 | (uint)bVar1) << 8 | uVar4;
    DAT_30045890[1] = uVar3;
    *(uint *)(DAT_300458d4 + (int)DAT_30045890) = uVar2;
    *(uint *)(DAT_300458d4 + 4 + (int)DAT_30045890) = uVar3;
    uVar2 = ((uint)*DAT_3004589c << 0x10 | (uint)*DAT_3004589c) << 8 | uVar4;
    uVar4 = ((uint)DAT_3004589c[1] << 0x10 | (uint)DAT_3004589c[1]) << 8 | uVar4;
    *DAT_30045894 = uVar2;
    DAT_30045894[1] = uVar4;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar2;
    *(uint *)((int)DAT_30045894 + DAT_300458d4 + 4) = uVar4;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
  } while (0 < iVar5);
  return param_1 + param_2;
}

