/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30030f8d @ 0x30030F8D */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_30030f8d(int param_1)

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
  
  CodePage = FUN_30031126(param_1);
  if (CodePage == DAT_3004f3ec) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_30040fd8;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_3004f500;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x30040fe8);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_30040fd0)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_3004f500 + uVar7 + 1);
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
        _DAT_3004f3fc = 1;
        DAT_3004f3ec = CodePage;
        DAT_3004f604 = FUN_30031170(CodePage);
        DAT_3004f3f0 = *(undefined4 *)(iVar11 + 0x30040fdc);
        DAT_3004f3f4 = *(undefined4 *)(iVar11 + 0x30040fe0);
        DAT_3004f3f8 = *(undefined4 *)(iVar11 + 0x30040fe4);
        goto LAB_30031115;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while (pUVar5 < (UINT *)0x300410c8);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_3004f500;
      DAT_3004f3ec = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_3004f604 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_3004f3fc = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_3004f500 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_3004f500 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_3004f604 = FUN_30031170(CodePage);
        _DAT_3004f3fc = 1;
      }
      DAT_3004f3f0 = 0;
      DAT_3004f3f4 = 0;
      DAT_3004f3f8 = 0;
      goto LAB_30031115;
    }
    if (DAT_3004f3d0 == 0) {
      return 0xffffffff;
    }
  }
  FUN_300311a3();
LAB_30031115:
  FUN_300311cc();
  return 0;
}

