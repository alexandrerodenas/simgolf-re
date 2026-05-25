/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045f0f0 @ 0x0045F0F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045f0f0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined **ppuVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar14;
  int local_314;
  int local_310;
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  uint local_2f8;
  undefined **ppuStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  char local_2e4 [32];
  undefined1 auStack_2c4 [696];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a1b;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  puVar10 = (undefined4 *)&DAT_005a5a04;
  pcVar11 = local_2e4;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    pcVar11 = pcVar11 + 4;
  }
  local_2f8 = param_2;
  local_314 = 0;
  if (0 < param_3) {
    FUN_00483d30();
  }
  local_310 = param_3;
LAB_0045f146:
  do {
    do {
      if (param_5 < 0) {
        uVar14 = 0xd0;
        iVar5 = param_5 + 0x4e;
      }
      else {
        uVar14 = 0x140;
        iVar5 = param_5 + 0x2e;
      }
      FUN_0040cef0(iVar5,0x32,uVar14,0x13c,1);
      FUN_004762d0(&DAT_00519928,0,0,0);
      iStack_2ec = param_5 + 0xd2;
      FUN_00404bc0(param_1,iStack_2ec,0x3a,0x80007fff);
      if (-1 < param_5) {
        FUN_00473cb0(PTR_DAT_004c1570,param_5 + 0xf7,0x56,1,1,1,0);
        iVar5 = param_4;
        if (param_4 == -1) {
          _DAT_00582e70 = (short)DAT_004d60a9;
          DAT_00582e6e = 0;
          iVar5 = 0x99;
        }
        FUN_0045c200(iVar5,param_5 + 0xff,0x66,1);
        FUN_00473f60(&DAT_0056a894,PTR_DAT_004c1570,param_5 + 0x146,0x13e,0);
      }
      local_2f8 = local_2f8 | param_2;
      iStack_304 = -1;
      if (0 < param_3) {
        FUN_0047ab50(&iStack_300,&iStack_30c);
      }
      FUN_004762d0(&DAT_0051b360,0,0,0);
      iStack_308 = param_5 + 0x52;
      iStack_2e8 = param_5 + 0x8a;
      iStack_2fc = 0;
      iVar5 = 0x5a;
      ppuStack_2f4 = &PTR_s_Power_Hitter_004c2c3c;
      iStack_2f0 = 0x5a59fa;
      do {
        iVar8 = iStack_2fc;
        if ((param_4 == -1) || ((&DAT_0057956e)[param_4 * 0x80] == 0)) {
          bVar3 = *(byte *)(iStack_2f0 + 10 + iStack_2fc);
        }
        else {
          bVar3 = (&DAT_005795a8)[iStack_2fc + param_4 * 0x100];
        }
        uVar9 = (uint)bVar3;
        FUN_00473f60(&DAT_0058baf8,PTR_DAT_004c1570,iStack_308,iVar5,0);
        if (0 < param_3) {
          FUN_00473f60(&DAT_0058bba8,PTR_DAT_004c1570,param_5 + 0x32,iVar5,0);
        }
        if (iStack_300 < iStack_308) {
          iVar1 = param_5 + 0x32;
          if (((iVar1 <= iStack_300) && (iVar5 < iStack_30c)) && (iStack_30c <= iVar5 + 0xc)) {
            FUN_00473f60(&DAT_0058bbd4,PTR_DAT_004c1570,iVar1,iVar5,0);
            iStack_304 = iVar8;
          }
          if (((iStack_300 < iStack_308) && (iVar1 <= iStack_300)) &&
             ((iVar5 + 0xc < iStack_30c && (iStack_30c <= iVar5 + 0x18)))) {
            FUN_00473f60(&DAT_0058bc00,PTR_DAT_004c1570,iVar1,iVar5 + 0xc,0);
            iStack_304 = iVar8 + 10;
          }
        }
        if (uVar9 != 0) {
          pcVar11 = &DAT_004c5340;
          if (9 < uVar9) {
            pcVar11 = &DAT_004e9a84;
          }
          uVar6 = 0xffffffff;
          do {
            pcVar13 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          pcVar11 = pcVar13 + -uVar6;
          pcVar13 = (char *)&DAT_0051a068;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          pcVar11 = (char *)FUN_004ad425(uVar9 * 10,&DAT_00824134,10);
          uVar6 = 0xffffffff;
          do {
            pcVar13 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar8 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar12 = pcVar11;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar12 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar2 != '\0');
          pcVar11 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_004c60c4;
          do {
            pcVar13 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar8 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar12 = pcVar11;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar12 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar2 != '\0');
          pcVar11 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_004049d0(&DAT_0051a068,param_5 + 0x57,iVar5 + 7,0x80000000);
          iVar8 = iStack_2fc;
        }
        ppuVar4 = ppuStack_2f4;
        FUN_004049d0(*ppuStack_2f4,iStack_2e8,iVar5 + 7,
                     (-(uint)(uVar9 != 0) & 0xffffbdf0) + 0x80004210);
        iVar5 = iVar5 + 0x18;
        ppuStack_2f4 = ppuVar4 + 1;
        iStack_2fc = iVar8 + 1;
      } while ((int)ppuStack_2f4 < 0x4c2c64);
      if (0 < param_3) {
        uVar9 = 0xffffffff;
        pcVar11 = &DAT_004d3c4c;
        do {
          pcVar13 = pcVar11;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar11 = pcVar13 + -uVar9;
        pcVar13 = (char *)&DAT_0051a068;
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar11 = (char *)FUN_004ad425(local_310,&DAT_00824134,10);
        uVar9 = 0xffffffff;
        do {
          pcVar13 = pcVar11;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar5 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar12 = pcVar11;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar2 != '\0');
        pcVar11 = pcVar13 + -uVar9;
        pcVar13 = pcVar12 + -1;
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        uVar9 = 0xffffffff;
        pcVar11 = s_skill_points__004d3c3c;
        do {
          pcVar13 = pcVar11;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        iVar5 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar12 = pcVar11;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar2 != '\0');
        pcVar11 = pcVar13 + -uVar9;
        pcVar13 = pcVar12 + -1;
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_00404bc0(&DAT_0051a068,iStack_2ec,0x50,((param_3 < local_314) - 1 & 0x2f7) + 0x80007d08)
        ;
      }
      if (param_3 == -1) {
        iVar5 = -1;
        goto LAB_0045f84b;
      }
      FUN_00480c80(0);
      FUN_0045bf80(5,0);
      FUN_0045c030();
    } while ((DAT_00822d68 == 0) && (iVar5 = FUN_0045ae70(), iVar5 == 0));
    FUN_0045bf80(5,0);
    FUN_00483d30();
    if ((DAT_00822d68 == 0) ||
       ((uVar9 = (DAT_00822d60 - param_5) - 0x15e, uVar6 = (int)uVar9 >> 0x1f,
        0x13 < (int)((uVar9 ^ uVar6) - uVar6) ||
        (uVar9 = (int)(DAT_00822d64 - 0x14eU) >> 0x1f,
        0x13 < (int)((DAT_00822d64 - 0x14eU ^ uVar9) - uVar9))))) {
      if (param_3 != 0) {
        if ((DAT_00822d68 == 0) || (iStack_304 == -1)) {
          if ((param_3 < 1) || (local_314 <= param_3)) goto LAB_0045f146;
        }
        else {
          iVar5 = iStack_304 % 10;
          if (iStack_304 < 10) {
            if ((local_314 < param_3) && ((char)(&DAT_005a5a04)[iVar5] < '\n')) {
              local_314 = local_314 + 1;
              local_310 = local_310 + -1;
              (&DAT_005a5a04)[iVar5] = (&DAT_005a5a04)[iVar5] + '\x01';
              DAT_004c2c9c = DAT_004c2c9c | (ushort)(1 << ((byte)iVar5 & 0x1f));
              goto LAB_0045f146;
            }
          }
          else {
            cVar2 = (&DAT_005a5a04)[iVar5];
            if (('\0' < cVar2) && (local_2e4[iVar5] < cVar2)) {
              local_314 = local_314 + -1;
              local_310 = local_310 + 1;
              (&DAT_005a5a04)[iVar5] = cVar2 + -1;
              if ((char)(cVar2 + -1) == '\0') {
                DAT_004c2c9c = DAT_004c2c9c & ~(ushort)(1 << ((byte)iVar5 & 0x1f));
              }
              goto LAB_0045f146;
            }
          }
        }
        FUN_004481b0(0x18,100,0,0,0);
      }
      goto LAB_0045f146;
    }
    if (param_3 <= local_314) goto LAB_0045f844;
    FUN_00474ae0();
    uStack_4 = 0;
    FUN_00474dd0(800,600,0,1,0,0);
    FUN_00475c60(auStack_2c4,0,0,0,0,800,600);
    uVar9 = 0xffffffff;
    pcVar11 = s_You_haven_t_used_all_your_skill_p_004d3bf4;
    do {
      pcVar13 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar11 = pcVar13 + -uVar9;
    pcVar13 = (char *)&DAT_0051a068;
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar11 = s_Yea__I_don_t_need_no_stinkin__sk_004d3bb4;
    do {
      pcVar13 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar12 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar2 != '\0');
    pcVar11 = pcVar13 + -uVar9;
    pcVar13 = pcVar12 + -1;
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    iVar5 = FUN_0046d6e0(400,200,1,1,0);
    if (iVar5 == 0) {
      uStack_4 = 0xffffffff;
      FUN_00474c40();
LAB_0045f844:
      iVar5 = (int)(short)DAT_004c2c9c;
LAB_0045f84b:
      *unaff_FS_OFFSET = uStack_c;
      return iVar5;
    }
    FUN_00475c60(PTR_DAT_004c1570,0,0,0,0,800,600);
    uStack_4 = 0xffffffff;
    FUN_00474c40();
  } while( true );
}

