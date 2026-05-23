/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10032dd0 @ 0x10032DD0 */
/* Body size: 174 addresses */


undefined4 FUN_10032dd0(void)

{
  void *this;
  uint *lpMultiByteStr;
  int iVar1;
  void *this_00;
  int *local_8;
  
  local_8 = DAT_10110838;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    this = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                      );
    if (this == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)__malloc_dbg(this,this,2,"wtombenv.c",0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)this,(LPCSTR)0x0
                                ,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_100332d0(this_00,lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}

