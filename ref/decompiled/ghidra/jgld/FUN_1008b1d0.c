/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008b1d0 @ 0x1008B1D0 */
/* Body size: 447 addresses */


void __cdecl FUN_1008b1d0(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_1b4 [40];
  uint local_114 [65];
  uint *local_10;
  uint local_c;
  DWORD local_8;
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_101259d8 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_101259d8 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_10081f90(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_101259dc)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_101287bc == 1) || ((DAT_101287bc == 0 && (DAT_101287c0 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_101259dc)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_101259dc)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_1007f760(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_1007f760(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_1007f770(local_1b4,local_10);
      FUN_1007f770(local_1b4,(uint *)&DAT_1011f614);
      FUN_1007f770(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_101259dc)[local_c * 2]
                  );
      FUN_1008a370(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

