/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30023eb0 @ 0x30023EB0 */


void FUN_30023eb0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar16;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  undefined8 uVar15;
  
  uVar15 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar14 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar13 = (short)uVar14;
    sVar16 = (short)((ulonglong)uVar14 >> 0x10);
    sVar17 = (short)((ulonglong)uVar14 >> 0x20);
    sVar18 = (short)((ulonglong)uVar14 >> 0x30);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_30046ce8)[bVar3] + sVar13))),
                    uVar15);
    uVar14 = psubusw(uVar14,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar13))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300478e8)[bVar4] + sVar13))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    *puVar10 = CONCAT44((uint)(ushort)((ulonglong)uVar14 >> 0x10) << 0x10,(int)uVar14 << 0x10) |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | (ulonglong)CONCAT24((short)((ulonglong)uVar12 >> 0x10),(int)uVar12) &
                 0xffffffff0000ffff;
    puVar6 = DAT_30045890;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar14 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar14 >> 0x20)) << 0x10 |
                 (ulonglong)
                 CONCAT24((short)((ulonglong)uVar12 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar12 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8);
    uVar14 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar13 = (short)uVar15;
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar17 = (short)((ulonglong)uVar15 >> 0x20);
    sVar18 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar16,(short)(&DAT_30046ce8)[bVar3] + sVar13))),
                    uVar14);
    uVar15 = psubusw(uVar15,uVar14);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar13))),
                    uVar14);
    uVar11 = psubusw(uVar11,uVar14);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar18,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar17,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar16,(short)(&DAT_300478e8)[bVar4] + sVar13))),
                    uVar14);
    uVar12 = psubusw(uVar12,uVar14);
    *puVar10 = CONCAT44((uint)(ushort)((ulonglong)uVar15 >> 0x10) << 0x10,(int)uVar15 << 0x10) |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | (ulonglong)CONCAT24((short)((ulonglong)uVar12 >> 0x10),(int)uVar12) &
                 0xffffffff0000ffff;
    puVar6 = DAT_30045894;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar15 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar15 >> 0x20)) << 0x10 |
                 (ulonglong)
                 CONCAT24((short)((ulonglong)uVar12 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar12 >> 0x20)) |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8);
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

