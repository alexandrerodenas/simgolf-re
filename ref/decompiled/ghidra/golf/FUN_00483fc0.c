/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483fc0 @ 0x00483FC0 */


undefined4 FUN_00483fc0(void)

{
  FARPROC pFVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_0083afc0 == (HMODULE)0x0) {
    DAT_0083afc0 = LoadLibraryA(s___sound_dll_004e43bc);
    if (DAT_0083afc0 == (HMODULE)0x0) {
      return 1;
    }
    iVar4 = 0;
    puVar3 = &DAT_0083af6c;
    do {
      pFVar1 = GetProcAddress(DAT_0083afc0,(LPCSTR)(iVar4 + 1U & 0xffff));
      *puVar3 = pFVar1;
      if (pFVar1 == (FARPROC)0x0) {
        FUN_00484060();
        DAT_0083afc4 = 0;
        return 1;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while ((int)puVar3 < 0x83af98);
    uVar2 = FUN_004840c0();
    if ((uVar2 & 0xff00) != 0xc00) {
      FUN_00485590(s_<The_sound_header_files_used_in_t_004babcf + 1,s_Sound_Version_Warning_004bac50
                  );
    }
  }
  return 0;
}

