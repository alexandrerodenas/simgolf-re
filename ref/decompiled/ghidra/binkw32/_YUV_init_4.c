/* Ghidra decompiled: binkw32.dll */
/* Function: _YUV_init@4 @ 0x3000BED0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _YUV_init_4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  sbyte sVar5;
  sbyte sVar6;
  byte bVar7;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 local_28;
  int local_1c;
  byte bVar8;
  byte bVar9;
  
                    /* 0xbed0  79  _YUV_init@4 */
  if (DAT_3004f1d0 == 0) {
    FUN_3000c5a0();
  }
  if (DAT_3004f1e4 == 0) {
    iVar10 = 0;
    iVar12 = -0x811a80;
    iVar17 = -0x662580;
    iVar13 = 0x191280;
    iVar14 = 0x340780;
    do {
      if (iVar14 < 0x2d8690) {
        iVar1 = 0xdb;
        if (-0x2b7e45 < iVar14) {
          iVar1 = iVar10 + -0x10;
        }
      }
      else {
        iVar1 = 0;
      }
      iVar1 = (int)(iVar1 * 0x950a + (iVar1 * 0x950a >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_3004b538)[iVar10] = iVar1;
      (&DAT_300458d8)[iVar10] = iVar1 << 2;
      (&DAT_300460e8)[iVar10] = (int)(iVar14 + (iVar14 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_300464e8)[iVar10] = (int)(iVar13 + (iVar13 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_300468e8)[iVar10] = (int)(iVar17 + (iVar17 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_30045ce8)[iVar10] = (int)(iVar12 + (iVar12 >> 0x1f & 0x7fffU)) >> 0xf;
      (&DAT_300470e8)[iVar10] =
           (&DAT_300460e8)[iVar10] * 0x10000 + ((&DAT_300460e8)[iVar10] & 0xffff);
      (&DAT_300474e8)[iVar10] =
           (&DAT_300464e8)[iVar10] * 0x10000 + ((&DAT_300464e8)[iVar10] & 0xffff);
      (&DAT_300478e8)[iVar10] =
           (&DAT_300468e8)[iVar10] * 0x10000 + ((&DAT_300468e8)[iVar10] & 0xffff);
      (&DAT_30046ce8)[iVar10] =
           (&DAT_30045ce8)[iVar10] * 0x10000 + ((&DAT_30045ce8)[iVar10] & 0xffff);
      iVar14 = iVar14 + -0x680f;
      iVar10 = iVar10 + 1;
      iVar17 = iVar17 + 0xcc4b;
      iVar12 = iVar12 + 0x10235;
      iVar13 = iVar13 + -0x3225;
    } while (-0x340780 < iVar14);
    iVar10 = 0;
    do {
      (&DAT_30047ce8)[iVar10] = 0;
      (&DAT_300480e8)[iVar10] = iVar10;
      (&DAT_300484e8)[iVar10] = 0xff;
      (&DAT_3004b118)[iVar10] = &DAT_300480e8 + (&DAT_3004b538)[iVar10];
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x100);
    puVar15 = &DAT_30045ce8;
    puVar18 = &DAT_30049118;
    for (iVar10 = 0x800; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar18 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    }
    DAT_3004f1e4 = 1;
  }
  uVar16 = 0;
  DAT_30041c30 = FUN_3001e070();
  if ((DAT_3003db90 != param_1) && (param_1 != -1)) {
    DAT_3003db90 = param_1;
    iVar10 = 5;
    switch(param_1) {
    case 7:
      DAT_3003e8c8._0_4_ = 0x12a112a1;
      DAT_3003e8c8._4_4_ = 0x12a112a1;
      iVar10 = 4;
      DAT_3003e8d0._0_4_ = 0x7ff07ff0;
      DAT_3003e8d0._4_4_ = 0x7ff07ff0;
      iVar13 = 4;
      iVar12 = 4;
      local_28 = 4;
      param_1 = 8;
      DAT_3003e8c0._0_4_ = 0x1110111;
      DAT_3003e8c0._4_4_ = 0x1110111;
      break;
    case 8:
    case 9:
      DAT_3003e8c8._0_4_ = 0x25422542;
      DAT_3003e8c8._4_4_ = 0x25422542;
      DAT_3003e8d0._0_4_ = 0x7fe07fe0;
      DAT_3003e8d0._4_4_ = 0x7fe07fe0;
      iVar13 = 5;
      iVar12 = 5;
      local_28 = 5;
      param_1 = 10;
      DAT_3003e8c0._0_4_ = 0x4210421;
      DAT_3003e8c0._4_4_ = 0x4210421;
      break;
    case 10:
      DAT_3003e8c8._0_4_ = 0x25422542;
      DAT_3003e8c8._4_4_ = 0x25422542;
      DAT_3003e8d0._0_4_ = 0x7fe07fe0;
      DAT_3003e8d0._4_4_ = 0x7fe07fe0;
      iVar13 = 5;
      iVar12 = 6;
      local_28 = 5;
      param_1 = 0xb;
      DAT_3003e8c0._0_4_ = 0x8410841;
      DAT_3003e8c0._4_4_ = 0x8410841;
      break;
    case 0xb:
      DAT_3003e8c8._0_4_ = 0x25422542;
      DAT_3003e8c8._4_4_ = 0x25422542;
      DAT_3003e8d0._0_4_ = 0x7fe07fe0;
      DAT_3003e8d0._4_4_ = 0x7fe07fe0;
      iVar13 = 6;
      iVar12 = 5;
      local_28 = 6;
      param_1 = 0xb;
      DAT_3003e8c0._0_4_ = 0x8420842;
      DAT_3003e8c0._4_4_ = 0x8420842;
      break;
    case 0xc:
      DAT_3003e8c8._0_4_ = 0x12a112a1;
      DAT_3003e8c8._4_4_ = 0x12a112a1;
      iVar13 = 6;
      DAT_3003e8d0._0_4_ = 0x7ff07ff0;
      DAT_3003e8d0._4_4_ = 0x7ff07ff0;
      iVar12 = 6;
      local_28 = 6;
      iVar10 = 4;
      param_1 = 0xc;
      DAT_3003e8c0._0_4_ = 0x11041104;
      DAT_3003e8c0._4_4_ = 0x11041104;
      break;
    default:
      iVar13 = 0;
      iVar12 = 0;
      local_28 = 0;
      iVar10 = 0;
      param_1 = 0;
    }
    _DAT_3004f1b0 = param_1;
    _DAT_3004f1a8 = local_28;
    _DAT_3004f1a0 = 0;
    _DAT_3004f1a4 = 0;
    iVar14 = (1 << (sbyte)iVar13) + -1;
    _DAT_3004f1ac = 0;
    sVar5 = (sbyte)local_28;
    iVar17 = (1 << (sbyte)iVar12) + -1 << sVar5;
    sVar6 = (sbyte)param_1;
    iVar1 = (1 << (sbyte)iVar10) + -1 << sVar6;
    _DAT_3004f1b4 = 0;
    _DAT_3004f1bc = 0;
    _DAT_3004f1c4 = 0;
    _DAT_3004f1cc = 0;
    local_1c = -0xff0;
    _DAT_3004f1b8 = 8 - iVar13;
    _DAT_3004f1c0 = 8 - iVar12;
    _DAT_3004f1c8 = 8 - iVar10;
    do {
      bVar7 = (byte)(8 - iVar12);
      bVar8 = (byte)(8 - iVar13);
      bVar9 = (byte)(8 - iVar10);
      if (local_1c < 1) {
        (&DAT_30048904)[uVar16] = 0;
        (&DAT_3004d57c)[uVar16] = 0;
        (&DAT_30048d04)[uVar16] = 0;
      }
      else if (local_1c < 0xda25) {
        uVar2 = local_1c / 0xdb;
        uVar3 = (uVar2 >> (bVar9 & 0x1f)) << sVar6 | (uVar2 >> (bVar7 & 0x1f)) << sVar5 |
                uVar2 >> (bVar8 & 0x1f);
        (&DAT_30048904)[uVar16] = uVar3;
        (&DAT_3004d57c)[uVar16] = uVar3 << 0x10 | uVar3;
        (&DAT_30048d04)[uVar16] = (uVar2 * 0x100 | uVar2) << 8 | uVar2;
      }
      else {
        (&DAT_30048d04)[uVar16] = 0xffffff;
        uVar2 = (0xff >> (bVar9 & 0x1f)) << sVar6 | (0xff >> (bVar7 & 0x1f)) << sVar5 |
                0xff >> (bVar8 & 0x1f);
        (&DAT_30048904)[uVar16] = uVar2;
        (&DAT_3004d57c)[uVar16] = uVar2 << 0x10 | uVar2;
      }
      (&DAT_30044c7c)[uVar16] = 0;
      iVar19 = (int)uVar16 >> (bVar8 & 0x1f);
      (&DAT_30043454)[uVar16] = 0;
      (&DAT_3004507c)[uVar16] = iVar19;
      (&DAT_3004547c)[uVar16] = iVar14;
      (&DAT_30044068)[uVar16] = 0;
      (&DAT_30042844)[uVar16] = 0;
      iVar4 = ((int)uVar16 >> (bVar7 & 0x1f)) << sVar5;
      (&DAT_30043854)[uVar16] = iVar4;
      (&DAT_30043c54)[uVar16] = iVar17;
      iVar11 = ((int)uVar16 >> (bVar9 & 0x1f)) << sVar6;
      (&DAT_3004d168)[uVar16] = (uVar16 & 0xfffffff0) << 8;
      (&DAT_30042c44)[uVar16] = iVar19 * 0x10001;
      (&DAT_30043044)[uVar16] = iVar14 * 0x10001;
      (&DAT_3004e58c)[uVar16] = 0;
      (&DAT_3004c558)[uVar16] = 0;
      (&DAT_30044468)[uVar16] = iVar11;
      (&DAT_3004c958)[uVar16] = iVar11 * 0x10001;
      (&DAT_3004cd58)[uVar16] = iVar1 * 0x10001;
      (&DAT_3004e98c)[uVar16] = iVar4 * 0x10001;
      (&DAT_3004ed8c)[uVar16] = iVar17 * 0x10001;
      (&DAT_30041c34)[uVar16] = (&DAT_30044c7c)[uVar16] << 0x10;
      (&DAT_30042034)[uVar16] = (&DAT_3004507c)[uVar16] << 0x10;
      (&DAT_30042434)[uVar16] = iVar14 * 0x10000;
      (&DAT_3004d97c)[uVar16] = (&DAT_30043454)[uVar16] << 0x10;
      (&DAT_30044868)[uVar16] = iVar1;
      (&DAT_3004dd7c)[uVar16] = (&DAT_30043854)[uVar16] << 0x10;
      (&DAT_3004e17c)[uVar16] = iVar17 << 0x10;
      (&DAT_3004b948)[uVar16] = (&DAT_30044068)[uVar16] << 0x10;
      (&DAT_3004bd48)[uVar16] = (&DAT_30044468)[uVar16] << 0x10;
      (&DAT_3004c148)[uVar16] = iVar1 << 0x10;
      uVar16 = uVar16 + 1;
      local_1c = local_1c + 0xff;
    } while (local_1c < 0xef10);
  }
  return;
}

