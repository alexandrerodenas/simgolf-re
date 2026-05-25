/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002a690 @ 0x1002A690 */


int __cdecl FUN_1002a690(LPSTR param_1,uint param_2)

{
  DWORD *pDVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_101109a8 == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      pDVar1 = FUN_100243f0();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_101109b8,0x220,(LPCWSTR)&param_2,1,param_1,DAT_10066268,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      pDVar1 = FUN_100243f0();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}

