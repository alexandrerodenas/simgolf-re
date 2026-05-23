/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044fb30 @ 0x0044FB30 */
/* Body size: 13875 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044fb30(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  int iStack_cc;
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_a8;
  uint uStack_a4;
  int iStack_a0;
  int iStack_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84 [4];
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [4];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_24 [4];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar3 = (-(uint)(DAT_00822c88 != 0) & 0x19) + 0x19;
  piVar14 = local_84;
  for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  local_88 = 0;
  local_90 = 0;
  local_8c = 0;
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  if (param_1 == 0) {
    FUN_00473f60(&DAT_00821334,&DAT_00519cd4,0,0,0);
    iStack_b0 = DAT_00821324;
  }
  else {
    FUN_00473f60(&DAT_00821c8c,&DAT_00519cd4,0x23,0x1a,0);
  }
  FUN_00476310(0x80000000,0xffffffff,2,2);
  iStack_bc = 0;
  iStack_98 = 0;
  iStack_b4 = 1;
  do {
    iVar8 = iStack_b4;
    iVar4 = iStack_b4 * 0x208;
    cVar2 = *(char *)(&DAT_00575ab0 + iStack_b4 * 0x82);
    if (cVar2 == '\0') {
      if (param_1 == 0) goto LAB_00450932;
    }
    else {
      iStack_c8 = 0;
      piVar14 = aiStack_24;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar14 = (int)cVar2 << 3;
        piVar14 = piVar14 + 1;
      }
      iStack_a0 = 0;
      piVar14 = aiStack_48;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar14 = 8;
        piVar14 = piVar14 + 1;
      }
      iStack_b8 = 1;
      do {
        iVar15 = 0;
        iVar13 = 0;
        iVar9 = iStack_b8;
        do {
          while( true ) {
            iVar5 = 9;
            if (iStack_b8 != 7) {
              iVar5 = iStack_b8;
            }
            if (iVar5 < iVar9) break;
            iVar5 = (int)*(short *)(&DAT_00575ad8 + (iVar15 + iStack_b4 * 0x104 + iVar9) * 2);
            iStack_c8 = iStack_c8 + iVar5;
            iStack_a0 = iStack_a0 + iVar5 * iVar9;
            *(int *)((int)aiStack_48 + iVar13) = *(int *)((int)aiStack_48 + iVar13) + iVar5;
            *(int *)((int)aiStack_24 + iVar13) = *(int *)((int)aiStack_24 + iVar13) + iVar5 * iVar9;
            iVar9 = iVar9 + 1;
          }
          iVar15 = iVar15 + 0xb;
          iVar13 = iVar13 + 4;
          iVar9 = iStack_b8;
        } while (iVar15 < 0x58);
        iStack_b8 = iStack_b8 + 1;
      } while (iStack_b8 < 8);
      iStack_bc = iStack_bc + 1;
      if (7 < (int)*(short *)(iVar4 + 0x575bb4) / 2 + (int)*(short *)(iVar4 + 0x575bc0) +
              (int)*(short *)(iVar4 + 0x575b9e)) {
        iStack_98 = iStack_98 + 1;
      }
      local_84[1] = local_84[1] + cVar2;
      local_84[0] = local_84[0] + *(short *)(&DAT_00575ab4 + iStack_b4 * 0x82);
      iStack_b8 = 0;
      iStack_b4 = 0;
      iStack_94 = 0;
      uStack_a4 = 0;
      uStack_c4 = 0;
      iStack_c0 = 100;
      if (iStack_c8 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (iStack_a0 * 100) / iStack_c8;
      }
      local_84[2] = local_84[2] + iVar9;
      iVar9 = *(int *)(&DAT_00575ad0 + iVar4);
      if (iVar9 == 0) {
        iStack_a8 = 0;
      }
      else {
        iStack_a8 = (*(int *)(&DAT_00575c9c + iVar4) / iVar9) / 0x28;
      }
      local_84[3] = local_84[3] + iStack_a8;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (*(short *)(&DAT_00575c08 + iVar4) * 100) /
                (*(int *)(&DAT_00575ad4 + iVar4) / 2 + 4 + iVar9);
      }
      iStack_74 = iStack_74 + iVar9;
      if (iStack_2c != 0) {
        if (iStack_30 != 0) {
          iStack_94 = (iStack_c * 100) / iStack_30 - (iStack_8 * 100) / iStack_2c;
          if ((_DAT_0059e7b8 & 0x40) != 0) {
            iStack_94 = iStack_94 +
                        ((aiStack_24[0] * 100) / aiStack_48[0] -
                        (aiStack_24[1] * 100) / aiStack_48[1]);
          }
          iStack_70 = iStack_70 + iStack_94;
          uStack_c4 = (uint)(iVar3 <= iStack_94);
          if (iStack_94 < 100) {
            iStack_c0 = iStack_94;
          }
          uStack_a4 = (uint)(iStack_94 < 100);
          if (iVar3 <= iStack_94) {
            local_90 = local_90 + 1;
          }
        }
        if (iStack_34 != 0) {
          iStack_b4 = (iStack_10 * 100) / iStack_34 - (iStack_8 * 100) / iStack_2c;
          if ((_DAT_0059e7b8 & 0x40) != 0) {
            iStack_b4 = iStack_b4 +
                        ((aiStack_24[0] * 100) / aiStack_48[0] -
                        (aiStack_24[2] * 100) / aiStack_48[2]);
          }
          iStack_6c = iStack_6c + iStack_b4;
          if (iVar3 <= iStack_b4) {
            uStack_c4 = uStack_c4 | 2;
          }
          if (iStack_b4 < iStack_c0) {
            uStack_a4 = 2;
            iStack_c0 = iStack_b4;
          }
          if (iVar3 <= iStack_b4) {
            local_8c = local_8c + 1;
          }
        }
        if (aiStack_48[3] != 0) {
          iStack_b8 = (aiStack_24[3] * 100) / aiStack_48[3] - (iStack_8 * 100) / iStack_2c;
          if ((_DAT_0059e7b8 & 0x40) != 0) {
            iStack_b8 = iStack_b8 +
                        ((aiStack_24[0] * 100) / aiStack_48[0] - (iStack_14 * 100) / iStack_38);
          }
          iStack_68 = iStack_68 + iStack_b8;
          if (iVar3 <= iStack_b8) {
            uStack_c4 = uStack_c4 | 4;
          }
          if (iStack_b8 < iStack_c0) {
            uStack_a4 = 4;
            iStack_c0 = iStack_b8;
          }
          if (iVar3 <= iStack_b8) {
            local_88 = local_88 + 1;
          }
        }
      }
      if ((0 < iVar8) && (*(int *)(&DAT_00575cac + iVar4) < 2)) {
        iStack_64 = iStack_64 + 1;
      }
      if (iStack_c8 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = (*(int *)(&DAT_00575ca4 + iVar4) * 100) / iStack_c8;
      }
      iStack_60 = iStack_60 + iVar13;
      iStack_5c = iStack_5c + *(int *)(&DAT_00575ca4 + iVar4);
      iStack_58 = iStack_58 +
                  ((*(int *)(&DAT_00575ca4 + iVar4) - *(int *)(&DAT_00575ca0 + iVar4)) -
                  (&DAT_00575ca8)[iVar8 * 0x82]);
      if (param_1 == 0) {
        FUN_00473f60(&DAT_0082138c,&DAT_00519cd4,0,iStack_b0,0);
        iVar13 = iStack_b0 + 2;
        FUN_00476310(0x80000000,0xffffffff,2,2);
        DAT_0051a068._0_1_ = 0;
        FUN_00407280(iVar8);
        if (((&DAT_00575cb0)[iVar8 * 0x82] & 1) == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = (((&DAT_00575cb0)[iVar8 * 0x82] & 2) != 0) + '\x01';
        }
        if (2 < (byte)((((int)*(short *)(iVar4 + 0x575bb4) / 2 + (int)*(short *)(iVar4 + 0x575bc0) +
                         (int)*(short *)(iVar4 + 0x575b9e) < 8) - 1U & 3) + 2 + cVar2)) {
          FUN_00473e60(&DAT_00519cd4,0x5a,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xf,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        pcVar6 = (char *)FUN_004ad425((int)*(short *)(&DAT_00575ab4 + iVar8 * 0x82),&DAT_00821c50,10
                                     );
        uVar10 = 0xffffffff;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar15 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x97,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        pcVar6 = (char *)FUN_004ad425((int)*(char *)(&DAT_00575ab0 + iVar8 * 0x82),&DAT_00821c50,10)
        ;
        uVar10 = 0xffffffff;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar15 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xac,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        if (iStack_c8 == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = (iStack_a0 * 100) / iStack_c8;
        }
        FUN_0042dd50(iVar15);
        if ((*(byte *)(&DAT_00575cb0 + iVar8 * 0x82) & 0xc) != 0) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba638,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0xe3,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        pcVar6 = (char *)FUN_004ad425(iStack_a8,&DAT_00821c50,10);
        uVar10 = 0xffffffff;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar15 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar6 = &DAT_004d3140;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar15 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        cVar2 = *(char *)(&DAT_00575ab0 + iVar8 * 0x82);
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        if ((cVar2 * 5 <= iStack_a8) || (-1 < (int)(((cVar2 * 3 < iStack_a8) - 1 & 2) - 1))) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba638,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x116,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        pcVar6 = (char *)FUN_004ad425(iVar9,&DAT_00821c50,10);
        uVar10 = 0xffffffff;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar15 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar6 = &DAT_004c60c4;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar15 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        if ((iVar9 < 10) || (-1 < (int)(((0x31 < iVar9) - 1 & 0xfffffffe) + 1))) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba63c,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x144,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        FUN_0042dd50(iStack_94);
        if (iStack_94 < 0x32) {
          iVar9 = (iStack_94 < 0) - 1;
        }
        else {
          iVar9 = (iStack_94 < 100) + 1;
        }
        if (-1 < iVar9) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba640,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x171,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        FUN_0042dd50(iStack_b4);
        if (iStack_b4 < 0x32) {
          iVar9 = (iStack_b4 < 0) - 1;
        }
        else {
          iVar9 = (iStack_b4 < 100) + 1;
        }
        if (-1 < iVar9) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba644,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x19f,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        FUN_0042dd50(iStack_b8);
        if (iStack_b8 < 0x32) {
          iVar9 = (iStack_b8 < 0) - 1;
        }
        else {
          iVar9 = (iStack_b8 < 100) + 1;
        }
        if (-1 < iVar9) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba648,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x1ce,iVar13,~uVar10 - 1);
        if (iStack_c0 < 100) {
          uStack_c4 = uStack_c4 & ~uStack_a4;
        }
        uVar10 = 0xffffffff;
        DAT_0051a068._0_1_ = 0;
        pcVar6 = (&PTR_s_Breather_004c2a28)[uStack_c4];
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar9 = *(int *)(&DAT_00575cac + iVar4);
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = (char *)&DAT_0051a068;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        if ((iVar9 < 2) || (-1 < (int)((2 < iVar9) - 1))) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba64c,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1d7,iVar13,~uVar10 - 1);
        FUN_00473e60(&DAT_00519cd4,0x22b,iStack_b0 + 1,0);
        DAT_0051a068._0_1_ = 0;
        if (iStack_c8 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (*(int *)(&DAT_00575ca4 + iVar4) * 100) / iStack_c8;
        }
        FUN_0042dc00(iVar9);
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x27b,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        FUN_0042dc00(*(int *)(&DAT_00575ca4 + iVar4) * 100);
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x2c5,iVar13,~uVar10 - 1);
        DAT_0051a068._0_1_ = 0;
        FUN_0042dc00(((*(int *)(&DAT_00575ca4 + iVar4) - *(int *)(&DAT_00575ca0 + iVar4)) -
                     (&DAT_00575ca8)[iVar8 * 0x82]) * 100);
        if ((*(int *)(&DAT_00575ca4 + iVar4) - *(int *)(&DAT_00575ca0 + iVar4)) -
            (&DAT_00575ca8)[iVar8 * 0x82] < 0) {
          FUN_00473e60(&DAT_00519cd4,DAT_004ba658,iStack_b0,0);
        }
        uVar10 = 0xffffffff;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x312,iVar13,~uVar10 - 1);
        iStack_b0 = iStack_b0 + 0x11;
LAB_00450932:
        if ((iVar8 % 0x12 == 0) && (iStack_bc != 0)) {
          FUN_00473f60(&DAT_008213e4,&DAT_00519cd4,0,iStack_b0 + -2,0);
          iVar4 = iStack_b0 + 9;
          DAT_0051a068._0_1_ = 0;
          pcVar6 = s_Subtotal__004d3134;
          if (iVar8 != 9) {
            pcVar6 = s_Total__004d312c;
          }
          uVar10 = 0xffffffff;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xf,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          FUN_0042dc00(local_84[0]);
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x97,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          pcVar6 = (char *)FUN_004ad425(local_84[1],&DAT_00821c50,10);
          uVar10 = 0xffffffff;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          iVar9 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar6;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar16 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar2 != '\0');
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = pcVar16 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xac,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          FUN_0042dd50(local_84[2]);
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0xe3,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          if (0x3b < local_84[3]) {
            pcVar6 = (char *)FUN_004ad425(local_84[3] / 0x3c,&DAT_00821c50,10);
            uVar10 = 0xffffffff;
            do {
              pcVar17 = pcVar6;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar17 = pcVar6 + 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar2 != '\0');
            uVar10 = ~uVar10;
            iVar9 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar16 = pcVar6;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar16 = pcVar6 + 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar2 != '\0');
            pcVar6 = pcVar17 + -uVar10;
            pcVar17 = pcVar16 + -1;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar17 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar17 = pcVar17 + 1;
            }
            uVar10 = 0xffffffff;
            pcVar6 = &DAT_004d3128;
            do {
              pcVar17 = pcVar6;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar17 = pcVar6 + 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar2 != '\0');
            uVar10 = ~uVar10;
            iVar9 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar16 = pcVar6;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar16 = pcVar6 + 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar2 != '\0');
            pcVar6 = pcVar17 + -uVar10;
            pcVar17 = pcVar16 + -1;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar17 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
          pcVar6 = (char *)FUN_004ad425(iStack_a8 % 0x3c,&DAT_00821c50,10);
          uVar10 = 0xffffffff;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          iVar9 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar6;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar16 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar2 != '\0');
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = pcVar16 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar6 = &DAT_004d3140;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          iVar9 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar6;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar16 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar2 != '\0');
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = pcVar16 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x116,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          pcVar6 = (char *)FUN_004ad425(iStack_74 / iStack_bc,&DAT_00821c50,10);
          uVar10 = 0xffffffff;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          iVar9 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar6;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar16 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar2 != '\0');
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = pcVar16 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar6 = &DAT_004c60c4;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          iVar9 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar6;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar16 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar2 != '\0');
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = pcVar16 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x144,iVar4,~uVar10 - 1);
          iVar9 = iStack_70 / iStack_bc;
          DAT_0051a068._0_1_ = 0;
          FUN_0042dd50(iVar9);
          if (iVar9 < 0x32) {
            iVar9 = (iVar9 < 0) - 1;
          }
          else {
            iVar9 = (iVar9 < 100) + 1;
          }
          if (0 < iVar9) {
            FUN_00473e60(&DAT_00519cd4,DAT_004ba640,iStack_b0 + 7,0);
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x171,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          iVar9 = iStack_6c / iStack_bc;
          FUN_0042dd50(iVar9);
          if (iVar9 < 0x32) {
            iVar9 = (iVar9 < 0) - 1;
          }
          else {
            iVar9 = (iVar9 < 100) + 1;
          }
          if (0 < iVar9) {
            FUN_00473e60(&DAT_00519cd4,DAT_004ba644,iStack_b0 + 7,0);
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x19f,iVar4,~uVar10 - 1);
          DAT_0051a068._0_1_ = 0;
          iVar9 = iStack_68 / iStack_bc;
          FUN_0042dd50(iVar9);
          if (iVar9 < 0x32) {
            iVar9 = ((-1 < iVar9) - 1 & 0x7d08) + 0x80000000;
          }
          else {
            iVar9 = ((iVar9 < 100) - 1 & 0x1164) + 0x80001284;
          }
          if (0 < iVar9) {
            FUN_00473e60(&DAT_00519cd4,DAT_004ba648,iStack_b0 + 7,0);
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x1ce,iVar4,~uVar10 - 1);
          uVar10 = 0xffffffff;
          pcVar6 = &DAT_004c61e0;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          FUN_0042dc00(iStack_60 / iStack_bc);
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x27b,iVar4,~uVar10 - 1);
          uVar10 = 0xffffffff;
          pcVar6 = &DAT_004c61e0;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          FUN_0042dc00(iStack_5c * 100);
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x2c5,iVar4,~uVar10 - 1);
          iVar9 = iStack_58;
          uVar10 = 0xffffffff;
          pcVar6 = &DAT_004c61e0;
          do {
            pcVar17 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar17 = pcVar6 + 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar6 = pcVar17 + -uVar10;
          pcVar17 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
          FUN_0042dc00(iStack_58 * 100);
          if (iVar9 < 0) {
            FUN_00473e60(&DAT_00519cd4,DAT_004ba658,iStack_b0 + 7,0);
          }
          uVar10 = 0xffffffff;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x312,iVar4,~uVar10 - 1);
          iStack_b0 = DAT_008213d4 + -0xb + iVar4;
        }
      }
    }
    iStack_b4 = iVar8 + 1;
  } while (iStack_b4 < 0x13);
  if (param_1 == 0) {
    if (iStack_bc == 0) {
      iStack_b0 = iStack_b0 + -2;
    }
    FUN_00473f60(&DAT_0082143c,&DAT_00519cd4,0,iStack_b0,0);
    iVar3 = iStack_b0 + -0x3f + DAT_0082142c;
    uVar10 = 0xffffffff;
    pcVar6 = s_COURSE_REPORT_004d2e4c;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821020,s_COURSE_REPORT_004d2e4c,0x13c,0x23,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Top_100_Hole_004d2e3c;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Top_100_Hole_004d2e3c,0xb2,iVar3,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Top_18_Hole_004d2e30;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Top_18_Hole_004d2e30,0x14f,iVar3,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Scenic_Hole_004d2e24;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Scenic_Hole_004d2e24,0x1e7,iVar3,~uVar10 - 1);
    iVar8 = 0;
    do {
      pcVar6 = *(char **)((int)&PTR_DAT_004d2078 + iVar8);
      if (pcVar6 != (char *)0x0) {
        uVar10 = 0xffffffff;
        pcVar17 = pcVar6;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,pcVar6,*(undefined4 *)((int)&DAT_004d20ac + iVar8),0x4c,
                     ~uVar10 - 1);
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0x30);
    iVar3 = iVar3 + 0xf;
    iVar8 = 0x2de;
  }
  else {
    uVar10 = 0xffffffff;
    pcVar6 = s_REPORT_of_the_SIM_GOLF_ASSOCIATI_004d3104;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821020,s_REPORT_of_the_SIM_GOLF_ASSOCIATI_004d3104,0xbe,0x2a,~uVar10 - 1);
    iVar3 = DAT_005685f0;
    uVar10 = 0xffffffff;
    iStack_cc = 0;
    pcVar6 = s_Selection_Criteria__004d30ec;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_0044faf0(iVar3 + -1);
    switch(uVar7) {
    case 0:
      uStack_c4 = 0;
      iStack_c8 = 5;
      iStack_c0 = 5;
      break;
    case 1:
      uStack_c4 = 1;
      iStack_c8 = 9;
      iStack_c0 = 9;
      break;
    case 2:
      iStack_c8 = DAT_005685f0 + -1;
      iStack_c0 = 0x11;
      uStack_c4 = 2;
      break;
    case 3:
      uStack_c4 = 3;
      iStack_c8 = 0x12;
      iStack_c0 = 0x12;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (&PTR_s_Municipal_004c2a18)[uStack_c4];
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar3 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x4b,0x4d,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Grade__004d30e4;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x132,0x4d,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Ideal__Minimum__004d30d0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1f1,0x4d,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Length_of_Course_004d30bc;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0x68,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    iVar3 = ((iStack_c0 * 100) / 0x12) * (uStack_c4 * 5 + 0x39);
    FUN_0042dc00(iVar3);
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30b4;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    if (iStack_c0 == 0x12) {
      iVar8 = iVar3 + -1000;
    }
    else {
      iVar8 = iVar3 - (iVar3 * 10) / (int)(uStack_c4 * 5 + 0x14);
    }
    FUN_0042dc00(iVar8);
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0x68,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Number_of_Holes_004d30a4;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0x79,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iStack_c0,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    pcVar6 = (char *)FUN_004ad425(iStack_c0 - (int)(9 / (longlong)(int)(4 - uStack_c4)),
                                  &DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0x79,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Time_to_Play_004d3090;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0x8a,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_4_hours_or_less__max__5_hrs__004d3070;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0x8a,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Fun_Factor_004d3064;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0x9b,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d305c;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0x9b,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Holes_with_Variety_004d3048;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0xac,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iStack_c8,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    iVar8 = iStack_c8 + -9;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_00467130(iVar8,0,99,&DAT_00821c50,10);
    pcVar6 = (char *)FUN_004ad425(uVar7);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0xac,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Scenic_Holes_004d3038;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0xbd,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iStack_c8,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_00467130(iVar8,0,99,&DAT_00821c50,10);
    pcVar6 = (char *)FUN_004ad425(uVar7);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0xbd,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Length_Holes_004d3028;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0xce,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iStack_c8,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_00467130(iVar8,0,99,&DAT_00821c50,10);
    pcVar6 = (char *)FUN_004ad425(uVar7);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0xce,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Accuracy_Holes__004d3014;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0xdf,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iStack_c8,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_00467130(iVar8,0,99,&DAT_00821c50,10);
    pcVar6 = (char *)FUN_004ad425(uVar7);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0xdf,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Imagination_Holes__004d3000;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0xf0,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iStack_c8,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_00467130(iVar8,0,99,&DAT_00821c50,10);
    pcVar6 = (char *)FUN_004ad425(uVar7);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0xf0,~uVar10 - 1);
    uVar10 = 0xffffffff;
    pcVar6 = s_Facilities_on_Site__004d2fe8;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x77,0x101,~uVar10 - 1);
    iVar8 = iStack_c8 / 2;
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425(iVar8 + 1,&DAT_00821c50,10);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004d30a0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar7 = FUN_00467130(iVar8 + -3,0,99,&DAT_00821c50,10);
    pcVar6 = (char *)FUN_004ad425(uVar7);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c59e0;
    do {
      pcVar17 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar2 != '\0');
    pcVar6 = pcVar17 + -uVar10;
    pcVar17 = pcVar16 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar17 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1ea,0x101,~uVar10 - 1);
    iVar4 = local_84[0];
    if (iStack_bc != 0) {
      DAT_0051a068._0_1_ = 0;
      FUN_0042dc00(local_84[0]);
      uVar10 = 0xffffffff;
      pcVar6 = &DAT_004c6194;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar9 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0x68,~uVar10 - 1);
      if (iStack_c0 == 0x12) {
        iVar3 = -((iVar3 - iVar4) / 100);
      }
      else {
        iVar3 = (int)((iVar4 - iVar3) * (uStack_c4 + 4) * 5) / iVar3;
      }
      iStack_cc = FUN_00467130(iVar3 + 10,0,10);
      if (0 < iStack_cc) {
        iVar4 = 0x12f;
        iVar3 = iStack_cc;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar4,0x68,0);
          iVar4 = iVar4 + 0xe;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (iStack_cc == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0x68,~uVar10 - 1);
        FUN_00476310(0x80000000,0xffffffff,2,2);
        iStack_cc = -999;
      }
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(DAT_005685f0 + -1,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      iVar3 = iStack_c0 - DAT_005685f0;
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      uVar11 = iVar3 + 1;
      uVar12 = (int)uVar11 >> 0x1f;
      iVar3 = 10 - ((uVar11 ^ uVar12) - uVar12) * (4 - uStack_c4);
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0x79,~uVar10 - 1);
      iVar4 = iVar3;
      if (iVar3 < 0) {
        iVar4 = 0;
      }
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar3 = iVar4;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0x79,0);
          iVar9 = iVar9 + 0xe;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iStack_cc = iStack_cc + iVar4;
      if (iVar4 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0x79,~uVar10 - 1);
        FUN_00476310(0x80000000,0xffffffff,2,2);
        iStack_cc = -999;
      }
      iVar3 = local_84[3];
      DAT_0051a068._0_1_ = 0;
      if (0x3b < local_84[3]) {
        pcVar6 = (char *)FUN_004ad425(local_84[3] / 0x3c,&DAT_00821c50,10);
        uVar10 = 0xffffffff;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar4 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar6 = &DAT_004d2fd0;
        do {
          pcVar17 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        iVar4 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar6;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar16 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar2 != '\0');
        pcVar6 = pcVar17 + -uVar10;
        pcVar17 = pcVar16 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      pcVar6 = (char *)FUN_004ad425(iVar3 % 0x3c,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar4 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = &DAT_004d2fcc;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar4 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0x8a,~uVar10 - 1);
      iVar4 = -((iVar3 + -0xeb) / 6);
      iVar9 = iVar4 + 10;
      if ((iVar9 == 0) && (iVar3 < 0x12d)) {
        iVar9 = iVar4 + 0xb;
      }
      iVar3 = FUN_00467130(iVar9,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0x8a,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0x8a,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      iStack_bc = iStack_74 / iStack_bc;
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(iStack_bc,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = &DAT_004c60c4;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0x9b,~uVar10 - 1);
      iVar3 = FUN_00467130((iStack_bc + -0x6d) / 10 + 10,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0x9b,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0x9b,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      iVar3 = iStack_64;
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(iStack_64,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar4 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0xac,~uVar10 - 1);
      iVar3 = FUN_00467130((iVar3 - iStack_c8) + 10,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0xac,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0xac,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(iStack_98,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0xbd,~uVar10 - 1);
      iVar3 = FUN_00467130((iStack_98 - iStack_c8) + 10,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0xbd,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0xbd,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(local_90,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0xce,~uVar10 - 1);
      iVar3 = FUN_00467130((local_90 - iStack_c8) + 10,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0xce,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0xce,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(local_8c,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0xdf,~uVar10 - 1);
      iVar3 = FUN_00467130((local_8c - iStack_c8) + 10,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0xdf,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0xdf,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(local_88,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0xf0,~uVar10 - 1);
      iVar3 = FUN_00467130((local_88 - iStack_c8) + 10,0,10);
      if (0 < iVar3) {
        iVar9 = 0x12f;
        iVar4 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar9,0xf0,0);
          iVar9 = iVar9 + 0xe;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0xf0,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      iVar4 = 0;
      iVar3 = 6;
      do {
        if ((DAT_005a6370 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
      DAT_0051a068._0_1_ = 0;
      pcVar6 = (char *)FUN_004ad425(iVar4,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xee,0x101,~uVar10 - 1);
      iVar3 = FUN_00467130((iVar4 - iVar8) * 2 + 8,0,10);
      if (0 < iVar3) {
        iVar4 = 0x12f;
        iVar8 = iVar3;
        do {
          FUN_00473e60(&DAT_00519cd4,iVar4,0x101,0);
          iVar4 = iVar4 + 0xe;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iStack_cc = iStack_cc + iVar3;
      if (iVar3 == 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar10 = 0xffffffff;
        pcVar6 = s___not_acceptable___004d2fd4;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00476700(&DAT_00821ee8,s___not_acceptable___004d2fd4,0x182,0x101,~uVar10 - 1);
        iStack_cc = -999;
        FUN_00476310(0x80000000,0xffffffff,2,2);
      }
      else if (0x59 < iStack_cc) {
        if (9 < DAT_005685f0) {
          FUN_0046e7b0(0xc,DAT_00576d00 * 0x400 + 0x200,DAT_00576d04 * 0x400 + 0x200);
        }
        if (0x12 < DAT_005685f0) {
          FUN_0046e7b0(0x10,DAT_00577f48 * 0x400 + 0x200,DAT_00577f4c * 0x400 + 0x200);
        }
        if ((iStack_cc == 100) && (0x12 < DAT_005685f0)) {
          FUN_0046e7b0(0x15,DAT_00577f48 * 0x400 + 0x200,DAT_00577f4c * 0x400 + 0x200);
        }
      }
    }
    uVar10 = 0xffffffff;
    pcVar6 = s_Committee_recommendation_004d2fb0;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Committee_recommendation_004d2fb0,0xae,0x120,~uVar10 - 1);
    DAT_0051a068._0_1_ = 0;
    if (iStack_cc < 1) {
      FUN_00476310(0x80007d08,0xffffffff,2,2);
      uVar10 = 0xffffffff;
      pcVar6 = &DAT_004d2fa8;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_004d2fa8,0x172,0x50,~uVar10 - 1);
      uVar10 = 0xffffffff;
      pcVar6 = s_Improvement_Required__004d2f90;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821f28,s_Improvement_Required__004d2f90,400,0x136,~uVar10 - 1);
      FUN_00476310(0x80000000,0xffffffff,2,2);
      iVar8 = 0x2bd;
      _DAT_0059e7b8 = _DAT_0059e7b8 & 0xffbfffff;
      iVar3 = 0x18e;
    }
    else {
      pcVar6 = (char *)FUN_004ad425(iStack_cc,&DAT_00821c50,10);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = &DAT_004d2f88;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      _DAT_00561250 = iStack_cc;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476750(&DAT_00821ee8,&DAT_0051a068,0x18c,0x4d,~uVar10 - 1);
      DAT_0051a068._0_1_ = 0;
      switch((iStack_cc + -0x28) / 5) {
      case 1:
        pcVar6 = s_SGA_Qualifying_School_004d2e88;
        break;
      case 2:
        pcVar6 = s_Jr__Tour_Event_004d2ea0;
        break;
      case 3:
        pcVar6 = s_Jr__Tour_Championship__004d2eb0;
        break;
      case 4:
        pcVar6 = s_SGA_Amateur_Championship_004d2ec8;
        break;
      case 5:
        pcVar6 = s_Senior_SGA_Tour_Event_004d2ee4;
        break;
      case 6:
        pcVar6 = s_Senior_SGA_Championship_004d2efc;
        break;
      case 7:
        pcVar6 = s_SGA_Tour_Event_004d2f14;
        break;
      case 8:
        pcVar6 = s_SGA_Players_Championship_004d2f24;
        break;
      case 9:
        pcVar6 = s_SGA_Championship__004d2f40;
        break;
      case 10:
      case 0xb:
      case 0xc:
        if (iStack_c8 == 0x12) {
          pcVar6 = s_Grand_Slam_Championship__004d2f6c;
        }
        else {
          pcVar6 = s_Mini_Slam_Championship__004d2f54;
        }
        break;
      default:
        pcVar6 = s_Jr__Qualifying_School_004d2e70;
      }
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821020,&DAT_0051a068,400,0x136,~uVar10 - 1);
      uVar10 = 0xffffffff;
      iVar3 = ((iStack_cc + -0x32) / 5 + 5) * (uStack_c4 + 1) * DAT_005685f0 * 2;
      pcVar6 = &DAT_004c61e0;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = (char *)&DAT_0051a068;
      DAT_00567b04 = iVar3;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      FUN_0042dc00(iVar3);
      uVar10 = 0xffffffff;
      pcVar6 = s__000_first_prize__004d2e5c;
      do {
        pcVar17 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar3 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar16;
      } while (cVar2 != '\0');
      pcVar6 = pcVar17 + -uVar10;
      pcVar17 = pcVar16 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00476700(&DAT_00821f28,&DAT_0051a068,400,0x152,~uVar10 - 1);
      iVar8 = 0x2bd;
      _DAT_0059e7b8 = _DAT_0059e7b8 | 0x402000;
      iVar3 = 0x18e;
    }
  }
  bVar1 = false;
  FUN_00473e60(&DAT_00519cd4,iVar8,iVar3,0);
  if (param_1 != 2) {
    FUN_00480c80(0);
    FUN_0045bf80(10,0);
    FUN_00483d30();
    do {
      FUN_0045bf80(1,0);
      FUN_0047ab50(&iStack_4c,&iStack_50);
      if ((((iStack_4c < iVar8) || (iVar8 + 0x2c <= iStack_4c)) || (iStack_50 < iVar3)) ||
         (iVar3 + 0x2c <= iStack_50)) {
        if (bVar1) {
          bVar1 = false;
          goto LAB_004531d3;
        }
      }
      else if (!bVar1) {
        bVar1 = true;
LAB_004531d3:
        FUN_00473e60(&DAT_00519cd4,iVar8,iVar3,0);
        FUN_00480c80(0);
      }
      FUN_0045c030();
    } while ((DAT_00822d68 == 0) && (iVar4 = FUN_0045ae70(), iVar4 == 0));
    DAT_00569498 = 0;
    FUN_0045c150();
  }
  return;
}

