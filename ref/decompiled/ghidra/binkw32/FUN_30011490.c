/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30011490 @ 0x30011490 */


int __cdecl FUN_30011490(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar2 = *(undefined2 *)(&DAT_30048d04 + bVar1);
    *DAT_30045890 = uVar2;
    *(char *)(DAT_30045890 + 1) = (char)uVar2;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar2 = *(undefined2 *)(&DAT_30048d04 + bVar1);
    *DAT_30045894 = uVar2;
    *(char *)(DAT_30045894 + 1) = (char)uVar2;
    DAT_30045890 = (undefined2 *)((int)DAT_30045890 + 3);
    DAT_30045894 = (undefined2 *)((int)DAT_30045894 + 3);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1 + param_2;
}

