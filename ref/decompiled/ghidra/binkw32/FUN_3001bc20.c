/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001bc20 @ 0x3001BC20 */


uint FUN_3001bc20(void)

{
  short sVar1;
  short sVar2;
  sbyte sVar3;
  ushort uVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  uint *puVar19;
  float10 fVar20;
  uint uStack00000004;
  int iStack00000008;
  uint *puStack0000000c;
  uint in_stack_00006084;
  float in_stack_00006088;
  int *in_stack_0000608c;
  undefined4 *in_stack_00006090;
  undefined2 *in_stack_00006094;
  uint *in_stack_00006098;
  int in_stack_0000609c;
  uint *in_stack_000060a0;
  
  FUN_3002c020();
  uVar16 = *in_stack_00006098;
  FUN_3001bfe0(uVar16 & 0x1fffffff);
  puVar13 = in_stack_00006098 + 2;
  uVar14 = in_stack_00006098[1] >> 0x1a;
  uVar12 = 6;
  puStack0000000c = puVar13;
  FUN_3001bfe0((in_stack_00006098[1] & 0x3ffffff) << 3 | uVar16 >> 0x1d);
  puVar19 = puStack0000000c;
  if (in_stack_0000609c != 0) {
    pfVar6 = (float *)&stack0x0000001c;
    uStack00000004 = in_stack_0000609c;
    do {
      if (uVar12 < 8) {
        uVar14 = *puVar13 >> (8U - (char)uVar12 & 0x1f);
        uVar12 = uVar12 + 0x18;
        puVar13 = puVar13 + 1;
      }
      else {
        uVar14 = uVar14 >> 8;
        uVar12 = uVar12 - 8;
      }
      fVar20 = (float10)FUN_3002c050();
      *pfVar6 = (float)fVar20;
      pfVar6 = pfVar6 + 1;
      uStack00000004 = uStack00000004 + -1;
      puVar19 = puVar13;
    } while (uStack00000004 != 0);
  }
  puStack0000000c = puVar19;
  uVar16 = 2;
  uStack00000004 = 2;
  if (2 < in_stack_00006084) {
    do {
      if (uVar12 == 0) {
        uVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar12 = 0x1f;
        puStack0000000c = puVar13;
      }
      else {
        uVar12 = uVar12 - 1;
      }
      uVar15 = uVar14 >> 1;
      if ((uVar14 & 1) == 0) {
        uVar10 = uVar16 + 8;
      }
      else if (uVar12 < 4) {
        uVar16 = *puVar13;
        bVar7 = (byte)uVar12;
        puVar13 = puVar13 + 1;
        uVar12 = uVar12 + 0x1c;
        uVar10 = uStack00000004 +
                 (uint)(byte)(&DAT_3003e784)[(uVar16 << (bVar7 & 0x1f) | uVar15) & 0xf] * 8;
        uVar15 = uVar16 >> (4 - bVar7 & 0x1f);
        uVar16 = uStack00000004;
        puStack0000000c = puVar13;
      }
      else {
        uVar12 = uVar12 - 4;
        uVar10 = uVar16 + (uint)(byte)(&DAT_3003e784)[uVar15 & 0xf] * 8;
        uVar15 = uVar14 >> 5;
      }
      if (in_stack_00006084 < uVar10) {
        uVar10 = in_stack_00006084;
      }
      if (uVar12 < 4) {
        uVar14 = *puVar13 >> (4 - (byte)uVar12 & 0x1f);
        uVar15 = *puVar13 << ((byte)uVar12 & 0x1f) | uVar15;
        uVar12 = uVar12 + 0x1c;
        puVar13 = puVar13 + 1;
        uVar16 = uStack00000004;
        puStack0000000c = puVar13;
      }
      else {
        uVar14 = uVar15 >> 4;
        uVar12 = uVar12 - 4;
      }
      uVar15 = uVar15 & 0xf;
      if (uVar15 == 0) {
        puVar17 = (undefined4 *)(&stack0x00000080 + uVar16 * 2);
        for (uVar15 = (uVar10 - uVar16 & 0x7fffffff) >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        for (uVar15 = (uVar10 - uVar16) * 2 & 3; uVar16 = uVar10, uStack00000004 = uVar10,
            uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar17 = 0;
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
      }
      else if (uVar16 < uVar10) {
        iStack00000008 = uVar10 - uStack00000004;
        puVar18 = (ushort *)(&stack0x00000080 + uVar16 * 2);
        uVar16 = uStack00000004 + iStack00000008;
        do {
          uVar4 = (ushort)uVar14;
          sVar3 = (sbyte)uVar15;
          if (uVar12 < uVar15) {
            uVar14 = *puVar13 >> (sVar3 - (byte)uVar12 & 0x1f);
            *puVar18 = (ushort)(0xffffffff >> (0x20U - sVar3 & 0x1f)) &
                       ((ushort)(*puVar13 << ((byte)uVar12 & 0x1f)) | uVar4);
            iVar8 = 0x20 - uVar15;
            puVar13 = puStack0000000c + 1;
            puStack0000000c = puVar13;
          }
          else {
            uVar14 = uVar14 >> sVar3;
            *puVar18 = (ushort)(0xffffffff >> (0x20U - sVar3 & 0x1f)) & uVar4;
            iVar8 = -uVar15;
          }
          uVar12 = uVar12 + iVar8;
          if (*puVar18 != 0) {
            if (uVar12 == 0) {
              uVar10 = *puVar13;
              puVar13 = puVar13 + 1;
              uVar12 = 0x1f;
              puStack0000000c = puVar13;
            }
            else {
              uVar12 = uVar12 - 1;
              uVar10 = uVar14;
            }
            uVar14 = uVar10 >> 1;
            if ((uVar10 & 1) != 0) {
              *puVar18 = -*puVar18;
            }
          }
          puVar18 = puVar18 + 1;
          iStack00000008 = iStack00000008 + -1;
          uStack00000004 = uVar16;
        } while (iStack00000008 != 0);
      }
    } while (uVar16 < in_stack_00006084);
  }
  psVar9 = (short *)&stack0x00000084;
  pfVar6 = (float *)&stack0x00002088;
  if (in_stack_0000609c != 0) {
    pfVar11 = (float *)&stack0x0000001c;
    iStack00000008 = in_stack_0000609c;
    do {
      puVar19 = in_stack_000060a0 + 1;
      uVar16 = *in_stack_000060a0;
      pfVar5 = pfVar6;
      if (uVar16 < *puVar19) {
        do {
          pfVar6 = pfVar5;
          if (uVar16 != 0) {
            sVar1 = *psVar9;
            sVar2 = psVar9[1];
            pfVar6 = pfVar5 + 2;
            psVar9 = psVar9 + 2;
            *pfVar5 = (float)(int)sVar1 * *pfVar11;
            pfVar5[1] = (float)(int)sVar2 * *pfVar11;
          }
          uVar16 = uVar16 + 1;
          pfVar5 = pfVar6;
        } while (uVar16 < *puVar19);
      }
      pfVar11 = pfVar11 + 1;
      iStack00000008 = iStack00000008 + -1;
      in_stack_000060a0 = puVar19;
    } while (iStack00000008 != 0);
  }
  FUN_300173e0(in_stack_00006084,-1,(float *)&stack0x00002080,in_stack_0000608c,in_stack_00006090);
  FUN_3001c020(in_stack_00006094,(float *)&stack0x00002080,in_stack_00006088,in_stack_00006084);
  return (int)in_stack_00006098 * 0x1fffffff + (int)puVar13 & 0x1fffffff;
}

