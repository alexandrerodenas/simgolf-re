/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492dd0 @ 0x00492DD0 */
/* Body size: 172 addresses */


undefined4 __thiscall FUN_00492dd0(int param_1,LPCSTR param_2,int param_3)

{
  HANDLE pvVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  
  FUN_00492e80();
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                       (-(uint)(param_3 != 0) & 0xf8000000) + 0x10000080,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    GetLastError();
    return 0;
  }
  pvVar1 = CreateFileMappingA(pvVar1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0xc) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_00492e80();
    return 0;
  }
  pvVar2 = MapViewOfFile(pvVar1,4,0,0,0);
  *(LPVOID *)(param_1 + 4) = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    FUN_00492e80();
    return 0;
  }
  DVar3 = GetFileSize(*(HANDLE *)(param_1 + 8),(LPDWORD)0x0);
  *(DWORD *)(param_1 + 0x10) = DVar3;
  return *(undefined4 *)(param_1 + 4);
}

