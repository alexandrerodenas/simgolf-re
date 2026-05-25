/* Ghidra decompiled: golf.exe */
/* Function: FUN_00467a00 @ 0x00467A00 */


void FUN_00467a00(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  char acStack_110 [8];
  uint uStack_108;
  int iStack_104;
  undefined4 auStack_100 [64];
  
  iVar16 = param_1 * 0x100;
  if ('\t' < (char)(&DAT_005794da)[iVar16]) {
    return;
  }
  if (0x97 < param_1) {
    return;
  }
  if ((DAT_0059e7b8 & 0x2000000) != 0) {
    return;
  }
  if ((param_2 == 0x13) && (((&DAT_005794d0)[iVar16] & 0xe0) != 0x20)) {
    iVar8 = (int)(char)(&DAT_005794d9)[iVar16];
    if (9 < *(int *)(&DAT_00575ad0 + iVar8 * 0x208)) {
      if (((((&DAT_00575cb0)[iVar8 * 0x82] & 4) != 0) &&
          (1 < (int)(char)(&DAT_005794db)[iVar16 + iVar8] -
               (int)(char)(&DAT_00575ab0)[iVar8 * 0x208])) ||
         ((((&DAT_00575cb0)[iVar8 * 0x82] & 8) != 0 &&
          ((int)(char)(&DAT_005794db)[iVar16 + iVar8] - (int)(char)(&DAT_00575ab0)[iVar8 * 0x208] <
           0)))) {
        param_2 = 0x17;
      }
    }
  }
  FUN_00469b00(param_2,param_3,
               (char)(&DAT_005794d9)[iVar16] * 0xb + (int)(char)(&DAT_005794da)[iVar16],param_1);
  FUN_00406d50(param_1,0);
  iVar8 = DAT_005409a8;
  iVar10 = param_1;
  if (DAT_005409a8 != 0) {
    iVar10 = (int)(short)(&DAT_0057955a)[param_1 * 0x80];
  }
  iVar9 = iVar10 * 0x100;
  (&DAT_0057953c)[iVar9] = 7;
  bVar14 = (byte)param_2;
  (&DAT_0057953d)[iVar9] = bVar14;
  (&DAT_0057953e)[iVar9] = (&DAT_005794d9)[iVar16] * '\v' + (&DAT_005794da)[iVar16];
  uVar5 = (undefined2)param_3;
  (&DAT_00579554)[iVar10 * 0x80] = uVar5;
  if (iVar8 != 0) {
    (&DAT_0057953d)[iVar9] = (&DAT_0057953d)[iVar9] | 0x80;
  }
  *(int *)(param_2 * 4 + 0x838da8) = param_3;
  if (param_2 == 0x23) {
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x46);
    if ((&DAT_00579528)[iVar16] == '#') {
      return;
    }
  }
  else if (param_2 == 0x13) {
    return;
  }
  iVar8 = 9;
  puVar17 = &DAT_005794b8 + param_1 * 0x40;
  puVar18 = auStack_100;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar11 = (undefined2 *)(&DAT_00579552 + iVar16);
  do {
    (&DAT_00579528)[iVar16 + iVar8] = *(undefined1 *)(iVar8 + 0x579527 + iVar16);
    (&DAT_00579532)[iVar16 + iVar8] = (&DAT_00579531)[iVar16 + iVar8];
    *puVar11 = puVar11[-1];
    iVar8 = iVar8 + -1;
    puVar11 = puVar11 + -1;
  } while (0 < iVar8);
  (&DAT_00579528)[iVar16] = bVar14;
  (&DAT_00579532)[iVar16] = (&DAT_005794d9)[iVar16] * '\v' + (&DAT_005794da)[iVar16];
  (&DAT_00579540)[param_1 * 0x80] = uVar5;
  if (3 < (int)param_2) {
    (&DAT_00579532)[iVar16] = (&DAT_00579532)[iVar16] + '\x01';
  }
  uVar12 = CONCAT31((int3)(char)((ushort)(&DAT_0057956e)[param_1 * 0x80] >> 8),
                    (&DAT_004d60ab)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230]) >> 4 & 0xf;
  iVar8 = FUN_0046c940(param_1);
  if (iVar8 == 0) {
    uVar12 = uVar12 + 5;
  }
  uVar15 = 0;
  iStack_104 = param_2 - 1;
  switch(param_2) {
  case 1:
    uVar15 = 1;
    FUN_0040c500((-(uint)(((&DAT_005794c8)[param_1 * 0x40] & 0x20000) != 0) & 0x14) + 0xd2 + uVar12,
                 (&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    break;
  case 2:
    iVar8 = (&DAT_005794b8)[param_1 * 0x40];
    uVar15 = 0xffffffff;
    uVar22 = (*(char *)((int)&DAT_005722e8 +
                       (iVar8 >> 10) * 0x32 + ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10)) !=
             '\x11') - 1 & 1000;
    uVar13 = (&DAT_005794bc)[param_1 * 0x40];
    goto LAB_00467ddd;
  case 3:
    iVar8 = (&DAT_005794b8)[param_1 * 0x40];
    uVar15 = 0xfffffffe;
    uVar22 = (*(char *)((int)&DAT_005722e8 +
                       (iVar8 >> 10) * 0x32 + ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10)) !=
             '\x11') - 1 & 1000;
    uVar13 = (&DAT_005794bc)[param_1 * 0x40];
    goto LAB_00467ddd;
  case 4:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x12);
    break;
  case 5:
  case 0x1f:
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x10);
    break;
  case 6:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x14);
    break;
  case 7:
    if (param_3 == 0) {
      uVar15 = 1;
      iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0
                          );
      FUN_0040c500(iVar8 + 0x4c);
    }
    break;
  case 8:
    uVar13 = (&DAT_005794bc)[param_1 * 0x40];
    iVar8 = (&DAT_005794b8)[param_1 * 0x40];
    uVar22 = 0;
    uVar15 = 0xfffffffe;
