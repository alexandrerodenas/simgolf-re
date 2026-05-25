/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9693 @ 0x004A9693 */


int FUN_004a9693(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_004a6070();
  iVar7 = 0;
  iVar1 = FUN_004a9620();
  if ((iVar1 == -1) || (iVar1 = FUN_004a9620(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x4a9764;
        FUN_004a9620();
        uStackY_20 = param_1;
        uStackY_24 = 0x4a976c;
        hFile = (HANDLE)FUN_004a933c();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_004a910c();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_004a9115();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x4a96f3;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x4a9700;
      FUN_004abfcb();
      do {
        uStackY_20 = 0x4a971e;
        iVar1 = FUN_004a5bbd();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_004a9115();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_004a910c();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_004abfcb();
    }
    uStackY_20 = 0x4a97aa;
    FUN_004a9620();
  }
  return iVar7;
}

