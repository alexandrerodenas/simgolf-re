/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004a2a6 @ 0x1004A2A6 */


int __cdecl FUN_1004a2a6(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_100b58dc);
  bVar2 = DAT_100b58cc != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_100b58dc);
    FUN_10047710(0x13);
  }
  iVar1 = FUN_1004a2ff(param_1,param_2);
  if (bVar2) {
    FUN_10047771(0x13);
  }
  else {
    InterlockedDecrement(&DAT_100b58dc);
  }
  return iVar1;
}