LAB_00467ddd:
    FUN_0040c500((-(uint)(((&DAT_005794c8)[param_1 * 0x40] & 0x20000) != 0) & 0xffffff34) + 0xdc +
                 uVar12,iVar8,uVar13,uVar22);
    break;
  case 9:
    uVar15 = 0xfffffffd;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x46);
    break;
  case 10:
  case 0x2b:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x50);
    break;
  case 0xb:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x4a);
    break;
  case 0xc:
  case 0xd:
    uVar15 = 0xffffffff;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],500
                        );
    FUN_0040c500(iVar8 + 8);
    break;
  case 0xe:
    uVar15 = 0xffffffff;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x9e);
    break;
  case 0xf:
    uVar15 = 0xffffffff;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x9c);
    break;
  case 0x12:
    uVar15 = (uint)(7 < *(short *)(&DAT_0057955e + iVar16));
    if ((uVar15 != 0) &&
       (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 1) != 0)) {
      FUN_004a0890(param_1);
    }
    break;
  case 0x14:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    iVar8 = iVar8 + 0x56;
    goto LAB_00468288;
  case 0x15:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x44);
    break;
  case 0x16:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    iVar8 = iVar8 + 0x4e;
    goto LAB_00468288;
  case 0x17:
    uVar15 = 0xffffffff - (DAT_00822c88 != 0);
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x9a);
    break;
  case 0x18:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x42);
    break;
  case 0x19:
    bVar4 = 7 < (short)(&DAT_00579560)[param_1 * 0x80];
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    iVar8 = iVar8 + 0x3c;
    goto LAB_004681b4;
  case 0x1a:
    uVar15 = 0xffffffff;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0xa0);
    break;
  case 0x1b:
    bVar4 = 0x3b < (short)(&DAT_00579562)[param_1 * 0x80];
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    iVar8 = iVar8 + 0x48;
LAB_004681b4:
    uVar15 = (uint)bVar4;
    FUN_0040c500(iVar8);
    if ((uVar15 != 0) &&
       (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 1) != 0)) {
      FUN_004a0890(param_1);
    }
    break;
  case 0x1c:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    iVar8 = iVar8 + 0x4c;
