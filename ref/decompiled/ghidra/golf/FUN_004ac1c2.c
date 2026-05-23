/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac1c2 @ 0x004AC1C2 */
/* Body size: 105 addresses */


int FUN_004ac1c2(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_00840b44 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_00840b54,0x220,&param_2,1,lpMultiByteStr,DAT_004e521c,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_004a910c();
  *puVar2 = 0x2a;
  return -1;
}

