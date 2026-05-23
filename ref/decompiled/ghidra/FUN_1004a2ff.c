/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004a2ff @ 0x1004A2FF */
/* Body size: 105 addresses */


int __cdecl FUN_1004a2ff(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_100b5744 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_100b5754,0x220,&param_2,1,lpMultiByteStr,DAT_10067730,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1004588f();
  *pDVar2 = 0x2a;
  return -1;
}

