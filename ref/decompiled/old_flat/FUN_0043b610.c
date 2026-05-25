/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043b610 @ 0x0043B610 */


undefined4 FUN_0043b610(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 *unaff_FS_OFFSET;
  bool bVar17;
  int local_a0c;
  int local_a08;
  short *local_a04;
  int local_9fc;
  int local_9f8;
  int local_9f4;
  int local_9f0;
  undefined4 local_9ec;
  int local_9e8 [10];
  undefined1 local_9c0 [660];
  undefined1 local_72c [696];
  byte local_474 [128];
  char local_3f4 [1000];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uStack_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7441;
  *unaff_FS_OFFSET = &uStack_c;
  if ((param_1 == 0) && (param_2 == 0)) {
    FUN_0040b4a0(s_While_Browsing_004c8998);
  }
  local_9f0 = (int)DAT_005a34e0;
  local_9ec = DAT_0059e7b8;
  uVar8 = 0xffffffff;
  pcVar11 = &DAT_00567328;
  do {
    pcVar13 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pbVar14 = (byte *)(pcVar13 + -uVar8);
  pbVar7 = local_474;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar14;
    pbVar14 = pbVar14 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar7 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    pbVar7 = pbVar7 + 1;
  }
  local_9e8[0] = 600;
  local_9e8[1] = 0x2e4;
  local_9e8[2] = 0x30a;
  local_9e8[3] = 0x30a;
  local_9e8[4] = 0x29e;
  local_9e8[5] = 0x208;
  local_9e8[6] = 0x212;
  local_9e8[7] = 100;
  local_9e8[8] = 0x17c;
  local_9e8[9] = 0x208;
  FUN_004a55d2(local_9c0,0x2c,0xf,FUN_00473ab0,&LAB_004041f0);
  local_4 = 0;
  local_a08 = -1;
  local_a0c = 0;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00475840(s_interface_Title_LoadGame_MO_004c8858,0,0,0x100,2);
  FUN_00473bf0(local_72c,600,0x208,0x46,0x46,1,1);
  FUN_00473bf0(local_72c,0x2e4,0x212,0x3c,0x3c,1,1);
  FUN_00473bf0(local_72c,0x30a,100,0x16,0x28,1,1);
  FUN_00473bf0(local_72c,0x30a,0x17c,0x16,0x28,1,1);
  FUN_00473bf0(local_72c,0x29e,0x208,0x46,0x46,1,1);
  FUN_00473bf0(local_72c,600,0x1b3,0x46,0x46,1,1);
  FUN_00473bf0(local_72c,0x29e,0x1b3,0x46,0x46,1,1);
  FUN_00475840(s_interface_Title_LoadGame_004c897c,0,0,0x100,2);
  FUN_00473bf0(local_72c,600,0x208,0x46,0x46,1,1);
  FUN_00473bf0(local_72c,0x2e4,0x212,0x3c,0x3c,1,1);
  FUN_00473bf0(local_72c,0x30a,100,0x16,0x28,1,1);
  FUN_00473bf0(local_72c,0x30a,0x17c,0x16,0x28,1,1);
  FUN_00473bf0(local_72c,0x29e,0x208,0x46,0x46,1,1);
  DAT_00822d68 = 0;
switchD_0043c5f7_default:
  do {
    FUN_004762d0(&DAT_00519a40,0,0,0);
    FUN_00475c60(&DAT_00519cd4,0,0,0,0,800,600);
    if (local_a08 == -1) {
      FUN_00473e60(PTR_DAT_004c1570,600,0x208,0);
      FUN_00473e60(PTR_DAT_004c1570,0x29e,0x208,0);
    }
    if (param_2 == 0) {
      FUN_00404b70(s_Load_Previous_Game_004c8930,0x1f8,0x2a,0x80000000);
      uVar8 = 0xffffffff;
      pcVar11 = s_Saved_Games___sve_004c891c;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      iVar3 = FUN_0043d2a0(&DAT_0051a068,&DAT_004e9a84,s_While_Browsing_004c8998);
    }
    else {
      FUN_00404b70(s_Select_Championship_Course_004c8960,0x1f8,0x2a,0x80000000);
      uVar8 = 0xffffffff;
      pcVar11 = s_Themes_Championship___cse_004c8944;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      iVar3 = FUN_0043d2a0(&DAT_0051a068,&DAT_004e9a84,&DAT_004e9a84);
    }
    FUN_004762d0(&DAT_0051b360,0,0,0);
    local_9f4 = iVar3 + -0x10;
    iVar10 = 0x74;
    if (local_9f4 < local_a0c) {
      local_a0c = local_9f4;
    }
    if (local_a0c < 0) {
      local_a0c = 0;
    }
    if (iVar3 != 0) {
      iVar4 = (local_a0c * 0xe4) / iVar3;
      iVar5 = FUN_00467130(iVar3 - local_a0c,0,0x10,0,0xe4 - iVar4);
      uVar6 = FUN_00467130((iVar5 * 0xe4) / iVar3);
      FUN_00480b00(0x30d,iVar4 + 0x93,6,uVar6,0x80007fff);
    }
    if (local_a0c < local_a0c + 0x10) {
      pcVar11 = &DAT_0080b130 + local_a0c * 100;
      local_a04 = (short *)local_a0c;
      do {
        if (iVar3 <= (int)local_a04) break;
        uVar8 = 0xffffffff;
        pcVar13 = pcVar11;
        do {
          pcVar16 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar16;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        cVar1 = *pcVar11;
        pcVar13 = pcVar16 + -uVar8;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar16 = pcVar16 + 1;
        }
        if (cVar1 == '&') {
          uVar8 = 0xffffffff;
          pcVar13 = s_autosave____004c8910;
          do {
            pcVar16 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar13 = pcVar16 + -uVar8;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar8 = 0xffffffff;
          pcVar13 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar13 = pcVar16 + -uVar8;
          pcVar16 = local_3f4;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_0040b9b0(pcVar11,0,1,0);
          uVar8 = 0xffffffff;
          pcVar13 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pcVar13 = local_3f4;
          do {
            pcVar15 = pcVar13;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar15 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar1 != '\0');
          pcVar13 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar8 = 0xffffffff;
          pcVar13 = local_3f4;
          do {
            pcVar16 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar13 = pcVar16 + -uVar8;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar8 = 0xffffffff;
          pcVar13 = &DAT_004c59e0;
          do {
            pcVar16 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pcVar13 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar13;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar15 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar15;
          } while (cVar1 != '\0');
          pcVar13 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar16 = pcVar16 + 1;
          }
        }
        if ((short *)local_a08 == local_a04) {
          FUN_00480b00(0x136,iVar10 + -1,0x1c8,0xf,0x80007b20);
        }
        FUN_004049d0(&DAT_0051a068,0x140,iVar10,0x80000000);
        iVar10 = iVar10 + 0x10;
        local_a04 = (short *)((int)local_a04 + 1);
        pcVar11 = pcVar11 + 100;
      } while ((int)local_a04 < local_a0c + 0x10);
    }
    if (local_a0c + 0x10 < iVar3) {
      FUN_004049d0(s__more_____004c8904,0x140,iVar10,0x80000000);
    }
    if (local_a08 != -1) {
      FUN_00404b70(s_Holes_004c88fc,0x42,0x7c,0x80004210);
      FUN_00404b70(&PTR_DAT_004c88f8,0x7d,0x7c,0x80004210);
      FUN_00404b70(&DAT_004c88f0,0xb8,0x7c,0x80004210);
      DAT_0051a068._0_1_ = 0;
      pcVar11 = (char *)FUN_004ad425(DAT_005685f0 + -1,&DAT_005a9f6c,10);
      uVar8 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404b70(&DAT_0051a068,0x42,0x92,0x80000000);
      DAT_0051a068._0_1_ = 0;
      pcVar11 = (char *)FUN_004ad425(DAT_0059aafc,&DAT_005a9f6c,10);
      uVar8 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404b70(&DAT_0051a068,0x7d,0x92,0x80000000);
      DAT_0051a068._0_1_ = 0;
      pcVar11 = (char *)FUN_004ad425(DAT_0058d36c,&DAT_005a9f6c,10);
      uVar8 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404b70(&DAT_0051a068,0xb8,0x92,0x80000000);
      FUN_00404b70(&DAT_004c88e8,0x4b,0xa9,0x80002108);
      DAT_0051a068._0_1_ = 0;
      FUN_0042dc00(DAT_00571fd4 * 100);
      FUN_00404b70(&DAT_0051a068,0xa1,0xa9,0x80000000);
      FUN_004049d0(s_Fun_Rating_004c88dc,0x30,0xc0,0x80002108);
      FUN_004049d0(s_Length_Skill_004c88cc,0x30,0xd2,0x80002108);
      FUN_004049d0(s_Accuracy_Skill_004c88bc,0x30,0xe4,0x80002108);
      FUN_004049d0(s_Imagination_004c88b0,0x30,0xf6,0x80002108);
      DAT_0051a068._0_1_ = 0;
      pcVar11 = (char *)FUN_004ad425(DAT_0059ae78,&DAT_005a9f6c,10);
      uVar8 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404b70(&DAT_0051a068,0xb8,0xc0,0x80001284);
      DAT_0051a068._0_1_ = 0;
      FUN_0042dd50(DAT_005a882c);
      FUN_00404b70(&DAT_0051a068,0xb8,0xd2,0x80000210);
      DAT_0051a068._0_1_ = 0;
      FUN_0042dd50(DAT_0056949c);
      FUN_00404b70(&DAT_0051a068,0xb8,0xe4,0x80000210);
      DAT_0051a068._0_1_ = 0;
      FUN_0042dd50(DAT_005a636c);
      FUN_00404b70(&DAT_0051a068,0xb8,0xf6,0x80000210);
      FUN_00404b70(&DAT_004c88a8,0x42,0x10e,0x80004210);
      FUN_00404b70(&PTR_DAT_004c88f8,0x7d,0x10e,0x80004210);
      FUN_00404b70(&DAT_004c88f0,0xb8,0x10e,0x80004210);
      iVar10 = 1;
      if (1 < DAT_005685f0) {
        iVar4 = 0x11e;
        local_a04 = &DAT_00575cbc;
        do {
          DAT_0051a068._0_1_ = 0;
          pcVar11 = (char *)FUN_004ad425(iVar10,&DAT_005a9f6c,10);
          uVar8 = 0xffffffff;
          do {
            pcVar13 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar11;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          pcVar11 = pcVar13 + -uVar8;
          pcVar13 = pcVar16 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_00404b70(&DAT_0051a068,0x42,iVar4,0x80000000);
          DAT_0051a068._0_1_ = 0;
          pcVar11 = (char *)FUN_004ad425((int)(char)local_a04[-2],&DAT_005a9f6c,10);
          uVar8 = 0xffffffff;
          do {
            pcVar13 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar11;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          pcVar11 = pcVar13 + -uVar8;
          pcVar13 = pcVar16 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_00404b70(&DAT_0051a068,0x7d,iVar4,0x80000000);
          DAT_0051a068._0_1_ = 0;
          pcVar11 = (char *)FUN_004ad425((int)*local_a04,&DAT_005a9f6c,10);
          uVar8 = 0xffffffff;
          do {
            pcVar13 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar11;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar16 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar16;
          } while (cVar1 != '\0');
          pcVar11 = pcVar13 + -uVar8;
          pcVar13 = pcVar16 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_00404b70(&DAT_0051a068,0xb8,iVar4,0x80000000);
          iVar10 = iVar10 + 1;
          local_a04 = local_a04 + 0x104;
          iVar4 = iVar4 + 0x11;
        } while (iVar10 < DAT_005685f0);
      }
      DAT_0051a068._0_1_ = 0;
      FUN_0040daa0(0);
      uVar8 = 0xffffffff;
      pcVar11 = s__Theme__004c889c;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_00567328;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_004c59e0;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004049d0(&DAT_0051a068,0x184,0x1ba,0x80007fff);
      uVar8 = 0xffffffff;
      pcVar11 = s_Designed_by_004c888c;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar11 = s_Gary_Golf_004d6098;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004049d0(&DAT_0051a068,0x184,0x1ca,0x80007fff);
      iVar10 = DAT_0056a524;
      if (DAT_0056a524 != 0) {
        uVar8 = 0xffffffff;
        pcVar11 = s_Course_Record__004c52d4;
        do {
          pcVar13 = pcVar11;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar11 = pcVar13 + -uVar8;
        pcVar13 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar11 = (char *)FUN_004ad425(iVar10,&DAT_005a9f6c,10);
        uVar8 = 0xffffffff;
        do {
          pcVar13 = pcVar11;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar10 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar11;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar16 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar16;
        } while (cVar1 != '\0');
        pcVar11 = pcVar13 + -uVar8;
        pcVar13 = pcVar16 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar11 = &DAT_004c8884;
        do {
          pcVar13 = pcVar11;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar10 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar11;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar16 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar16;
        } while (cVar1 != '\0');
        pcVar11 = pcVar13 + -uVar8;
        pcVar13 = pcVar16 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0045b9f0(0x14);
        FUN_004049d0(&DAT_0051a068,0x184,0x1da,0x80007fff);
      }
      FUN_00473f60(&DAT_005791f8 +
                   s_Ocean_s_Edge_004c1ea8[(char)(&DAT_00571ff4)[DAT_0059bf90 * 0x2e] * 0x82] * 0x2c
                   ,PTR_DAT_004c1570,0x54,0x20,0);
    }
    FUN_00480c80(0);
    iVar4 = 0;
    iVar10 = -1;
    do {
      FUN_0045bf80(2,0);
      FUN_0045c030();
      FUN_0047ab50(&local_9f8,&local_9fc);
      iVar12 = -1;
      iVar5 = FUN_00467170(local_9f8 + -0x279,local_9fc + -0x22b);
      if (iVar5 < 0x1a) {
        iVar12 = 0;
      }
      iVar5 = FUN_00467170(local_9f8 + -0x301,local_9fc + -0x22c);
      if (iVar5 < 0x18) {
        iVar12 = 1;
      }
      iVar5 = FUN_00467170(local_9f8 + -0x310,local_9fc + -0x78);
      if (iVar5 < 0x14) {
        iVar12 = 2;
      }
      iVar5 = FUN_00467170(local_9f8 + -0x310,local_9fc + -400);
      if (iVar5 < 0x14) {
        iVar12 = 3;
      }
      iVar5 = FUN_00467170(local_9f8 + -0x2c0,local_9fc + -0x22b);
      if (iVar5 < 0x17) {
        iVar12 = 4;
      }
      if (iVar12 == iVar10) {
        iVar4 = iVar4 + 1;
        if ((0x1e < iVar4) && (iVar12 != -1)) {
          DAT_0051a068._0_1_ = 0;
          if (iVar12 == 0) {
            pcVar11 = &DAT_004e9a84;
            if (local_a08 != -1) {
              pcVar11 = &DAT_004c87e4;
            }
LAB_0043c532:
            uVar8 = 0xffffffff;
            do {
              pcVar13 = pcVar11;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar11 = pcVar13 + -uVar8;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar13 = pcVar13 + 4;
            }
LAB_0043c54d:
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          else {
            if (iVar12 == 1) {
              uVar8 = 0xffffffff;
              pcVar11 = s_Cancel_004c8590;
              do {
                pcVar13 = pcVar11;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar11 + 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar11 = pcVar13 + -uVar8;
              pcVar13 = (char *)&DAT_0051a068;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar13 = pcVar13 + 4;
              }
              goto LAB_0043c54d;
            }
            if (iVar12 == 4) {
              pcVar11 = s_Delete_004c87ec;
              goto LAB_0043c532;
            }
          }
          if (iVar4 == 0x1f) {
            FUN_0040ca10(local_9e8[iVar12] + 6,local_9e8[iVar12 + 5] + 0xe,0x30,0x10,0);
          }
          FUN_00404bc0(&DAT_0051a068,local_9e8[iVar12] + 0x1e,local_9e8[iVar12 + 5] + 0x10,
                       0x80007fff);
          FUN_00480c80(0);
        }
      }
      else {
        if (iVar10 != -1) {
          FUN_00473e60(PTR_DAT_004c1570,local_9e8[iVar10],local_9e8[iVar10 + 5],0);
        }
        if (iVar12 != -1) {
          FUN_00473e60(PTR_DAT_004c1570,local_9e8[iVar12],local_9e8[iVar12 + 5],0);
        }
        if (local_a08 == -1) {
          FUN_00473e60(PTR_DAT_004c1570,600,0x208,0);
          FUN_00473e60(PTR_DAT_004c1570,0x29e,0x208,0);
        }
        FUN_00480c80(0);
        iVar4 = 0;
      }
      if (DAT_00822d68 != 0) goto LAB_0043c5db;
      iVar5 = FUN_0045ae70();
      iVar10 = iVar12;
    } while (iVar5 == 0);
    if (DAT_00822d68 == 0) {
      iVar10 = FUN_0045ae50();
      if (iVar10 != 0x1b) goto LAB_0043c7ab;
      iVar12 = 1;
    }
    else {
LAB_0043c5db:
      if (iVar12 == -1) {
LAB_0043c7ab:
        if ((0x140 < DAT_00822d60) && (0x73 < DAT_00822d64)) {
          local_a08 = ((int)((DAT_00822d64 + -0x74 >> 0x1f & 0xfU) + DAT_00822d64 + -0x74) >> 4) +
                      local_a0c;
          if (local_a08 < local_a0c + 0x10) {
            if (local_a08 < iVar3) {
              if (param_2 == 0) {
                FUN_0040b9b0(&DAT_0080b130 + local_a08 * 100,0,0,0);
              }
              else {
                uVar8 = 0xffffffff;
                pcVar11 = s_Themes_Championship__004c5328;
                do {
                  pcVar13 = pcVar11;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar13 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar13;
                } while (cVar1 != '\0');
                uVar8 = ~uVar8;
                pcVar11 = pcVar13 + -uVar8;
                pcVar13 = (char *)&DAT_0051a068;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar13 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                uVar8 = 0xffffffff;
                pcVar11 = &DAT_0080b130 + local_a08 * 100;
                do {
                  pcVar13 = pcVar11;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar13 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar13;
                } while (cVar1 != '\0');
                uVar8 = ~uVar8;
                iVar3 = -1;
                pcVar11 = (char *)&DAT_0051a068;
                do {
                  pcVar16 = pcVar11;
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  pcVar16 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar16;
                } while (cVar1 != '\0');
                pcVar11 = pcVar13 + -uVar8;
                pcVar13 = pcVar16 + -1;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar13 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                FUN_0040b840(1);
              }
            }
            else {
              local_a08 = -1;
              FUN_00473e60(PTR_DAT_004c1570,600,0x208,0);
              FUN_00473e60(PTR_DAT_004c1570,0x29e,0x208,0);
            }
          }
          else {
            local_a0c = FUN_00467130(local_a0c + 4,0,local_9f4);
          }
        }
        goto switchD_0043c5f7_default;
      }
    }
    DAT_00822d68 = 0;
    switch(iVar12) {
    case 0:
      goto switchD_0043c5f7_caseD_0;
    case 1:
      DAT_0059e7b8 = local_9ec;
      DAT_005a34e0 = (undefined1)local_9f0;
      if ((param_1 != 0) || (param_2 != 0)) goto LAB_0043cade;
      goto LAB_0043cacb;
    case 2:
      local_a0c = FUN_00467130(local_a0c + -4,0,local_9f4);
      break;
    case 3:
      local_a0c = FUN_00467130(local_a0c + 4,0,local_9f4);
      break;
    case 4:
      uVar8 = 0xffffffff;
      pcVar11 = s_Are_you_sure_you_want_to_delete_004c87c0;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (param_2 != 0) {
        uVar8 = 0xffffffff;
        pcVar11 = s_Themes_Championship__004c5328;
        do {
          pcVar13 = pcVar11;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar3 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar11;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar16 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar16;
        } while (cVar1 != '\0');
        pcVar11 = pcVar13 + -uVar8;
        pcVar13 = pcVar16 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_0080b130 + local_a08 * 100;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar3 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar11 = s_Yes__delete_this_file__No__never_004c8794;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar3 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      iVar3 = FUN_0046d6e0(400,100,1,1,0);
      if (iVar3 == 0) {
        if (param_2 == 0) {
          uVar8 = 0xffffffff;
          pcVar11 = s_Saved_Games__004c8874;
          do {
            pcVar13 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar11 = pcVar13 + -uVar8;
          pcVar13 = (char *)&DAT_0051a068;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
        }
        else {
          uVar8 = 0xffffffff;
          pcVar11 = s_Themes_Championship__004c5328;
          do {
            pcVar13 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar11 = pcVar13 + -uVar8;
          pcVar13 = (char *)&DAT_0051a068;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar11 = &DAT_0080b130 + local_a08 * 100;
        do {
          pcVar13 = pcVar11;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar3 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar11;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar16 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar16;
        } while (cVar1 != '\0');
        pcVar11 = pcVar13 + -uVar8;
        pcVar13 = pcVar16 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_004a64b8(&DAT_0051a068);
      }
    }
  } while( true );
switchD_0043c5f7_caseD_0:
  DAT_005a34e0 = (undefined1)local_9f0;
  DAT_0059e7b8 = local_9ec;
  if ((local_a08 < 0) || (iVar3 <= local_a08)) {
    if ((param_1 == 0) && (param_2 == 0)) {
LAB_0043cacb:
      DAT_005a34e0 = (undefined1)local_9f0;
      DAT_0059e7b8 = local_9ec;
      FUN_0040b9b0(s_While_Browsing_sve_004c5314,1,0,0);
    }
LAB_0043cade:
    FUN_00483d30();
    local_4 = local_4 & 0xffffff00;
    FUN_00474c40();
    local_4 = 0xffffffff;
    FUN_004a5713(local_9c0,0x2c,0xf,&LAB_004041f0);
    uVar6 = 0;
  }
  else {
    FUN_004762d0(&DAT_00519928,0,0,0);
    FUN_004049d0(s_Loading____004c3fa8,0x226,0x1c8,0x80007b20);
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_00480c80(0);
    if (param_2 == 0) {
      FUN_0040b9b0(&DAT_0080b130 + local_a08 * 100,param_1 == 0,0,0);
    }
    else {
      uVar8 = 0xffffffff;
      pcVar11 = s_Themes_Championship__004c5328;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_0080b130 + local_a08 * 100;
      do {
        pcVar13 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar3 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar16;
      } while (cVar1 != '\0');
      pcVar11 = pcVar13 + -uVar8;
      pcVar13 = pcVar16 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_0040b840(0);
    }
    pbVar14 = local_474;
    pbVar7 = &DAT_00567328;
    do {
      bVar2 = *pbVar7;
      bVar17 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_0043ca36:
        iVar3 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0043ca3b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar17 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_0043ca36;
      pbVar7 = pbVar7 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_0043ca3b:
    if (iVar3 != 0) {
      FUN_004658b0(1);
    }
    FUN_00483d30();
    local_4 = local_4 & 0xffffff00;
    FUN_00474c40();
    local_4 = 0xffffffff;
    FUN_004a5713(local_9c0,0x2c,0xf,&LAB_004041f0);
    uVar6 = 1;
  }
  *unaff_FS_OFFSET = uStack_c;
  return uVar6;
}

