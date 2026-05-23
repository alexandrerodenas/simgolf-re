/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046d200 @ 0x0046D200 */
/* Body size: 1246 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d200(void)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  short local_3c [30];
  
  uVar7 = 0xffffffff;
  sVar3 = 0;
  pcVar4 = s_In_preparation_for_the_tournamen_004e3d54;
  do {
    pcVar14 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  local_54 = 1;
  pcVar12 = &DAT_00575cb8;
  pcVar4 = pcVar14 + -uVar7;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = s_Install_TV_towers_and_booths_for_004e3d20;
  do {
    pcVar14 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar7;
  pcVar14 = pcVar13 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = s_Roll_your_greens_extra_smooth_an_004e3cf4;
  do {
    pcVar14 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar7;
  pcVar14 = pcVar13 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = s_Increase_the_depth_of_rough_and_d_004e3cc0;
  do {
    pcVar14 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar7;
  pcVar14 = pcVar13 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  do {
    if (*pcVar12 != '\0') {
      iVar9 = 3;
      if (299 < *(short *)(pcVar12 + 4)) {
        iVar9 = 4;
      }
      if (499 < *(short *)(pcVar12 + 4)) {
        iVar9 = 5;
      }
      if (iVar9 != *pcVar12) {
        uVar7 = 0xffffffff;
        pcVar4 = s_Change_hole_004e3cb0;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar10 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar4 = (char *)FUN_004ad425(local_54,&DAT_00838eac,10);
        uVar7 = 0xffffffff;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar10 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar4 = s_from_a_par_004e3ca0;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar10 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        cVar1 = *pcVar12;
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar4 = (char *)FUN_004ad425((int)cVar1,&DAT_00838eac,10);
        uVar7 = 0xffffffff;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar10 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar4 = s_to_a_par_004e3c94;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar10 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar4 = (char *)FUN_004ad425(iVar9,&DAT_00838eac,10);
        uVar7 = 0xffffffff;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar10 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar4 = &DAT_004c5fd8;
        do {
          pcVar14 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        *pcVar12 = (char)iVar9;
        iVar9 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        pcVar4 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar9 = (int)sVar3;
        sVar3 = sVar3 + 1;
        local_3c[iVar9] = (short)local_54;
      }
    }
    pcVar12 = pcVar12 + 0x208;
    local_54 = local_54 + 1;
    if (0x578147 < (int)pcVar12) {
      if ((_DAT_0059e7b8 & 0x4000000) == 0) {
        uVar7 = FUN_0046d6e0(400,100,0xfffff,0,0);
      }
      else {
        uVar7 = 0xfffff;
      }
      iVar9 = 0;
      DAT_005a47e0 = uVar7;
      if (0 < sVar3) {
        psVar11 = local_3c;
        do {
          if ((uVar7 & 1 << ((char)iVar9 + 3U & 0x1f)) == 0) {
            *(char *)(&DAT_00575ab0 + *psVar11 * 0x82) =
                 *(char *)(&DAT_00575ab0 + *psVar11 * 0x82) + '\x01';
          }
          iVar9 = iVar9 + 1;
          psVar11 = psVar11 + 1;
        } while (iVar9 < sVar3);
      }
      local_54 = 1;
      local_40 = &DAT_00575cd0;
      do {
        if (((char)local_40[-6] != '\0') && ((uVar7 & 1) != 0)) {
          local_48 = 0;
          do {
            if ((local_48 == 0) || (DAT_005685f0 + -2 <= local_54)) {
              local_50 = (uint)*(char *)((int)local_40 + -0x17);
              iVar9 = local_40[1];
              iVar10 = *local_40;
              if (local_48 != 0) {
                sVar3 = FUN_0045c1e0(2);
                local_50 = ((-(uint)(sVar3 != 0) & 4) - 2) + local_50 & 7;
              }
              local_4c = 0;
              local_44 = iVar9;
              do {
                sVar3 = FUN_0045c1e0(2);
                if (sVar3 != 0) {
                  iVar10 = iVar10 + (&DAT_004c2878)[local_50];
                }
                sVar3 = FUN_0045c1e0(2);
                if (sVar3 != 0) {
                  iVar9 = iVar9 + (&DAT_004c2898)[local_50];
                  local_44 = iVar9;
                }
                if (1 < local_4c) {
                  iVar6 = iVar9 + iVar10 * 0x32;
                  cVar1 = *(char *)((int)&DAT_005722e8 + iVar6);
                  if (((((&DAT_00578376)[cVar1 * 0x30] == '\x04') ||
                       ((&DAT_00578376)[cVar1 * 0x30] == '\r')) && (cVar1 != '\x16')) &&
                     ((iVar5 = FUN_0040bf60(iVar10,iVar9), iVar5 == 0 &&
                      ((&DAT_0053caf0)[iVar6] == 0)))) {
                    iVar6 = FUN_0040e000(iVar10,iVar9,(local_48 != 0) + '\x11',0);
                    iVar6 = iVar6 * 0x10;
                    (&DAT_0058bcbf)[iVar6] = (&DAT_0058bcbf)[iVar6] | 0x40;
                    uVar7 = *local_40 - iVar10;
                    uVar8 = local_40[1] - iVar9;
                    if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) <
                        (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
                      (&DAT_0058bcbe)[iVar6] = (((int)uVar7 < 1) - 1U & 0xfe) + 3;
                    }
                    else {
                      (&DAT_0058bcbe)[iVar6] = ((int)uVar8 < 1) - 1U & 2;
                    }
                    local_4c = 99;
                    iVar9 = local_44;
                  }
                }
                bVar2 = local_4c < 6;
                local_4c = local_4c + 1;
              } while (bVar2);
            }
            local_48 = local_48 + 1;
            uVar7 = DAT_005a47e0;
          } while (local_48 < 2);
        }
        local_40 = local_40 + 0x82;
        local_54 = local_54 + 1;
      } while ((int)local_40 < 0x578160);
      return;
    }
  } while( true );
}

