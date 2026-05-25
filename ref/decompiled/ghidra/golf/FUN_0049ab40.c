/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049ab40 @ 0x0049AB40 */


void __fastcall FUN_0049ab40(int param_1)

{
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  int local_4;
  
  if (((DAT_008400b0 != 0) && (DVar1 = timeGetTime(), *(uint *)(param_1 + 0xec) < DVar1 - 2000)) &&
     (DAT_008400c0 == 0)) {
    DAT_008400c0 = 1;
    FUN_00499140(0,0,0,0x20,0);
    DVar1 = timeGetTime();
    *(DWORD *)(param_1 + 0xec) = DVar1;
    DAT_008400c0 = 0;
    if (DAT_008400bc == 0) {
      DAT_008400bc = 1;
      if ((*(uint *)(param_1 + 0xe8) & 0x40000) != 0) {
        if (*(int *)(param_1 + 0x77c) == *(int *)(param_1 + 0x780)) {
          piVar5 = (int *)(param_1 + 0x170);
          local_4 = 0x10;
          do {
            if (((*piVar5 != 0) && (*piVar5 != *(int *)(param_1 + 0x77c))) &&
               ((iVar2 = piVar5[4], iVar2 != 0 &&
                ((DVar1 = timeGetTime(), *(uint *)(param_1 + 0xf0) < DVar1 - iVar2 &&
                 (iVar2 = FUN_0049acf0(*piVar5,0), iVar2 == 0)))))) {
              DVar1 = timeGetTime();
              piVar5[4] = DVar1;
            }
            piVar5 = piVar5 + 0x16;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
          DAT_008400bc = 0;
          return;
        }
        if (*(int *)(param_1 + 0x77c) == *(int *)(param_1 + 0x1c8)) {
          iVar2 = *(int *)(param_1 + 0x180);
          if (((iVar2 != 0) && (DVar1 = timeGetTime(), *(uint *)(param_1 + 0xf0) < DVar1 - iVar2))
             && (iVar2 = FUN_0049acf0(*(undefined4 *)(param_1 + 0x170),0), iVar2 == 0)) {
            DVar1 = timeGetTime();
            *(DWORD *)(param_1 + 0x180) = DVar1;
            DAT_008400bc = 0;
            return;
          }
        }
        else {
          iVar2 = 0;
          pDVar4 = (DWORD *)(param_1 + 0x180);
          do {
            DVar1 = *pDVar4;
            if (DVar1 == 0) {
              return;
            }
            DVar3 = timeGetTime();
            if (DVar3 - DVar1 < *(uint *)(param_1 + 0xf0)) {
              return;
            }
            iVar2 = iVar2 + 1;
            pDVar4 = pDVar4 + 0x16;
          } while (iVar2 < 2);
          iVar2 = FUN_0049acf0(0xffffffff,0);
          if (iVar2 == 0) {
            DVar1 = timeGetTime();
            *(DWORD *)(param_1 + 0x1d8) = DVar1;
            *(DWORD *)(param_1 + 0x180) = DVar1;
          }
        }
      }
      DAT_008400bc = 0;
    }
  }
  return;
}

