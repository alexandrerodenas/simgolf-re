/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300217c0 @ 0x300217C0 */


void FUN_300217c0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 3;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)(&DAT_300478e8)[*pbVar7] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar2] + sVar18,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)(&DAT_300474e8)[*pbVar8] + (short)(&DAT_300470e8)[*pbVar7] +
                             sVar20,CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) +
                                             sVar19,CONCAT22((short)(&DAT_300474e8)[*pbVar1] +
                                                             (short)(&DAT_300470e8)[*pbVar2] +
                                                             sVar18,(short)((uint)(&DAT_300474e8)
                                                                                  [bVar3] >> 0x10) +
                                                                    (short)((uint)(&DAT_300470e8)
                                                                                  [bVar4] >> 0x10) +
                                                                    sVar15))),uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*pbVar8] + sVar20,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar1] + sVar18,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar15))),uVar17);
    uVar14 = psubusw(uVar14,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045890;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    uVar16 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 3;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)(&DAT_300478e8)[*DAT_300458a4] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300478e8)[*pbVar8] + sVar18,
                                               (short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)(&DAT_300474e8)[*DAT_300458a0] +
                             (short)(&DAT_300470e8)[*DAT_300458a4] + sVar20,
                             CONCAT24((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                                      (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_300474e8)[*pbVar7] +
                                               (short)(&DAT_300470e8)[*pbVar8] + sVar18,
                                               (short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar15))),uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar14 = paddsw(CONCAT26((short)(&DAT_30046ce8)[*DAT_300458a0] + sVar20,
                             CONCAT24((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar19,
                                      CONCAT22((short)(&DAT_30046ce8)[*pbVar7] + sVar18,
                                               (short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar15))),uVar16);
    uVar14 = psubusw(uVar14,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10);
    uVar13 = (uint)(uVar11 >> 0x20);
    *puVar10 = (uint)uVar11 | uVar13 << 0x18;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar14 >> 0x20)) << 0x10;
    puVar9 = puVar10 + 3;
    puVar10[1] = uVar13 >> 8 | (int)uVar11 << 0x10;
    puVar6 = DAT_30045894;
    puVar10[2] = (uint)(uVar11 >> 0x10) & 0xffff | (int)(uVar11 >> 0x20) << 8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

