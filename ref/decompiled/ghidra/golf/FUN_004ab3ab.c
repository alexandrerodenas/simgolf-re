/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ab3ab @ 0x004AB3AB */


void FUN_004ab3ab(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_004e53c0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x4e5450);
  if (param_1 == (&DAT_004e53c0)[iVar5 * 2]) {
    if ((DAT_00840ab4 == 1) || ((DAT_00840ab4 == 0 && (DAT_004e4ae4 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x4e53c4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x4ab4f4;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x4ab4fb;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_004abca0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x4ab475;
        _strncpy(acStackY_1e3 + sVar4,&DAT_004c5db4,3);
      }
      FUN_004abca0();
      puStackY_1c4 = (undefined *)0x4ab496;
      FUN_004abcb0();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_004bc87c;
      uStackY_1cc = 0x4ab4a7;
      FUN_004abcb0();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x4e53c4);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x4ab4b9;
      FUN_004abcb0();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = s_Microsoft_Visual_C___Runtime_Lib_004bc854;
      builtin_strncpy(acStackY_1e3 + 3,"ϴJ",4);
      FUN_004ac8d8();
    }
  }
  return;
}

