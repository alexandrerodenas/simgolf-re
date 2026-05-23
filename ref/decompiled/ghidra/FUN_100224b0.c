/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100224b0 @ 0x100224B0 */
/* Body size: 507 addresses */


int __thiscall FUN_100224b0(void *this,int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_10019e10(this,1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_1011086c == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_100226e0,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10024400();
          *pDVar4 = DVar3;
          FUN_10019eb0(1);
          goto LAB_10022698;
        }
        DAT_1011086c = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_1011085c;
        DAT_1011085c = param_2;
        break;
      case 0xf:
        local_10 = DAT_10110868;
        DAT_10110868 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10110860;
        DAT_10110860 = param_2;
        break;
      case 0x16:
        local_10 = DAT_10110864;
        DAT_10110864 = param_2;
      }
      FUN_10019eb0(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_100219c0();
      if ((undefined *)pDVar4[0x14] == &DAT_10066828) {
        DVar3 = __malloc_dbg(DAT_100668a8,DAT_100668a8,2,"winsig.c",0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10022698;
        FUN_1001f510((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_10066828,(uint)DAT_100668a8);
      }
      local_c = FUN_100229c0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_100668ac * 0xc);
        return iVar1;
      }
    }
  }
LAB_10022698:
  pDVar4 = FUN_100243f0();
  *pDVar4 = 0x16;
  return -1;
}

