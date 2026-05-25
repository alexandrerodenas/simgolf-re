/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002a7b0 @ 0x1002A7B0 */


int __cdecl FUN_1002a7b0(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  uint local_1028;
  int local_1020;
  uint local_101c;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10024320();
  local_1020 = 0;
  if (param_2 < 0) {
    uStackY_28 = 0x1002a7f4;
    iVar2 = FUN_1001a320(2,0x10060848,0x81,0,(byte *)"size >= 0");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  DVar3 = FUN_100265b0(param_1,0,1);
  if ((DVar3 == 0xffffffff) || (DVar4 = FUN_100265b0(param_1,0,2), DVar4 == 0xffffffff)) {
    local_1020 = -1;
  }
  else {
    local_101c = param_2 - DVar4;
    if ((int)local_101c < 1) {
      if ((int)local_101c < 0) {
        FUN_100265b0(param_1,param_2,0);
        hFile = (HANDLE)FUN_10026130(param_1);
        BVar7 = SetEndOfFile(hFile);
        local_1020 = (BVar7 != 0) - 1;
        if (local_1020 == -1) {
          pDVar6 = FUN_100243f0();
          *pDVar6 = 0xd;
          DVar4 = GetLastError();
          pDVar6 = FUN_10024400();
          *pDVar6 = DVar4;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      iVar2 = FUN_1002dbd0(param_1,0x8000);
      do {
        if ((int)local_101c < 0x1000) {
          local_1028 = local_101c;
        }
        else {
          local_1028 = 0x1000;
        }
        iVar5 = FUN_10020070(param_1,local_1008,local_1028);
        if (iVar5 == -1) {
          pDVar6 = FUN_10024400();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_100243f0();
            *pDVar6 = 0xd;
          }
          local_1020 = -1;
          break;
        }
        local_101c = local_101c - iVar5;
      } while (0 < (int)local_101c);
      FUN_1002dbd0(param_1,iVar2);
    }
    FUN_100265b0(param_1,DVar3,0);
  }
  return local_1020;
}

