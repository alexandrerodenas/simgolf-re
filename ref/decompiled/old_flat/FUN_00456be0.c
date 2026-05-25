/* Ghidra decompiled: golf.exe */
/* Function: FUN_00456be0 @ 0x00456BE0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456be0(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  short *psVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  short *psVar21;
  undefined4 *puVar22;
  char *pcVar23;
  char *pcVar24;
  int *piVar25;
  short *psVar26;
  undefined4 *puVar27;
  undefined4 uVar28;
  short *psStack_120;
  int *piStack_11c;
  int iStack_118;
  int *piStack_114;
  char cStack_10d;
  int local_10c;
  int iStack_108;
  int iStack_104;
  int *piStack_100;
  int local_fc;
  int *local_f8;
  int local_f4;
  uint uStack_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0 [20];
  int iStack_50;
  undefined1 auStack_4c [76];
  
  local_fc = 0;
  local_f8 = (int *)0x1;
  iVar7 = 0;
  piVar15 = local_a0;
  do {
    *piVar15 = iVar7;
    iVar7 = iVar7 + 1;
    piVar15 = piVar15 + 1;
  } while (iVar7 < 0x14);
  local_f4 = 0;
  local_10c = -1;
  pcVar8 = &DAT_00585863;
  do {
    if (((*pcVar8 != -6) && (pcVar8[-1] != '\0')) && (*pcVar8 < '\0')) {
      local_f4 = local_f4 + 1;
    }
    pcVar8 = pcVar8 + 0x4c;
  } while ((int)pcVar8 < 0x586b63);
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
LAB_00456c5a:
  do {
    if (DAT_00822b80 == 0) {
      FUN_00473e60(&DAT_00519cd4,0,0xfd,0);
      FUN_00473e60(&DAT_00519cd4,0,0,0);
    }
    if (DAT_004d20dc == 1) {
      FUN_004616f0();
    }
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,5);
    }
    iVar7 = 0;
    puVar22 = &DAT_005722e8;
    do {
      iVar20 = 0;
      do {
        FUN_00456b70(iVar7,iVar20,&iStack_108,&iStack_104);
        if ((*(char *)((int)puVar22 + iVar20) != '\x14') &&
           ((&DAT_0058dd34)[*(char *)((int)puVar22 + iVar20)] == -1)) {
          iStack_d8 = iStack_108;
          iStack_c8 = iStack_108;
          iStack_e0 = iStack_108 + -6;
          iStack_dc = iStack_104;
          iStack_cc = iStack_104;
          iStack_d4 = iStack_104 + -3;
          iStack_c4 = iStack_104 + 3;
          iStack_d0 = iStack_108 + 6;
          FUN_00475df0(&iStack_e0,4,0x80001284);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < 0x32);
      puVar22 = (undefined4 *)((int)puVar22 + 0x32);
      iVar7 = iVar7 + 1;
    } while ((int)puVar22 < 0x572cac);
    uVar18 = 0;
    uVar10 = uStack_e8;
    do {
      iVar7 = 0;
      psVar14 = (short *)(uVar18 * 0x32);
      psStack_120 = psVar14;
      do {
        FUN_00456b70(uVar18,iVar7,&iStack_108,&iStack_104);
        cVar1 = *(char *)((int)&DAT_005722e8 + iVar7 + (int)psVar14);
        if (cVar1 != '\x14') {
          iVar20 = (int)cVar1;
          if (((&DAT_0058dd34)[iVar20] != -1) && ((&DAT_00578376)[iVar20 * 0x30] == '\r')) {
            piStack_11c = (int *)0x19d;
            FUN_0042dba0(uVar18 << 8,iVar7 << 8);
            if (iVar20 == 0xf) {
              piStack_11c = (int *)0x197;
              FUN_0042dba0(uVar18 << 7,iVar7 << 7);
            }
            else if (iVar20 == 0xe) {
              piStack_11c = (int *)0x194;
            }
            else if (iVar20 == 0x10) {
              piStack_11c = (int *)0xf9;
            }
            _DAT_00822b84 =
                 FUN_0043d6f0(piStack_11c,(&DAT_0053f3e8)[(int)piStack_11c] + -1,uVar18 & 3);
          }
          if (DAT_004d20dc == 2) {
            iVar20 = FUN_0042ef40(uVar18,iVar7);
            iVar9 = FUN_0040db90(uVar18,iVar7,2,5);
            uVar10 = FUN_00467130(((((int)(iVar20 + (iVar20 >> 0x1f & 3U)) >> 2) - iVar9) * 3) / 2,0
                                  ,0xff);
            uVar10 = ((uVar10 & 0xff) >> 3 | 0xfc000000) << 5;
            if (iVar9 == -1) {
              uVar10 = 0x80002000;
            }
          }
          psVar14 = psStack_120;
          if (DAT_004d20dc == 1) {
            bVar2 = *(byte *)((int)&DAT_00822da0 + iVar7 + (int)psStack_120);
            bVar3 = *(byte *)((int)&DAT_0082376c + iVar7 + (int)psStack_120);
            uVar10 = ((bVar2 >> 3 | 0xffe00000) << 5 | (uint)(bVar3 >> 3)) << 5 |
                     (uint)((byte)(bVar3 + bVar2) >> 4);
            if (*(char *)((int)&DAT_005722e8 + iVar7 + (int)psStack_120) == '\x11') {
              uVar10 = 0x80000218;
            }
LAB_00456f29:
            iVar20 = FUN_0040bf60(uVar18,iVar7);
            if (iVar20 != 0) {
              uVar10 = 0x80002108;
            }
            FUN_00456bb0(uVar18 + 1,iVar7);
            FUN_00456bb0(uVar18,iVar7);
            FUN_00456bb0(uVar18,iVar7 + 1);
            FUN_00456bb0(uVar18,iVar7);
          }
          else if (DAT_004d20dc != 0) goto LAB_00456f29;
          if (DAT_004d20dc < 1) {
            switch((&DAT_00578376)[*(char *)((int)&DAT_005722e8 + iVar7 + (int)psVar14) * 0x30]) {
            case 0:
            case 1:
              uVar10 = 0x80003394;
              break;
            case 2:
              uVar10 = 0x80001310;
              break;
            default:
              uVar10 = 0x8000318c;
              break;
            case 4:
              uVar10 = 0x80000204;
              break;
            case 7:
              uVar10 = 0x80006310;
              break;
            case 10:
              uVar10 = 0x80005304;
              break;
            case 0xd:
              uVar10 = 0x80001184;
              break;
            case 0x11:
              uVar10 = 0x80000218;
              break;
            case 0x12:
              uVar10 = 0x800010c8;
            }
            iVar20 = FUN_0040bf60(uVar18,iVar7);
            if (iVar20 != 0) {
              uVar10 = 0x80000000;
            }
          }
          iStack_bc = iStack_104;
          iStack_ac = iStack_104;
          iStack_c0 = iStack_108 + -6;
          iStack_b8 = iStack_108;
          iStack_b4 = iStack_104 + -3;
          iStack_b0 = iStack_108 + 6;
          iStack_a8 = iStack_108;
          iStack_a4 = iStack_104 + 3;
          FUN_00475df0(&iStack_c0,4,uVar10);
          psVar14 = psStack_120;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x32);
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 0x32);
    uStack_e8 = uVar10;
    if (DAT_00822b80 != 0) {
      if (DAT_0083ad50 != (int *)0x0) {
        (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
      }
      goto LAB_004586bb;
    }
    FUN_004762d0(&DAT_00821f28,0,0,0);
    DAT_0051a068._0_1_ = 0;
    FUN_0040daa0(1);
    iVar7 = DAT_004d20dc;
    if (DAT_004d20dc == 0) {
      uVar10 = 0xffffffff;
      pcVar8 = s_Employees_004d3650;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar20 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar23 = pcVar8;
        if (iVar20 == 0) break;
        iVar20 = iVar20 + -1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = pcVar23 + -1;
      for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
    }
    FUN_00404b70(&DAT_0051a068,400,(-(iVar7 != 0) & 10U) + 0x30,0x80000000);
    FUN_004762d0(&DAT_00821020,0,0,0);
    FUN_00404b70(s_ROUTING_MAP_004d3644,400,0xf,0x80000000);
    FUN_004762d0(&DAT_00821ee8,0,0,0);
    if (DAT_004d20dc == -1) {
      FUN_00404b70(s_COURSE_ROUTING_004d3600,400,0x55,0x80000000);
      FUN_00404b70(s_Left_click_to_select_hole__004d35e4,400,0x6c,0x80000000);
      FUN_00404b70(s_Right_click_to_swap_holes__004d35c8,400,0x7e,0x80000000);
      FUN_00404b70(s_Hole___004c591c,0x47,0x55,0x80000000);
      FUN_00404b70(s_Hole___004c591c,0x234,0x55,0x80000000);
      FUN_00404b70(&PTR_DAT_004d35c4,0x84,0x55,0x80000000);
      FUN_00404b70(&PTR_DAT_004d35c4,0x276,0x55,0x80000000);
      FUN_00404b70(&PTR_DAT_004d35c0,0xb6,0x55,0x80000000);
      FUN_00404b70(&PTR_DAT_004d35c0,0x2a8,0x55,0x80000000);
      FUN_00404b70(&DAT_004d2124,0xef,0x55,0x80000000);
      FUN_00404b70(&DAT_004d2124,0x2e1,0x55,0x80000000);
    }
    else if (DAT_004d20dc == 1) {
      FUN_00404b70(s_COURSE_AURA_004d3620,400,0xbc,0x80000000);
      FUN_00404b70(&DAT_004d3618,400,0x55,0x80000000);
      FUN_004049d0(s_Happy_004c69d8,0x270,0xce,0x80000000);
      FUN_004049d0(s_Unhappy_004d3610,0x88,0xce,0x80000000);
    }
    else if (DAT_004d20dc == 2) {
      FUN_00404b70(s_HOME_SITE_VALUE_004d3634,400,0xbc,0x80000000);
      FUN_004049d0(&DAT_004d362c,0x277,0xce,0x80000000);
      FUN_004049d0(&DAT_004d32ec,0x8e,0xce,0x80000000);
    }
    if (DAT_004d20dc == 1) {
      FUN_00476310(0x80000000,0xffffffff,2,2);
      uVar10 = 0xffffffff;
      pcVar8 = s_Course_AURA_indicates_where_on_y_004d3540;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = (char *)&DAT_0051a068;
      for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_00478530(&DAT_0051a068,0xfa,0x6e,300);
    }
    if (DAT_004d20dc == 2) {
      FUN_004049d0(s_Things_which_INCREASE_home_value_004d351c,0x33,0x56,0x80000000);
      FUN_004049d0(s_Close_to_water_and_trees__004d3500,0x33,0x68,0x80000000);
      FUN_004049d0(s_Close_to_a_fun_golf_hole__004d34e4,0x33,0x79,0x80000000);
      FUN_004049d0(s_Close_to_a_top_100_or_top_18_hol_004d34c0,0x33,0x8a,0x80000000);
      uVar10 = 0xffffffff;
      pcVar8 = s_Building_a_004d34b4;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = (char *)&DAT_0051a068;
      for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar8 = s_Marina_004c27a0;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar7 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar23 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = pcVar23 + -1;
      for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_004049d0(&DAT_0051a068,0x33,0x9c,0x80000000);
      FUN_004049d0(s_Things_which_DECREASE_home_value_004d3490,0x1ee,0x56,0x80000000);
      FUN_004049d0(s_Close_to_an_unfun_hole__004d3478,0x1ee,0x68,0x80000000);
      FUN_004049d0(s_Close_to_another_building__004d345c,0x1ee,0x79,0x80000000);
      FUN_004049d0(s_Too_close_to_green__fairway__or_O_004d3438,0x1ee,0x8a,0x80000000);
      FUN_004049d0(s_Far_away_from_the_golf_course__004d3418,0x1ee,0x9c,0x80000000);
    }
    piStack_11c = (int *)0x1;
    piStack_114 = &DAT_0059aea8;
    piVar15 = &DAT_00575cd8;
    do {
      iVar20 = (((int)piStack_11c + -1) % 9) * 0x11;
      iVar7 = iVar20 + 0x68;
      uVar10 = ((int)piStack_11c < 10) - 1 & 0x1f2;
      psStack_120 = (short *)(uVar10 + 0x47);
      if (DAT_004d20dc == -1) {
        if (piStack_11c == local_f8) {
          FUN_00480b00(uVar10 + 0x20,iVar20 + 0x65,0xee,0x11,0x800023e8);
          FUN_00480b00(uVar10 + 0x21,iVar20 + 0x66,0xec,0xf,0x80007fff);
        }
        DAT_0051a068._0_1_ = 0;
        pcVar8 = (char *)FUN_004ad425(piStack_11c,&DAT_00821c50,10);
        uVar10 = 0xffffffff;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar20 = -1;
        pcVar8 = (char *)&DAT_0051a068;
        do {
          pcVar23 = pcVar8;
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        iVar20 = piVar15[-8];
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar24 = pcVar24 + 1;
        }
        FUN_00404b70(&DAT_0051a068,psStack_120,iVar7,
                     (-(uint)((char)iVar20 != '\0') & 0xffff9ce8) + 0x80006318);
        if ((char)piVar15[-8] != '\0') {
          DAT_0051a068._0_1_ = 0;
          pcVar8 = (char *)FUN_004ad425((int)(char)piVar15[-8],&DAT_00821c50,10);
          uVar10 = 0xffffffff;
          do {
            pcVar24 = pcVar8;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar24 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar24;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar20 = -1;
          pcVar8 = (char *)&DAT_0051a068;
          do {
            pcVar23 = pcVar8;
            if (iVar20 == 0) break;
            iVar20 = iVar20 + -1;
            pcVar23 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar23;
          } while (cVar1 != '\0');
          pcVar8 = pcVar24 + -uVar10;
          pcVar24 = pcVar23 + -1;
          for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar24 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar24 = pcVar24 + 1;
          }
          FUN_00404b70(&DAT_0051a068,(int)psStack_120 + 0x3d,iVar7,0x80000000);
          DAT_0051a068._0_1_ = 0;
          pcVar8 = (char *)FUN_004ad425((int)(short)piVar15[-7],&DAT_00821c50,10);
          uVar10 = 0xffffffff;
          do {
            pcVar24 = pcVar8;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar24 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar24;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar20 = -1;
          pcVar8 = (char *)&DAT_0051a068;
          do {
            pcVar23 = pcVar8;
            if (iVar20 == 0) break;
            iVar20 = iVar20 + -1;
            pcVar23 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar23;
          } while (cVar1 != '\0');
          pcVar8 = pcVar24 + -uVar10;
          pcVar24 = pcVar23 + -1;
          for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar24 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar24 = pcVar24 + 1;
          }
          FUN_00404b70(&DAT_0051a068,(int)psStack_120 + 0x6f,iVar7,0x80000000);
          if (*piVar15 != 0) {
            DAT_0051a068._0_1_ = 0;
            pcVar8 = (char *)FUN_004ad425((piVar15[0x73] / *piVar15) / 0x28,&DAT_00821c50,10);
            uVar10 = 0xffffffff;
            do {
              pcVar24 = pcVar8;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar24 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar24;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            iVar20 = -1;
            pcVar8 = (char *)&DAT_0051a068;
            do {
              pcVar23 = pcVar8;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar23 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar23;
            } while (cVar1 != '\0');
            pcVar8 = pcVar24 + -uVar10;
            pcVar24 = pcVar23 + -1;
            for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar24 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar24 = pcVar24 + 1;
            }
            uVar10 = 0xffffffff;
            pcVar8 = &DAT_004d3140;
            do {
              pcVar24 = pcVar8;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar24 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar24;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            iVar20 = -1;
            pcVar8 = (char *)&DAT_0051a068;
            do {
              pcVar23 = pcVar8;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar23 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar23;
            } while (cVar1 != '\0');
            pcVar8 = pcVar24 + -uVar10;
            pcVar24 = pcVar23 + -1;
            for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar24 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar24 = pcVar24 + 1;
            }
            FUN_00404b70(&DAT_0051a068,psStack_120 + 0x54,iVar7,0x80000000);
          }
        }
      }
      if ((char)piVar15[-8] != '\0') {
        psStack_120 = (short *)(piVar15[-6] * 8 + 0x184);
        iStack_118 = piVar15[-5] * 8 + 0x68;
        FUN_00456b70(piVar15[-6],piVar15[-5],&psStack_120,&iStack_118);
        FUN_0040bf00(psStack_120,iStack_118);
        iVar7 = FUN_00467130((char)piVar15[-8] + -3,0,2);
        _DAT_00822b84 = FUN_0043d6f0(iVar7 + 0x18d,*(int *)(&DAT_0053fa1c + iVar7 * 4) + -1,0);
        FUN_004628d0(psStack_120,iStack_118,iStack_118,0x28,0x28,_DAT_00822b84,4,0x5e);
        DAT_0051a068._0_1_ = 0;
        pcVar8 = (char *)FUN_004ad425(piStack_11c,&DAT_00821c50,10);
        piVar17 = piStack_114;
        iVar7 = iStack_118;
        psVar14 = psStack_120;
        uVar10 = 0xffffffff;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar20 = -1;
        pcVar8 = (char *)&DAT_0051a068;
        do {
          pcVar23 = pcVar8;
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar24 = pcVar24 + 1;
        }
        iVar20 = *piStack_114;
        if (iVar20 == -1) {
          iVar20 = piStack_114[-2];
          if (iVar20 != -1) {
            iVar7 = piStack_114[-1];
            goto LAB_00457801;
          }
          FUN_00456b70(piVar15[-2],piVar15[-1],&psStack_120,&iStack_118);
          if (DAT_004d20dc != 0) {
            psVar14 = (short *)(((int)psStack_120 + (int)psVar14) / 2);
            iVar7 = (iStack_118 + iVar7) / 2;
            goto LAB_004578a2;
          }
        }
        else {
          iVar7 = piStack_114[1];
LAB_00457801:
          psStack_120 = (short *)((iVar20 >> 10) * 8 + 0x184);
          iStack_118 = (iVar7 >> 10) * 8 + 0x68;
          FUN_00456b70(iVar20 >> 10,iVar7 >> 10,&psStack_120,&iStack_118);
          FUN_0040bf20(psStack_120,iStack_118,0x80007fff,2,10);
          psVar14 = psStack_120;
          iVar7 = iStack_118;
          if (DAT_004d20dc != 0) {
LAB_004578a2:
            FUN_00404bc0(&DAT_0051a068,psVar14,iVar7 + -4,0x80007ff0);
          }
        }
        psStack_120 = (short *)(piVar15[-2] * 8 + 0x184);
        iStack_118 = piVar15[-1] * 8 + 0x68;
        FUN_00456b70(piVar15[-2],piVar15[-1],&psStack_120,&iStack_118);
        FUN_0040bf20(psStack_120,iStack_118,0x80007fff,2,10);
        _DAT_00822b84 = FUN_0043d6f0(DAT_005a34e0 + 0x189,0,3);
        FUN_004628d0(psStack_120,iStack_118,iStack_118,0x28,0x28,_DAT_00822b84,2,DAT_005a34e0 + 0x60
                    );
        piStack_114 = piVar17;
      }
      iVar7 = local_f4;
      piStack_114 = piStack_114 + 6;
      piStack_11c = (int *)((int)piStack_11c + 1);
      piVar15 = piVar15 + 0x82;
    } while ((int)piStack_114 < 0x59b058);
    piVar15 = (int *)0x0;
    iStack_118 = 1;
    piStack_100 = (int *)0x0;
    cStack_10d = '\0';
    if ((DAT_004d20dc == 0) && (8 < local_f4)) {
      iVar20 = (local_fc * 0x5f) / local_f4;
      FUN_00473e60(&DAT_00519cd4,0x307,0x40,0);
      iVar7 = (int)(0x2f8 / (longlong)iVar7);
      iVar9 = 0x5f - iVar20;
      if (iVar9 <= iVar7) {
        iVar7 = iVar9;
      }
      FUN_00480b00(0x30d,iVar20 + 0x6a,6,iVar7,0x80007fff);
    }
    piStack_114 = (int *)0x0;
    psStack_120 = &DAT_0058586e;
    do {
      if (((DAT_004d20dc != 0) || (*(byte *)(psStack_120 + -6) == 0)) ||
         (cVar1 = *(char *)((int)psStack_120 + -0xb), -1 < cVar1)) goto LAB_00457f81;
      iVar20 = DAT_005685f4 - (uint)*(byte *)(psStack_120 + -4);
      iVar7 = -(int)cVar1 + -2;
      if ((*(byte *)(psStack_120 + -6) & 8) != 0) {
        iVar7 = -(int)cVar1 + 2;
      }
      uStack_f0 = iVar7 + 0x82;
      if (cVar1 == -6) goto LAB_00457d8b;
      if ((int)piVar15 < local_fc) {
        piStack_100 = (int *)((int)piVar15 + 1);
        goto LAB_00457d8b;
      }
      iVar9 = iStack_118 - (int)piVar15;
      if (8 < iVar9) {
        cStack_10d = '\x01';
        goto LAB_00457d8b;
      }
      sVar4 = *psStack_120;
      if (sVar4 < 0xb) {
        iVar11 = 0x20e;
      }
      else {
        iVar11 = 0x216;
        if (sVar4 == 0xc) {
          iVar11 = 0x21e;
        }
      }
      iVar5 = (&DAT_0053f3e8)[iVar11 + iVar7];
      if (((int)psStack_120[-1] % iVar5 == 0) && (sVar4 == 0xc)) {
        *psStack_120 = 0xb;
      }
      _DAT_00822b84 = FUN_0043d6f0(iVar11 + iVar7,(int)psStack_120[-1] % iVar5,iVar20 - 2U & 7);
      piStack_11c = (int *)(((*(byte *)(psStack_120 + -6) & 8) >> 3) -
                           (*(char *)((int)psStack_120 + -0xb) * 2 + 4));
      uVar18 = (4 < iVar9) - 1 & 0xfffffe8a;
      uVar10 = iVar9 - 1U & 0x80000003;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
      }
      iVar7 = uVar10 * 0x2d;
      FUN_004628d0(uVar18 + 0x2ea,iVar7 + 0x67,iVar7 + 0x47,0x28,0x28,_DAT_00822b84,4,uStack_f0);
      FUN_004762d0(&DAT_00821ee8,0,0,0);
      DAT_0051a068._0_1_ = 0;
      pcVar8 = (char *)FUN_004ad425(iStack_118,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar20 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar23 = pcVar8;
        if (iVar20 == 0) break;
        iVar20 = iVar20 + -1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = pcVar23 + -1;
      for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar8 = &DAT_004d3414;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar20 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar23 = pcVar8;
        if (iVar20 == 0) break;
        iVar20 = iVar20 + -1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = pcVar23 + -1;
      for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_00467600(piStack_114);
      FUN_004049d0(&DAT_0051a068,uVar18 + 0x19f,iVar7 + 0x47,0x80000000);
      uVar10 = 0xffffffff;
      pcVar8 = s_Hired__004c849c;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = (char *)&DAT_0051a068;
      for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_0040d7b0((int)psStack_120[2] << 10);
      uVar10 = 0xffffffff;
      pcVar8 = &DAT_004d3408;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar20 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar23 = pcVar8;
        if (iVar20 == 0) break;
        iVar20 = iVar20 + -1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = pcVar23 + -1;
      for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      sVar4 = psStack_120[3];
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_0042dc00(sVar4 * 100);
      FUN_004049d0(&DAT_0051a068,uVar18 + 0x1ae,iVar7 + 0x56,0x80000000);
      switch(piStack_11c) {
      case (int *)0x0:
        uVar10 = 0xffffffff;
        pcVar8 = s_Players_greeted__004d33f4;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = (char *)&DAT_0051a068;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        break;
      case (int *)0x1:
        pcVar8 = s_Players_cheered__004d33e0;
        goto LAB_00457d14;
      case (int *)0x2:
        uVar10 = 0xffffffff;
        pcVar8 = s_Players_rushed__004d33cc;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = (char *)&DAT_0051a068;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        break;
      case (int *)0x3:
        pcVar8 = s_Slackers_intimidated__004d33b4;
        goto LAB_00457d14;
      case (int *)0x4:
        uVar10 = 0xffffffff;
        pcVar8 = s_Weeds_destroyed__004d33a0;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = (char *)&DAT_0051a068;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        break;
      case (int *)0x5:
        pcVar8 = s_Weeds_eradicated__004d338c;
        goto LAB_00457d14;
      case (int *)0x6:
        uVar10 = 0xffffffff;
        pcVar8 = s_Beverages_served__004d3378;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = (char *)&DAT_0051a068;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        break;
      case (int *)0x7:
        pcVar8 = s_Satisfied_customers__004d3360;
LAB_00457d14:
        uVar10 = 0xffffffff;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = (char *)&DAT_0051a068;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        break;
      default:
        goto switchD_00457c68_default;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
switchD_00457c68_default:
      pcVar8 = (char *)FUN_004ad425((int)psStack_120[4],&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar24 = pcVar8;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar20 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar23 = pcVar8;
        if (iVar20 == 0) break;
        iVar20 = iVar20 + -1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      pcVar8 = pcVar24 + -uVar10;
      pcVar24 = pcVar23 + -1;
      for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_004049d0(&DAT_0051a068,uVar18 + 0x1ae,iVar7 + 0x65,0x80000000);
LAB_00457d8b:
      psVar14 = psStack_120;
      iStack_108 = (char)psStack_120[-7] * 8 + 0x184;
      iStack_104 = *(char *)((int)psStack_120 + -0xd) * 8 + 0x68;
      FUN_00456b70((int)(char)psStack_120[-7],(int)*(char *)((int)psStack_120 + -0xd),&iStack_108,
                   &iStack_104);
      switch(*(undefined1 *)((int)psVar14 + -0xb)) {
      case 0xfb:
        uVar19 = 0x800003ff;
        break;
      case 0xfc:
        uVar19 = 0x80007ff0;
        piStack_11c = (int *)0x30;
        goto LAB_00457dfb;
      case 0xfd:
        uVar19 = 0x80000018;
        break;
      case 0xfe:
        uVar19 = 0x80006318;
        break;
      default:
        uVar19 = 0x80007fff;
      }
      piStack_11c = (int *)0x18;
LAB_00457dfb:
      if ((*(byte *)(psVar14 + -6) & 8) != 0) {
        piStack_11c = (int *)((int)piStack_11c + (uint)piStack_11c / 2);
      }
      iVar7 = 0;
      uStack_f0 = (uint)piStack_11c / 2;
      do {
        iVar20 = FUN_00467270(iVar7 * 0xaaaaaaa,piStack_11c);
        iVar20 = iVar20 + iStack_108;
        iVar9 = FUN_004672b0(iVar7 * 0xaaaaaaa,uStack_f0);
        if (iVar7 == 0) {
          FUN_0040bf00(iVar20,iVar9 + iStack_104);
        }
        else {
          FUN_0040bf20(iVar20,iVar9 + iStack_104,uVar19,2,7);
        }
        iVar20 = iStack_118;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x19);
      if (*(char *)((int)psStack_120 + -0xb) != -6) {
        iStack_118 = iStack_118 + 1;
        DAT_0051a068._0_1_ = 0;
        pcVar8 = (char *)FUN_004ad425(iVar20,&DAT_00821c50,10);
        uVar10 = 0xffffffff;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar7 = -1;
        pcVar8 = (char *)&DAT_0051a068;
        do {
          pcVar23 = pcVar8;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar8 = &DAT_004d3414;
        do {
          pcVar24 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar7 = -1;
        pcVar8 = (char *)&DAT_0051a068;
        do {
          pcVar23 = pcVar8;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        pcVar8 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar18 = uVar10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar24 = pcVar24 + 1;
        }
        FUN_00404bc0(&DAT_0051a068,iStack_108,iStack_104 + -10,uVar19);
      }
      psVar14 = psStack_120;
      DAT_0051a068._0_1_ = 0;
      FUN_00467600(piStack_114);
      FUN_004762d0(&DAT_00519fd8,0,0,0);
      FUN_00404bc0(&DAT_0051a068,iStack_108,iStack_104,uVar19);
      iStack_108 = (*(int *)(psVar14 + -0xf) >> 10) * 8 + 0x184;
      iStack_104 = (*(int *)(psVar14 + -0xd) >> 10) * 8 + 0x68;
      piVar15 = piStack_100;
LAB_00457f81:
      psStack_120 = psStack_120 + 0x26;
      piStack_114 = (int *)((int)piStack_114 + 1);
    } while ((int)psStack_120 < 0x586b6e);
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
    }
    iVar7 = local_10c;
    if (local_10c == -2) {
      uVar28 = 0x214;
      uVar19 = 0x296;
LAB_00458078:
      FUN_00473e60(&DAT_00519cd4,uVar19,uVar28,0);
    }
    else {
      if (local_10c == 1) {
        uVar28 = 0x139;
        uVar19 = 0x3c;
        goto LAB_00458078;
      }
      if (local_10c == 0) {
        uVar28 = 0xfe;
        uVar19 = 0xb6;
        goto LAB_00458078;
      }
      if (local_10c == 2) {
        uVar28 = 0xfe;
        uVar19 = 0x1e3;
        goto LAB_00458078;
      }
      if (local_10c == 3) {
        uVar28 = 0x139;
        uVar19 = 0x264;
        goto LAB_00458078;
      }
    }
    if (DAT_004d20dc == 0) {
      if (iVar7 == 9) {
        uVar19 = 0x40;
LAB_004580cf:
        FUN_00473e60(&DAT_00519cd4,0x307,uVar19,0);
      }
      else if (iVar7 == 10) {
        uVar19 = 0xcd;
        goto LAB_004580cf;
      }
      uVar28 = 0x139;
      uVar19 = 0x3c;
LAB_00458166:
      FUN_00473e60(&DAT_00519cd4,uVar19,uVar28,0);
    }
    else {
      if (DAT_004d20dc == -1) {
        uVar28 = 0xfe;
        uVar19 = 0xb6;
        goto LAB_00458166;
      }
      if (DAT_004d20dc == 1) {
        uVar28 = 0xfe;
        uVar19 = 0x1e2;
        goto LAB_00458166;
      }
      if (DAT_004d20dc == 2) {
        uVar28 = 0x139;
        uVar19 = 0x264;
        goto LAB_00458166;
      }
    }
    FUN_00473e60(&DAT_00519cd4,0x47,0x215,0);
    FUN_00480c80(0);
    FUN_0045bf80(0x14,0);
    FUN_00483d30();
    iVar20 = local_f4;
    do {
      FUN_0047ab50(&iStack_ec,&iStack_e4);
      if (((iStack_ec < 0x3e) || (0x8d < iStack_ec)) || ((iStack_e4 < 0x13b || (0x18a < iStack_e4)))
         ) {
        if ((((iStack_ec < 0xb7) || (0x106 < iStack_ec)) || (iStack_e4 < 0xfe)) ||
           (0x14d < iStack_e4)) {
          if (((iStack_ec < 0x218) || (0x267 < iStack_ec)) ||
             ((iStack_e4 < 0xfe || (0x14d < iStack_e4)))) {
            if (((iStack_ec < 0x293) || (0x2e2 < iStack_ec)) ||
               ((iStack_e4 < 0x13b || (0x18a < iStack_e4)))) {
              if ((((iStack_ec < 0x296) || (0x2e5 < iStack_ec)) || (iStack_e4 < 0x214)) ||
                 (0x254 < iStack_e4)) {
                if (((DAT_004d20dc == 0) && (8 < iVar20)) && (0x306 < iStack_ec)) {
                  if (((iStack_ec < 0x319) && (0x3f < iStack_e4)) && (iStack_e4 < 0x65)) {
                    iVar9 = 9;
                  }
                  else {
                    if ((((iStack_ec < 0x307) || (0x318 < iStack_ec)) || (iStack_e4 < 0xcd)) ||
                       (0xf1 < iStack_e4)) goto LAB_004582dc;
                    iVar9 = 10;
                  }
                }
                else {
LAB_004582dc:
                  iVar9 = -1;
                }
              }
              else {
                iVar9 = -2;
              }
            }
            else {
              iVar9 = 3;
            }
          }
          else {
            iVar9 = 2;
          }
        }
        else {
          iVar9 = 0;
        }
      }
      else {
        iVar9 = 1;
      }
      local_10c = iVar9;
      if (iVar7 != iVar9) goto LAB_00456c5a;
      FUN_0045c030();
      FUN_0045bf80(1,0);
      if (DAT_00822d68 != 0) goto LAB_0045831d;
      iVar11 = FUN_0045ae70();
      iVar7 = iVar9;
    } while (iVar11 == 0);
    if (DAT_00822d68 != 0) {
LAB_0045831d:
      if (0x118 < DAT_00822d64) {
        if (-1 < iVar9) {
          DAT_004d20dc = iVar9 + -1;
        }
        if (iVar9 == -2) goto LAB_004586bb;
        goto LAB_00456c5a;
      }
    }
    if (iVar9 == 9) {
      if (0 < local_fc) {
        local_fc = local_fc + -1;
      }
    }
    else if ((iVar9 == 10) && (cStack_10d != '\0')) {
      local_fc = local_fc + 1;
    }
    if (0x100 < DAT_00822d64) goto LAB_004586bb;
    if (DAT_00822d68 == 1) {
      iVar7 = FUN_00467130((DAT_00822d64 + -0x68) / 0x11 + 1,1,0x13);
      if (399 < DAT_00822d60) {
        iVar7 = iVar7 + 9;
      }
      local_f8 = (int *)FUN_00467130(iVar7,1,0x12);
    }
    piVar15 = local_f8;
    if (DAT_00822d68 == 2) {
      iVar7 = FUN_00467130((DAT_00822d64 + -0x68) / 0x11 + 1,1,0x13);
      if (399 < DAT_00822d60) {
        iVar7 = iVar7 + 9;
      }
      iVar7 = FUN_00467130(iVar7,1,0x12);
      local_a0[0] = local_a0[(int)piVar15];
      piStack_114 = (int *)((int)piVar15 * 0x208);
      puVar22 = (undefined4 *)(&DAT_00575ab0 + (int)piStack_114);
      puVar27 = (undefined4 *)&DAT_00575ab0;
      for (iVar20 = 0x82; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar27 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar27 = puVar27 + 1;
      }
      psStack_120 = (short *)(&DAT_0059ae80 + (int)piVar15 * 6);
      psVar14 = psStack_120;
      puVar22 = &DAT_0059ae80;
      for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar22 = *(undefined4 *)psVar14;
        psVar14 = psVar14 + 2;
        puVar22 = puVar22 + 1;
      }
      piStack_11c = local_a0 + (int)piVar15;
      piVar17 = piVar15;
      if ((int)piVar15 < iVar7) {
        piVar13 = &DAT_00575ab8 + (int)piVar15 * 0x82;
        piVar16 = piVar15;
        psVar14 = psStack_120;
        piStack_100 = piStack_11c;
        do {
          piVar17 = piVar13 + 0x80;
          piVar25 = piVar13 + -2;
          for (iVar20 = 0x82; iVar20 != 0; iVar20 = iVar20 + -1) {
            *piVar25 = *piVar17;
            piVar17 = piVar17 + 1;
            piVar25 = piVar25 + 1;
          }
          psVar21 = psVar14 + 0xc;
          psVar26 = psVar14;
          for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
            *(undefined4 *)psVar26 = *(undefined4 *)psVar21;
            psVar21 = psVar21 + 2;
            psVar26 = psVar26 + 2;
          }
          iVar20 = piVar13[1];
          *piStack_100 = piStack_100[1];
          piStack_100 = piStack_100 + 1;
          iVar20 = iVar20 + *piVar13 * 0x32;
          uVar6 = (ushort)piVar16;
          (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] & 0xffe0 | uVar6;
          iVar20 = piVar13[5] + piVar13[4] * 0x32;
          piVar16 = (int *)((int)piVar16 + 1);
          (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] & 0xffe0 | uVar6;
          piVar13 = piVar13 + 0x82;
          piVar17 = local_f8;
          psVar14 = psVar14 + 0xc;
        } while ((int)piVar16 < iVar7);
      }
      if ((iVar7 < (int)piVar17) && (iVar7 < (int)piVar17)) {
        piVar15 = &DAT_00575ab8 + (int)piVar15 * 0x82;
        psVar14 = psStack_120;
        piStack_100 = piStack_11c;
        do {
          piVar13 = piVar15 + -0x84;
          piVar16 = piVar15 + -2;
          for (iVar20 = 0x82; iVar20 != 0; iVar20 = iVar20 + -1) {
            *piVar16 = *piVar13;
            piVar13 = piVar13 + 1;
            piVar16 = piVar16 + 1;
          }
          psVar21 = psVar14 + -0xc;
          psVar26 = psVar14;
          for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
            *(undefined4 *)psVar26 = *(undefined4 *)psVar21;
            psVar21 = psVar21 + 2;
            psVar26 = psVar26 + 2;
          }
          iVar20 = piVar15[1];
          *piStack_100 = piStack_100[-1];
          piStack_100 = piStack_100 + -1;
          iVar20 = iVar20 + *piVar15 * 0x32;
          uVar6 = (ushort)piVar17;
          (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] & 0xffe0 | uVar6;
          iVar20 = piVar15[5] + piVar15[4] * 0x32;
          piVar17 = (int *)((int)piVar17 + -1);
          (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] & 0xffe0 | uVar6;
          piVar15 = piVar15 + -0x82;
          psVar14 = psVar14 + -0xc;
        } while (iVar7 < (int)piVar17);
      }
      puVar22 = (undefined4 *)&DAT_00575ab0;
      puVar27 = (undefined4 *)(&DAT_00575ab0 + iVar7 * 0x208);
      for (iVar20 = 0x82; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar27 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar27 = puVar27 + 1;
      }
      puVar22 = &DAT_0059ae80;
      puVar27 = &DAT_0059ae80 + iVar7 * 6;
      for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar27 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar27 = puVar27 + 1;
      }
      iVar20 = (&DAT_00575abc)[iVar7 * 0x82];
      local_a0[iVar7] = local_a0[0];
      local_a0[0] = 0;
      iVar20 = iVar20 + (&DAT_00575ab8)[iVar7 * 0x82] * 0x32;
      (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] & 0xffe0 | (ushort)iVar7;
      iVar20 = (&DAT_00575acc)[iVar7 * 0x82] + (&DAT_00575ac8)[iVar7 * 0x82] * 0x32;
      (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] & 0xffe0 | (ushort)iVar7;
      puVar22 = (undefined4 *)&DAT_00575ab0;
      for (iVar7 = 0x82; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
      puVar22 = &DAT_0059ae80;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
    }
    if (DAT_00822d68 == 0) {
LAB_004586bb:
      iVar7 = 0;
      piVar15 = local_a0;
      do {
        iVar20 = *piVar15;
        piVar15 = piVar15 + 1;
        (&iStack_50)[iVar20] = iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x14);
      pcVar8 = &DAT_005794d9;
      do {
        if ('\0' < *pcVar8) {
          *pcVar8 = (char)(&iStack_50)[*pcVar8];
        }
        pcVar8 = pcVar8 + 0x100;
      } while ((int)pcVar8 < 0x582cd9);
      DAT_005685f0 = 0x13;
      iVar7 = 1;
      pcVar8 = &DAT_00575cb8;
      do {
        if (*pcVar8 == '\0') {
          DAT_005685f0 = iVar7;
          return;
        }
        pcVar8 = pcVar8 + 0x208;
        iVar7 = iVar7 + 1;
      } while ((int)pcVar8 < 0x578148);
      return;
    }
  } while( true );
}

