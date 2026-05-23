/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009b390 @ 0x1009B390 */
/* Body size: 174 addresses */


undefined4 FUN_1009b390(void)

{
  uint cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *local_8;
  
  local_8 = DAT_10128778;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    if (cbMultiByte == 0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)__malloc_dbg(cbMultiByte,2,0x10120784,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_1009b890(lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}

