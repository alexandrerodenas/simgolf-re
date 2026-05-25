/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a140 @ 0x3002A140 */


void FUN_3002a140(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  
  iVar3 = param_1 << 1;
  puVar4 = DAT_30045890;
  pbVar5 = DAT_30045898;
  do {
    DAT_30045890 = puVar4 + 2;
    bVar1 = pbVar5[1];
    DAT_30045898 = pbVar5 + 2;
    bVar2 = pbVar5[1];
    *puVar4 = (uint)*pbVar5 << 0x18 | 0x800080 | (uint)*pbVar5 << 8;
    iVar3 = iVar3 + -1;
    puVar4[1] = (uint)bVar1 << 0x18 | 0x800080 | (uint)bVar2 << 8;
    puVar4 = DAT_30045890;
    pbVar5 = DAT_30045898;
  } while (iVar3 != 0);
  iVar3 = param_1 << 1;
  do {
    puVar4 = DAT_30045894 + 2;
    bVar1 = DAT_3004589c[1];
    pbVar5 = DAT_3004589c + 2;
    bVar2 = DAT_3004589c[1];
    *DAT_30045894 = (uint)*DAT_3004589c << 0x18 | 0x800080 | (uint)*DAT_3004589c << 8;
    iVar3 = iVar3 + -1;
    DAT_30045894[1] = (uint)bVar1 << 0x18 | 0x800080 | (uint)bVar2 << 8;
    DAT_30045894 = puVar4;
    DAT_3004589c = pbVar5;
  } while (iVar3 != 0);
  return;
}

