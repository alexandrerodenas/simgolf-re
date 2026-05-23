/* Ghidra decompiled: golf.exe */
/* Function: FUN_004385d0 @ 0x004385D0 */
/* Body size: 4778 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004385d0(int param_1,int param_2)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *unaff_FS_OFFSET;
  undefined8 uVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  char *pcStack_2ec;
  undefined **ppuStack_2e8;
  int local_2e4;
  uint local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  uint uStack_2d0;
  int local_2cc;
  uint uStack_2c8;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b73ab;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  iVar10 = param_2 * 0x100;
  local_2e0 = (uint)(((&DAT_005794d0)[iVar10] & 0xe0) == 0x20);
  local_2cc = 0;
  DAT_005aa55c = 0;
  iVar9 = param_1 * 0x230;
  puVar21 = &DAT_004d6088 + param_1 * 0x8c;
  puVar15 = &DAT_004e1618;
  for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar15 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar15 = puVar15 + 1;
  }
  local_2d8 = iVar10;
  FUN_00448200(0x2d);
  FUN_004481b0((-(uint)(((&DAT_004d60a9)[iVar9] & 0x80) != 0) & 0xfffffffd) + 0x80,100,0,0,0);
  DAT_00582e6e = (short)param_1;
  DAT_00582e72 = FUN_0045c1e0(3);
  DAT_00582e70 = (ushort)(char)(&DAT_004d60a9)[iVar9];
  DAT_00582dd0 = '\0';
  DAT_00582dd1 = (&DAT_005794d1)[iVar10];
  FUN_00474ae0();
  local_4 = 0;
  if (((&DAT_004d60a9)[iVar9] & 0x80) == 0) {
    pcVar17 = s_interface_CustGlfBckMale_004c86e4;
  }
  else {
    pcVar17 = s_interface_CustGolfBckgrnd_004c8700;
  }
  FUN_00475840(pcVar17,0,0,0x100,2);
  DAT_00822d68 = 0;
  do {
    do {
      FUN_00475c60(&DAT_00519cd4,0,0,0,0,800,600);
      FUN_0047ab50(&local_2dc,&local_2e4);
      local_2d4 = FUN_00438260(local_2dc,local_2e4);
      if ((local_2d4 == 0xf) && (((&DAT_004d60a9)[iVar9] & 0x80) == 0)) {
        local_2d4 = -1;
      }
      iVar4 = -1;
      if ((local_2d4 == -1) || (local_2d4 == 0x14)) {
        uVar11 = (int)(local_2dc - 0x9aU) >> 0x1f;
        if (((int)((local_2dc - 0x9aU ^ uVar11) - uVar11) < 0x50) &&
           (uVar11 = (int)(local_2e4 - 0x40U) >> 0x1f,
           (int)((local_2e4 - 0x40U ^ uVar11) - uVar11) < 0x28)) {
          switch((local_2e4 + -0x18) / 0x14) {
          case 0:
            iVar4 = 0;
            break;
          case 1:
            iVar4 = 1;
            break;
          case 2:
            iVar4 = 2;
            break;
          case 3:
            iVar4 = 3;
            break;
          case 4:
            iVar4 = 4;
          }
        }
      }
      else {
        FUN_00473cb0(PTR_DAT_004c1570,(int)(short)(&DAT_004c7b90)[local_2d4 * 2],
                     (int)(short)(&DAT_004c7b92)[local_2d4 * 2],1,1,1,0);
      }
      cVar7 = (&DAT_004d60aa)[DAT_00582e6e * 0x230];
      if ((*(byte *)(&DAT_004d60b4 + DAT_00582e6e * 0x8c) & 8) != 0) {
        FUN_00473e60(PTR_DAT_004c1570,0x160,0x74,0);
      }
      FUN_00462020(0x99);
      puVar21 = &DAT_0081ca10;
      uVar20 = 0x74;
      uVar19 = 0x163;
      puVar18 = PTR_DAT_004c1570;
      FUN_0046c940(0x99,PTR_DAT_004c1570,0x163,0x74,&DAT_0081ca10);
      FUN_00473e60(puVar18,uVar19,uVar20,puVar21);
      puVar18 = PTR_DAT_004c1570;
      if (cVar7 < '\x14') {
        FUN_0046c940(0x99);
        FUN_004675d0(0x99);
        uVar19 = 0x150;
      }
      else {
        FUN_0046c940(0x99);
        FUN_004675d0(0x99);
        uVar19 = 0x13c;
      }
      FUN_00473cb0(puVar18,uVar19,0x14,1,1,1,0);
      if (DAT_0083ad50 != (int *)0x0) {
        (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
      }
      FUN_00473e60(PTR_DAT_004c1570,299,0xdc,0);
      uVar16 = FUN_0046c940(0x99);
      if ((int)uVar16 == 0) {
        uVar11 = 7;
        iVar10 = DAT_00582e6e * 0x230;
        if (((&DAT_004d60a9)[iVar10] & 1) != 0) {
          uVar11 = 6;
        }
        if (((&DAT_004d60a8)[iVar10] & 8) != 0) {
          uVar11 = 8;
        }
        if (((&DAT_004d60a9)[iVar10] & 4) != 0) {
          uVar11 = 5;
        }
        if ((&DAT_004d60b4)[DAT_00582e6e * 0x8c] != 0) {
          uVar11 = (CONCAT31((int3)((ulonglong)uVar16 >> 0x28),(&DAT_004d60ab)[iVar10]) >> 4 & 3U) +
                   5;
        }
      }
      else {
        if ((DAT_00582dd1 & 4) == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = (uint)(byte)((~DAT_00582dd1 & 2 | 4) >> 1);
        }
        iVar10 = DAT_00582e6e * 0x230;
        if ((&DAT_004d60b4)[DAT_00582e6e * 0x8c] != 0) {
          uVar11 = CONCAT31((int3)((uint)iVar10 >> 8),(&DAT_004d60ab)[iVar10]) >> 4 & 3;
        }
        if (DAT_00582dd0 == ' ') {
          uVar11 = (uint)(char)(&DAT_0058dd70)[(uint)DAT_00582e73 * 0x38];
        }
      }
      _DAT_005aa6c4 = FUN_0043d6f0(uVar11,5,0);
      FUN_004628d0(0x13b,0xef,0xef,0x1e,0x28,_DAT_005aa6c4,4,0x199);
      _DAT_005aa6c4 = FUN_0043d6f0(uVar11,5,4);
      FUN_004628d0(0x14f,0xef,0xef,0x1e,0x28,_DAT_005aa6c4,4,0x199);
      FUN_004762d0(&DAT_00519928,0,0,0);
      DAT_0051a068._0_1_ = 0;
      FUN_004676e0(0x99,0);
      if ((*(byte *)(&DAT_004d60b4 + DAT_00582e6e * 0x8c) & 8) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = &DAT_004c86dc;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        iVar10 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = pcVar14 + -1;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      FUN_00404bc0(&DAT_0051a068,0x9a,0x18,(-(uint)(iVar4 != 0) & 0xffff8d28) + 0x80007b20);
      uVar11 = 0xffffffff;
      pcVar17 = &DAT_004c59e4;
      do {
        pcVar12 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      pcVar17 = pcVar12 + -uVar11;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar17 = (char *)(&DAT_004d6088 + DAT_00582e6e * 0x8c);
      do {
        pcVar12 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar10 = -1;
      pcVar17 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar17;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar14 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar14;
      } while (cVar7 != '\0');
      pcVar17 = pcVar12 + -uVar11;
      pcVar12 = pcVar14 + -1;
      for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar17 = &DAT_004c59e0;
      do {
        pcVar12 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar10 = -1;
      pcVar17 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar17;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar14 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar14;
      } while (cVar7 != '\0');
      pcVar17 = pcVar12 + -uVar11;
      pcVar12 = pcVar14 + -1;
      for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404bc0(&DAT_0051a068,0x9a,0x30,(-(uint)(iVar4 != 1) & 0xffff8849) + 0x80007fff);
      FUN_004762d0(&DAT_0051b360,0,0,0);
      uVar3 = DAT_00582e70;
      DAT_0051a068._0_1_ = 0;
      if ((DAT_00582e70 & 8) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Single_004c86d4;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if ((uVar3 & 0x10) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Married_004c86cc;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if ((uVar3 & 0x20) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Divorced_004c86c0;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if ((uVar3 & 0x40) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Widowed_004c86b8;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if (iVar4 == 2) {
        FUN_00404bc0(&DAT_0051a068,0x9a,0x45,0x80007fff);
      }
      else {
        FUN_00404b70(&DAT_0051a068,0x9a,0x45,0x80000848);
      }
      uVar3 = DAT_00582e70;
      DAT_0051a068._0_1_ = '\0';
      if ((DAT_00582e70 & 1) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Young_004c86b0;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if ((uVar3 & 2) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Middle_Aged_004c86a4;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if ((uVar3 & 4) != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Mature_004c869c;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      if (iVar4 == 3) {
        FUN_00404bc0(&DAT_0051a068,0x9a,0x5a,0x80007fff);
      }
      else {
        FUN_00404b70(&DAT_0051a068,0x9a,0x5a,0x80000848);
      }
      FUN_004762d0(&DAT_0051b360,0,0,0);
      pcStack_2ec = (char *)0x7a;
      ppuStack_2e8 = (undefined **)&DAT_0059e054;
      iVar4 = 0;
      uStack_2c8 = (uint)(char)(&DAT_004d60a8)[DAT_00582e6e * 0x230];
      do {
        uVar11 = 1 << ((byte)iVar4 & 0x1f) & uStack_2c8;
        if (uVar11 != 0) {
          FUN_00473cb0(PTR_DAT_004c1570,(int)(short)(&DAT_004c7b9c)[iVar4 * 2],
                       (int)(short)(&DAT_004c7b9e)[iVar4 * 2],1,1,1,0);
        }
        uVar5 = 0xffffffff;
        pcVar17 = (&PTR_DAT_004c2864)[iVar4];
        do {
          pcVar12 = pcVar17;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar5 = ~uVar5;
        pcVar17 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_00404b70(&DAT_0051a068,0x5d,pcStack_2ec,(-(uint)(uVar11 != 0) & 0xffffc638) + 0x80004210
                    );
        ppuStack_2e8 = (undefined **)((int)ppuStack_2e8 + 0x58);
        iVar4 = iVar4 + 1;
        pcStack_2ec = (char *)((int)pcStack_2ec + 0x1c);
      } while ((int)ppuStack_2e8 < 0x59e20c);
      FUN_004762d0(&DAT_00519928,0,0,0);
      iVar4 = 0;
      ppuStack_2e8 = (undefined **)0x8e;
      pcStack_2ec = &DAT_0059df4c;
      do {
        bVar8 = (byte)(1 << ((byte)iVar4 & 0x1f));
        if ((bVar8 & DAT_00582dd1) != 0) {
          FUN_00473cb0(PTR_DAT_004c1570,(int)(short)(&DAT_004c7b90)[iVar4 * 2],
                       (int)(short)(&DAT_004c7b92)[iVar4 * 2],1,1,1,0);
        }
        uVar11 = 0xffffffff;
        pcVar17 = (&PTR_s_length_004c2858)[iVar4];
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        bVar8 = bVar8 & DAT_00582dd1;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        DAT_0051a068._0_1_ = (char)DAT_0051a068 + -0x20;
        FUN_00404b70(&DAT_0051a068,0xd4,ppuStack_2e8,(-(uint)(bVar8 != 0) & 0xffffc638) + 0x80004210
                    );
        pcStack_2ec = pcStack_2ec + 0x58;
        iVar4 = iVar4 + 1;
        ppuStack_2e8 = (undefined **)((int)ppuStack_2e8 + 0x23);
      } while ((int)pcStack_2ec < 0x59e054);
      if (local_2e0 == 0) {
        iVar4 = param_1 * 0x2c;
        uVar11 = *(byte *)((int)&DAT_005849e0 + iVar4 + 2) & 7;
        if ((&DAT_00584a09)[iVar4] == -1) {
          uVar11 = 0xffffffff;
        }
        else if (3 < uVar11) {
          FUN_00480b00(500,0x1c,0xa0,0x11,0x80000210);
        }
        switch(uVar11) {
        case 1:
          FUN_00404b70(s_Visitor_004c3ac0,0x244,0x1e,0x80006318);
          break;
        case 2:
          FUN_00404b70(s_Member_004c8674,0x244,0x1e,0x80004210);
          break;
        case 3:
          FUN_00404b70(s_Silver_Member_004c8664,0x244,0x1e,0x80002108);
          break;
        case 4:
          FUN_00404b70(s_Gold_Member_004c8658,0x244,0x1e,0x80007ff0);
          break;
        case 5:
          FUN_00404bc0(s_Platinum_Member_004c8648,0x244,0x1e,0x80007fff);
          break;
        case 0xffffffff:
          FUN_00404b70(s_Resigned_004c867c,0x244,0x1e,0x80006000);
        }
        FUN_004762d0(&DAT_0051b360,0,0,0);
        uVar11 = 0xffffffff;
        pcVar17 = s_Low_round__004c863c;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        cVar7 = *(char *)(&DAT_005849e0 + param_1 * 0xb);
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (cVar7 == '\0') {
          pcVar17 = &DAT_004c52bc;
        }
        else {
          pcVar17 = (char *)FUN_004ad425(cVar7,&DAT_005a9f6c,10);
        }
        uVar11 = 0xffffffff;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        iVar10 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = pcVar14 + -1;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_00404b70(&DAT_0051a068,0x244,0x32,0x80002108);
        uVar11 = 0xffffffff;
        pcVar17 = s_Handicap__004c8630;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        cVar7 = *(char *)((int)&DAT_005849e0 + iVar4 + 1);
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (cVar7 < '\x01') {
          pcVar17 = &DAT_004c52bc;
        }
        else {
          pcVar17 = (char *)FUN_004ad425((int)cVar7,&DAT_005a9f6c,10);
        }
        uVar11 = 0xffffffff;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        iVar4 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = pcVar14 + -1;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_00404b70(&DAT_0051a068,0x244,0x40,0x80002108);
        uVar11 = 0xffffffff;
        pcVar17 = s_Rounds_played__004c8620;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        sVar2 = (&DAT_00584a0a)[param_1 * 0x16];
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (sVar2 == 0) {
          pcVar17 = &DAT_004c8618;
        }
        else {
          pcVar17 = (char *)FUN_004ad425((int)sVar2,&DAT_005a9f6c,10);
        }
        uVar11 = 0xffffffff;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        iVar4 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = pcVar14 + -1;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_00404b70(&DAT_0051a068,0x244,0x4e,0x80002108);
        FUN_00404b70(&PTR_DAT_004c8614,0x244,0x62,
                     (-(uint)(local_2d4 != 0x14) & 0xffffa5ff) + 0x80007b20);
        uVar11 = 0xffffffff;
        pcVar17 = (char *)(&DAT_004d60b8 + param_1 * 0x8c);
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_0045b0d0(0x1e,0x1e4,0x72,0x80000018);
      }
      else {
        FUN_00404b70(s_Golf_Skill_Levels_004c8688,0x249,0x1e,0x80000000);
        FUN_004762d0(&DAT_0051b360,0,0,0);
        pcStack_2ec = (char *)0x0;
        iVar4 = 0x3d;
        ppuStack_2e8 = &PTR_s_Power_Hitter_004c2c3c;
        do {
          if (param_1 == 0) {
            bVar8 = *(byte *)((int)&DAT_005a5a04 + (int)pcStack_2ec);
          }
          else {
            bVar8 = (&DAT_005795a8)[(int)pcStack_2ec + local_2d8];
          }
          uVar11 = (uint)bVar8;
          FUN_00480b00(0x1f2,iVar4 + -3,0x2a,0xe,0x80000000);
          FUN_00480b00(499,iVar4 + -2,0x28,0xc,(-(uint)(uVar11 != 0) & 0xffffa6e0) + 0x80007d08);
          if (uVar11 != 0) {
            uVar5 = 0xffffffff;
            pcVar17 = &DAT_004c5340;
            do {
              pcVar12 = pcVar17;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar12 = pcVar17 + 1;
              cVar7 = *pcVar17;
              pcVar17 = pcVar12;
            } while (cVar7 != '\0');
            uVar5 = ~uVar5;
            pcVar17 = pcVar12 + -uVar5;
            pcVar12 = (char *)&DAT_0051a068;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar12 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar12 = pcVar12 + 1;
            }
            pcVar17 = (char *)FUN_004ad425(uVar11 * 10,&DAT_005a9f6c,10);
            uVar5 = 0xffffffff;
            do {
              pcVar12 = pcVar17;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar12 = pcVar17 + 1;
              cVar7 = *pcVar17;
              pcVar17 = pcVar12;
            } while (cVar7 != '\0');
            uVar5 = ~uVar5;
            iVar10 = -1;
            pcVar17 = (char *)&DAT_0051a068;
            do {
              pcVar14 = pcVar17;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar14 = pcVar17 + 1;
              cVar7 = *pcVar17;
              pcVar17 = pcVar14;
            } while (cVar7 != '\0');
            pcVar17 = pcVar12 + -uVar5;
            pcVar12 = pcVar14 + -1;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar12 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar12 = pcVar12 + 1;
            }
            uVar5 = 0xffffffff;
            pcVar17 = &DAT_004c60c4;
            do {
              pcVar12 = pcVar17;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar12 = pcVar17 + 1;
              cVar7 = *pcVar17;
              pcVar17 = pcVar12;
            } while (cVar7 != '\0');
            uVar5 = ~uVar5;
            iVar10 = -1;
            pcVar17 = (char *)&DAT_0051a068;
            do {
              pcVar14 = pcVar17;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar14 = pcVar17 + 1;
              cVar7 = *pcVar17;
              pcVar17 = pcVar14;
            } while (cVar7 != '\0');
            pcVar17 = pcVar12 + -uVar5;
            pcVar12 = pcVar14 + -1;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar12 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar12 = pcVar12 + 1;
            }
            FUN_004049d0(&DAT_0051a068,0x1f5,iVar4,0x80000000);
          }
          FUN_004049d0(*ppuStack_2e8,0x222,iVar4,(-(uint)(uVar11 != 0) & 0xffffbdf0) + 0x80004210);
          iVar4 = iVar4 + 0x10;
          ppuStack_2e8 = ppuStack_2e8 + 1;
          pcStack_2ec = (char *)((int)pcStack_2ec + 1);
        } while ((int)ppuStack_2e8 < 0x4c2c64);
      }
      FUN_004762d0(&DAT_0051b360,0,0,0);
      iVar4 = 0x10f;
      pcVar17 = &DAT_004c2d10;
      ppuStack_2e8 = &PTR_s_Signature_saying_004c2cc0;
      pcStack_2ec = (char *)((int)&DAT_00543d10 + param_1 * 0x4e2);
      do {
        _DAT_00582e66 = 0;
        DAT_0051a068._0_1_ = '\0';
        FUN_00469b00((int)*pcVar17,*(uint *)(*pcVar17 * 4 + 0x838da8) & 0x3fff,0,0x99);
        if (DAT_0058b198 == -0x7fff9ce8) {
          DAT_0058b198 = -0x7fff9ce8;
        }
        uVar11 = 0xffffffff;
        pcVar12 = *ppuStack_2e8;
        do {
          pcVar14 = pcVar12;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar12 = pcVar14 + -uVar11;
        pcVar14 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar11 = 0xffffffff;
        pcVar12 = &DAT_004c5db4;
        do {
          pcVar14 = pcVar12;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        iVar10 = -1;
        pcVar12 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar12;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar7 != '\0');
        pcVar12 = pcVar14 + -uVar11;
        pcVar14 = pcVar13 + -1;
        for (uVar5 = uVar11 >> 2; iVar10 = DAT_0058b198, uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_004049d0(&DAT_0051a068,0x34,iVar4,iVar10);
        uVar11 = 0xffffffff;
        pcVar12 = pcStack_2ec;
        do {
          pcVar14 = pcVar12;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        uVar19 = 0x80000848;
        DAT_0058b198 = -0x7ffff7b8;
        pcVar12 = pcVar14 + -uVar11;
        pcVar14 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
        if ((char)DAT_0051a068 == '\0') {
          FUN_00469b00((int)*pcVar17,*(uint *)(*pcVar17 * 4 + 0x838da8) & 0x3fff,0,0x99);
          uVar19 = 0x80004210;
          DAT_0058b198 = -0x7fffbdf0;
        }
        FUN_004049d0(&DAT_0051a068,0x19c,iVar4,uVar19);
        pcVar12 = pcVar17 + 1;
        iVar4 = iVar4 + 0x10;
        pcStack_2ec = pcStack_2ec + 0x32;
        ppuStack_2e8 = ppuStack_2e8 + 1;
        pcVar17 = pcVar17 + 1;
      } while (*pcVar12 != -1);
      DAT_00582e6e = (short)param_1;
      if ((local_2d4 != DAT_005a9f54) || (local_2d4 == -1)) {
        DAT_005aa554 = 0;
        DAT_005a9f54 = local_2d4;
        goto LAB_004397a2;
      }
      DAT_005aa554 = DAT_005aa554 + 1;
      if (DAT_005aa554 < 0xb) goto LAB_004397a2;
      DAT_0051a068._0_1_ = '\0';
      switch(local_2d4) {
      case 8:
        pcVar17 = s_Load_character_004c8604;
        goto LAB_00439756;
      case 9:
        uVar11 = 0xffffffff;
        pcVar17 = s_Save_character_004c85f4;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 10:
        pcVar17 = s_Body_type_004c85e8;
        goto LAB_00439756;
      case 0xb:
        uVar11 = 0xffffffff;
        pcVar17 = s_Adult_child_004c85dc;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 0xc:
        pcVar17 = s_Select_face_004c85d0;
        goto LAB_00439756;
      case 0xd:
        uVar11 = 0xffffffff;
        pcVar17 = s_Shirt_Color_004c85c4;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 0xe:
        pcVar17 = s_Pants_Color_004c85b8;
        goto LAB_00439756;
      case 0xf:
        uVar11 = 0xffffffff;
        pcVar17 = s_Hair_Color_004c85ac;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 0x10:
        pcVar17 = s_Skin_Tone_004c85a0;
        goto LAB_00439756;
      case 0x11:
        uVar11 = 0xffffffff;
        pcVar17 = s_Gender_004c8598;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 0x12:
        pcVar17 = s_Cancel_004c8590;
LAB_00439756:
        uVar11 = 0xffffffff;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 0x13:
        uVar11 = 0xffffffff;
        pcVar17 = &DAT_004c8588;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        break;
      case 0x14:
        if (local_2e0 == 0) {
          pcVar17 = s_Update_Bio_004c857c;
          goto LAB_00439756;
        }
      default:
        goto LAB_004397a2;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      if ((char)DAT_0051a068 != '\0') {
        FUN_00432620(local_2dc,local_2e4);
      }
LAB_004397a2:
      FUN_00480c80(0);
      FUN_0045bf80(5,0);
      FUN_0045c030();
      FUN_0045bf80(5,0);
      uVar11 = local_2e0;
      iVar4 = DAT_00822d68;
    } while (DAT_00822d68 == 0);
    switch(local_2d4) {
    case 0:
      DAT_00582dd1 = DAT_00582dd1 ^ 1;
      break;
    case 1:
      DAT_00582dd1 = DAT_00582dd1 ^ 2;
      break;
    case 2:
      DAT_00582dd1 = DAT_00582dd1 ^ 4;
      break;
    case 3:
      (&DAT_004d60a8)[iVar9] = (&DAT_004d60a8)[iVar9] ^ 1;
      break;
    case 4:
      (&DAT_004d60a8)[iVar9] = (&DAT_004d60a8)[iVar9] ^ 2;
      break;
    case 5:
      (&DAT_004d60a8)[iVar9] = (&DAT_004d60a8)[iVar9] ^ 4;
      break;
    case 6:
      (&DAT_004d60a8)[iVar9] = (&DAT_004d60a8)[iVar9] ^ 8;
      break;
    case 7:
      (&DAT_004d60a8)[iVar9] = (&DAT_004d60a8)[iVar9] ^ 0x10;
      break;
    case 8:
      uVar11 = 0xffffffff;
      pcVar17 = s_Themes__004c84e8;
      do {
        pcVar12 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      pcVar17 = pcVar12 + -uVar11;
      pcVar12 = (char *)&DAT_0051a068;
      for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar17 = &DAT_00567328;
      do {
        pcVar12 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar4 = -1;
      pcVar17 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar17;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar14;
      } while (cVar7 != '\0');
      pcVar17 = pcVar12 + -uVar11;
      pcVar12 = pcVar14 + -1;
      for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcVar17 = &DAT_004c8574;
      if (local_2e0 == 0) {
        pcVar17 = &DAT_004c856c;
      }
      uVar11 = 0xffffffff;
      do {
        pcVar12 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar4 = -1;
      pcVar17 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar17;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar17 + 1;
        cVar7 = *pcVar17;
        pcVar17 = pcVar14;
      } while (cVar7 != '\0');
      pcVar17 = pcVar12 + -uVar11;
      pcVar12 = pcVar14 + -1;
      for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      iVar4 = FUN_0043d2a0(&DAT_0051a068,&DAT_004e9a84,&DAT_004e9a84);
      if (iVar4 != 0) {
        uVar11 = 0xffffffff;
        pcVar17 = s_Pick_one____004c855c;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (0 < iVar4) {
          pcVar17 = &DAT_0080b130;
          do {
            uVar11 = 0xffffffff;
            pcVar12 = pcVar17;
            do {
              pcVar14 = pcVar12;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar14 = pcVar12 + 1;
              cVar7 = *pcVar12;
              pcVar12 = pcVar14;
            } while (cVar7 != '\0');
            uVar11 = ~uVar11;
            iVar10 = -1;
            pcVar12 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar12;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar13 = pcVar12 + 1;
              cVar7 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar7 != '\0');
            pcVar12 = pcVar14 + -uVar11;
            pcVar14 = pcVar13 + -1;
            for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar14 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar14 = pcVar14 + 1;
            }
            uVar11 = 0xffffffff;
            pcVar12 = &DAT_004c7c30;
            do {
              pcVar14 = pcVar12;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar14 = pcVar12 + 1;
              cVar7 = *pcVar12;
              pcVar12 = pcVar14;
            } while (cVar7 != '\0');
            uVar11 = ~uVar11;
            iVar10 = -1;
            pcVar12 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar12;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar13 = pcVar12 + 1;
              cVar7 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar7 != '\0');
            pcVar12 = pcVar14 + -uVar11;
            pcVar14 = pcVar13 + -1;
            for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar14 = pcVar14 + 4;
            }
            iVar4 = iVar4 + -1;
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar14 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar14 = pcVar14 + 1;
            }
            pcVar17 = pcVar17 + 100;
          } while (iVar4 != 0);
        }
        iVar4 = FUN_0046de70(&DAT_0051a068,100,0x14);
        if (iVar4 != -1) {
          iVar10 = param_2;
          if (local_2e0 == 0) {
            iVar10 = -1;
          }
          FUN_00437fa0(&DAT_0080b130 + iVar4 * 100,param_1,iVar10);
        }
      }
      break;
    case 9:
      iVar4 = param_2;
      if (local_2e0 == 0) {
        iVar4 = -1;
      }
      iVar4 = FUN_00437910(param_1,iVar4,0);
      if (iVar4 != 0) {
        uVar5 = 0xffffffff;
        pcVar17 = s_Character_saved_as_Themes__004c8540;
        do {
          pcVar12 = pcVar17;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar5 = ~uVar5;
        pcVar17 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar17 = &DAT_00567328;
        do {
          pcVar12 = pcVar17;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar5;
        pcVar12 = pcVar14 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar17 = &DAT_004c84e4;
        do {
          pcVar12 = pcVar17;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar5;
        pcVar12 = pcVar14 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar17 = s_Gary_Golf_004d6098 + iVar9;
        do {
          pcVar12 = pcVar17;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar5;
        pcVar12 = pcVar14 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcVar17 = s__chr_004c8538;
        if (uVar11 != 0) {
          pcVar17 = &DAT_004c8530;
        }
        uVar11 = 0xffffffff;
        do {
          pcVar12 = pcVar17;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar12;
        } while (cVar7 != '\0');
        uVar11 = ~uVar11;
        iVar4 = -1;
        pcVar17 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar17;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar14 = pcVar17 + 1;
          cVar7 = *pcVar17;
          pcVar17 = pcVar14;
        } while (cVar7 != '\0');
        pcVar17 = pcVar12 + -uVar11;
        pcVar12 = pcVar14 + -1;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        FUN_0046d6e0(300,100,0,1,0);
      }
      break;
    case 10:
      if (DAT_00822d68 == 1) {
        uStack_2d0 = uStack_2d0 + 1 & 0x80000003;
        if ((int)uStack_2d0 < 0) {
          uStack_2d0 = (uStack_2d0 - 1 | 0xfffffffc) + 1;
        }
      }
      else {
        uStack_2d0 = uStack_2d0 + 3 & 0x80000003;
        if ((int)uStack_2d0 < 0) {
          uStack_2d0 = (uStack_2d0 - 1 | 0xfffffffc) + 1;
        }
      }
      (&DAT_004d60ab)[iVar9] = (char)uStack_2d0 << 4 | (&DAT_004d60ab)[iVar9] & 0xf;
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] | 0x80;
      break;
    case 0xb:
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] ^ 8 | 0x80;
      break;
    case 0xc:
      uVar19 = FUN_0046c940(0x99);
      iVar4 = FUN_00438390(uVar19);
      if ((iVar4 != -1) && ((&DAT_004d60aa)[iVar9] = (char)iVar4, iVar4 < 0x13)) {
        iVar10 = FUN_0046c940(0x99);
        if (iVar10 == 0) {
          iVar4 = iVar4 + 0x14;
        }
        uVar1 = (&DAT_004d55eb)[iVar4 * 0x44];
        (&DAT_004d60af)[iVar9] = (&DAT_004d55e8)[iVar4 * 0x44];
        (&DAT_004d60b0)[iVar9] = uVar1;
      }
      break;
    case 0xd:
      if (DAT_00822d68 == 1) {
        iVar4 = (int)(char)((&DAT_004d60ac)[iVar9] + '\x01');
      }
      else {
        iVar4 = (char)((&DAT_004d60ac)[iVar9] + -1) + 10;
      }
      (&DAT_004d60ac)[iVar9] = (char)(iVar4 % 10);
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] | 0x80;
      break;
    case 0xe:
      if (DAT_00822d68 == 1) {
        iVar4 = (int)(char)((&DAT_004d60ad)[iVar9] + '\x01');
      }
      else {
        iVar4 = (char)((&DAT_004d60ad)[iVar9] + -1) + 10;
      }
      (&DAT_004d60ad)[iVar9] = (char)(iVar4 % 10);
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] | 0x80;
      break;
    case 0xf:
      if (DAT_00822d68 == 1) {
        iVar4 = (int)(char)((&DAT_004d60b0)[iVar9] + '\x01');
      }
      else {
        iVar4 = (char)((&DAT_004d60b0)[iVar9] + -1) + 5;
      }
      (&DAT_004d60b0)[iVar9] = (char)(iVar4 % 5);
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] | 0x80;
      break;
    case 0x10:
      if (DAT_00822d68 == 1) {
        uVar11 = (uint)(char)((&DAT_004d60af)[iVar9] + '\x01');
      }
      else {
        uVar11 = (int)(char)((&DAT_004d60af)[iVar9] + -1) + 4;
      }
      cVar7 = (char)(uVar11 & 0x80000003);
      if ((int)(uVar11 & 0x80000003) < 0) {
        cVar7 = (cVar7 - 1U | 0xfc) + 1;
      }
      (&DAT_004d60af)[iVar9] = cVar7;
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] | 0x80;
      break;
    case 0x11:
      (&DAT_004d60a9)[iVar9] = (&DAT_004d60a9)[iVar9] ^ 0x80;
      (&DAT_004d60b4)[param_1 * 0x8c] = (&DAT_004d60b4)[param_1 * 0x8c] | 0x80;
      if (((&DAT_004d60a9)[iVar9] & 0x80) == 0) {
        FUN_00475840(s_interface_CustGlfBckMale_004c86e4,0,0,0x100,2);
      }
      else {
        FUN_00475840(s_interface_CustGolfBckgrnd_004c8700,0,0,0x100,2);
      }
      break;
    case 0x12:
      puVar21 = &DAT_004e1618;
      puVar15 = &DAT_004d6088 + param_1 * 0x8c;
      for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar15 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar15 = puVar15 + 1;
      }
      break;
    case 0x13:
      local_2cc = 1;
      (&DAT_005794d1)[local_2d8] = DAT_00582dd1;
      (&DAT_004d60b4)[param_1 * 0x8c] =
           DAT_00582dd1 & 7 | (&DAT_004d60b4)[param_1 * 0x8c] & 0xfffffff8;
      break;
    case 0x14:
      if (local_2e0 == 0) {
        FUN_0040cc00(0x1d8,0x68,0x13c,0xd8,1);
        FUN_00479830(600,0x78,0);
        FUN_004798c0(600,0x78,0);
        FUN_00479950(600,0x78,0);
        uVar19 = FUN_00483420(0xff,0xff,0xff,0);
        FUN_00486110(0x1e0,0x70,300,200,&DAT_00519a60,0);
        FUN_00486b30(1);
        FUN_00486250(500);
        pcVar17 = (char *)(&DAT_004d60b8 + param_1 * 0x8c);
        FUN_00486200(pcVar17);
        _DAT_005aa508 = 1;
        _DAT_005aa50c = 2;
        _DAT_005aa510 = 0;
        _DAT_005aa514 = 4;
        _DAT_005aa4fc = uVar19;
        FUN_0047b670(0);
        DAT_00822d68 = 0;
        DAT_00822b9c = 0;
        do {
          FUN_00483bb0();
          FUN_00483c70();
          FUN_00483d80();
          FUN_0045c030();
          FUN_00480c80(0);
          if (DAT_00822d68 != 0) break;
        } while (DAT_00822b9c != 0xd);
        if (pcVar17 != (char *)0x0) {
          *pcVar17 = '\0';
          uVar11 = 0xffffffff;
          pcVar12 = DAT_005aa4ec;
          do {
            pcVar14 = pcVar12;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = pcVar12 + 1;
            cVar7 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar7 != '\0');
          uVar11 = ~uVar11;
          iVar4 = -1;
          do {
            pcVar12 = pcVar17;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar12 = pcVar17 + 1;
            cVar7 = *pcVar17;
            pcVar17 = pcVar12;
          } while (cVar7 != '\0');
          pcVar17 = pcVar14 + -uVar11;
          pcVar12 = pcVar12 + -1;
          for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar12 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        FUN_004860d0();
      }
      break;
    default:
      if (local_2d4 == -1) {
        uVar11 = (int)(local_2dc - 0x9aU) >> 0x1f;
        if (((int)((local_2dc - 0x9aU ^ uVar11) - uVar11) < 0x50) &&
           (uVar11 = (int)(local_2e4 - 0x40U) >> 0x1f,
           (int)((local_2e4 - 0x40U ^ uVar11) - uVar11) < 0x28)) {
          switch((local_2e4 + -0x18) / 0x14) {
          case 0:
            DAT_0051a068._0_1_ = '\0';
            FUN_0045b2c0(s_New_name____004c8524,200,0x20,0x10);
            iVar4 = DAT_00822d68;
            if ((char)DAT_0051a068 != '\0') {
              uVar11 = 0xffffffff;
              pcVar17 = (char *)&DAT_0051a068;
              do {
                pcVar12 = pcVar17;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar12 = pcVar17 + 1;
                cVar7 = *pcVar17;
                pcVar17 = pcVar12;
              } while (cVar7 != '\0');
              uVar11 = ~uVar11;
              pcVar17 = pcVar12 + -uVar11;
              pcVar12 = s_Gary_Golf_004d6098 + iVar9;
              for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar12 = pcVar12 + 4;
              }
LAB_00439feb:
              for (uVar11 = uVar11 & 3; iVar4 = DAT_00822d68, uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar12 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar12 = pcVar12 + 1;
              }
            }
            break;
          case 1:
            DAT_0051a068._0_1_ = '\0';
            FUN_0045b2c0(s_Profession____004c8508,200,0x20,0x10);
            iVar4 = DAT_00822d68;
            if ((char)DAT_0051a068 != '\0') {
              uVar11 = 0xffffffff;
              pcVar17 = (char *)&DAT_0051a068;
              do {
                pcVar12 = pcVar17;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar12 = pcVar17 + 1;
                cVar7 = *pcVar17;
                pcVar17 = pcVar12;
              } while (cVar7 != '\0');
              uVar11 = ~uVar11;
              pcVar17 = pcVar12 + -uVar11;
              pcVar12 = (char *)(&DAT_004d6088 + param_1 * 0x8c);
              for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar12 = pcVar12 + 4;
              }
              goto LAB_00439feb;
            }
            break;
          case 2:
            uVar11 = (uint)(byte)(&DAT_004d60a9)[iVar9];
            if (DAT_00822d68 == 1) {
              uVar5 = (uVar11 & 0x38) << 1;
              if (((&DAT_004d60a9)[iVar9] & 0x38) == 0) {
                uVar5 = 8;
              }
            }
            else {
              uVar5 = (int)(uVar11 & 0x78) >> 1 & 0x78;
              if (uVar5 == 0) {
                uVar5 = 0x40;
              }
            }
            uVar5 = uVar5 | uVar11 & 0x87;
            (&DAT_004d60a9)[iVar9] = (char)uVar5;
            DAT_00582e70 = DAT_00582e70 & 0xff87 | (ushort)uVar5;
            break;
          case 3:
            uVar11 = (uint)(byte)(&DAT_004d60a9)[iVar9];
            if (DAT_00822d68 == 1) {
              uVar5 = (uVar11 & 3) << 1;
              if (((&DAT_004d60a9)[iVar9] & 3) == 0) {
                uVar5 = 1;
              }
            }
            else {
              uVar5 = (int)(uVar11 & 7) >> 1;
              if (uVar5 == 0) {
                uVar5 = 4;
              }
            }
            uVar5 = uVar5 | uVar11 & 0xf8;
            (&DAT_004d60a9)[iVar9] = (char)uVar5;
            DAT_00582e70 = DAT_00582e70 & 0xfff8 | (ushort)uVar5;
          }
        }
        uVar11 = (int)(local_2dc - 0x242U) >> 0x1f;
        if (((int)((local_2dc - 0x242U ^ uVar11) - uVar11) < 0xb2) && (0x10d < local_2e4)) {
          iVar4 = (int)((local_2e4 + -0x10e >> 0x1f & 0xfU) + local_2e4 + -0x10e) >> 4;
          uVar11 = 0xffffffff;
          pcVar17 = (char *)((int)&DAT_00543d10 + (iVar4 + param_1 * 0x19) * 0x32);
          pcVar12 = pcVar17;
          do {
            pcVar14 = pcVar12;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = pcVar12 + 1;
            cVar7 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar7 != '\0');
          uVar11 = ~uVar11;
          pcVar12 = pcVar14 + -uVar11;
          pcVar14 = (char *)&DAT_0051a068;
          for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
          FUN_0045b2c0(s_New_text____004c8518,300,(iVar4 + 0xf) * 0x10,0x30);
          uVar11 = 0xffffffff;
          pcVar12 = (char *)&DAT_0051a068;
          do {
            pcVar14 = pcVar12;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = pcVar12 + 1;
            cVar7 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar7 != '\0');
          uVar11 = ~uVar11;
          pcVar12 = pcVar14 + -uVar11;
          for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar11 = uVar11 & 3; iVar4 = DAT_00822d68, uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar17 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        if ((((local_2e0 != 0) && (param_1 != 0)) &&
            (uVar11 = (int)(local_2dc - 0x208U) >> 0x1f,
            (int)((local_2dc - 0x208U ^ uVar11) - uVar11) < 0x19)) &&
           ((0x3d < local_2e4 && (local_2e4 < 0xde)))) {
          iVar10 = (int)(local_2e4 + -0x40 + (local_2e4 + -0x40 >> 0x1f & 0xfU)) >> 4;
          bVar8 = (&DAT_005795a8)[local_2d8 + iVar10];
          if (iVar4 == 1) {
            if (bVar8 < 10) {
              (&DAT_005795a8)[local_2d8 + iVar10] = bVar8 + 1;
            }
            else {
LAB_0043a223:
              FUN_004481b0(0x18,100,0,0,0);
            }
          }
          else {
            if (bVar8 == 0) goto LAB_0043a223;
            (&DAT_005795a8)[local_2d8 + iVar10] = bVar8 - 1;
          }
        }
      }
    }
    do {
      FUN_0045c030();
    } while (DAT_00822d68 != 0);
    FUN_0045bf80(5,0);
    do {
      FUN_0045c030();
    } while (DAT_00822d68 != 0);
    if (local_2cc != 0) {
      if (((((&DAT_005794d0)[local_2d8] & 0xe0) == 0x20) &&
          (*(short *)((int)&DAT_0057956e + local_2d8) != 0)) &&
         ((byte)(&DAT_00579573)[local_2d8] != 0xffffffff)) {
        iVar4 = (uint)(byte)(&DAT_00579573)[local_2d8] * 0x38;
        (&DAT_0058dd72)[iVar4] = (&DAT_004d60ab)[iVar9] & 0xf;
        (&DAT_0058dd71)[iVar4] = (&DAT_004d60af)[iVar9];
        (&DAT_0058dd73)[iVar4] = (&DAT_004d60ac)[iVar9];
        (&DAT_0058dd74)[iVar4] = (&DAT_004d60ad)[iVar9];
      }
      FUN_00448200((-(uint)(((&DAT_004d60a9)[iVar9] & 0x80) != 0) & 0xfffffffd) + 0x80);
      FUN_004481b0(0x2d,100,0,0,0);
      FUN_00483d30();
      local_4 = 0xffffffff;
      FUN_00474c40();
      *unaff_FS_OFFSET = uStack_c;
      return;
    }
  } while( true );
}

