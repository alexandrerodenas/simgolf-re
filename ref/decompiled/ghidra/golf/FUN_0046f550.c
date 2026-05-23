/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046f550 @ 0x0046F550 */
/* Body size: 4702 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046f550(void)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  undefined4 *unaff_FS_OFFSET;
  bool bVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint local_4e0;
  uint local_4dc;
  int local_4d8;
  int local_4d4;
  int local_4d0;
  uint local_4cc;
  int local_4c8;
  uint local_4c4;
  uint local_4c0;
  int aiStack_4bc [15];
  int iStack_480;
  undefined1 local_47c [352];
  undefined1 local_31c [88];
  undefined1 local_2c4 [696];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7abc;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  local_4dc = 0xffffffff;
  FUN_004a55d2(local_47c,0x2c,8,FUN_00473ab0,&LAB_004041f0);
  local_4 = 0;
  FUN_00482fd0();
  local_4._0_1_ = 1;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00475840(s_interface_WorldButton_pcx_004e4054,0,0,0x100,2);
  FUN_00473bf0(local_2c4,0xfa,0x198,0x4c,0x72,1,1);
  FUN_00473bf0(local_2c4,0x2d4,0x198,0x4c,0x72,1,1);
  FUN_00473bf0(local_2c4,0x226,0x1ca,0x4c,0x40,1,1);
  FUN_00473bf0(local_2c4,400,0x1ca,0x4c,0x40,1,1);
  FUN_00473bf0(local_2c4,0x226,0x198,0x4c,0x32,1,1);
  FUN_00473bf0(local_2c4,400,0x198,0x4c,0x32,1,1);
  FUN_00473bf0(local_2c4,0x2dc,0x214,0x44,0x44,1,1);
  FUN_00475840(s_interface_WorldBase_pcx_004e403c,local_31c,0,0x100,0);
  FUN_00473bf0(local_2c4,0x2dc,0x214,0x44,0x44,1,1);
LAB_0046f733:
  do {
    iVar6 = 0;
    pcVar3 = &DAT_00571ff4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x2e;
      aiStack_4bc[cVar1] = iVar6;
      iVar6 = iVar6 + 1;
    } while ((int)pcVar3 < 0x5722d4);
    FUN_00475c90(&DAT_00519cd4,0,0,800,600);
    if (DAT_00834170 != 0) {
      FUN_00473e60(PTR_DAT_004c1570,0x2d4,0x1ca,0);
    }
    FUN_00473e60(PTR_DAT_004c1570,0x2d4,0x198,0);
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_00404b70(s_Where_will_you_build_004e4024,0x7e,0x13,0x80000000);
    FUN_00404b70(s_your_golf_course__004e4010,0x7e,0x21,0x80000000);
    FUN_004762d0(&DAT_00519928,0,0,0);
    uVar7 = 0xffffffff;
    pcVar3 = &DAT_004c61e0;
    do {
      pcVar5 = pcVar3;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar5 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar3 = pcVar5 + -uVar7;
    pcVar5 = (char *)&DAT_0051a068;
    for (uVar8 = uVar7 >> 2; iVar6 = DAT_00571fd4, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_0042dc00(iVar6 * 100);
    if ((_DAT_0059e7b8 & 0x1000000) != 0) {
      uVar7 = 0xffffffff;
      pcVar3 = s_Unlimited_004e4004;
      do {
        pcVar5 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar3 = pcVar5 + -uVar7;
      pcVar5 = (char *)&DAT_0051a068;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar3 = &DAT_004c61e0;
      do {
        pcVar5 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar15 = pcVar3;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar15 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar15;
      } while (cVar1 != '\0');
      pcVar3 = pcVar5 + -uVar7;
      pcVar5 = pcVar15 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    FUN_00404b70(&DAT_0051a068,0x2e4,0x12,0x80000000);
    FUN_004762d0(&DAT_00519fd8,0,0,0);
    FUN_00473f60(&DAT_005a4424,PTR_DAT_004c1570,0x18,0x226,0);
    FUN_004049d0(s_Available_004e3ff8,0x2c,0x230,0x80000000);
    FUN_00473f60(&DAT_005a43f8,PTR_DAT_004c1570,0x7c,0x226,0);
    FUN_004049d0(s_Insufficient_funds_004e3fe4,0x90,0x230,0x80000000);
    FUN_00473f60(&DAT_005a4450,PTR_DAT_004c1570,0xf4,0x226,0);
    FUN_004049d0(s_Already_purchased_004e3fd0,0x108,0x230,0x80000000);
    local_4c4 = local_4dc & 0x8000000f;
    local_4e0 = 0xf;
    if ((int)local_4c4 < 0) {
      local_4c4 = (local_4c4 - 1 | 0xfffffff0) + 1;
    }
    pcVar3 = s_Scenic_Statues_004c266f;
    iVar6 = 0;
    do {
      FUN_004762d0(&DAT_0051b360,0,0,0);
      uVar7 = 0xffffffff;
      pcVar5 = pcVar3 + -0x41;
      do {
        pcVar15 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar5 = pcVar15 + -uVar7;
      pcVar15 = (char *)&DAT_0051a068;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar15 = pcVar15 + 4;
      }
      uVar18 = *(undefined4 *)((int)&iStack_480 + iVar6);
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar15 = pcVar15 + 1;
      }
      iVar4 = FUN_0046f1d0(uVar18);
      local_4d4 = *(int *)((int)&iStack_480 + iVar6) * 0x2e;
      if ((local_4dc == local_4e0) && ((&DAT_00571ffa)[local_4d4] != -1 || DAT_00571fd4 < iVar4)) {
        FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)((int)&DAT_004e3dfc + iVar6),
                     (int)*(short *)((int)&DAT_004e3dfe + iVar6),0);
      }
      FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)((int)&DAT_004e3dfc + iVar6),
                   (int)*(short *)((int)&DAT_004e3dfe + iVar6),0);
      FUN_00404b70(&DAT_0051a068,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x60,
                   *(short *)((int)&DAT_004e3dfe + iVar6) + 4,0x80000000);
      FUN_004762d0(&DAT_00519fd8,0,0,0);
      uVar7 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        pcVar15 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar5 = pcVar15 + -uVar7;
      pcVar15 = (char *)&DAT_0051a068;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar15 = pcVar15 + 4;
      }
      sVar2 = *(short *)((int)&DAT_004e3dfe + iVar6);
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_00404b70(&DAT_0051a068,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x68,sVar2 + 0x10,
                   0x80000000);
      if ((local_4dc == local_4e0) && ((&DAT_00571ffa)[local_4d4] == -1)) {
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_004e3fc8;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = (char *)&DAT_0051a068;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        pcVar5 = (char *)FUN_004ad425((&DAT_00571ff5)[local_4d4],&DAT_008392ac,10);
        uVar7 = 0xffffffff;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar5 = s_acres_of_004e3fbc;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        cVar1 = pcVar3[-1];
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        if (cVar1 == '\0') {
          pcVar5 = &DAT_004e3fa4;
LAB_0046fc10:
          uVar7 = 0xffffffff;
          do {
            pcVar15 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar4 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          pcVar5 = pcVar15 + -uVar7;
          pcVar15 = pcVar13 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar15 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar15 = pcVar15 + 1;
          }
        }
        else {
          if (cVar1 == '\x01') {
            pcVar5 = s_rolling_004e3fac;
            goto LAB_0046fc10;
          }
          if (cVar1 == '\x02') {
            pcVar5 = s_hilly_004e3fb4;
            goto LAB_0046fc10;
          }
        }
        FUN_00404b70(&DAT_0051a068,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x70,
                     *(short *)((int)&DAT_004e3dfe + iVar6) + 0x1e,0x80002108);
        cVar1 = pcVar3[-2];
        DAT_0051a068._0_1_ = 0;
        if (cVar1 == '\0') {
          pcVar5 = s_inland_004e3f80;
LAB_0046fc89:
          uVar7 = 0xffffffff;
          do {
            pcVar15 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar4 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          pcVar5 = pcVar15 + -uVar7;
          pcVar15 = pcVar13 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar15 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar15 = pcVar15 + 1;
          }
        }
        else {
          if (cVar1 == '\x01') {
            pcVar5 = s_coastal_004e3f8c;
            goto LAB_0046fc89;
          }
          if (cVar1 == '\x02') {
            pcVar5 = s_island_004e3f98;
            goto LAB_0046fc89;
          }
        }
        switch(pcVar3[-3]) {
        case '\0':
          pcVar5 = s_parkland_004e3f68;
          break;
        case '\x01':
          pcVar5 = s_desert_004c9758;
          break;
        case '\x02':
          pcVar5 = s_tropical_004e3f74;
          break;
        case '\x03':
          pcVar5 = (char *)0x4e3f60;
          break;
        default:
          goto LAB_0046fd03;
        }
        uVar7 = 0xffffffff;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
LAB_0046fd03:
        uVar7 = 0xffffffff;
        pcVar5 = s_property_004e3f54;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        sVar2 = *(short *)((int)&DAT_004e3dfe + iVar6);
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        FUN_00404b70(&DAT_0051a068,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x6a,sVar2 + 0x28,
                     0x80002108);
        uVar7 = 0xffffffff;
        DAT_0051a068._0_1_ = 0;
        pcVar5 = &DAT_004e3f48;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        uVar18 = *(undefined4 *)((int)&iStack_480 + iVar6);
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        iVar4 = FUN_0046f1d0(uVar18);
        FUN_0042dc00(iVar4 * 100);
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_004c4944;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        uVar8 = _DAT_0059e7b8 & 0x1000000;
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        if (uVar8 == 0) {
          FUN_00404b70(&DAT_0051a068,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x68,
                       *(short *)((int)&DAT_004e3dfe + iVar6) + 0x32,0x80002108);
        }
        DAT_0051a068._0_1_ = '\0';
      }
      else {
        DAT_0051a068._0_1_ = '\0';
        pcVar5 = (char *)FUN_004ad425((&DAT_00571ff5)[local_4d4],&DAT_008392ac,10);
        uVar7 = 0xffffffff;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_004e3f3c;
        do {
          pcVar15 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        pcVar5 = pcVar15 + -uVar7;
        pcVar15 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar15 = pcVar15 + 4;
        }
        uVar18 = *(undefined4 *)((int)&iStack_480 + iVar6);
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar15 = pcVar15 + 1;
        }
        iVar4 = FUN_0046f1d0(uVar18);
        FUN_0042dc00(iVar4 * 100);
        if ((&DAT_00571ffa)[local_4d4] != -1) {
          DAT_0051a068._0_1_ = '\0';
          pcVar5 = (char *)FUN_004ad425((char)(&DAT_00571ffa)[local_4d4] + 0x7d1,&DAT_008392ac,10);
          uVar7 = 0xffffffff;
          do {
            pcVar15 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar4 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          pcVar5 = pcVar15 + -uVar7;
          pcVar15 = pcVar13 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar15 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar15 = pcVar15 + 1;
          }
          uVar7 = 0xffffffff;
          pcVar5 = &DAT_004e3f38;
          do {
            pcVar15 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar4 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          pcVar5 = pcVar15 + -uVar7;
          pcVar15 = pcVar13 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar15 = pcVar15 + 4;
          }
          cVar1 = (&DAT_00571ffb)[local_4d4];
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar15 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar15 = pcVar15 + 1;
          }
          if (cVar1 == -1) {
            pcVar5 = &DAT_004e3f30;
          }
          else {
            pcVar5 = (char *)FUN_004ad425(cVar1 + 0x7d1,&DAT_008392ac,10);
          }
          uVar7 = 0xffffffff;
          do {
            pcVar15 = pcVar5;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar4 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          pcVar5 = pcVar15 + -uVar7;
          pcVar15 = pcVar13 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar15 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar15 = pcVar15 + 1;
          }
          if (local_4dc == local_4e0) {
            FUN_00404b70(s_Already_Purchased__004e3f1c,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x70
                         ,*(short *)((int)&DAT_004e3dfe + iVar6) + 0x2d,0x80002108);
          }
        }
        if ((_DAT_0059e7b8 & 0x1000000) == 0) {
          FUN_00404b70(&DAT_0051a068,*(short *)((int)&DAT_004e3dfc + iVar6) + 0x70,
                       *(short *)((int)&DAT_004e3dfe + iVar6) + 0x1e,0x80002108);
        }
      }
      iVar4 = FUN_0046f1d0(*(undefined4 *)((int)&iStack_480 + iVar6));
      uVar7 = (uint)(iVar4 <= DAT_00571fd4);
      if ((&DAT_00571ffa)[local_4d4] != -1) {
        uVar7 = 2;
      }
      if ((local_4c4 == local_4e0) && ((local_4cc & 8) != 0)) {
        uVar7 = 3;
      }
      iVar4 = (int)*(short *)(pcVar3 + -7);
      iVar9 = (int)*(short *)(pcVar3 + -5);
      iVar14 = -iVar9 + 300;
      if (-iVar4 == -200 || -iVar4 + 200 < 0) {
        if (-iVar9 == -300 || iVar14 < 0) {
          iVar14 = 7;
          puVar17 = (undefined *)(uVar7 * 0x2c + 0x5a4608);
        }
        else {
          iVar14 = 6;
          iVar9 = iVar9 + -0xe;
          puVar17 = &DAT_005a4558 + uVar7 * 0x2c;
        }
      }
      else if (iVar14 < 1) {
        iVar14 = 5;
        iVar4 = iVar4 + -0xf;
        puVar17 = (undefined *)(uVar7 * 0x2c + 0x5a44a8);
      }
      else {
        iVar9 = iVar9 + -0xe;
        iVar14 = 4;
        iVar4 = iVar4 + -0xc;
        puVar17 = &DAT_005a43f8 + uVar7 * 0x2c;
      }
      FUN_00473f60(puVar17,PTR_DAT_004c1570,iVar4,iVar9,0);
      FUN_00473f60(&DAT_005a4138 + (uVar7 + iVar14 * 4) * 0x2c,PTR_DAT_004c1570,
                   *(short *)((int)&DAT_004e3dfc + iVar6) + 0xa0,
                   *(short *)((int)&DAT_004e3dfe + iVar6) + 10,0);
      pcVar3 = pcVar3 + -0x82;
      local_4e0 = local_4e0 - 1;
      iVar6 = iVar6 + -4;
    } while (0x4c1ed0 < (int)pcVar3);
    FUN_0047ab50(&local_4d0,&local_4d8);
    uVar7 = 0xffffffff;
    local_4e0 = 0xffffffff;
    iVar6 = FUN_00467170(local_4d0 + -0x300,local_4d8 + -0x22d);
    if (iVar6 < 0x19) {
      uVar7 = 3;
      local_4e0 = 3;
    }
    iVar6 = FUN_00467170(local_4d0 + -0x2f8,local_4d8 + -0x1dc);
    if (iVar6 < 0x19) {
      uVar7 = (uint)(DAT_00834170 != 0);
      local_4e0 = uVar7;
    }
    if ((DAT_00834170 == 0) ||
       (iVar6 = FUN_00467170(local_4d0 + -0x306,local_4d8 + -0x1a9), 0x13 < iVar6)) {
      uVar8 = local_4c0;
      if (uVar7 != 0xffffffff) {
        uVar8 = uVar7;
        if (uVar7 < 4) goto LAB_00470216;
        goto LAB_0047028f;
      }
    }
    else {
      local_4e0 = 2;
      uVar8 = 2;
LAB_00470216:
      switch(uVar7) {
      case 0:
        uVar19 = 0x198;
        uVar18 = 0x2d4;
        break;
      case 1:
        uVar19 = 0x1ca;
        uVar18 = 0x2d4;
        break;
      default:
        uVar19 = 0x198;
        uVar18 = 0x2d4;
        break;
      case 3:
        uVar19 = 0x214;
        uVar18 = 0x2dc;
      }
      FUN_00473e60(PTR_DAT_004c1570,uVar18,uVar19,0);
LAB_0047028f:
      if (local_4c0 == uVar8) {
        local_4c8 = local_4c8 + 1;
        if (0x14 < local_4c8) {
          switch(uVar8) {
          case 0:
            uVar7 = 0xffffffff;
            pcVar3 = s_Reset_World_004e3f10;
            do {
              pcVar5 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar5 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar5;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar3 = pcVar5 + -uVar7;
            pcVar5 = (char *)&DAT_0051a068;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar5 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar5 = pcVar5 + 1;
            }
            FUN_00432620(0x2f8,0x1dc);
            break;
          case 1:
            uVar7 = 0xffffffff;
            pcVar3 = s_Save_Game_004e3f04;
            do {
              pcVar5 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar5 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar5;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar3 = pcVar5 + -uVar7;
            pcVar5 = (char *)&DAT_0051a068;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar5 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar5 = pcVar5 + 1;
            }
            FUN_00432620(0x2f8,0x1dc);
            break;
          case 2:
            uVar7 = 0xffffffff;
            pcVar3 = s_Load_Game_004e3ef8;
            do {
              pcVar5 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar5 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar5;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar3 = pcVar5 + -uVar7;
            pcVar5 = (char *)&DAT_0051a068;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar5 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar5 = pcVar5 + 1;
            }
            FUN_00432620(0x306,0x1a9);
            break;
          case 3:
            uVar7 = 0xffffffff;
            pcVar3 = s_Cancel_004c8590;
            do {
              pcVar5 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar5 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar5;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar3 = pcVar5 + -uVar7;
            pcVar5 = (char *)&DAT_0051a068;
            for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar5 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar5 = pcVar5 + 1;
            }
            FUN_00432620(0x300,0x22d);
          }
        }
      }
      else {
        local_4c8 = 0;
      }
    }
    local_4c0 = uVar8;
    FUN_00480c80(0);
    FUN_0045bf80(5,0);
    local_4cc = local_4cc + 1;
    FUN_0047ab50(&local_4d0,&local_4d8);
    iVar6 = 0x1e;
    local_4dc = 0xffffffff;
    uVar7 = 0;
    psVar11 = &DAT_004c1eca;
    psVar12 = &DAT_004e3dc0;
    do {
      iVar4 = FUN_00467170((local_4d0 - *psVar12) + -0x19,(local_4d8 - psVar12[1]) + -0x19);
      if (iVar4 < iVar6) {
        iVar6 = iVar4;
        local_4dc = uVar7;
      }
      iVar4 = FUN_00467170(local_4d0 - *psVar11,local_4d8 - psVar11[1]);
      if (iVar4 < iVar6) {
        iVar6 = iVar4;
        local_4dc = uVar7;
      }
      psVar12 = psVar12 + 2;
      uVar7 = uVar7 + 1;
      psVar11 = psVar11 + 0x41;
    } while ((int)psVar12 < 0x4e3e00);
    FUN_0045c030();
  } while (DAT_00822d68 == 0);
  if (local_4e0 == 0) {
    FUN_0046f2b0();
    goto LAB_0046f733;
  }
  if (local_4e0 == 1) {
    FUN_0040cc00(0x78,0x50,0x210,0x50,0);
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_00404bc0(s_SAVE_GAME__edit_name_then_press_E_004c3f74,0x180,0x58,0x80007fff);
    DAT_0051a068._0_1_ = '\0';
    FUN_0040daa0(0xffffffff);
    uVar7 = 0xffffffff;
    pcVar3 = &DAT_004c3f70;
    do {
      pcVar5 = pcVar3;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar5 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar6 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar15 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar15;
    } while (cVar1 != '\0');
    pcVar3 = pcVar5 + -uVar7;
    pcVar5 = pcVar15 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    uVar8 = DAT_00834170 & 0x800003ff;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffc00) + 1;
    }
    pcVar3 = (char *)FUN_004ad425(((int)(uVar8 * 0x1e + ((int)(uVar8 * 0x1e) >> 0x1f & 0x3ffU)) >>
                                  10) + 1,&DAT_008392ac,10);
    uVar7 = 0xffffffff;
    do {
      pcVar5 = pcVar3;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar5 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar6 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar15 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar15;
    } while (cVar1 != '\0');
    pcVar3 = pcVar5 + -uVar7;
    pcVar5 = pcVar15 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar3 = &DAT_004c3f70;
    do {
      pcVar5 = pcVar3;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar5 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar6 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar15 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar15;
    } while (cVar1 != '\0');
    pcVar3 = pcVar5 + -uVar7;
    pcVar5 = pcVar15 + -1;
    for (uVar8 = uVar7 >> 2; uVar10 = DAT_00834170, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_0040d7b0(uVar10);
    FUN_0045b2c0(s_Save_File_Name____004c3f5c,0x80,0x66,0x28);
    if ((char)DAT_0051a068 != '\0') {
      FUN_0040b4a0(&DAT_0051a068);
      uVar7 = 0xffffffff;
      pcVar3 = s_Game_Saved__004c3f00;
      do {
        pcVar5 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar3 = pcVar5 + -uVar7;
      pcVar5 = (char *)&DAT_0051a068;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      FUN_0040cb00(0x80001284,1,0xfffffffc);
    }
    goto LAB_0046f733;
  }
  if (local_4e0 != 2) {
    if (local_4e0 == 3) goto LAB_0047089e;
    if (((DAT_00822d68 == 1) && (local_4dc != 0xffffffff)) &&
       (iVar6 = aiStack_4bc[local_4dc], (&DAT_00571ffa)[iVar6 * 0x2e] == -1)) {
      uVar7 = 0xffffffff;
      pcVar3 = s_You_need_more_money_before_004e3edc;
      do {
        pcVar5 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar3 = pcVar5 + -uVar7;
      pcVar5 = (char *)&DAT_0051a068;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar3 = s_you_can_purchase_this_property__004e3ebc;
      do {
        pcVar5 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar5 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar4 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar15 = pcVar3;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar15 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar15;
      } while (cVar1 != '\0');
      pcVar3 = pcVar5 + -uVar7;
      pcVar5 = pcVar15 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar5 = pcVar5 + 4;
      }
      bVar16 = DAT_005a6364 == 0x11;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar5 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      }
      iVar4 = FUN_0046f1d0(iVar6);
      if ((iVar4 <= DAT_00571fd4) || (bVar16)) {
        FUN_004762d0(&DAT_0051b360,0,0,0);
        FUN_0040cef0(0xcc,0x114,0xc0,0x30,1);
        uVar7 = 0xffffffff;
        pcVar3 = s_We_re_off_to_004e3eac;
        goto code_r0x00470756;
      }
      FUN_0040d320(200,200,0x80006000,0xfffffffe);
      FUN_00480c80(0);
      FUN_0045c0c0(0);
    }
    goto LAB_0046f733;
  }
  iVar6 = FUN_0043b610(DAT_00834170 == 0,0);
  if (iVar6 == 0) goto LAB_0046f733;
LAB_0047089e:
  FUN_00483d30();
  DAT_00822d68 = 0;
  local_4._0_1_ = 1;
  FUN_00474c40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00483010();
  local_4 = 0xffffffff;
  FUN_004a5713(local_47c,0x2c,8,&LAB_004041f0);
  iVar6 = -1;
  goto LAB_004709a2;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
    if (cVar1 == '\0') break;
code_r0x00470756:
    pcVar5 = pcVar3;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  pcVar3 = pcVar5 + -uVar7;
  pcVar5 = (char *)&DAT_0051a068;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar3 = (char *)((int)&DAT_00571fd8 + iVar6 * 0x2e);
  do {
    pcVar5 = pcVar3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar4 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar15 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar15 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar15;
  } while (cVar1 != '\0');
  pcVar3 = pcVar5 + -uVar7;
  pcVar5 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar3 = &DAT_004c4e60;
  do {
    pcVar5 = pcVar3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar4 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar15 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar15 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar15;
  } while (cVar1 != '\0');
  pcVar3 = pcVar5 + -uVar7;
  pcVar5 = pcVar15 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,300,0x11d,0x80007fff);
  uVar7 = 0xffffffff;
  pcVar3 = s_____one_moment_please_____004e3e90;
  do {
    pcVar5 = pcVar3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar3 = pcVar5 + -uVar7;
  pcVar5 = (char *)&DAT_0051a068;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,300,300,0x80007fff);
  FUN_00480c80(0);
  iVar4 = FUN_0046f1d0(iVar6);
  DAT_00571fd4 = DAT_00571fd4 - iVar4;
  DAT_00543cfc = DAT_00543cfc | 1 << ((byte)iVar6 & 0x1f);
  switch((&DAT_00571ff8)[iVar6 * 0x2e]) {
  case 0:
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar18 = 100;
    iVar4 = 0x33;
    break;
  case 1:
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar18 = 100;
    uVar7 = FUN_0045c1e0(3);
    iVar4 = (uVar7 & 0xffff) + 0x78;
    break;
  case 2:
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar18 = 100;
    uVar7 = FUN_0045c1e0(3);
    iVar4 = (uVar7 & 0xffff) + 0x6e;
    break;
  case 3:
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar18 = 100;
    uVar7 = FUN_0045c1e0(3);
    iVar4 = (uVar7 & 0xffff) + 0x73;
    break;
  default:
    goto LAB_0047094b;
  }
  FUN_004481b0(iVar4,uVar18,uVar19,uVar20,uVar21);
LAB_0047094b:
  FUN_00483d30();
  DAT_00822d68 = 0;
  local_4._0_1_ = 1;
  FUN_00474c40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00483010();
  local_4 = 0xffffffff;
  FUN_004a5713(local_47c,0x2c,8,&LAB_004041f0);
LAB_004709a2:
  *unaff_FS_OFFSET = uStack_c;
  return iVar6;
}

