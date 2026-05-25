/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c2d3 @ 0x1004C2D3 */


int __cdecl FUN_1004c2d3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD *pDVar5;
  undefined4 *puVar6;
  uint uVar7;
  BOOL BVar8;
  DWORD DVar9;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_10047710(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_100b5728 == 0)) {
        BVar8 = SetConsoleCtrlHandler(FUN_1004c455,1);
        if (BVar8 != 1) {
          DVar9 = GetLastError();
          pDVar5 = FUN_10045898();
          *pDVar5 = DVar9;
          FUN_10047771(1);
          goto LAB_1004c409;
        }
        DAT_100b5728 = 1;
      }
      iVar4 = DAT_100b5724;
      iVar3 = DAT_100b5720;
      iVar2 = DAT_100b571c;
      iVar1 = DAT_100b5718;
      if (param_1 == 2) {
        DAT_100b5718 = param_2;
        param_2 = iVar1;
      }
      else if (param_1 == 0xf) {
        DAT_100b5724 = param_2;
        param_2 = iVar4;
      }
      else if (param_1 == 0x15) {
        DAT_100b571c = param_2;
        param_2 = iVar2;
      }
      else if (param_1 == 0x16) {
        DAT_100b5720 = param_2;
        param_2 = iVar3;
      }
      FUN_10047771(1);
      return param_2;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar5 = FUN_10044171();
      if ((undefined *)pDVar5[0x14] == &DAT_10065348) {
        puVar6 = _malloc(DAT_100653c8);
        pDVar5[0x14] = (DWORD)puVar6;
        if (puVar6 == (undefined4 *)0x0) goto LAB_1004c409;
        FUN_1004a460(puVar6,(undefined4 *)&DAT_10065348,DAT_100653c8);
      }
      uVar7 = FUN_1004c639(param_1,pDVar5[0x14]);
      if (uVar7 != 0) {
        iVar1 = *(int *)(uVar7 + 8);
        do {
          if (*(int *)(uVar7 + 4) != param_1) {
            return iVar1;
          }
          *(int *)(uVar7 + 8) = param_2;
          uVar7 = uVar7 + 0xc;
        } while (uVar7 < pDVar5[0x14] + DAT_100653cc * 0xc);
        return iVar1;
      }
    }
  }
LAB_1004c409:
  pDVar5 = FUN_1004588f();
  *pDVar5 = 0x16;
  return -1;
}

