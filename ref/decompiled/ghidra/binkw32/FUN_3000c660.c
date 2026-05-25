/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000c660 @ 0x3000C660 */


int __cdecl FUN_3000c660(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = (&DAT_30048d04)[bVar1];
    *DAT_30045890 = uVar2;
    DAT_30045890[1] = uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = (&DAT_30048d04)[bVar1];
    *DAT_30045894 = uVar2;
    DAT_30045894[1] = uVar2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}

