/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043a8c0 @ 0x0043A8C0 */
/* Body size: 2640 addresses */


undefined4 FUN_0043a8c0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  int local_61c;
  int local_618;
  char *local_614;
  int local_610;
  int local_60c;
  int local_608;
  int local_604;
  int local_600 [10];
  undefined1 local_5d8 [660];
  undefined1 local_344 [696];
  char local_8c [128];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7411;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  uVar6 = 0xffffffff;
  pcVar3 = &DAT_00567328;
  do {
    pcVar12 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar3 = pcVar12 + -uVar6;
  pcVar12 = local_8c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar3 = s_Championship_004c3c5c;
  do {
    pcVar12 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar3 = pcVar12 + -uVar6;
  pcVar12 = &DAT_00567328;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar12 = pcVar12 + 1;
  }
  local_600[0] = 600;
  local_600[1] = 0x2e4;
  local_600[2] = 0x30a;
  local_600[3] = 0x30a;
  local_600[4] = 0x29e;
  local_600[5] = 0x208;
  local_600[6] = 0x212;
  local_600[7] = 100;
  local_600[8] = 0x17c;
  local_600[9] = 0x208;
  FUN_004a55d2(local_5d8,0x2c,0xf,FUN_00473ab0,&LAB_004041f0);
  local_4 = 0;
  local_618 = -1;
  local_61c = 0;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00475840(s_interface_Title_LoadGame_MO_004c8858,0,0,0x100,2);
  FUN_00473bf0(local_344,600,0x208,0x46,0x46,1,1);
  FUN_00473bf0(local_344,0x2e4,0x212,0x3c,0x3c,1,1);
  FUN_00473bf0(local_344,0x30a,100,0x16,0x28,1,1);
  FUN_00473bf0(local_344,0x30a,0x17c,0x16,0x28,1,1);
  FUN_00473bf0(local_344,0x29e,0x208,0x46,0x46,1,1);
  FUN_00473bf0(local_344,600,0x1b3,0x46,0x46,1,1);
  FUN_00473bf0(local_344,0x29e,0x1b3,0x46,0x46,1,1);
  FUN_00475840(s_interface_Title_PickAPro_004c883c,0,0,0x100,2);
  FUN_00473bf0(local_344,600,0x208,0x46,0x46,1,1);
  FUN_00473bf0(local_344,0x2e4,0x212,0x3c,0x3c,1,1);
  FUN_00473bf0(local_344,0x30a,100,0x16,0x28,1,1);
  FUN_00473bf0(local_344,0x30a,0x17c,0x16,0x28,1,1);
  FUN_00473bf0(local_344,0x29e,0x208,0x46,0x46,1,1);
  DAT_00822d68 = 0;
LAB_0043ab91:
  do {
    FUN_004762d0(&DAT_00519a40,0,0,0);
    FUN_00475c60(&DAT_00519cd4,0,0,0,0,800,600);
    if (local_618 == -1) {
      FUN_00473e60(PTR_DAT_004c1570,600,0x208,0);
      FUN_00473e60(PTR_DAT_004c1570,0x29e,0x208,0);
    }
    FUN_00404b70(s_Pick_A_Pro_004c8830,0x1f8,0x2a,0x80000000);
    uVar6 = 0xffffffff;
    pcVar3 = s_Themes_Championship___pro_004c8814;
    do {
      pcVar12 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar12 + -uVar6;
    pcVar12 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar12 = pcVar12 + 1;
    }
    iVar2 = FUN_0043d2a0(&DAT_0051a068,&DAT_004e9a84,&DAT_004e9a84);
    local_608 = iVar2;
    FUN_004762d0(&DAT_0051b360,0,0,0);
    local_604 = iVar2 + -0x10;
    iVar2 = 0x74;
    if (local_604 < local_61c) {
      local_61c = local_604;
    }
    if (local_61c < 0) {
      local_61c = 0;
    }
    if (local_61c < local_61c + 0x10) {
      local_614 = &DAT_0080b130 + local_61c * 100;
      iVar8 = local_61c;
      do {
        if (local_608 <= iVar8) break;
        uVar6 = 0xffffffff;
        pcVar3 = local_614;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (local_618 == iVar8) {
          FUN_00480b00(0x136,iVar2 + -1,0x1c8,0xf,0x80001284);
        }
        FUN_004049d0(&DAT_0051a068,0x140,iVar2,
                     (-(uint)(local_618 != iVar8) & 0xffff8001) + 0x80007fff);
        local_614 = local_614 + 100;
        iVar2 = iVar2 + 0x10;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_61c + 0x10);
    }
    if (local_618 != -1) {
      FUN_00473cb0(PTR_DAT_004c1570,0x45,0x3d,1,1,1,0);
      uVar6 = 0xffffffff;
      pcVar3 = s_Gary_Golf_004d6098;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar3 = s__s_skills_004c8808;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_004049d0(&DAT_0051a068,0x38,0xff,0x80000000);
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_004c4e54;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      DAT_0057956e = 0;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00469b00(0x3e,0,0,0);
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_004c4e54;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404ad0(&DAT_0051a068,0x24,0x232,0x80007fff);
      FUN_004049d0(s_Signature_saying__004c87f4,0x38,0x220,0x80000000);
      local_614 = (char *)0x0;
      iVar2 = 0x117;
      ppuVar10 = &PTR_s_Power_Hitter_004c2c3c;
      do {
        uVar6 = 0xffffffff;
        pcVar3 = *ppuVar10;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_004049d0(&DAT_0051a068,0x5e,iVar2,0x80000210);
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_004c5340;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        cVar1 = *(char *)((int)&DAT_005a5a04 + (int)local_614);
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcVar3 = (char *)FUN_004ad425(cVar1 * 10,&DAT_005a9f6c,10);
        uVar6 = 0xffffffff;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar11 = pcVar3;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_004c60c4;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar11 = pcVar3;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_00404b70(&DAT_0051a068,0x3b,iVar2,0x80000210);
        ppuVar10 = ppuVar10 + 1;
        local_614 = (char *)((int)local_614 + 1);
        iVar2 = iVar2 + 0x18;
      } while ((int)ppuVar10 < 0x4c2c64);
    }
    FUN_00480c80(0);
    iVar8 = 0;
    iVar2 = -1;
    do {
      FUN_0045bf80(2,0);
      FUN_0045c030();
      FUN_0047ab50(&local_60c,&local_610);
      iVar9 = -1;
      iVar4 = FUN_00467170(local_60c + -0x279,local_610 + -0x22b);
      if (iVar4 < 0x1a) {
        iVar9 = 0;
      }
      iVar4 = FUN_00467170(local_60c + -0x301,local_610 + -0x22c);
      if (iVar4 < 0x18) {
        iVar9 = 1;
      }
      iVar4 = FUN_00467170(local_60c + -0x310,local_610 + -0x78);
      if (iVar4 < 0x14) {
        iVar9 = 2;
      }
      iVar4 = FUN_00467170(local_60c + -0x310,local_610 + -400);
      if (iVar4 < 0x14) {
        iVar9 = 3;
      }
      iVar4 = FUN_00467170(local_60c + -0x2c0,local_610 + -0x22b);
      if (iVar4 < 0x17) {
        iVar9 = 4;
      }
      if (iVar9 == iVar2) {
        iVar8 = iVar8 + 1;
        if ((0x1e < iVar8) && (iVar9 != -1)) {
          DAT_0051a068._0_1_ = 0;
          if (iVar9 == 0) {
            pcVar3 = &DAT_004e9a84;
            if (local_618 != -1) {
              pcVar3 = &DAT_004c87e4;
            }
LAB_0043b1c6:
            uVar6 = 0xffffffff;
            do {
              pcVar12 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar12 = pcVar12 + 4;
            }
LAB_0043b1e1:
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar12 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar12 = pcVar12 + 1;
            }
          }
          else {
            if (iVar9 == 1) {
              uVar6 = 0xffffffff;
              pcVar3 = s_Cancel_004c8590;
              do {
                pcVar12 = pcVar3;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar12 = pcVar3 + 1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar12;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              pcVar3 = pcVar12 + -uVar6;
              pcVar12 = (char *)&DAT_0051a068;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                pcVar12 = pcVar12 + 4;
              }
              goto LAB_0043b1e1;
            }
            if (iVar9 == 4) {
              pcVar3 = s_Delete_004c87ec;
              goto LAB_0043b1c6;
            }
          }
          FUN_00404bc0(&DAT_0051a068,local_600[iVar9] + 0x1e,local_600[iVar9 + 5] + 0x10,0x80007fff)
          ;
          FUN_00480c80(0);
        }
      }
      else {
        if (iVar2 != -1) {
          FUN_00473e60(PTR_DAT_004c1570,local_600[iVar2],local_600[iVar2 + 5],0);
        }
        if (iVar9 != -1) {
          FUN_00473e60(PTR_DAT_004c1570,local_600[iVar9],local_600[iVar9 + 5],0);
        }
        if (local_618 == -1) {
          FUN_00473e60(PTR_DAT_004c1570,600,0x208,0);
          FUN_00473e60(PTR_DAT_004c1570,0x29e,0x208,0);
        }
        FUN_00480c80(0);
        iVar8 = 0;
      }
      if (DAT_00822d68 != 0) goto LAB_0043b248;
      iVar4 = FUN_0045ae70();
      iVar2 = iVar9;
    } while (iVar4 == 0);
    if ((DAT_00822d68 == 0) && (iVar2 = FUN_0045ae50(), iVar2 == 0x1b)) {
      iVar9 = 1;
    }
    else {
LAB_0043b248:
      if (iVar9 == -1) {
        if ((0x140 < DAT_00822d60) && (0x73 < DAT_00822d64)) {
          local_618 = ((int)(DAT_00822d64 + -0x74 + (DAT_00822d64 + -0x74 >> 0x1f & 0xfU)) >> 4) +
                      local_61c;
          if (local_618 < local_608) {
            FUN_00437fa0(&DAT_0080b130 + local_618 * 100,0,1);
          }
          else {
            local_618 = -1;
            FUN_00473e60(PTR_DAT_004c1570,600,0x208,0);
            FUN_00473e60(PTR_DAT_004c1570,0x29e,0x208,0);
          }
        }
        goto LAB_0043ab91;
      }
    }
    DAT_00822d68 = 0;
    switch(iVar9) {
    case 0:
      goto code_r0x0043b456;
    case 1:
      FUN_00483d30();
      local_4 = local_4 & 0xffffff00;
      FUN_00474c40();
      goto code_r0x0043b5ce;
    case 2:
      local_61c = FUN_00467130(local_61c + -4,0,local_604);
      break;
    case 3:
      local_61c = FUN_00467130(local_61c + 4,0,local_604);
      break;
    case 4:
      uVar6 = 0xffffffff;
      pcVar3 = s_Are_you_sure_you_want_to_delete_004c87c0;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_0080b130 + local_618 * 100;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar3 = s_Yes__delete_this_file__No__never_004c8794;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      iVar2 = FUN_0046d6e0(400,100,1,1,0);
      if (iVar2 == 0) {
        uVar6 = 0xffffffff;
        pcVar3 = s_Themes_Championship__004c5328;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0080b130 + local_618 * 100;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar2 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar11 = pcVar3;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_004a64b8(&DAT_0051a068);
      }
    }
  } while( true );
