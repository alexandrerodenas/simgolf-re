/* Ghidra decompiled: golf.exe */
/* Function: FUN_004038f0 @ 0x004038F0 */
/* Body size: 1529 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004038f0(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  char *pcVar13;
  char *pcVar14;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  if (0x7f < DAT_004c2e10) {
    uVar4 = DAT_004c2e10 - 0x80;
    (&DAT_004d60ab)[(short)(&DAT_0057956e)[uVar4 * 0x80] * 0x230] =
         (&DAT_004d60ab)[(short)(&DAT_0057956e)[uVar4 * 0x80] * 0x230] & 0xf;
    iVar3 = FUN_0046c940(uVar4);
    if (iVar3 != 0) {
      local_20 = (int)(char)(&DAT_004d60ab)[(short)(&DAT_0057956e)[uVar4 * 0x80] * 0x230] >> 4;
    }
    iVar3 = FUN_00467130(local_20,0,9);
    iVar11 = DAT_005685f4 - (uint)(byte)(&DAT_005794d2)[uVar4 * 0x100];
    FUN_0047ab50(&local_1c,&local_18);
    FUN_00430020(local_1c,local_18,&local_8,&local_4,0);
    if ((((byte)DAT_00834170 & 2) != 0) || ((_DAT_0059e7b8 & 4) != 0)) {
      FUN_00407c60((&DAT_005794b8)[uVar4 * 0x40],(&DAT_005794bc)[uVar4 * 0x40],0xc,0x80007fff);
    }
    iVar10 = DAT_004c2844;
    uVar8 = 0xffffffff;
    pcVar6 = s_I_m_flying__004c1564;
    do {
      pcVar14 = pcVar6;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar6 = pcVar14 + -uVar8;
    pcVar14 = (char *)&DAT_0051a068;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar14 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar14 = pcVar14 + 1;
    }
    FUN_00432620(local_1c,local_18 + iVar10 * -8);
    FUN_00462020(uVar4);
    iVar10 = DAT_004e9a94 % *(int *)(&DAT_0053f460 + iVar3 * 4);
    DAT_004e9a94 = DAT_004e9a94 + 1;
    DAT_004e9a9c = FUN_0043d6f0(iVar3 + 0x1e,iVar10,iVar11 - 2U & 7);
    FUN_00462a30(local_1c,local_18,999,0x1e,0x28,DAT_004e9a9c,4,uVar4 | 0x100);
  }
  local_20 = 0;
  psVar12 = &DAT_0058586e;
  do {
    psVar12[-0xffffffff0000000b] = -1;
    psVar12[-0xffffffff0000000a] = -1;
    if (((char)psVar12[-6] != '\0') &&
       ((iVar11 = FUN_0042fb90(*(undefined4 *)(psVar12 + -0xf),*(undefined4 *)(psVar12 + -0xd),
                               &local_18,&local_1c,0), iVar3 = DAT_005685f4, iVar11 != 0 ||
        (DAT_004c2e10 == local_20)))) {
      *(int *)(psVar12 + -0xb) = local_18;
      *(undefined4 *)(psVar12 + -9) = local_1c;
      cVar1 = *(char *)((int)psVar12 + -0xb);
      uVar4 = -(int)cVar1 - 2;
      if ((*(byte *)(psVar12 + -6) & 8) != 0) {
        uVar4 = -(int)cVar1 + 2;
      }
      local_24 = uVar4 + 0x82;
      if (cVar1 == -6) {
        if ((DAT_005a59f8 != -1) ||
           (((_DAT_0059e7b8 & 0x200000) != 0 &&
            (uVar4 = CONCAT31((int3)(uVar4 >> 8),DAT_005795d9), DAT_005795d9 != '\0'))))
        goto LAB_00403ede;
        local_24 = 99;
        DAT_00582e70 = (short)(char)DAT_004d60a9;
        uVar4 = CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),DAT_00582e70) >> 8),DAT_004d60ab) >>
                4 & 3;
        DAT_00582e6e = 0;
        DAT_00582dd1 = 7;
        DAT_00582e72 = 2;
        DAT_00582dd0 = 0x40;
        if ((DAT_004d60a9 & 0x80) != 0) {
          uVar4 = uVar4 + 5;
        }
      }
      if (-1 < cVar1) {
        uVar4 = 0;
        local_24 = 0xc;
      }
      if (*psVar12 < 0xb) {
        iVar11 = 0x20e;
        if (cVar1 == -6) {
          iVar11 = 0;
        }
      }
      else {
        iVar11 = 0x216;
        if (cVar1 == -6) {
          iVar11 = 10;
        }
        if ((*psVar12 == 0xc) && (iVar11 = 0x21e, cVar1 == -6)) {
          iVar11 = 0x1e;
        }
      }
      if ((_DAT_0059e7b8 & 4) == 0) {
        sVar2 = psVar12[-1];
        psVar12[-1] = sVar2 + 1;
        if ((iVar11 == 0x20e) || (iVar11 == 0)) {
          psVar12[-1] = sVar2 + 2;
        }
      }
      iVar10 = (int)psVar12[-1] % (int)(&DAT_0053f3e8)[iVar11 + uVar4];
      if ((iVar10 == 0) && (*psVar12 == 0xc)) {
        *psVar12 = 0xb;
      }
      local_14 = iVar10;
      DAT_004e9a9c = FUN_0043d6f0(iVar11 + uVar4,iVar10,
                                  (iVar3 - (uint)*(byte *)(psVar12 + -4)) - 2 & 7);
      if (*(char *)((int)psVar12 + -0xb) == -6) {
        FUN_00462a30(local_18,local_1c,local_1c,0x1e,0x28,DAT_004e9a9c,4,0x199);
      }
      else {
        FUN_00462a30(local_18,local_1c,local_1c,0x1e,0x28,DAT_004e9a9c,4,local_24);
      }
      DAT_0051a068._0_1_ = 0;
      if ((*(char *)((int)psVar12 + -9) == '\0') && (*(char *)((int)psVar12 + -0xb) < '\0')) {
        if (*(char *)((int)psVar12 + -0xb) == -6) {
          uVar4 = 0xffffffff;
          pcVar6 = s_Gary_Golf_004d6098;
          do {
            pcVar14 = pcVar6;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar14 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar6 = pcVar14 + -uVar4;
          pcVar14 = (char *)&DAT_0051a068;
          for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar4 = uVar4 & 3; iVar10 = local_14, uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        else {
          FUN_00467600(local_20);
        }
        puVar5 = &DAT_0051b360;
        if (DAT_004c2844 < 5) {
          puVar5 = &DAT_00519fd8;
        }
        FUN_004762d0(puVar5,0,0,0);
        if ((_DAT_0059e7b8 & 0x20) != 0) {
          pcVar6 = (char *)FUN_004ad425(local_20,&DAT_004e9a88,10);
          uVar4 = 0xffffffff;
          do {
            pcVar14 = pcVar6;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar14 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar14;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          iVar3 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar6;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar13 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar13;
          } while (cVar1 != '\0');
          pcVar6 = pcVar14 + -uVar4;
          pcVar14 = pcVar13 + -1;
          for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar4 = uVar4 & 3; iVar10 = local_14, uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar14 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        if ((((_DAT_0059e7b8 & 0x80) == 0) && (3 < DAT_004c2844)) && (DAT_00567afc != 3)) {
          FUN_00404b70(&DAT_0051a068,local_18,local_1c,
                       (-(uint)((*(byte *)(psVar12 + -6) & 0x10) != 0) & 0xfffffd09) + 0x80007fff);
        }
      }
      if (DAT_004c2e10 == local_20) {
        if ((((byte)DAT_00834170 & 2) != 0) || ((_DAT_0059e7b8 & 4) != 0)) {
          FUN_00407c60(*(undefined4 *)(psVar12 + -0xf),*(undefined4 *)(psVar12 + -0xd),0xc,
                       0x80007fff);
        }
        FUN_0047ab50(&local_c,&local_10);
        FUN_00430020(local_c,local_10,&local_4,&local_8,0);
        cVar1 = *(char *)((int)psVar12 + -0xb);
        iVar3 = (-(uint)(cVar1 != -4) & 0xfffffffe) + 6;
        if ((cVar1 == -4) && ((*(byte *)(psVar12 + -6) & 8) != 0)) {
          iVar3 = 8;
        }
        switch(cVar1) {
        case -5:
          uVar7 = 0x800003ff;
          break;
        case -4:
          uVar7 = 0x80007ff0;
          break;
        case -3:
          uVar7 = 0x80000018;
          break;
        default:
          uVar7 = 0x80006318;
        }
        FUN_00407c60(local_4 * 0x400 + 0x200,local_8 * 0x400 + 0x200,iVar3 * 0x19,uVar7);
        if (*(char *)((int)psVar12 + -0xb) == -6) {
          DAT_00582e70 = (short)(char)DAT_004d60a9;
          DAT_00582e6e = 0;
          DAT_00582dd1 = 7;
          DAT_00582e72 = 2;
          DAT_00582dd0 = 0x24;
          DAT_00582dd5 = 7;
          FUN_00462020(0x99);
          local_24 = 0;
        }
        FUN_004628d0(local_c,local_10,0,0x1e,0x28,DAT_004e9a9c,4,local_24 | 0x200);
      }
      psVar12[-1] = (short)iVar10;
    }
LAB_00403ede:
    psVar12 = psVar12 + 0x26;
    local_20 = local_20 + 1;
    if (0x586b6d < (int)psVar12) {
      return;
    }
  } while( true );
}

