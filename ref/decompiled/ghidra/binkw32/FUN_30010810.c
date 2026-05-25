/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30010810 @ 0x30010810 */


int __cdecl FUN_30010810(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = (&DAT_30048d04)[bVar1] | (&DAT_30048d04)[bVar1] << 8;
    *DAT_30045890 = uVar2;
    *(short *)(DAT_30045890 + 1) = (short)uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = (&DAT_30048d04)[bVar1] | (&DAT_30048d04)[bVar1] << 8;
    *DAT_30045894 = uVar2;
    *(short *)(DAT_30045894 + 1) = (short)uVar2;
    DAT_30045890 = (uint *)((int)DAT_30045890 + 6);
    DAT_30045894 = (uint *)((int)DAT_30045894 + 6);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}

