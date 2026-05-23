/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004eac1 @ 0x1004EAC1 */
/* Body size: 581 addresses */


undefined4 FUN_1004eac1(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  uint uVar8;
  LPCWSTR pWVar9;
  undefined4 uVar10;
  _cpinfo local_28;
  undefined2 *local_14;
  undefined2 *local_10;
  LPCWSTR local_c;
  LPCSTR local_8;
  
  uVar10 = 0;
  local_8 = (LPCSTR)0x0;
  local_c = (LPCWSTR)0x0;
  if (DAT_100b5744 == 0) {
    PTR_DAT_1006773c = &DAT_10067746;
    PTR_DAT_10067740 = &DAT_10067746;
    FUN_10042c07((undefined *)DAT_100b5774);
    FUN_10042c07((undefined *)DAT_100b5778);
    DAT_100b5774 = (undefined2 *)0x0;
    DAT_100b5778 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_100b5754 != 0) ||
     (iVar4 = FUN_100506bb(0,(uint)DAT_100b5788,0x1004,(char *)&DAT_100b5754), iVar4 == 0)) {
    puVar5 = _malloc(0x202);
    local_14 = puVar5;
    local_10 = _malloc(0x202);
    local_8 = _malloc(0x101);
    local_c = _malloc(0x202);
    if ((puVar5 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (local_8 != (LPCSTR)0x0)) && (local_c != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        local_8[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar6 = GetCPInfo(DAT_100b5754,&local_28);
      if ((BVar6 != 0) && (local_28.MaxCharSize < 3)) {
        DAT_10067730 = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_10067730) && (local_28.LeadByte[0] != '\0')) {
          pBVar7 = local_28.LeadByte + 1;
          do {
            bVar3 = *pBVar7;
            if (bVar3 == 0) break;
            for (uVar8 = (uint)pBVar7[-1]; (int)uVar8 <= (int)(uint)bVar3; uVar8 = uVar8 + 1) {
              local_8[uVar8] = '\0';
              bVar3 = *pBVar7;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        BVar6 = FUN_1004c688(1,local_8,0x100,puVar5 + 1,0,0,0);
        if (BVar6 != 0) {
          *puVar5 = 0;
          iVar4 = 0;
          pWVar9 = local_c;
          do {
            *pWVar9 = (WCHAR)iVar4;
            pWVar9 = pWVar9 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar2 = local_10 + 1;
          BVar6 = FUN_100507f9(1,local_c,0x100,pWVar2,0,0);
          if (BVar6 != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_10067730) && (local_28.LeadByte[0] != '\0')) {
              pBVar7 = local_28.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar8 = (uint)pBVar7[-1];
                if (uVar8 <= *pBVar7) {
                  puVar5 = local_14 + uVar8 + 1;
                  do {
                    *puVar5 = 0x8000;
                    uVar8 = uVar8 + 1;
                    puVar5 = puVar5 + 1;
                  } while ((int)uVar8 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_1006773c = (undefined *)(local_14 + 1);
            PTR_DAT_10067740 = (undefined *)pWVar2;
            if (DAT_100b5774 != (undefined2 *)0x0) {
              FUN_10042c07((undefined *)DAT_100b5774);
            }
            DAT_100b5774 = local_14;
            if (DAT_100b5778 != (undefined2 *)0x0) {
              FUN_10042c07((undefined *)DAT_100b5778);
            }
            DAT_100b5778 = local_10;
            goto LAB_1004ec9f;
          }
        }
      }
    }
  }
  FUN_10042c07((undefined *)local_14);
  FUN_10042c07((undefined *)local_10);
  uVar10 = 1;
LAB_1004ec9f:
  FUN_10042c07(local_8);
  FUN_10042c07((undefined *)local_c);
  return uVar10;
}

