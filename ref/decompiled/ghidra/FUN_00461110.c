/* Ghidra decompiled: golf.exe */
/* Function: FUN_00461110 @ 0x00461110 */
/* Body size: 1242 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461110(uint param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  uint local_14;
  char *local_10;
  int local_c;
  int local_4;
  
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  local_4 = 0x228;
  local_14 = param_1;
  FUN_004049d0(&DAT_004c88a8,0x19a,0x207,0x80007fff);
  FUN_004049d0(&PTR_DAT_004c88f8,0x19e,0x216,0x80007fff);
  FUN_004762d0(&DAT_0051b360,0,0,0);
  if (((&DAT_005794d0)[(param_1 ^ 1) * 0x100] & 0xe0) == 0x20) {
    if ((_DAT_0059e7b8 & 0x200000) == 0) {
      FUN_004049d0(s_Exhibition_004d55b0,0x14e,0x20a,0x80000000);
      iVar5 = DAT_0059b730;
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_004c61e0;
      do {
        pcVar11 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar11 + -uVar4;
      pcVar11 = (char *)&DAT_0051a068;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_0042dc00(iVar5 * 2000);
      uVar4 = 0xffffffff;
      pcVar3 = s__hole_004d55a8;
      do {
        pcVar11 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar10 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar3 = pcVar11 + -uVar4;
      pcVar11 = pcVar10 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_004049d0(&DAT_0051a068,0x140,0x215,0x80000000);
    }
    else {
      FUN_004049d0(s_Professional_004d55c8,0x145,0x20a,0x80000000);
      FUN_004049d0(s_Tournament_004d55bc,0x145,0x215,0x80000000);
    }
  }
  else {
    FUN_004049d0(s_Practice_004d559c,0x14e,0x20a,0x80000000);
    FUN_004049d0(s_Round_004d5594,0x14e,0x215,0x80000000);
  }
  do {
    DAT_0051a068._0_1_ = 0;
    FUN_004676e0(local_14,0);
    if (local_14 == param_1) {
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_004d558c;
      do {
        pcVar11 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar10 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar3 = pcVar11 + -uVar4;
      pcVar11 = pcVar10 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    FUN_004762d0(&DAT_0051b360,0,0,0);
    iVar5 = FUN_00477250(&DAT_0051a068);
    if (0x73 < iVar5) {
      FUN_004762d0(&DAT_00519fd8,0,0,0);
    }
    FUN_004049d0(&DAT_0051a068,0x140,local_4,0x80000000);
    FUN_004762d0(&DAT_0051b360,0,0,0);
    iVar5 = 0;
    local_10 = (char *)&DAT_00575ab0;
    local_c = 0x1aa;
    do {
      if (*local_10 != '\0') {
        if (local_14 == param_1) {
          DAT_0051a068._0_1_ = 0;
          pcVar3 = (char *)FUN_004ad425(iVar5,&DAT_00824134,10);
          uVar4 = 0xffffffff;
          do {
            pcVar11 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar7 = -1;
          pcVar3 = (char *)&DAT_0051a068;
          do {
            pcVar10 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar10 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar1 != '\0');
          pcVar3 = pcVar11 + -uVar4;
          pcVar11 = pcVar10 + -1;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_00404b70(&DAT_0051a068,local_c,local_4 + -0x22,0x80006318);
          DAT_0051a068._0_1_ = 0;
          pcVar3 = (char *)FUN_004ad425((int)*local_10,&DAT_00824134,10);
          uVar4 = 0xffffffff;
          do {
            pcVar11 = pcVar3;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar7 = -1;
          pcVar3 = (char *)&DAT_0051a068;
          do {
            pcVar10 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar10 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar1 != '\0');
          pcVar3 = pcVar11 + -uVar4;
          pcVar11 = pcVar10 + -1;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_00404b70(&DAT_0051a068,local_c,local_4 + -0x13,0x80006318);
        }
        iVar7 = local_14 * 0x100;
        if (iVar5 <= (char)(&DAT_005794d9)[iVar7]) {
          DAT_0051a068._0_1_ = 0;
          if ((char)(&DAT_005794d9)[iVar7] == iVar5) {
            pcVar3 = (char *)FUN_004ad425((int)(char)(&DAT_005794da)[iVar7],&DAT_00824134,10);
            uVar4 = 0xffffffff;
            do {
              pcVar11 = pcVar3;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar11 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar11;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            iVar8 = -1;
            pcVar3 = (char *)&DAT_0051a068;
            do {
              pcVar10 = pcVar3;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar10 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar10;
            } while (cVar1 != '\0');
            pcVar3 = pcVar11 + -uVar4;
            pcVar11 = pcVar10 + -1;
            for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar11 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
          else {
            pcVar3 = (char *)FUN_004ad425((int)(char)(&DAT_005794db)[iVar7 + iVar5],&DAT_00824134,10
                                         );
            uVar4 = 0xffffffff;
            do {
              pcVar11 = pcVar3;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar11 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar11;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            iVar8 = -1;
            pcVar3 = (char *)&DAT_0051a068;
            do {
              pcVar10 = pcVar3;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar10 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar10;
            } while (cVar1 != '\0');
            pcVar3 = pcVar11 + -uVar4;
            pcVar11 = pcVar10 + -1;
            for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar11 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
          uVar9 = 0x80004210;
          if ((char)(&DAT_005794d9)[iVar7] != iVar5) {
            cVar1 = (&DAT_005794db)[iVar7 + iVar5];
            uVar9 = 0x80002108;
            cVar2 = *local_10;
            if (cVar1 < cVar2) {
              uVar9 = 0x80006000;
            }
            if ((int)cVar1 < cVar2 + -1) {
              uVar9 = 0x80007d08;
            }
            if (cVar2 < cVar1) {
              uVar9 = 0x80000018;
            }
            if (cVar2 + 1 < (int)cVar1) {
              uVar9 = 0x80004010;
            }
          }
          FUN_00404b70(&DAT_0051a068,local_c,local_4,uVar9);
        }
      }
      local_c = local_c + 0x12;
      iVar5 = iVar5 + 1;
      local_10 = local_10 + 0x208;
    } while (local_c < 0x300);
    local_4 = local_4 + 0x15;
    local_14 = (uint)(short)(&DAT_0057955a)[local_14 * 0x80];
    if (0x24d < local_4) {
      return;
    }
  } while( true );
}

