/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473470 @ 0x00473470 */
/* Body size: 1509 addresses */


void FUN_00473470(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined *puVar13;
  int local_2d8;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b2b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004732d0();
  FUN_00474ae0();
  local_4 = 0;
  FUN_00475840(s_interface_Top10_Blank_004e418c,&DAT_005199c8,0,0x100,0);
  FUN_00475c90(&DAT_00519cd4,0,0,800,600);
  FUN_00475840(s_interface_Top10_Trophies_004e4170,&DAT_005199c8,0,0x100,0);
  local_2d8 = 0;
  do {
    puVar1 = &DAT_00541ce0 + local_2d8 * 0x27;
    if (*(char *)(&DAT_00541ce0 + local_2d8 * 0x27) != '\0') {
      iVar8 = (int)(&DAT_004e3e00)[local_2d8] / 5;
      iVar9 = ((int)(&DAT_004e3e00)[local_2d8] % 5) * 0xa0;
      FUN_00475c90(&DAT_00519cd4,iVar9,(-(uint)(iVar8 != 0) & 0x130) + 0x28,0xa0,
                   (-(uint)(iVar8 != 0) & 0xffffffd0) + 0x130);
      iVar9 = iVar9 + 0x50;
      uVar10 = -(uint)(iVar8 != 0) & 0xfd;
      FUN_004762d0(&DAT_0051b360,0,0,0);
      if (local_2d8 == DAT_008392a8) {
        iVar3 = FUN_00477250(puVar1);
        iVar4 = (iVar3 + 4) / 2;
        iVar3 = iVar4 + iVar9;
        iVar4 = iVar9 - iVar4;
        FUN_00478b80(iVar4,uVar10 + 0x14f,iVar3,uVar10 + 0x14f,0x80007ff0);
        FUN_00478b80(iVar4,uVar10 + 0x14e,iVar3,uVar10 + 0x14e,0x80004206);
      }
      FUN_00404b70(puVar1,iVar9,uVar10 + 0x141,0x80000000);
      FUN_00404b70(puVar1,iVar9,uVar10 + 0x143,0x80007ff0);
      FUN_00404b70(puVar1,iVar9,uVar10 + 0x142,
                   (-(uint)(local_2d8 != DAT_008392a8) & 0xffffc207) + 0x80007fff);
      if (iVar8 == 0) {
        iVar3 = (local_2d8 * 5 + -0xf) * 2 + 0xc2;
      }
      else {
        iVar3 = (-(uint)(iVar8 != 0) & 0x119) + 0xa2 + local_2d8 * 4;
        FUN_004762d0(&DAT_00519fd8,0,0,0);
      }
      uVar10 = 0xffffffff;
      pcVar5 = &DAT_004e4168;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar5 = (char *)FUN_004ad425((int)(&DAT_00541d68)[local_2d8 * 0x27] / 10,&DAT_008392ac,10);
      uVar10 = 0xffffffff;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar4 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar11;
      } while (cVar2 != '\0');
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = pcVar11 + -1;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3,0x80004206);
      uVar10 = 0xffffffff;
      iVar4 = (-(uint)(iVar8 != 0) & 0xfffffffe) + 0xc;
      pcVar5 = &DAT_004e4160;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_0042dd50((&DAT_00541d64)[local_2d8 * 0x27]);
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3 - iVar4,0x80004206);
      iVar3 = (iVar3 - iVar4) - iVar4;
      uVar10 = 0xffffffff;
      pcVar5 = &DAT_004e4158;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar5 = (char *)FUN_004ad425((&DAT_00541d60)[local_2d8 * 0x27],&DAT_008392ac,10);
      uVar10 = 0xffffffff;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar7 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar11 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar11;
      } while (cVar2 != '\0');
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = pcVar11 + -1;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3,0x80004206);
      iVar3 = iVar3 - ((-(uint)(iVar8 != 0) & 0xfffffffa) + 8 + iVar4);
      if (iVar8 == 0) {
        puVar13 = &DAT_00519928;
      }
      else {
        puVar13 = &DAT_0051b360;
      }
      FUN_004762d0(puVar13,0,0,0);
      DAT_0051a068._0_1_ = 0;
      pcVar5 = (char *)FUN_004ad425(((int)(&DAT_00541d68)[local_2d8 * 0x27] / 10 +
                                     (&DAT_00541d64)[local_2d8 * 0x27] +
                                    (&DAT_00541d60)[local_2d8 * 0x27]) *
                                    ((short)(&DAT_00541d76)[local_2d8 * 0x4e] + 1),&DAT_008392ac,10)
      ;
      uVar10 = 0xffffffff;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar8 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar11;
      } while (cVar2 != '\0');
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = pcVar11 + -1;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3 + -1,0x80000000);
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3 + 1,0x80007ff0);
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3,0x80005288);
      FUN_004762d0(&DAT_00519fd8,0,0,0);
      uVar10 = 0xffffffff;
      pcVar5 = s_Total_Score__x_004e4148;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar5 = (char *)FUN_004ad425((short)(&DAT_00541d76)[local_2d8 * 0x4e] + 1,&DAT_008392ac,10);
      uVar10 = 0xffffffff;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar8 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar11;
      } while (cVar2 != '\0');
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = pcVar11 + -1;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar5 = &DAT_004c59e0;
      do {
        pcVar12 = pcVar5;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar8 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar11 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar11;
      } while (cVar2 != '\0');
      pcVar5 = pcVar12 + -uVar10;
      pcVar12 = pcVar11 + -1;
      for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404b70(&DAT_0051a068,iVar9,iVar3 + -0xd,0x80004206);
      if (local_2d8 == 0) {
        uVar10 = 0xffffffff;
        pcVar5 = (char *)&DAT_00541d20;
        do {
          pcVar12 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar12 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar12;
        } while (cVar2 != '\0');
        uVar10 = ~uVar10;
        pcVar5 = pcVar12 + -uVar10;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar12 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_00404b70(&DAT_0051a068,iVar9,iVar3 + -0x1b,0x80004206);
      }
    }
    local_2d8 = local_2d8 + 1;
    if (9 < local_2d8) {
      FUN_00480c80(0);
      FUN_0045c0c0(0);
      local_4 = 0xffffffff;
      FUN_00474c40();
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}

