/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10093540 @ 0x10093540 */
/* Body size: 160 addresses */


int __cdecl FUN_10093540(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_1012898c == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_100904d0();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_1012899c,0x220,(LPCWSTR)&param_2,1,param_1,DAT_10125998,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      puVar1 = (undefined4 *)FUN_100904d0();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}

