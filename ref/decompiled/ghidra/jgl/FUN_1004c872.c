/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004c872 @ 0x1004C872 */
/* Body size: 409 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c872(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_1004ca0b(param_1);
  if (CodePage == DAT_10059084) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_10056b60;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_100591a0;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x10056b70);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_10056b58)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_100591a0 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        _DAT_1005909c = 1;
        DAT_10059084 = CodePage;
        DAT_100592a4 = FUN_1004ca55(CodePage);
        DAT_10059090 = *(undefined4 *)(iVar11 + 0x10056b64);
        DAT_10059094 = *(undefined4 *)(iVar11 + 0x10056b68);
        DAT_10059098 = *(undefined4 *)(iVar11 + 0x10056b6c);
        goto LAB_1004c9fa;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while ((int)pUVar5 < 0x10056c50);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_100591a0;
      DAT_10059084 = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_100592a4 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_1005909c = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_100591a0 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_100591a0 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_100592a4 = FUN_1004ca55(CodePage);
        _DAT_1005909c = 1;
      }
      DAT_10059090 = 0;
      DAT_10059094 = 0;
      DAT_10059098 = 0;
      goto LAB_1004c9fa;
    }
    if (DAT_10057f88 == 0) {
      return 0xffffffff;
    }
  }
  FUN_1004ca88();
LAB_1004c9fa:
  FUN_1004cab1();
  return 0;
}