code_r0x0043b456:
  if ((local_618 < 0) || (local_608 <= local_618)) {
    FUN_00483d30();
    uVar6 = 0xffffffff;
    pcVar3 = local_8c;
    do {
      pcVar12 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    local_4 = local_4 & 0xffffff00;
    pcVar3 = pcVar12 + -uVar6;
    pcVar12 = &DAT_00567328;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00474c40();
code_r0x0043b5ce:
    local_4 = 0xffffffff;
    FUN_004a5713(local_5d8,0x2c,0xf,&LAB_004041f0);
    uVar5 = 0;
  }
  else {
    FUN_004762d0(&DAT_00519928,0,0,0);
    FUN_004049d0(s_Loading____004c3fa8,0x184,0x1d8,0x80007fff);
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_00480c80(0);
    FUN_00437fa0(&DAT_0080b130 + local_618 * 100,0,1);
    FUN_00483d30();
    uVar6 = 0xffffffff;
    local_4 = local_4 & 0xffffff00;
    pcVar3 = local_8c;
    do {
      pcVar12 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar12 + -uVar6;
    pcVar12 = &DAT_00567328;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00474c40();
    local_4 = 0xffffffff;
    FUN_004a5713(local_5d8,0x2c,0xf,&LAB_004041f0);
    uVar5 = 1;
  }
  *unaff_FS_OFFSET = uStack_c;
  return uVar5;
}

