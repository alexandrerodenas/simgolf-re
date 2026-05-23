/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046e810 @ 0x0046E810 */
/* Body size: 2409 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e810(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  byte bVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 *unaff_FS_OFFSET;
  int *local_644;
  int local_640;
  int local_638;
  int local_630;
  int local_62c;
  undefined4 local_628;
  char local_624 [24];
  int local_60c;
  int local_608;
  int local_604;
  int local_600;
  char local_5fc [36];
  int aiStack_5d8 [371];
  undefined4 local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a86;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_624[0] = '\0';
  local_624[1] = '\0';
  local_624[2] = '\0';
  local_624[3] = '\0';
  local_624[4] = '\0';
  local_624[5] = '\0';
  local_624[6] = '\0';
  local_624[7] = '\0';
  local_624[8] = '\0';
  local_624[9] = '\0';
  local_624[10] = '\0';
  local_624[0xb] = '\0';
  local_624[0xc] = '\0';
  local_624[0xd] = '\0';
  local_624[0xe] = '\0';
  local_624[0xf] = '\0';
  local_624[0x10] = '\0';
  local_624[0x11] = '\0';
  local_624[0x12] = '\0';
  local_624[0x13] = '\0';
  local_624[0x14] = '\0';
  local_624[0x15] = '\0';
  if (DAT_004e3db8 != -1) {
    if (DAT_004e3dbc != -1) {
      iVar4 = FUN_0042fb90(DAT_004e3dbc,DAT_008392a4,&local_62c,&local_630,0);
      if (iVar4 == 0) {
        DAT_004c2ba0 = DAT_004e3dbc >> 10;
        DAT_004c2ba4 = DAT_008392a4 >> 10;
      }
      else {
        iVar4 = FUN_00467130(local_62c + -100,0,600);
        local_608 = FUN_00467130(local_630 + -100,0,0x1b8);
        uVar8 = 0xffffffff;
        pcVar5 = s_snapshots_accomp_004e3e7c;
        do {
          pcVar16 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar16 + -uVar8;
        pcVar16 = local_5fc;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcVar5 = (char *)FUN_004ad425(DAT_004e3db8,&DAT_008392ac,10);
        uVar8 = 0xffffffff;
        do {
          pcVar16 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar10 = -1;
        pcVar5 = local_5fc;
        do {
          pcVar15 = pcVar5;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar8;
        pcVar16 = pcVar15 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c4e40;
        do {
          pcVar16 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        local_60c = iVar4;
        iVar10 = -1;
        pcVar5 = local_5fc;
        do {
          pcVar15 = pcVar5;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar8;
        pcVar16 = pcVar15 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        local_604 = iVar4 + 200;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        local_600 = local_608 + 0xa0;
        FUN_00475580(local_5fc,&local_60c);
        DAT_004e3dbc = -1;
      }
    }
    DAT_00839338 = DAT_00839338 + 1;
    if (0x13 < DAT_00839338) {
      if (DAT_004e3db8 != 99) {
        FUN_004481b0(0x38,100,0,0,0);
      }
      FUN_00474ae0();
      iVar4 = 0;
      local_4 = 0;
      FUN_00475840(s_interface_bulletinboard_mantlewo_004e3e58,&DAT_005199c8,0,0x100,0);
      FUN_00475c90(&DAT_00519cd4,0,0,800,600);
      bVar13 = 0;
      FUN_00474ae0();
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar12 = aiStack_5d8;
      while( true ) {
        piVar12 = piVar12 + 1;
        iVar10 = -1;
        iVar14 = 0x7ffffff;
        iVar6 = 0;
        piVar11 = &DAT_004c15a0;
        do {
          iVar7 = *piVar11;
          if (((iVar7 != 0) && (local_624[iVar6] == '\0')) && (iVar7 < iVar14)) {
            iVar10 = iVar6;
            iVar14 = iVar7;
          }
          piVar11 = piVar11 + 0xc;
          iVar6 = iVar6 + 1;
        } while ((int)piVar11 < 0x4c19c0);
        if (iVar10 == -1) break;
        *piVar12 = iVar10;
        iVar4 = iVar4 + 1;
        local_624[iVar10] = '\x01';
      }
      if (0 < iVar4) {
        local_644 = aiStack_5d8;
        iVar10 = 0x1bb;
        local_640 = 0;
        local_638 = iVar4;
        do {
          local_644 = local_644 + 1;
          iVar14 = *local_644;
          FUN_004762d0(&DAT_00519fd8,0,0,0);
          uVar2 = DAT_00834170;
          local_628 = DAT_0059bf90;
          DAT_0051a068._0_1_ = 0;
          DAT_00834170 = (&DAT_004c15a0)[iVar14 * 0xc];
          DAT_0059bf90 = *(undefined4 *)(&DAT_004c15a4 + iVar14 * 0x30);
          FUN_0040daa0(0);
          uVar8 = 0xffffffff;
          pcVar5 = &DAT_004e3e54;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar14 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar5;
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          uVar9 = DAT_00834170 & 0x800003ff;
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffc00) + 1;
          }
          pcVar5 = (char *)FUN_004ad425(((int)(uVar9 * 0x1e + ((int)(uVar9 * 0x1e) >> 0x1f & 0x3ffU)
                                              ) >> 10) + 1,&DAT_008392ac,10);
          uVar8 = 0xffffffff;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar14 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar5;
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar8 = 0xffffffff;
          pcVar5 = &DAT_004c3f70;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar14 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar5;
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar3 = DAT_00834170, uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_0040d7b0(uVar3);
          DAT_0059bf90 = local_628;
          iVar14 = (-(uint)bVar13 & 0x203) + 0x14 + local_640 % 0x32;
          DAT_00834170 = uVar2;
          FUN_00473f60(&DAT_005a3aa4,PTR_DAT_004c1570,iVar14 + -7,iVar10 + -0xad,0);
          FUN_004049d0(&DAT_0051a068,iVar14,iVar10,0x80002108);
          uVar8 = 0xffffffff;
          pcVar5 = s_snapshots_accomp_004e3e7c;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar6 = *local_644;
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          pcVar5 = (char *)FUN_004ad425(iVar6,&DAT_008392ac,10);
          uVar8 = 0xffffffff;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar6 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar5;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar8 = 0xffffffff;
          pcVar5 = &DAT_004c4e40;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar6 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar15 = pcVar5;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar15 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar1 != '\0');
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_00475210(&DAT_0051a068);
          local_640 = local_640 + 0x23;
          bVar13 = bVar13 ^ 1;
          FUN_00475c60(&DAT_00519cd4,0,0,iVar14,iVar10 + -0xa6,200,0xa0);
          FUN_00473f60(&DAT_005a4558,PTR_DAT_004c1570,iVar14 + 100,iVar10 + -0xb3,0);
          iVar10 = iVar10 + -0xe;
          local_638 = local_638 + -1;
        } while (local_638 != 0);
      }
      FUN_00473f60(&DAT_005a3ad0,PTR_DAT_004c1570,600,0x15e,0);
      iVar10 = 0;
      iVar14 = 0;
      iVar6 = 0;
      do {
        if ((&DAT_004c15a0)[iVar6 * 0xc] == 0) {
          iVar7 = iVar6;
          if (DAT_00822c88 < 2) {
            if (iVar6 == 0) {
              iVar7 = 0x1d;
            }
            else if (iVar6 == 1) {
              iVar7 = 0x1e;
            }
            else if (iVar6 == 4) {
              iVar7 = 0x1f;
            }
          }
          FUN_00473f60(&DAT_005a3b80 + iVar7 * 0x2c,PTR_DAT_004c1570,iVar10 / 2 + 0x268,iVar10 + 400
                       ,0);
          iVar14 = iVar14 + 1;
          iVar10 = iVar10 + -4 + (int)(short)(&DAT_004c2d9e)[iVar6 * 2];
          if (2 < iVar14) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x16);
      FUN_00473f60(&DAT_005a399c,PTR_DAT_004c1570,0x207,0x18b,0);
      FUN_00473f60(&DAT_005a39c8,PTR_DAT_004c1570,0xb1,0x18b,0);
      FUN_00473f60(&DAT_005a3afc,PTR_DAT_004c1570,0x33,0x1e2,0);
      FUN_00473f60(&DAT_005a3b28,PTR_DAT_004c1570,0x2dc,0x1ff,0);
      iVar10 = iVar4 * -0xe;
      FUN_00473f60(&DAT_005a38ec,PTR_DAT_004c1570,0x11c,iVar10 + 0x130,0);
      FUN_00473f60(&DAT_005a3970,PTR_DAT_004c1570,0x120,iVar10 + 0x153,0);
      FUN_00473f60(&DAT_005a3970,PTR_DAT_004c1570,0x120,iVar10 + 0x14f,0);
      iVar14 = 0;
      iVar10 = iVar10 + 0x15d;
      if (0 < iVar4) {
        do {
          iVar6 = aiStack_5d8[iVar4 - iVar14];
          if (DAT_00822c88 < 2) {
            if (iVar6 == 0) {
              iVar6 = 0x1d;
            }
            else if (iVar6 == 1) {
              iVar6 = 0x1e;
            }
            else if (iVar6 == 4) {
              iVar6 = 0x1f;
            }
          }
          FUN_00473f60(&DAT_005a34f8 + iVar6 * 0x2c,PTR_DAT_004c1570,0x120,iVar10,0);
          iVar6 = iVar10 + 0xe;
          if (iVar14 == 0) {
            FUN_00473f60(&DAT_005a3944,PTR_DAT_004c1570,0x120,iVar6,0);
            iVar6 = iVar10 + 0x10;
          }
          iVar14 = iVar14 + 1;
          iVar10 = iVar6;
        } while (iVar14 < iVar4);
      }
      FUN_00473f60(&DAT_005a38c0,PTR_DAT_004c1570,0x120,0x15f,0);
      FUN_00473f60(&DAT_005a3918,PTR_DAT_004c1570,0x139,0x1e4,0);
      FUN_00480c80(0);
      FUN_0045bf80(0x3c,0);
      FUN_00483d30();
      do {
        FUN_00480c80(0);
        FUN_0045bf80(0x1e,0);
        FUN_00483bd0();
        if (DAT_00822d68 != 0) break;
        iVar4 = FUN_0045ae70();
      } while (iVar4 == 0);
      FUN_00483d30();
      DAT_00822d68 = 0;
      if ((DAT_004c2c9c != 0) && (DAT_004e3db8 != 99)) {
        FUN_00474440(&DAT_00519cd4,0,0,0x3ecccccd,0,1);
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xc);
        uVar8 = 0xffffffff;
        pcVar5 = s_Add_three_skill_points_to_your_p_004e3e28;
        do {
          pcVar16 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar16 + -uVar8;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        DAT_00838f70 = 1;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_0046de70(&DAT_0051a068,0x50,5);
        _DAT_00583170 = (short)DAT_004d60a9;
        _DAT_0058316e = 0;
        DAT_004c2c9c = FUN_0045f0f0(s_Gary_Golf_004d6098,(int)DAT_004c2c9c,
                                    (-(uint)(DAT_004c2c9c != 0) & 0xfffffff6) + 0xd,0x9c,200);
      }
      DAT_004e3db8 = -1;
      FUN_00483d30();
      DAT_00822d68 = 0;
      local_4 = local_4 & 0xffffff00;
      FUN_00474c40();
      local_4 = 0xffffffff;
      FUN_00474c40();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}

