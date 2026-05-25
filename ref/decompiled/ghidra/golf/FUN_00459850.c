/* Ghidra decompiled: golf.exe */
/* Function: FUN_00459850 @ 0x00459850 */


void FUN_00459850(void)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined **ppuVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  uint local_294;
  uint local_290;
  int local_28c;
  uint local_288;
  uint *local_27c;
  uint local_278;
  int local_274;
  int iStack_270;
  int iStack_26c;
  uint local_268;
  uint local_264;
  uint local_260 [152];
  
  local_290 = 0;
  local_28c = 0;
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  local_294 = 0xffffffff;
  do {
    uVar14 = 0;
    local_288 = 0;
    FUN_00473e60(&DAT_00519cd4,0,0,0);
    FUN_004762d0(&DAT_00821020,0,0,0);
    FUN_00404b70(s_SELECT_THE_NEXT_PAIR_OF_GOLFERS_004d374c,0x152,0xe,0x80000000);
    if (local_28c == 2) {
      uVar12 = 0xffffffff;
      iVar8 = 0;
      puVar6 = local_260;
      do {
        if ((local_290 & 1 << ((byte)iVar8 & 0x1f)) != 0) {
          if (uVar12 == 0xffffffff) {
            uVar12 = *puVar6;
          }
          else {
            local_264 = *puVar6;
          }
        }
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar8 < 0x10);
      iVar8 = 0;
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
    }
    local_27c = local_260;
    local_274 = 0;
    do {
      uVar12 = ((DAT_005a5a24 - local_274) + 0x98) % 0x98;
      if ((&DAT_005794d9)[uVar12 * 0x100] == -1) {
        uVar9 = -(uint)((uVar14 & 1) != 0) & 0x149;
        iVar8 = ((int)uVar14 / 2) * 0x88;
        iVar15 = iVar8 + 0x32;
        uVar14 = 1 << ((byte)local_288 & 0x1f) & local_290;
        FUN_00473e60(&DAT_00519cd4,uVar9 + 6,iVar15,0);
        puVar3 = PTR_DAT_004c1570;
        if (local_294 == local_288) {
          if (uVar14 == 0) {
            iVar15 = iVar8 + 0x31;
            goto LAB_00459a61;
          }
LAB_00459a65:
          FUN_0046c940(uVar12);
          FUN_00473cb0(puVar3,uVar9,iVar15 + 4,1,1,1,0);
        }
        else {
LAB_00459a61:
          if (uVar14 != 0) goto LAB_00459a65;
          FUN_0046c940(uVar12);
          FUN_00474380(puVar3,uVar9,iVar15 + 4,0x3f333333,1,1,1,0,1);
        }
        uVar14 = local_288 + 1;
        *local_27c = uVar12;
        local_27c = local_27c + 1;
        FUN_004762d0(&DAT_00821f08,0,0,0);
        DAT_0051a068._0_1_ = 0;
        FUN_004676e0(uVar12,0);
        FUN_00404b70(&DAT_0051a068,uVar9 + 0xd6,iVar15 + 9,0x80000000);
        FUN_004762d0(&DAT_00821ee8,0,0,0);
        uVar10 = 0xffffffff;
        pcVar5 = (char *)(&DAT_004d6088 + (short)(&DAT_0057956e)[uVar12 * 0x80] * 0x8c);
        do {
          pcVar18 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar5 = pcVar18 + -uVar10;
        pcVar18 = (char *)&DAT_0051a068;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar18 = pcVar18 + 1;
        }
        FUN_00404b70(&DAT_0051a068,uVar9 + 0x106,iVar15 + 0x28,0x80000000);
        uVar2 = *(ushort *)(&DAT_00579570 + uVar12 * 0x100);
        if ((uVar2 & 8) != 0) {
          uVar10 = 0xffffffff;
          pcVar5 = s_Single_004c86d4;
          do {
            pcVar18 = pcVar5;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar18 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar18;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar5 = pcVar18 + -uVar10;
          pcVar18 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        if ((uVar2 & 0x10) != 0) {
          uVar10 = 0xffffffff;
          pcVar5 = s_Married_004c86cc;
          do {
            pcVar18 = pcVar5;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar18 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar18;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar5 = pcVar18 + -uVar10;
          pcVar18 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        if ((uVar2 & 0x20) != 0) {
          uVar10 = 0xffffffff;
          pcVar5 = s_Divorced_004c86c0;
          do {
            pcVar18 = pcVar5;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar18 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar18;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar5 = pcVar18 + -uVar10;
          pcVar18 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        if ((uVar2 & 0x40) != 0) {
          uVar10 = 0xffffffff;
          pcVar5 = s_Widowed_004c86b8;
          do {
            pcVar18 = pcVar5;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar18 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar18;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar5 = pcVar18 + -uVar10;
          pcVar18 = (char *)&DAT_0051a068;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        FUN_00404b70(&DAT_0051a068,uVar9 + 0x106,iVar15 + 0x68,0x80000000);
        FUN_004762d0(&DAT_00821ee8,0,0,0);
        DAT_0051a068._0_1_ = 0;
        uVar4 = FUN_00453260(uVar12,&DAT_00821c50,10);
        pcVar5 = (char *)FUN_004ad425(uVar4);
        uVar10 = 0xffffffff;
        do {
          pcVar18 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar5;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        pcVar5 = pcVar18 + -uVar10;
        pcVar18 = pcVar17 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar18 = pcVar18 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar5 = s_years_old_004d3740;
        do {
          pcVar18 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar5;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        pcVar5 = pcVar18 + -uVar10;
        pcVar18 = pcVar17 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar18 = pcVar18 + 1;
        }
        FUN_00404b70(&DAT_0051a068,uVar9 + 0x106,iVar15 + 0x48,0x80000000);
        FUN_004762d0(&DAT_00821ee8,0,0,0);
        iVar16 = 0;
        uVar10 = (uint)(char)(&DAT_004d60a8)[(short)(&DAT_0057956e)[uVar12 * 0x80] * 0x230];
        iVar8 = 0;
        do {
          if ((uVar10 & 1 << ((byte)iVar8 & 0x1f)) != 0) {
            iVar16 = iVar16 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 5);
        ppuVar13 = &PTR_DAT_004c2864;
        bVar7 = 0;
        iVar15 = (5 - iVar16) * 9 + 0x24 + iVar15;
        do {
          uVar11 = 1 << (bVar7 & 0x1f);
          if ((uVar10 & uVar11) != 0) {
            local_268 = uVar10 - uVar11;
            uVar10 = 0xffffffff;
            pcVar5 = *ppuVar13;
            do {
              pcVar18 = pcVar5;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar18 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar18;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar5 = pcVar18 + -uVar10;
            pcVar18 = (char *)&DAT_0051a068;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar18 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar18 = pcVar18 + 1;
            }
            FUN_004049d0(&DAT_0051a068,uVar9 + 0x92,iVar15,0x80000000);
            iVar15 = iVar15 + 0x12;
            uVar10 = local_268;
          }
          ppuVar13 = ppuVar13 + 1;
          bVar7 = bVar7 + 1;
          local_288 = uVar14;
          local_278 = uVar12;
        } while ((int)ppuVar13 < 0x4c2878);
      }
      local_274 = local_274 + 1;
    } while (local_274 < 0x98);
    FUN_00480c80(0);
    FUN_0045bf80(10,0);
    FUN_00483d30();
    do {
      uVar12 = local_294;
      FUN_0045bf80(1,0);
      FUN_0047ab50(&iStack_270,&iStack_26c);
      if ((((iStack_270 < 6) || (iStack_26c < 0x32)) || (DAT_00821164 + 0x14f <= iStack_270)) ||
         (DAT_00821164 + 0x1ca <= iStack_26c)) {
        local_294 = 0xffffffff;
      }
      else {
        local_294 = (iStack_270 + -6) / 0x14e + ((iStack_26c + -0x32) / 0x88) * 2;
      }
      FUN_0045c030();
      if ((DAT_00822d68 != 0) || (iVar8 = FUN_0045ae70(), iVar8 != 0)) {
        if (local_294 == uVar12) {
          if ((DAT_00822d68 == 0) || (local_294 == 0xffffffff)) {
            if (local_290 != 0) {
              iVar8 = 0;
              iVar15 = 0;
              do {
                if ((local_290 & 1 << ((byte)iVar15 & 0x1f)) != 0) {
                  iVar8 = iVar8 + 1;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < 0x10);
              if (iVar8 != 2) {
                FUN_004481b0(0x18,100,0,0,0);
                return;
              }
              uVar12 = 0xffffffff;
              iVar8 = 0;
              puVar6 = local_260;
              uVar14 = local_278;
              do {
                if ((local_290 & 1 << ((byte)iVar8 & 0x1f)) != 0) {
                  if (uVar12 == 0xffffffff) {
                    uVar12 = *puVar6;
                  }
                  else {
                    uVar14 = *puVar6;
                  }
                }
                iVar8 = iVar8 + 1;
                puVar6 = puVar6 + 1;
              } while (iVar8 < 0x10);
              if (uVar14 == local_278) {
                local_278 = local_278 ^ 1;
                FUN_0045de30(uVar12,local_278);
              }
              else {
                FUN_0045de30(uVar12,local_278);
                FUN_0045de30(uVar14,local_278 ^ 1);
                uVar14 = local_278 ^ 1;
              }
              (&DAT_005794c8)[local_278 * 0x40] = (&DAT_005794c8)[local_278 * 0x40] | 0x20000;
              (&DAT_005794c8)[uVar14 * 0x40] = (&DAT_005794c8)[uVar14 * 0x40] | 0x20000;
              FUN_0045de80(local_278,uVar14);
            }
            return;
          }
          if (((int)local_294 < (int)uVar14) &&
             ((local_28c < 2 || ((1 << ((byte)local_294 & 0x1f) & local_290) != 0)))) {
            uVar14 = 1 << ((byte)local_294 & 0x1f);
            local_290 = local_290 ^ uVar14;
            if ((local_290 & uVar14) == 0) {
              local_28c = local_28c + -1;
            }
            else {
              local_28c = local_28c + 1;
            }
          }
          else {
            FUN_004481b0(0x18,100,0,0,0);
          }
        }
        break;
      }
    } while (local_294 == uVar12);
  } while( true );
}

