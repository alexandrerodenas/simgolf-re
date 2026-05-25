/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30022230 @ 0x30022230 */


void FUN_30022230(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  ushort uVar14;
  undefined8 uVar13;
  ushort uVar16;
  undefined8 uVar15;
  short sVar17;
  short sVar19;
  ushort uVar20;
  short sVar21;
  undefined8 uVar18;
  short sVar22;
  uint uVar23;
  
  puVar8 = DAT_30045890 + param_1 * 6;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = puVar8;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar17))),
                    DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  puVar8 = DAT_30045894 + param_1 * 6;
  puVar10 = DAT_30045894;
  DAT_30045894 = puVar8;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar18 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar18 = psllw(uVar18,2);
    uVar18 = pmulhw(uVar18,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar17 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar21 = (short)((ulonglong)uVar18 >> 0x20);
    sVar22 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar6] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar17))),
                    DAT_3003e8b8);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar6] +
                                      (short)(&DAT_300470e8)[*pbVar7] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar18 = psubusw(uVar18,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = (undefined2)uVar18;
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar22,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar7] + sVar21,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar17))),
                    DAT_3003e8b8);
    uVar15 = psubusw(uVar15,DAT_3003e8b8);
    uVar20 = (ushort)uVar15;
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)(ushort)uVar13 << 8,(uint)(ushort)uVar13 << 8) |
             CONCAT44((uint)uVar20 << 0x10,CONCAT22(uVar20,uVar20) << 0x10);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10);
    *puVar10 = (uint)uVar11 | uVar23 << 0x18;
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x10);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[1] = uVar23 >> 8 | (int)uVar11 << 0x10;
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x20);
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar9 = puVar10 + 6;
    uVar12 = (undefined2)((ulonglong)uVar18 >> 0x20);
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x20);
    uVar20 = (ushort)((ulonglong)uVar18 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar12,CONCAT22(uVar12,uVar12)) & 0xffffffff0000ffff |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             CONCAT44((uint)uVar16 << 0x10,CONCAT22(uVar16,uVar16) << 0x10);
    uVar23 = (uint)(uVar11 >> 0x20);
    uVar14 = (ushort)((ulonglong)uVar13 >> 0x30);
    puVar10[3] = (uint)uVar11 | uVar23 << 0x18;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x30);
    uVar11 = (ulonglong)CONCAT24(uVar20,(uint)uVar20) |
             CONCAT44((uint)uVar14 << 8,(uint)uVar14 << 8) |
             (ulonglong)CONCAT42((uint)uVar16 << 0x10,uVar16) << 0x10;
    puVar10[4] = uVar23 >> 8 | (int)uVar11 << 0x10;
    puVar10[5] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  return;
}

