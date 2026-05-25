/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10089de0 @ 0x10089DE0 */


int __cdecl FUN_10089de0(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100833f0(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_10128844 == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_1008a010,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_100904e0();
          *pDVar4 = DVar3;
          FUN_10083490(1);
          goto LAB_10089fc8;
        }
        DAT_10128844 = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_10128834;
        DAT_10128834 = param_2;
        break;
      case 0xf:
        local_10 = DAT_10128840;
        DAT_10128840 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10128838;
        DAT_10128838 = param_2;
        break;
      case 0x16:
        local_10 = DAT_1012883c;
        DAT_1012883c = param_2;
      }
      FUN_10083490(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_10084e20();
      if ((undefined *)pDVar4[0x14] == &DAT_10125c20) {
        DVar3 = __malloc_dbg(DAT_10125ca0,2,0x1011f914,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10089fc8;
        FUN_1007f3a0((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_10125c20,DAT_10125ca0);
      }
      local_c = FUN_1008a2f0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_10125ca4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_10089fc8:
  puVar5 = (undefined4 *)FUN_100904d0();
  *puVar5 = 0x16;
  return -1;
}

