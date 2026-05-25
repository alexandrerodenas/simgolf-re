/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30013390 @ 0x30013390 */


int __cdecl FUN_30013390(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458a8);
    uVar2 = *(ushort *)(&DAT_30048904 + *DAT_30045898);
    DAT_300458a8 = DAT_300458a8 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 = uVar1 | uVar2;
    DAT_30045890[1] = uVar1 | uVar2;
    uVar1 = *(ushort *)(&DAT_3004d168 + *DAT_300458ac);
    uVar2 = *(ushort *)(&DAT_30048904 + *DAT_3004589c);
    DAT_300458ac = DAT_300458ac + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 = uVar1 | uVar2;
    DAT_30045894[1] = uVar1 | uVar2;
    DAT_30045890 = DAT_30045890 + 2;
    DAT_30045894 = DAT_30045894 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_2 + param_1;
}

