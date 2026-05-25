/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004df27 @ 0x1004DF27 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_1004df27(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10057fac == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10057fbc,0x220,&param_2,1,lpMultiByteStr,DAT_100567a0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  _DAT_10057db0 = 0x2a;
  return -1;
}

