/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b289 @ 0x3002B289 */


undefined4 FUN_3002b289(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    puVar5 = puVar6 + 3;
    uVar1 = (&DAT_30048d04)[DAT_30045898[1]];
    uVar2 = (&DAT_30048d04)[DAT_30045898[2]];
    iVar3 = (&DAT_30048d04)[DAT_30045898[3]];
    *puVar6 = (&DAT_30048d04)[*DAT_30045898] | uVar1 << 0x18;
    puVar6[1] = uVar1 >> 8 | uVar2 << 0x10;
    puVar4 = DAT_30045890;
    DAT_30045898 = DAT_30045898 + 4;
    puVar6[2] = uVar2 >> 0x10 | iVar3 << 8;
    puVar6 = puVar5;
  } while (puVar5 < puVar4);
  puVar6 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    puVar5 = puVar6 + 3;
    uVar1 = (&DAT_30048d04)[DAT_3004589c[1]];
    uVar2 = (&DAT_30048d04)[DAT_3004589c[2]];
    iVar3 = (&DAT_30048d04)[DAT_3004589c[3]];
    *puVar6 = (&DAT_30048d04)[*DAT_3004589c] | uVar1 << 0x18;
    puVar6[1] = uVar1 >> 8 | uVar2 << 0x10;
    puVar4 = DAT_30045894;
    DAT_3004589c = DAT_3004589c + 4;
    puVar6[2] = uVar2 >> 0x10 | iVar3 << 8;
    puVar6 = puVar5;
  } while (puVar5 != puVar4);
  return 0;
}

