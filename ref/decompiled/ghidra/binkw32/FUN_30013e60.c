/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30013e60 @ 0x30013E60 */


int __cdecl FUN_30013e60(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_300458a8;
    bVar2 = *DAT_30045898;
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = *(ushort *)(&DAT_3004d168 + bVar1) | *(ushort *)(&DAT_30048904 + bVar2);
    bVar1 = *DAT_300458ac;
    bVar2 = *DAT_3004589c;
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = *(ushort *)(&DAT_3004d168 + bVar1) | *(ushort *)(&DAT_30048904 + bVar2);
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}

