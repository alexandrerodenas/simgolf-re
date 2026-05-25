/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300010d0 @ 0x300010D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_300010d0(HMODULE param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  CHAR local_100 [128];
  CHAR local_80 [128];
  
  if (param_2 != 1) {
    return 1;
  }
  _DAT_3004f3e8 = param_1;
  GetModuleFileNameA(param_1,local_100,0x7f);
  uVar4 = 0xffffffff;
  pcVar5 = local_100;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  do {
    uVar2 = uVar4;
    if ((uVar2 - 1 == 0) || (local_100[uVar2 - 1] == '\\')) break;
    uVar4 = uVar2 - 1;
  } while (local_100[uVar2 - 1] != ':');
  local_100[uVar2 - 1] = '\0';
  GetWindowsDirectoryA(local_80,0x7f);
  iVar3 = __strcmpi(local_100,local_80);
  if (iVar3 != 0) {
    GetSystemDirectoryA(local_80,0x7f);
    iVar3 = __strcmpi(local_100,local_80);
    if (iVar3 != 0) {
      return 1;
    }
  }
  MessageBoxA((HWND)0x0,
              "The BinkW32.DLL file is incorrectly installed in the Windows or Windows system directory."
              ,"Bink Error",0x10);
  return 0;
}

