/* Ghidra decompiled: golf.exe */
/* Function: FUN_004378a0 @ 0x004378A0 */
/* Body size: 39 addresses */


bool FUN_004378a0(LPCSTR param_1)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA local_140;
  
  pvVar1 = FindFirstFileA(param_1,&local_140);
  return pvVar1 != (HANDLE)0xffffffff;
}

