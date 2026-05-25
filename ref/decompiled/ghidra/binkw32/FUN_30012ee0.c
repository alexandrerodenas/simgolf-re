/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30012ee0 @ 0x30012EE0 */


int __cdecl FUN_30012ee0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = *(undefined2 *)(&DAT_30048904 + bVar1);
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = *(undefined2 *)(&DAT_30048904 + bVar1);
    DAT_30045890 = DAT_30045890 + 1;
    DAT_30045894 = DAT_30045894 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1 + param_2;
}

