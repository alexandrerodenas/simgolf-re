/* Ghidra decompiled: golf.exe */
/* Function: FUN_00462be0 @ 0x00462BE0 */
/* Body size: 1302 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462be0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar13;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a38;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00482fd0();
  local_4 = 0;
  iVar10 = 0x10;
  if (1000 < DAT_00822c8c) {
    iVar10 = 0xd;
  }
  if (0x4af < DAT_00822c8c) {
    iVar10 = 10;
  }
  if (((&DAT_0082815c)[param_1] & 0x100) != 0) {
    iVar10 = 0x10;
  }
  iVar3 = (&DAT_0082915c)[param_1];
  if (iVar3 == 0) {
    uVar9 = (&DAT_00831164)[param_1];
    uVar13 = (&DAT_00830164)[param_1];
LAB_0046308a:
    FUN_004740f0(PTR_DAT_004c1570,uVar13,uVar9,DAT_00822c74,0);
  }
  else {
    if (iVar3 < 1) {
      iVar10 = iVar10 * 2;
      iVar3 = -(iVar3 * DAT_004c2844);
      if (DAT_0083ad50 != (int *)0x0) {
        (**(code **)(*DAT_0083ad50 + 0x9c))(iVar3,iVar3,iVar10);
      }
    }
    else {
      iVar3 = iVar3 * DAT_004c2844;
      if (DAT_0083ad50 != (int *)0x0) {
        (**(code **)(*DAT_0083ad50 + 0x9c))(iVar3,iVar3,iVar10);
      }
    }
    uVar8 = (&DAT_0082815c)[param_1];
    if (uVar8 == 0xffffffff) {
      uVar9 = (&DAT_00831164)[param_1];
      uVar13 = (&DAT_00830164)[param_1];
      goto LAB_0046308a;
    }
    if ((uVar8 & 0x100) == 0) {
      if ((uVar8 & 0x800) == 0) {
        if ((uVar8 & 0x400) == 0) {
          if ((uVar8 & 0x200) == 0) {
            FUN_004741b0(PTR_DAT_004c1570,(&DAT_00830164)[param_1],(&DAT_00831164)[param_1],
                         DAT_00824148,&DAT_0081ca10 + uVar8 * 0x16);
          }
          else {
            FUN_00474440(PTR_DAT_004c1570,(&DAT_00830164)[param_1],(&DAT_00831164)[param_1],
                         0x3f19999a,&DAT_0081ca10 + (uVar8 & 0x1ff) * 0x16,1);
          }
          goto LAB_0046308f;
        }
        uVar9 = 0x80007fff;
      }
      else {
        uVar9 = 0x80007c00;
      }
      FUN_00474260(PTR_DAT_004c1570,(&DAT_00830164)[param_1],(&DAT_00831164)[param_1],uVar9,iVar3,
                   iVar3,iVar10,&DAT_0081ca10 + (uVar8 & 0xff) * 0x16,0xf8);
    }
    else {
      uVar8 = uVar8 & 0xff;
      FUN_00462020(uVar8);
      FUN_004741b0(PTR_DAT_004c1570,(&DAT_00830164)[param_1],(&DAT_00831164)[param_1],DAT_00824148,
                   &DAT_0081ca10);
      if ((uVar8 != 0xff) && (uVar8 < 0x98)) {
        DAT_0051a068._0_1_ = 0;
        FUN_004676e0(uVar8,0);
        if (((&DAT_005794c8)[uVar8 * 0x40] & 0x4000) != 0) {
          uVar6 = 0xffffffff;
          pcVar4 = &DAT_004c4e60;
          do {
            pcVar12 = pcVar4;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar10 = -1;
          pcVar4 = (char *)&DAT_0051a068;
          do {
            pcVar11 = pcVar4;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar11 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar11;
          } while (cVar1 != '\0');
          pcVar4 = pcVar12 + -uVar6;
          pcVar12 = pcVar11 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        if ((_DAT_0059e7b8 & 0x20) != 0) {
          pcVar4 = (char *)FUN_004ad425(uVar8,&DAT_00834164,10);
          uVar6 = 0xffffffff;
          do {
            pcVar12 = pcVar4;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar10 = -1;
          pcVar4 = (char *)&DAT_0051a068;
          do {
            pcVar11 = pcVar4;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar11 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar11;
          } while (cVar1 != '\0');
          pcVar4 = pcVar12 + -uVar6;
          pcVar12 = pcVar11 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        if ((DAT_00567afc == 3) && (((&DAT_005794c8)[uVar8 * 0x40] & 0x200) == 0)) {
          DAT_0051a068._0_1_ = 0;
        }
        puVar5 = &DAT_0051b360;
        if (DAT_004c2844 < 5) {
          puVar5 = &DAT_00519fd8;
        }
        FUN_004762d0(puVar5,0,0,0);
        if (((((((DAT_005a5a00 & 1) != 0) && (3 < DAT_004c2844)) &&
              (((&DAT_0057953c)[uVar8 * 0x100] == '\0' ||
               ((uVar8 == DAT_004c2e0c || (uVar8 == (DAT_004c2e0c ^ 1))))))) &&
             ('\x05' < (char)(&DAT_005794d5)[uVar8 * 0x100])) &&
            (((&DAT_005794d5)[uVar8 * 0x100] != '\x10' &&
             (((((&DAT_005794c8)[uVar8 * 0x40] & 0x20000000) == 0 || (((byte)DAT_00834170 & 6) != 0)
               ) && (((&DAT_005794c8)[uVar8 * 0x40] & 0x8000) == 0)))))) ||
           ((_DAT_0059e7b8 & 0x20) != 0)) {
          FUN_00404b70(&DAT_0051a068,(&DAT_0082b160)[param_1],(&DAT_0082c164)[param_1],
                       (-(uint)(((&DAT_005794c8)[uVar8 * 0x40] & 0x20000000) != 0) & 0xfffffd09) +
                       0x80007fff);
          sVar2 = (&DAT_0057955c)[uVar8 * 0x80];
          uVar9 = 0x80007d08;
          if (2 < sVar2) {
            uVar9 = 0x80006300;
          }
          if (4 < sVar2) {
            uVar9 = 0x80001304;
          }
          if (6 < sVar2) {
            uVar9 = 0x800023e8;
          }
          if (sVar2 < 0) {
            uVar9 = 0x80000000;
          }
          if ((DAT_00567afc == 2) && ((_DAT_0059e7b8 & 0x200000) == 0)) {
            iVar10 = (&DAT_0082b160)[param_1];
            iVar3 = (&DAT_0082c164)[param_1] + 9;
            FUN_00478b80(iVar10 + -0xc,iVar3,iVar10 + 0xc,iVar3,0x80000000);
            iVar3 = (&DAT_0082b160)[param_1];
            iVar10 = (&DAT_0082c164)[param_1] + 9;
            FUN_00478b80(iVar3 + -0xc,iVar10,iVar3 + ((short)(&DAT_0057955c)[uVar8 * 0x80] + -4) * 3
                         ,iVar10,uVar9);
          }
        }
      }
    }
  }
LAB_0046308f:
  if ((&DAT_0082915c)[param_1] != 0) {
    if (DAT_008371f8 == 0) {
      if (DAT_0083ad50 == (int *)0x0) goto LAB_004630d6;
      iVar10 = *DAT_0083ad50;
      iVar3 = DAT_0058b384;
    }
    else {
      if (DAT_0083ad50 == (int *)0x0) goto LAB_004630d6;
      iVar10 = *DAT_0083ad50;
      iVar3 = DAT_004c2844;
    }
    (**(code **)(iVar10 + 0x9c))(iVar3,iVar3,4);
  }
LAB_004630d6:
  local_4 = 0xffffffff;
  FUN_00483010();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

