/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a00a0 @ 0x004A00A0 */


int FUN_004a00a0(LPCSTR param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (param_1 == (LPCSTR)0x0) {
    return 0;
  }
  DAT_0084092c = LoadLibraryA(param_1);
  if (DAT_0084092c == (HMODULE)0x0) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_0084092c,s_get_graphsy_object_ptr_004e4a2c);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_004a0060();
    return 0;
  }
  iVar2 = (*pFVar1)();
  if (iVar2 == 0) {
    FUN_004a0060();
  }
  DAT_0083ad50 = iVar2;
  return iVar2;
}

