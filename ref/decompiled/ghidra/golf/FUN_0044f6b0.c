/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044f6b0 @ 0x0044F6B0 */
/* Body size: 1075 addresses */


void FUN_0044f6b0(void)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined **ppuVar11;
  short *psVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  short *local_1c;
  int iStack_8;
  int iStack_4;
  
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00473f60(&DAT_008210f4,&DAT_00519cd4,8,7,0);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar7 = 0xffffffff;
  pcVar6 = s_FINANCIAL_REPORT_004d2e10;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821020,s_FINANCIAL_REPORT_004d2e10,0xda,0x15,~uVar7 - 1);
  iVar13 = 0;
  iVar10 = 0;
  ppuVar11 = &PTR_s_Greens_Fees_004d2054;
  do {
    pcVar6 = *ppuVar11;
    if (pcVar6 != (char *)0x0) {
      uVar7 = 0xffffffff;
      pcVar15 = pcVar6;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar1 != '\0');
      FUN_00476700(&DAT_00821ee8,pcVar6,0x62,((iVar13 != 8) - 1 & 7) + 0x57 + iVar10,~uVar7 - 1);
    }
    ppuVar11 = ppuVar11 + 1;
    iVar13 = iVar13 + 1;
    iVar10 = iVar10 + 0x11;
  } while ((int)ppuVar11 < 0x4d2075);
  iVar10 = FUN_00467130((int)DAT_005a6d3c,0,99);
  iVar13 = FUN_00467130(iVar10 + -8,0,999);
  local_20 = 0;
  if (-1 < iVar10) {
    local_24 = 0;
    local_1c = &DAT_00584210;
    do {
      if (iVar13 <= local_20) {
        iVar5 = local_24 + iVar13 * -0x4b;
        local_2c = 0;
        DAT_0051a068._0_1_ = 0;
        pcVar6 = (char *)FUN_004ad425(local_20 + 0x7d1,&DAT_00821c50,10);
        uVar7 = 0xffffffff;
        do {
          pcVar15 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar8 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar6;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        pcVar6 = pcVar15 + -uVar7;
        pcVar15 = pcVar14 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar15 = pcVar15 + 1;
        }
        FUN_00476310(0x80000000,0xffffffff,2,2);
        uVar7 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,iVar5 + 0xde,0x3c,~uVar7 - 1);
        local_28 = 0x56;
        iVar8 = 0;
        psVar12 = local_1c;
        do {
          DAT_0051a068._0_1_ = 0;
          if (iVar8 < 8) {
            FUN_0042dc00(*psVar12 * 100);
            sVar2 = *psVar12;
            if (sVar2 == 0) {
              uVar7 = 0xffffffff;
              pcVar6 = &DAT_004e9a84;
              do {
                pcVar15 = pcVar6;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pcVar15 = pcVar6 + 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar15;
              } while (cVar1 != '\0');
              uVar7 = ~uVar7;
              pcVar6 = pcVar15 + -uVar7;
              pcVar15 = (char *)&DAT_0051a068;
              for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar15 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
            local_2c = local_2c + sVar2;
          }
          else {
            FUN_0042dc00(local_2c * 100);
            *psVar12 = (short)local_2c;
          }
          FUN_00476310(((*psVar12 < 0) - 1 & 0xffffa000) + 0x80006000,0xffffffff,2,2);
          uVar7 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,iVar5 + 0x100,local_28,~uVar7 - 1);
          psVar12 = psVar12 + 1;
          local_28 = local_28 + (-(uint)(iVar8 != 7) & 0xfffffff9) + 0x18;
          iVar8 = iVar8 + 1;
        } while (iVar8 < 9);
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x4b;
      local_1c = local_1c + 10;
    } while (local_20 <= iVar10);
  }
  bVar4 = false;
  FUN_00473e60(&DAT_00519cd4,0x2d6,0xf9,0);
  FUN_00480c80(0);
  FUN_0045bf80(10,0);
  FUN_00483d30();
  bVar3 = true;
  do {
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_8,&iStack_4);
    if ((((iStack_8 < 0x2d6) || (0x301 < iStack_8)) || (iStack_4 < 0xf9)) || (0x124 < iStack_4)) {
      if (bVar4) {
        bVar4 = false;
        goto LAB_0044fa9d;
      }
    }
    else if (!bVar4) {
      bVar4 = true;
LAB_0044fa9d:
      FUN_00473e60(&DAT_00519cd4,0x2d6,0xf9,0);
      FUN_00480c80(0);
    }
    FUN_0045c030();
    iVar10 = FUN_0045ae70();
    if (iVar10 != 0) {
      bVar3 = false;
    }
    if ((DAT_00822d68 != 0) || (!bVar3)) {
      DAT_00569498 = 0;
      FUN_0045c150();
      return;
    }
  } while( true );
}

