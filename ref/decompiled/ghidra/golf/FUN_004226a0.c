/* Ghidra decompiled: golf.exe */
/* Function: FUN_004226a0 @ 0x004226A0 */
/* Body size: 2320 addresses */


void FUN_004226a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  uint local_1c;
  int local_14;
  
  iVar12 = param_1;
  local_14 = -1;
  local_1c = 0;
  iVar9 = 0;
  psVar4 = &DAT_0059fc60;
  do {
    if (*psVar4 == param_1) {
      local_14 = iVar9;
    }
    psVar4 = psVar4 + 0x1c4;
    iVar9 = iVar9 + 1;
  } while ((int)psVar4 < 0x5a34e0);
  iVar15 = param_1 * 0x100;
  iVar9 = param_1 * 0x40;
  puVar17 = &DAT_005794b8 + iVar9;
  puVar20 = &DAT_00582fb8;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar20 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar20 = puVar20 + 1;
  }
  FUN_00424120(param_1,0,param_2,param_3,param_4);
  *(int *)(&DAT_005795a4 + iVar15) = *(int *)(&DAT_005795a4 + iVar15) / 2;
  iVar10 = (&DAT_0057959c)[param_1 * 0x40];
  do {
    if (iVar10 == 0) {
      puVar17 = &DAT_00582fb8;
      puVar20 = &DAT_005794b8 + iVar9;
      for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar20 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar20 = puVar20 + 1;
      }
      return;
    }
    iVar16 = (int)(&DAT_00579590)[iVar12 * 0x40] >> 10;
    iVar14 = (int)(&DAT_0057958c)[iVar12 * 0x40] >> 10;
    iVar10 = FUN_0040bf60(iVar14,iVar16);
    if (iVar10 == 0) {
      param_1 = (int)*(char *)((int)&DAT_005722e8 + iVar14 * 0x32 + iVar16);
    }
    else {
      param_1 = 0x14;
    }
    iVar10 = FUN_0042fa30((&DAT_0057958c)[iVar12 * 0x40],(&DAT_00579590)[iVar12 * 0x40]);
    iVar5 = FUN_00467270(*(undefined4 *)(&DAT_00579598 + iVar15),
                         (int)((&DAT_0057959c)[iVar12 * 0x40] +
                              ((int)(&DAT_0057959c)[iVar12 * 0x40] >> 0x1f & 0xfU)) >> 4);
    iVar6 = FUN_004672b0(*(undefined4 *)(&DAT_00579598 + iVar15),
                         (int)((&DAT_0057959c)[iVar12 * 0x40] +
                              ((int)(&DAT_0057959c)[iVar12 * 0x40] >> 0x1f & 0xfU)) >> 4);
    (&DAT_0057958c)[iVar12 * 0x40] = (&DAT_0057958c)[iVar12 * 0x40] + iVar5;
    (&DAT_00579590)[iVar12 * 0x40] = (&DAT_00579590)[iVar12 * 0x40] - iVar6;
    iVar11 = (&DAT_00579594)[iVar12 * 0x40] +
             ((int)(*(int *)(&DAT_005795a0 + iVar15) +
                   (*(int *)(&DAT_005795a0 + iVar15) >> 0x1f & 0x1fU)) >> 5);
    (&DAT_00579594)[iVar12 * 0x40] = iVar11;
    if ((iVar11 != 0) || (*(int *)(&DAT_005795a0 + iVar15) != 0)) {
      iVar11 = *(int *)(&DAT_005795a0 + iVar15) + -0x40;
      *(int *)(&DAT_005795a0 + iVar15) = iVar11;
      if ((local_14 != -1) && ((0 < iVar11 && (iVar11 < 0x40)))) {
        FUN_00409950(local_14);
      }
    }
    local_1c = local_1c + 1;
    if ((local_14 != -1) && ((local_1c & 7) == 0)) {
      FUN_00409950(local_14);
    }
    iVar11 = (&DAT_0057958c)[iVar12 * 0x40];
    iVar1 = (&DAT_00579590)[iVar12 * 0x40];
    uVar13 = iVar11 >> 6 & 0xf;
    uVar18 = iVar1 >> 6 & 0xf;
    bVar21 = false;
    if (uVar13 < 2) {
      bVar21 = (char)(&DAT_005722b6)[iVar14 * 0x32 + iVar16] != param_1;
    }
    if ((uVar18 < 2) && ((char)(&DAT_005722e7)[iVar14 * 0x32 + iVar16] != param_1)) {
      bVar21 = true;
    }
    if ((0xd < uVar13) && ((char)(&DAT_0057231a)[iVar14 * 0x32 + iVar16] != param_1)) {
      bVar21 = true;
    }
    if ((0xd < uVar18) && (*(char *)(iVar16 + 0x5722e9 + iVar14 * 0x32) != param_1)) {
      bVar21 = true;
    }
    uVar19 = (*(int *)(&DAT_00579598 + iVar15) >> 0x1c) + 1 >> 1 & 7;
    if ((int)(&DAT_00579594)[iVar12 * 0x40] < 2) {
      if ((DAT_004c2e1c & 4) == 0) {
        iVar10 = (int)(char)(&DAT_00578371)[param_1 * 0x30];
      }
      else {
        iVar10 = FUN_0040c450(iVar11,iVar1,uVar19,0,99);
        iVar10 = FUN_00467130((char)(&DAT_00578371)[param_1 * 0x30] - iVar10);
      }
      iVar11 = FUN_0040c450((&DAT_0057958c)[iVar12 * 0x40],(&DAT_00579590)[iVar12 * 0x40],
                            uVar19 + 2 & 7);
      if ((iVar10 < 2) && (bVar21)) {
        iVar10 = 2;
      }
      else if ((4 < iVar10) && (0x80 < (int)local_1c)) {
        iVar10 = 4;
      }
      if ((DAT_004c2e1c & 4) != 0) {
        *(int *)(&DAT_00579598 + iVar15) = *(int *)(&DAT_00579598 + iVar15) + iVar11 * -0x2000000;
      }
      if (iVar10 < 5) {
        (&DAT_0057959c)[iVar12 * 0x40] =
             (&DAT_0057959c)[iVar12 * 0x40] -
             ((int)(&DAT_0057959c)[iVar12 * 0x40] >> ((byte)iVar10 & 0x1f)) / 2;
      }
      else if (4 < iVar10) {
        (&DAT_0057959c)[iVar12 * 0x40] =
             ((&DAT_0057959c)[iVar12 * 0x40] - ((int)(&DAT_0057959c)[iVar12 * 0x40] >> 6)) + 0x20;
      }
      if (param_1 == 0x11) {
        if (!bVar21) {
LAB_00422bbf:
          (&DAT_0057959c)[iVar12 * 0x40] = (int)(&DAT_0057959c)[iVar12 * 0x40] / 2;
        }
      }
      else if (((param_1 == 10) &&
               (uVar7 = (int)(8 - uVar13) >> 0x1f, (int)((8 - uVar13 ^ uVar7) - uVar7) < 3)) &&
              (uVar7 = (int)(8 - uVar18) >> 0x1f, (int)((8 - uVar18 ^ uVar7) - uVar7) < 3))
      goto LAB_00422bbf;
      if ((iVar14 != (int)(&DAT_0057958c)[iVar12 * 0x40] >> 10) &&
         ((((iVar5 < 1) - 1 & 0xffffffc4) + 0x40 &
          (int)(char)(&DAT_005619a0)[iVar14 * 0x32 + iVar16]) != 0)) {
        *(int *)(&DAT_00579598 + iVar15) = -*(int *)(&DAT_00579598 + iVar15);
      }
      if ((iVar16 != (int)(&DAT_00579590)[iVar12 * 0x40] >> 10) &&
         ((((iVar6 < 1) - 1 & 0xfffffff1) + 0x10 &
          (int)(char)(&DAT_005619a0)[iVar14 * 0x32 + iVar16]) != 0)) {
        *(int *)(&DAT_00579598 + iVar15) = -0x80000000 - *(int *)(&DAT_00579598 + iVar15);
      }
    }
    else {
      iVar5 = FUN_0042fa30(iVar11,iVar1);
      (&DAT_00579594)[iVar12 * 0x40] = (&DAT_00579594)[iVar12 * 0x40] + (iVar10 - iVar5);
      (&DAT_0057959c)[iVar12 * 0x40] =
           (&DAT_0057959c)[iVar12 * 0x40] - ((int)(&DAT_0057959c)[iVar12 * 0x40] >> 5);
      *(int *)(&DAT_00579598 + iVar15) =
           *(int *)(&DAT_00579598 + iVar15) + *(int *)(&DAT_005795a4 + iVar15);
      iVar10 = FUN_004070b0(param_1,(&DAT_00579594)[iVar12 * 0x40],iVar14,iVar16);
      if ((DAT_005a9cc4 != 2) && (iVar10 != 0)) {
        iVar10 = FUN_0040acd0((&DAT_0057958c)[iVar12 * 0x40] + iVar14 * -0x400 + -0x200,
                              (&DAT_00579590)[iVar12 * 0x40] + iVar16 * -0x400 + -0x200);
        if (((&DAT_005794d0)[iVar15] != '\0') &&
           ((*(ushort *)(&DAT_005794ce + iVar15) & 0x200) != 0)) {
          iVar10 = iVar10 + ((int)((uint)(byte)(&DAT_005795b1)[iVar15] * iVar10 +
                                  ((int)((uint)(byte)(&DAT_005795b1)[iVar15] * iVar10) >> 0x1f & 3U)
                                  ) >> 2);
        }
        uVar7 = FUN_0045c1e0(0x300);
        if (iVar10 < (int)(uVar7 & 0xffff)) {
          uVar7 = FUN_0045c1e0(0x80);
          *(uint *)(&DAT_00579598 + iVar15) =
               *(int *)(&DAT_00579598 + iVar15) + ((uVar7 & 0xffff) + 0x40) * 0x1000000;
          uVar7 = FUN_0045c1e0((&DAT_0057959c)[iVar12 * 0x40]);
          (&DAT_0057959c)[iVar12 * 0x40] = (&DAT_0057959c)[iVar12 * 0x40] - (uVar7 & 0xffff);
          (&DAT_005794c8)[iVar12 * 0x40] = (&DAT_005794c8)[iVar12 * 0x40] | 2;
        }
      }
    }
    if (((int)(&DAT_00579594)[iVar12 * 0x40] < 1) && (*(int *)(&DAT_005795a0 + iVar15) < 0)) {
      bVar2 = false;
      bVar3 = false;
      if ((4 < uVar13) && ((uVar13 < 0xb && (4 < uVar18)))) {
        bVar2 = true;
        bVar3 = true;
      }
      iVar10 = (int)(char)(&DAT_00578370)[param_1 * 0x30];
      if (DAT_005a9cc4 == 0) {
        if ((iVar10 < 2) && (bVar21)) {
          iVar10 = 2;
        }
        if ((bVar2) && ((*(byte *)(&DAT_0053caf0 + iVar16 + iVar14 * 0x32) & 0x20) != 0)) {
          iVar10 = 4;
        }
      }
      iVar10 = FUN_00467130(-0x40 - (iVar10 * *(int *)(&DAT_005795a0 + iVar15)) / 0xc,0,9999);
      *(int *)(&DAT_005795a0 + iVar15) = iVar10;
      if (iVar10 < 0x80) {
        *(undefined4 *)(&DAT_005795a0 + iVar15) = 0;
      }
      (&DAT_00579594)[iVar12 * 0x40] = 0;
      if (local_14 != -1) {
        FUN_00409950(local_14);
      }
      if (((&DAT_005794c8)[iVar12 * 0x40] & 0x100) != 0) {
        *(uint *)(&DAT_00579598 + iVar15) = *(uint *)(&DAT_00579598 + iVar15) ^ 0x80000000;
        (&DAT_005794c8)[iVar12 * 0x40] = (&DAT_005794c8)[iVar12 * 0x40] & 0xfffffeff;
        if ((&DAT_005794d0)[iVar15] == '\0') {
          uVar13 = FUN_0045c1e0((&DAT_0057959c)[iVar12 * 0x40] << 1);
          uVar13 = uVar13 & 0xffff;
        }
        else {
          iVar10 = (&DAT_0057959c)[iVar12 * 0x40];
          uVar13 = FUN_0045c1e0((&DAT_0057959c)[iVar12 * 0x40] << 1);
          uVar13 = (int)(((uVar13 & 0xffff) - iVar10) * 3) /
                   (int)((byte)(&DAT_005795b1)[iVar15] + 5) + iVar10;
        }
        (&DAT_0057959c)[iVar12 * 0x40] = uVar13;
      }
      if ((*(byte *)(&DAT_005794c8 + iVar12 * 0x40) & 0x80) != 0) {
        (&DAT_0057959c)[iVar12 * 0x40] = (int)(&DAT_0057959c)[iVar12 * 0x40] / 2;
        (&DAT_005794c8)[iVar12 * 0x40] = (&DAT_005794c8)[iVar12 * 0x40] & 0xffffff7f | 0x100;
      }
      if ((DAT_004c2e1c & 4) != 0) {
        iVar10 = *(int *)(&DAT_005795a0 + iVar15);
        iVar5 = FUN_0040c450((&DAT_0057958c)[iVar12 * 0x40],(&DAT_00579590)[iVar12 * 0x40],
                             ((char)((int)*(undefined4 *)(&DAT_00579598 + iVar15) >> 0x1d) + 1U &
                             0xfe) + 2 & 7);
        *(int *)(&DAT_00579598 + iVar15) =
             *(int *)(&DAT_00579598 + iVar15) - iVar5 * iVar10 * 0xaec33;
        uVar8 = FUN_0040c450((&DAT_0057958c)[iVar12 * 0x40],(&DAT_00579590)[iVar12 * 0x40],uVar19,
                             0xfffffffe,2);
        iVar10 = FUN_00467130(uVar8);
        (&DAT_0057959c)[iVar12 * 0x40] =
             (&DAT_0057959c)[iVar12 * 0x40] + iVar10 * *(int *)(&DAT_005795a0 + iVar15) * -2;
        iVar10 = *(int *)(&DAT_005795a0 + iVar15);
        uVar8 = FUN_0040c450((&DAT_0057958c)[iVar12 * 0x40],(&DAT_00579590)[iVar12 * 0x40],uVar19,
                             0xfffffffe,2);
        iVar5 = FUN_00467130(uVar8);
        *(int *)(&DAT_005795a0 + iVar15) = (iVar5 * iVar10) / 2 + iVar10;
      }
      if (param_1 == 0x11) {
        if ((!bVar21) &&
           (((DAT_005a9cc4 != 0 || (!bVar3)) ||
            ((*(byte *)(&DAT_0053caf0 + iVar16 + iVar14 * 0x32) & 0x20) == 0)))) {
          *(undefined4 *)(&DAT_005795a0 + iVar15) = 0;
          (&DAT_0057959c)[iVar12 * 0x40] = 0;
        }
      }
      else if (((param_1 == 0xc) && (0x100 < (int)(&DAT_0057959c)[iVar12 * 0x40])) && (!bVar21)) {
        uVar13 = FUN_0045c1e0(0xa0);
        *(uint *)(&DAT_00579598 + iVar15) =
             *(int *)(&DAT_00579598 + iVar15) + (0x50 - (uVar13 & 0xffff)) * 0x1000000;
      }
    }
    if ((((int)(&DAT_0057959c)[iVar12 * 0x40] < 0x40) && ((&DAT_00579594)[iVar12 * 0x40] == 0)) &&
       (*(int *)(&DAT_005795a0 + iVar15) == 0)) {
      DAT_0056a78c = (&DAT_0057958c)[iVar12 * 0x40];
      DAT_0056a790 = (&DAT_00579590)[iVar12 * 0x40];
      (&DAT_0057959c)[iVar12 * 0x40] = 0;
    }
    iVar10 = (&DAT_0057959c)[iVar12 * 0x40];
  } while( true );
}

