/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000efe0 @ 0x3000EFE0 */


int __cdecl FUN_3000efe0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    uVar1 = (&DAT_30048d04)[*DAT_30045898] | (uint)*DAT_300458a8 << 0x18;
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1;
    *(uint *)(DAT_300458d4 + (int)DAT_30045890) = uVar1;
    uVar1 = (&DAT_30048d04)[*DAT_3004589c] | (uint)*DAT_300458ac << 0x18;
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1;
    *(uint *)((int)DAT_30045894 + DAT_300458d4) = uVar1;
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}

