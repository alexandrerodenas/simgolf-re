/* Ghidra decompiled: golf.exe */
/* Function: FUN_004587a0 @ 0x004587A0 */
/* Body size: 3158 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004587a0(void)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 local_f0;
  int local_ec;
  char local_e5;
  int local_e4;
  undefined *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int aiStack_a4 [9];
  int local_80 [23];
  int aiStack_24 [9];
  
  local_c4 = 1;
  local_e5 = '\x01';
  local_e4 = -1;
LAB_004587bf:
  do {
    do {
      iVar4 = local_e4;
      if (local_e5 != '\0') {
        local_e5 = '\0';
        FUN_00473e60(&DAT_00519cd4,0,0,0);
        if (-1 < local_e4) {
          FUN_00473e60(&DAT_00519cd4,*(undefined4 *)(local_e4 * 4 + 0x4ba7a0),
                       *(undefined4 *)(local_e4 * 4 + 0x4ba7c4),0);
        }
        DAT_00822b80 = 1;
        FUN_00456be0();
        DAT_00822b80 = 0;
        FUN_004762d0(&DAT_00821ee8,0,0,0);
        local_e0 = (undefined *)0x1;
        piVar11 = &DAT_0059aea8;
        piVar12 = &DAT_00575cc0;
        do {
          if ((char)piVar12[-2] != '\0') {
            local_ec = *piVar12 * 8 + 0x184;
            local_f0 = piVar12[1] * 8 + 0x68;
            FUN_00456b70(*piVar12,piVar12[1],&local_ec,&local_f0);
            FUN_0040bf00(local_ec,local_f0);
            iVar4 = FUN_00467130((char)piVar12[-2] + -3,0,2);
            _DAT_00822b84 = FUN_0043d6f0(iVar4 + 0x18d,*(int *)(&DAT_0053fa1c + iVar4 * 4) + -1,0);
            FUN_004628d0(local_ec,local_f0,local_f0,0x28,0x28,_DAT_00822b84,4,0x5e);
            DAT_0051a068._0_1_ = 0;
            pcVar5 = (char *)FUN_004ad425(local_e0,&DAT_00821c50,10);
            iVar10 = local_ec;
            iVar4 = local_f0;
            uVar7 = 0xffffffff;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            iVar8 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar5;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar13 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar2 != '\0');
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            iVar8 = *piVar11;
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            if (iVar8 == -1) {
              iVar8 = piVar11[-2];
              if (iVar8 != -1) {
                iVar4 = piVar11[-1];
                goto LAB_00458966;
              }
              FUN_00456b70(piVar12[4],piVar12[5],&local_ec,&local_f0);
              if (DAT_004d20dc != 0) {
                iVar10 = (local_ec + iVar10) / 2;
                iVar4 = (iVar4 + local_f0) / 2;
                goto LAB_00458a07;
              }
            }
            else {
              iVar4 = piVar11[1];
LAB_00458966:
              local_ec = (iVar8 >> 10) * 8 + 0x184;
              local_f0 = (iVar4 >> 10) * 8 + 0x68;
              FUN_00456b70(iVar8 >> 10,iVar4 >> 10,&local_ec,&local_f0);
              FUN_0040bf20(local_ec,local_f0,0x80007fff,2,10);
              iVar10 = local_ec;
              iVar4 = local_f0;
              if (DAT_004d20dc != 0) {
LAB_00458a07:
                FUN_00404bc0(&DAT_0051a068,iVar10,iVar4 + -4,0x80007ff0);
              }
            }
            local_ec = piVar12[4] * 8 + 0x184;
            local_f0 = piVar12[5] * 8 + 0x68;
            FUN_00456b70(piVar12[4],piVar12[5],&local_ec,&local_f0);
            FUN_0040bf20(local_ec,local_f0,0x80007fff,2,10);
            _DAT_00822b84 = FUN_0043d6f0(DAT_005a34e0 + 0x189,0,3);
            FUN_004628d0(local_ec,local_f0,local_f0,0x28,0x28,_DAT_00822b84,2,DAT_005a34e0 + 0x60);
          }
          piVar11 = piVar11 + 6;
          local_e0 = (undefined *)((int)local_e0 + 1);
          piVar12 = piVar12 + 0x82;
        } while ((int)piVar11 < 0x59b058);
        FUN_004762d0(&DAT_00821020,0,0,0);
        FUN_00404b70(s_TRACTS_FOR_SALE_004d36cc,400,0x10,0x80000000);
        FUN_004762d0(&DAT_00821ee8,0,0,0);
        uVar7 = 0xffffffff;
        pcVar5 = s_Cash_Reserve_004d36bc;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00477c30(s_Cash_Reserve_004d36bc,0x224,0x107,~uVar7 - 1);
        iVar4 = DAT_00571fd4;
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_004c61e0;
        do {
          pcVar14 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        pcVar5 = pcVar14 + -uVar7;
        pcVar14 = (char *)&DAT_0051a068;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_0042dc00(iVar4 * 100);
        FUN_00404b70(&DAT_0051a068,0x2d0,0x108,0x80000000);
        local_b4 = 0x10;
        FUN_00476310(0x80000000,0xffffffff,2,2);
        local_e0 = &DAT_008227e0;
        local_ec = 0;
        local_cc = 0;
        do {
          iVar8 = 0;
          local_f0 = 5;
          local_d8 = 0;
          local_a8 = local_ec % 3;
          iVar4 = ((local_ec % 3) * 0x30) / 3 + 1;
          local_b0 = local_ec / 3;
          local_bc = ((local_ec / 3) * 0x30) / 3 + 1;
          piVar11 = local_80;
          for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          do {
            iVar10 = 0;
            do {
              iVar1 = iVar10 + iVar4;
              iVar6 = iVar8 + iVar1 * 0x32 + local_bc;
              if (*(char *)((int)&DAT_005722e8 + iVar6) == '\x14') {
                local_d8 = local_d8 + 1;
                cVar2 = *(char *)((int)&DAT_00542414 + iVar6);
                local_80[cVar2] = local_80[cVar2] + 1;
                sVar3 = FUN_0045c1e0(3);
                if (sVar3 == 0) {
                  local_f0 = local_f0 + (1 << ((byte)DAT_0053a450 & 0x1f));
                }
                local_c8 = (iVar10 + iVar4) * 8 + 0x180;
                local_c0 = (local_bc + iVar8) * 8 + 100;
                FUN_00456b70(iVar1,local_bc + iVar8,&local_c8,&local_c0);
                if ((iVar10 == 8) && (iVar8 == 8)) {
                  local_d4 = local_c8;
                  local_dc = local_c0;
                }
              }
              iVar6 = local_d8;
              iVar1 = local_ec;
              iVar10 = iVar10 + 1;
            } while (iVar10 < 0x10);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x10);
          iVar4 = local_f0;
          if (local_d8 != 0) {
            iVar4 = (local_f0 * 0x14) / 100;
            local_f0 = CONCAT22((short)((uint)iVar4 >> 0x10),DAT_004d36b8);
            local_f0 = CONCAT31(local_f0._1_3_,(char)DAT_004d36b8 + (char)local_ec);
            if (&stack0x00000000 != (undefined1 *)0xf0) {
              uVar7 = 0xffffffff;
              pcVar5 = (char *)&local_f0;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar2 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar2 != '\0');
              FUN_00476700(&DAT_00821f28,&local_f0,local_d4 + -7,local_dc + -4,~uVar7 - 1);
            }
          }
          local_d4 = ((5 < iVar1) - 1 & 0xfffffff6) + 0x58 + local_b0 * 0x100;
          local_dc = local_a8 * 0x44 + 0x3e;
          if (local_c4 != 0) {
            *(int *)((int)aiStack_a4 + local_cc) = iVar4 * 10;
          }
          *(int *)((int)aiStack_24 + local_cc) = iVar1;
          local_cc = local_cc + 4;
          if (iVar6 == 0) {
            FUN_00473e60(&DAT_00519cd4,*(undefined4 *)(&DAT_004ba758 + iVar1 * 4),
                         *(undefined4 *)(&DAT_004ba77c + iVar1 * 4),0);
            uVar7 = 0xffffffff;
            pcVar5 = s_Already_purchased__004d36a4;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = (char *)&DAT_0051a068;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            FUN_004049d0(&DAT_0051a068,local_d4 + 4,local_dc + 2,0x80002108);
            local_ec = iVar1;
          }
          else {
            uVar7 = 0xffffffff;
            pcVar5 = s_Buy_tract___004d3698;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = (char *)&DAT_0051a068;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            pcVar5 = (char *)FUN_004ad425(iVar1 + 1,&DAT_00821c50,10);
            uVar7 = 0xffffffff;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            iVar4 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar5;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar2 != '\0');
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar5 = &DAT_004c52b8;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            iVar4 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar5;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar2 != '\0');
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            pcVar5 = (char *)FUN_004ad425(local_d8 / 10,&DAT_00821c50,10);
            uVar7 = 0xffffffff;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            iVar4 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar5;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar2 != '\0');
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar5 = s_acres_004d3690;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            iVar4 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar5;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar2 != '\0');
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar5 = &DAT_004d368c;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            iVar4 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar5;
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              pcVar13 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar2 != '\0');
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            iVar4 = 0;
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            do {
              iVar10 = 0;
              iVar8 = 0;
              piVar11 = local_80;
              do {
                if (iVar10 < *piVar11) {
                  local_d0 = iVar8;
                  iVar10 = *piVar11;
                }
                iVar8 = iVar8 + 1;
                piVar11 = piVar11 + 1;
              } while (iVar8 < 0x17);
              if (iVar4 == 1) {
                pcVar5 = &DAT_004c52b8;
LAB_00458faa:
                uVar7 = 0xffffffff;
                do {
                  pcVar14 = pcVar5;
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  pcVar14 = pcVar5 + 1;
                  cVar2 = *pcVar5;
                  pcVar5 = pcVar14;
                } while (cVar2 != '\0');
                uVar7 = ~uVar7;
                iVar10 = -1;
                pcVar5 = (char *)&DAT_0051a068;
                do {
                  pcVar13 = pcVar5;
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  pcVar13 = pcVar5 + 1;
                  cVar2 = *pcVar5;
                  pcVar5 = pcVar13;
                } while (cVar2 != '\0');
                pcVar5 = pcVar14 + -uVar7;
                pcVar14 = pcVar13 + -1;
                for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
                  pcVar5 = pcVar5 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar14 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
              else if (iVar4 == 2) {
                pcVar5 = s___and_004c7818;
                goto LAB_00458faa;
              }
              pcVar5 = &DAT_00578360 + local_d0 * 0x30;
              if ((&DAT_00578376)[local_d0 * 0x30] != '\r') {
                pcVar5 = (char *)(&DAT_00578350 + local_d0 * 0xc);
              }
              uVar7 = 0xffffffff;
              do {
                pcVar14 = pcVar5;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pcVar14 = pcVar5 + 1;
                cVar2 = *pcVar5;
                pcVar5 = pcVar14;
              } while (cVar2 != '\0');
              uVar7 = ~uVar7;
              local_80[local_d0] = 0;
              iVar10 = -1;
              pcVar5 = (char *)&DAT_0051a068;
              do {
                pcVar13 = pcVar5;
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                pcVar13 = pcVar5 + 1;
                cVar2 = *pcVar5;
                pcVar5 = pcVar13;
              } while (cVar2 != '\0');
              pcVar5 = pcVar14 + -uVar7;
              pcVar14 = pcVar13 + -1;
              for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
                pcVar5 = pcVar5 + 4;
                pcVar14 = pcVar14 + 4;
              }
              iVar4 = iVar4 + 1;
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar14 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                pcVar14 = pcVar14 + 1;
              }
            } while (iVar4 < 3);
            FUN_00476310(0x80000000,0xffffffff,2,2);
            iVar10 = local_d4;
            iVar4 = local_dc;
            FUN_00478430(&DAT_0051a068,local_d4,local_dc,0xa5);
            if (*(int *)(DAT_00519d30 + 8) < 0) {
              iVar8 = *(int *)(DAT_00519d30 + 0xc);
            }
            else {
              iVar8 = *(int *)(DAT_00519d30 + 0x10) + *(int *)(DAT_00519d30 + 8);
            }
            iVar4 = iVar4 + iVar8 * 2;
            uVar7 = 0xffffffff;
            pcVar5 = &DAT_004d3680;
            do {
              pcVar14 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar14 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar14;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7;
            local_dc = iVar4;
            pcVar5 = pcVar14 + -uVar7;
            pcVar14 = (char *)&DAT_0051a068;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar14 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            }
            FUN_0042dc00(aiStack_a4[local_ec] * 100);
            uVar7 = 0xffffffff;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            FUN_00478080(&DAT_0051a068,iVar10 + 0xa5,iVar4,0x80000000,~uVar7 - 1);
            if (local_e4 == local_ec) {
              FUN_00473e60(&DAT_00519cd4,*(undefined4 *)(&DAT_004ba758 + local_ec * 4),
                           *(undefined4 *)(&DAT_004ba77c + local_ec * 4),0);
            }
          }
          local_e0 = local_e0 + 0x2c;
          local_ec = local_ec + 1;
        } while ((int)local_e0 < 0x82296c);
        uVar7 = 0xffffffff;
        pcVar5 = s_I_don_t_think_I_ll_buy_any_land__004d365c;
        do {
          pcVar14 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar2 != '\0');
        pcVar5 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_00473e60(&DAT_00519cd4,0x47,0x215,0);
        if (local_e4 == -2) {
          FUN_00473e60(&DAT_00519cd4,0x296,0x215,0);
        }
        FUN_00480c80(0);
        local_c4 = 0;
        iVar4 = local_e4;
      }
      do {
        FUN_0047ab50(&local_b8,&local_ac);
        if ((((local_b8 < 0xf) || (0x306 < local_b8)) || (local_ac < 0x36)) || (0x101 < local_ac)) {
          if (((local_b8 < 0x296) || (0x2d5 < local_b8)) ||
             ((local_ac < 0x215 || (0x254 < local_ac)))) {
LAB_00459273:
            iVar10 = -1;
          }
          else {
            iVar10 = -2;
          }
        }
        else {
          iVar10 = (local_ac + -0x36) / 0x44;
          if (0x105 < local_b8) {
            if (local_b8 < 0x21a) {
              if ((local_b8 < 0x110) || (0x20b < local_b8)) goto LAB_00459273;
              iVar10 = iVar10 + 3;
            }
            else {
              iVar10 = iVar10 + 6;
            }
          }
        }
        if (iVar4 != iVar10) {
          local_e5 = '\x01';
          local_e4 = iVar10;
          goto LAB_004587bf;
        }
        FUN_0045c030();
        FUN_0045bf80(1,0);
        iVar4 = iVar10;
      } while (DAT_00822d68 == 0);
      local_e4 = iVar10;
    } while (local_e5 != '\0');
    if (DAT_00822d68 == 1) {
      if (iVar10 == -1) {
        FUN_004481b0(0x18,100,0,0,0);
        goto LAB_004587bf;
      }
    }
    else if (DAT_00822d68 == 2) {
      return 0;
    }
    if (iVar10 == -2) {
      return 0;
    }
    if (aiStack_a4[iVar10] != 0) {
      iVar4 = FUN_00406c30(aiStack_a4[iVar10]);
      if (iVar4 != 0) {
        DAT_00571fd4 = DAT_00571fd4 - aiStack_a4[local_e4];
        *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) =
             *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) -
             (short)aiStack_a4[local_e4];
        local_d0 = ((local_e4 / 3) * 0x30) / 3 + 1;
        iVar4 = 0;
        if (0 < local_b4) {
          do {
            iVar8 = iVar4 + (((local_e4 % 3) * 0x30) / 3 + 1) * 0x32 + local_d0;
            iVar10 = local_b4;
            do {
              if (*(char *)((int)&DAT_005722e8 + iVar8) == '\x14') {
                *(undefined1 *)((int)&DAT_005722e8 + iVar8) =
                     *(undefined1 *)((int)&DAT_00542414 + iVar8);
              }
              iVar8 = iVar8 + 0x32;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_b4);
        }
        FUN_0040c6f0(0x140,local_e4);
        return 1;
      }
      local_e5 = '\x01';
    }
  } while( true );
}