LAB_00468288:
    FUN_0040c500(iVar8);
    (&DAT_005794d5)[iVar16] = 0xe;
    (&DAT_00579556)[param_1 * 0x80] = 0xffe8;
    break;
  case 0x1d:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x96);
    break;
  case 0x1e:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x98);
    break;
  case 0x20:
  case 0x21:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0xa2);
    break;
  case 0x22:
    uVar15 = 1;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500((-(iVar8 != 0) & 3U) + 0xa4);
    break;
  case 0x23:
    uVar15 = 0xfffffffe;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x46);
    break;
  case 0x24:
    uVar15 = 0xfffffffd;
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x3e);
    break;
  case 0x27:
    uVar15 = (uint)(DAT_00822c88 < 2);
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x14);
    break;
  case 0x2c:
  case 0x2e:
switchD_00467c51_caseD_2c:
    uVar15 = 1;
    break;
  case 0x2f:
    uVar15 = 0xfffffffe;
    break;
  case 0x33:
  case 0x34:
  case 0x35:
    uVar15 = (uint)(DAT_00822c88 == 0);
    if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 4) != 0) {
      FUN_004a0890(param_1);
    }
    break;
  case 0x36:
    uVar15 = (uint)(DAT_00822c88 < 2);
    break;
  case 0x3a:
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500((-(iVar8 != 0) & 0x4bU) + 0x5a);
    break;
  case 0x3b:
    if (*(char *)((char)(&DAT_005794d9)[iVar16] + 0x5849e3 +
                 (short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c) != '\0')
    goto switchD_00467c51_caseD_2c;
    break;
  case 0x41:
    if (1 < DAT_00822c88) {
      uVar15 = 0xfffffffe;
    }
    iVar8 = FUN_0046c940(param_1,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
    FUN_0040c500(iVar8 + 0x16);
  }
  if (param_2 == 0x28) {
    puVar17 = auStack_100;
    puVar18 = &DAT_005794b8 + param_1 * 0x40;
    for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  if ((uVar15 == 0) && (0x2f < (int)param_2)) {
    return;
  }
  uStack_108 = uVar15;
  if ((&DAT_005794d0)[iVar16] != '\0') {
    iVar8 = FUN_00467150((int)(char)(&DAT_005794ee)[iVar16]);
    iVar10 = FUN_00467150(uVar15);
    if (-iVar10 == iVar8) {
      (&DAT_005794ee)[iVar16] = 0;
    }
    else {
      (&DAT_005794ee)[iVar16] = (&DAT_005794ee)[iVar16] + (char)uVar15;
    }
    if (((&DAT_005794d0)[iVar16] != '\0') &&
       (((((param_2 == 2 || (param_2 == 3)) || (param_2 == 0xd)) || (param_2 == 0xc)) &&
        ((((char)(&DAT_005794ee)[iVar16] < '\0' && ((int)uVar15 < 0)) &&
         ((int)(char)(&DAT_005794ee)[iVar16] < (int)uVar15)))))) {
      (&DAT_005794ee)[iVar16] = 1;
    }
    if (((param_1 == DAT_005a59f8) && ((int)uVar15 < 0)) &&
       (((&DAT_005794c8)[param_1 * 0x40] & 0x40000) != 0)) {
      FUN_004481b0(0x30,100,0,0,0);
    }
  }
  if (uVar15 == 0xffffffff) {
    if ((DAT_00543cf4 != 2) && ((&DAT_005794d0)[iVar16] == '\0')) {
      uVar15 = 0;
      iVar8 = 1;
      while( true ) {
        if (DAT_00822c88 == 0) {
          iVar10 = 3;
        }
        else {
          iVar10 = ((DAT_00822c88 < 3) - 1 & 5) + 5;
        }
        if (iVar10 <= iVar8) break;
        if ((byte)(&DAT_00579528)[iVar16 + iVar8] == param_2) {
          uVar15 = 0xffffffff;
        }
        iVar8 = iVar8 + 1;
      }
      if ((*(ushort *)(&DAT_00579542 + iVar16) & 0x8000) != 0) {
        uVar15 = 0xffffffff;
      }
      if (DAT_00543cf4 == 1) {
        uVar15 = 0;
        goto LAB_0046868c;
      }
      goto LAB_004685d4;
    }
  }
  else {
LAB_004685d4:
    if (-1 < (int)uVar15) goto LAB_0046868c;
  }
  if (((&DAT_005794d0)[iVar16] & 0xe0) != 0x40) {
    uVar15 = (int)(uVar15 - 1) / 2;
  }
  if (((((int)uVar15 < 0) && (((&DAT_005794d0)[iVar16] & 0xe0) != 0x20)) &&
      ((int)(((uint)(byte)(&DAT_005794da)[iVar16] + param_1 & 1) + 2) <= DAT_00822c88)) &&
     (((param_2 != 0x2f && (param_2 != 0x15)) && (param_2 != 0x18)))) {
    iVar8 = (int)(short)(&DAT_0057955a)[param_1 * 0x80];
    if ((('\0' < (char)(&DAT_005794d9)[iVar8 * 0x100]) && ((&DAT_0057953c)[iVar8 * 0x100] == '\0'))
       && (0 < (short)(&DAT_0057955c)[iVar8 * 0x80])) {
      FUN_00467a00(iVar8,0x2f,0x14);
      (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] =
           (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] + '\x02';
    }
  }
LAB_0046868c:
  (&DAT_0057955c)[param_1 * 0x80] = (&DAT_0057955c)[param_1 * 0x80] + (short)uVar15;
  uVar6 = FUN_00467130((int)(short)(&DAT_0057955c)[param_1 * 0x80],0xfffffff6,10);
  (&DAT_0057955c)[param_1 * 0x80] = uVar6;
  *(short *)(&DAT_00575c08 + (char)(&DAT_005794d9)[iVar16] * 0x208) =
       *(short *)(&DAT_00575c08 + (char)(&DAT_005794d9)[iVar16] * 0x208) + (short)uVar15;
  uVar12 = FUN_0045c1e0(6);
  if ((((((int)(uVar12 & 0xffff) <= DAT_00822c88) ||
        (((&DAT_005794c8)[param_1 * 0x40] & 0x20000000) != 0)) && ((int)uVar15 < 0)) &&
      (((DAT_0059e7b8 & 0x4000000) == 0 && (param_2 != 0x2f)))) &&
     (iVar8 = FUN_00407000((&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],2),
     iVar8 == 0)) {
    iVar8 = ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10) +
            ((int)(&DAT_005794b8)[param_1 * 0x40] >> 10) * 0x32;
    uVar3 = (&DAT_0053caf0)[iVar8];
    if (((uVar3 & 0xc00) == 0) && (*(char *)((int)&DAT_005722e8 + iVar8) != '\x11')) {
      (&DAT_00578804)[iVar8] = 1;
      (&DAT_0053caf0)[iVar8] = uVar3 | 0x4800;
      DAT_00543d04 = 0xffffffff;
    }
  }
  if (uVar15 != 0) {
    iVar8 = (param_2 + (char)(&DAT_005794d9)[iVar16] * 0x104) * 2;
    *(short *)(&DAT_00575b88 + iVar8) = *(short *)(&DAT_00575b88 + iVar8) + 1;
    *(undefined2 *)(&DAT_00575c1c + iVar8) = uVar5;
    if (0 < (int)uVar15) {
      pbVar1 = (byte *)((int)&DAT_00579540 + iVar16 + 1);
      *pbVar1 = *pbVar1 | 0x40;
    }
  }
  if ((int)uStack_108 < 0) {
    (&DAT_00579540)[param_1 * 0x80] = (&DAT_00579540)[param_1 * 0x80] | 0x8000;
  }
  if ((int)uVar15 < 0) {
    pbVar1 = (byte *)((int)&DAT_00579540 + iVar16 + 1);
    *pbVar1 = *pbVar1 | 0xc0;
  }
  if (0 < (int)uVar15) {
    (&DAT_005a6378)
    [((int)(&DAT_005794b8)[param_1 * 0x40] >> 10) * 0x32 +
     ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10)] =
         (&DAT_005a6378)
         [((int)(&DAT_005794b8)[param_1 * 0x40] >> 10) * 0x32 +
          ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10)] + '\x01';
  }
  if ((int)uVar15 < 0) {
    (&DAT_0056c7e4)
    [((int)(&DAT_005794b8)[param_1 * 0x40] >> 10) * 0x32 +
     ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10)] =
         (&DAT_0056c7e4)
         [((int)(&DAT_005794b8)[param_1 * 0x40] >> 10) * 0x32 +
          ((int)(&DAT_005794bc)[param_1 * 0x40] >> 10)] + '\x01';
  }
  if (param_2 != 0x32) {
    iVar8 = FUN_0046c940(param_1);
    pcVar19 = &DAT_004c6d70;
    if (iVar8 == 0) {
      pcVar19 = &DAT_004c6d6c;
    }
    uVar12 = 0xffffffff;
    do {
      pcVar21 = pcVar19;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar21 = pcVar19 + 1;
      cVar2 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar2 != '\0');
    uVar12 = ~uVar12;
    pcVar19 = pcVar21 + -uVar12;
    pcVar21 = acStack_110;
    for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar21 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar21 = pcVar21 + 1;
    }
    uVar12 = DAT_0059c08c;
    bVar7 = bVar14;
    if (0x1f < (int)param_2) {
      uVar12 = DAT_00571d38;
      bVar7 = bVar14 - 0x20;
    }
    if ((((500 < DAT_00834170 - DAT_0055e5ac) && (*(short *)(&DAT_00579566 + iVar16) == 0)) &&
        ((1 << (bVar7 & 0x1f) & uVar12) == 0)) &&
       (((100 < (int)(&DAT_005794c0)[param_1 * 0x40] && ((int)(&DAT_005794c0)[param_1 * 0x40] < 700)
         ) && ((100 < (int)(&DAT_005794c4)[param_1 * 0x40] &&
               ((int)(&DAT_005794c4)[param_1 * 0x40] < 400)))))) {
      uVar12 = 0xffffffff;
      pcVar19 = &DAT_004c4e54;
      do {
        pcVar21 = pcVar19;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar21 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      pcVar19 = pcVar21 + -uVar12;
      pcVar21 = (char *)&DAT_0051a068;
      for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar21 = pcVar21 + 4;
      }
      cVar2 = (&DAT_005794d9)[iVar16];
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar21 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar21 = pcVar21 + 1;
      }
      FUN_00469b00(param_2,param_3,cVar2 * 0xb + (int)(char)(&DAT_005794da)[iVar16],param_1);
      uVar12 = 0xffffffff;
      pcVar19 = &DAT_004e28e0;
      do {
        pcVar21 = pcVar19;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar21 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar21;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar16 = -1;
      pcVar19 = (char *)&DAT_0051a068;
      do {
        pcVar20 = pcVar19;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar20 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar20;
      } while (cVar2 != '\0');
      pcVar19 = pcVar21 + -uVar12;
      pcVar21 = pcVar20 + -1;
      for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar21 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar21 = pcVar21 + 1;
      }
      FUN_004676e0(param_1,0);
      switch(iStack_104) {
      case 0:
        uVar12 = 0xffffffff;
        pcVar19 = s_has_successfully_made_a_tough_lo_004e2894;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 1:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_disappointed_that_an_easy_loo_004e2810;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = (char *)(&DAT_00578350 + param_3 * 0xc);
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s___If_it_happens_again_004e27f8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = acStack_110;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_will_become_discouraged__004e27dc;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 2:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_disappointed_that_the_shot_ha_004e2794;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = (char *)(&DAT_00578350 + param_3 * 0xc);
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = &DAT_004c4944;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 3:
        uVar12 = 0xffffffff;
        pcVar19 = s__s_next_shot_does_not_involve_ma_004e25b0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 4:
      case 0x24:
      case 0x25:
        uVar12 = 0xffffffff;
        pcVar19 = s__s_next_shot_looks_challenging___004e258c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = acStack_110;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_will_be_happy_if_lands_on_the_gr_004e2558;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 5:
        uVar12 = 0xffffffff;
        pcVar19 = s_plans_to_use_the_slope_of_the_hi_004e284c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      default:
        DAT_0051a068._0_1_ = '\0';
        break;
      case 7:
        uVar12 = 0xffffffff;
        pcVar19 = s_cannot_find_a_safe_place_to_aim_t_004e2718;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 8:
        uVar12 = 0xffffffff;
        pcVar19 = s_was_almost_hit_by_a_shot_from_an_004e2694;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 9:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_unhappy_because_no_path_has_b_004e23f0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = (char *)(&DAT_00578350 + param_3 * 0xc);
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s___Press__p__to_select_the_path_t_004e23c8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 10:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_pleased_to_have_a_scenic_004e2278;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_00407700(param_3 % 0x32,param_3 / 0x32,0xffffffff);
        uVar12 = 0xffffffff;
        pcVar19 = s_in_view_for_the_next_shot__004e225c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0xb:
        uVar12 = 0xffffffff;
        pcVar19 = s__s_ball_just_bounced_off_a_tree__004e2238;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_004676e0(param_1,0);
        uVar12 = 0xffffffff;
        pcVar19 = s_will_be_more_careful_next_time__004e2214;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0xc:
        uVar12 = 0xffffffff;
        pcVar19 = s__s_ball_somehow_ended_up_in_the_004e21f0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = (char *)(&DAT_00578350 + param_3 * 0xc);
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = &DAT_004d3414;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_004676e0(param_1,0);
        uVar12 = 0xffffffff;
        pcVar19 = s_will_be_more_careful_next_time__004e2214;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0xd:
        uVar12 = 0xffffffff;
        pcVar19 = s_needs_to_find_a_soda_vendor_soon_004e21c8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = acStack_110;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_will_be_unhappy__004e21b4;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0xe:
        uVar12 = 0xffffffff;
        pcVar19 = s_needs_to_find_a_snack_bar_soon_o_004e20f8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = acStack_110;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_will_be_unhappy__004e21b4;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0xf:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_amazed_that_the_last_shot_cur_004e2088;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x10:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_amazed_that_the_last_shot_fad_004e20c0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x11:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_enjoying_a_tasty_snack_at_you_004e2044;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x13:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_disappointed_to_see_a_004e1fe0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_00407700(param_3 % 0x32,param_3 / 0x32,0xffffffff);
        uVar12 = 0xffffffff;
        pcVar19 = s_in_the_middle_of_your_otherwise_l_004e1fa8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x14:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_frustrated_that_a_lot_of_golf_004e1e50;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_Placing_a_Ranger_Marshall_near_t_004e1e04;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_Click_the_employees_button_on_th_004e1ecc;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x15:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_excited_to_see_004e1eb8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = (char *)((int)&DAT_0055d738 + param_3 * 0x25);
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s__s_vacation_home_on_your_golf_co_004e1e90;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x17:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_disappointed_to_see_dandelion_004e1f48;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_Hire_a_groundskeeper_to_eradicat_004e1f18;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_Click_the_employees_button_on_th_004e1ecc;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x18:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_enjoying_a_cool_refreshing_be_004e1ffc;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x19:
        uVar12 = 0xffffffff;
        pcVar19 = s_needs_to_find_a_bench_to_rest_on_004e2188;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = acStack_110;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_will_start_to_slow_down__004e216c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x1a:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_relaxing_on_your_comfy_bench_a_004e211c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x1b:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_enjoying_the_lovely_004e237c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_00407700(param_3 % 0x32,param_3 / 0x32,0xffffffff);
        uVar12 = 0xffffffff;
        pcVar19 = s_you_have_included_in_your_course_004e2358;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x1c:
        uVar12 = 0xffffffff;
        pcVar19 = s_likes_the_fact_that_this_hole_is_004e2310;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x1d:
        uVar12 = 0xffffffff;
        pcVar19 = s_dislikes_the_fact_that_this_hole_004e2298;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x1e:
        uVar12 = 0xffffffff;
        pcVar19 = s__s_next_shot_looks_extremely_dif_004e252c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        FUN_004676e0(param_1,0);
        uVar12 = 0xffffffff;
        pcVar19 = s_will_be_thrilled_if_it_finds_the_004e24f8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x1f:
      case 0x20:
        uVar12 = 0xffffffff;
        pcVar19 = s_has_an_interesting_decision_to_m_004e24c0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar19 = s_This_is_a_characteristic_of_a_we_004e248c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x22:
        uVar12 = 0xffffffff;
        pcVar19 = s_has_quit_playing_in_frustration__004e2658;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x23:
        uVar12 = 0xffffffff;
        pcVar19 = s_does_not_enjoy_seeing_an_angry_g_004e2620;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x26:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_intrigued_by_the_wildlife_on_y_004e2398;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x32:
        uVar12 = 0xffffffff;
        pcVar19 = s_appreciates_the_new_driving_rang_004e1c70;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x33:
        uVar12 = 0xffffffff;
        pcVar19 = s_appreciates_the_new_pro_shop_you_004e1cb0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x34:
        uVar12 = 0xffffffff;
        pcVar19 = s_appreciates_the_new_putting_gree_004e1c30;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x35:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_using_this_club_for_the_first_004e1bd4;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x36:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_setting_up_to_hit_a_draw_shot_004e1d7c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x37:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_setting_up_to_hit_a_fade_shot_004e1dc0;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x38:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_setting_up_to_hit_a_high_shot_004e1d2c;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x3b:
        uVar12 = 0xffffffff;
        pcVar19 = s_is_setting_up_to_hit_a_low_shot_w_004e1ce8;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
        break;
      case 0x40:
        uVar12 = 0xffffffff;
        pcVar19 = s_hit_a_good_shot_but_cannot_see_e_004e2434;
        do {
          pcVar21 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar16 = -1;
        pcVar19 = (char *)&DAT_0051a068;
        do {
          pcVar20 = pcVar19;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar20 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar20;
        } while (cVar2 != '\0');
        pcVar19 = pcVar21 + -uVar12;
        pcVar21 = pcVar20 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar21 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar21 = pcVar21 + 1;
        }
      }
      uVar13 = 0x80000210;
      if (0 < (int)uStack_108) {
        uVar13 = 0x80000288;
      }
      if ((int)uStack_108 < 0) {
        uVar13 = 0x80005084;
      }
      if ((DAT_00822c88 != 0) && ((int)uStack_108 < -1)) {
        uVar13 = 0x80007084;
      }
      if ((((DAT_005a5a00 & 4) != 0) && ((char)DAT_0051a068 != '\0')) &&
         (iVar16 = FUN_0040cb00(uVar13,0xfffffff8,param_1), iVar16 != 0)) {
        if ((int)param_2 < 0x20) {
          DAT_0059c08c = DAT_0059c08c | 1 << (bVar14 & 0x1f);
        }
        else {
          DAT_00571d38 = DAT_00571d38 | 1 << (bVar14 - 0x20 & 0x1f);
        }
        DAT_0055e5ac = DAT_00834170;
      }
    }
  }
  return;
}

