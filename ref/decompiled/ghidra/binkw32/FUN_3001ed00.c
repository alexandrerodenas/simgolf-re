/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ed00 @ 0x3001ED00 */


void FUN_3001ed00(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  short sVar16;
  short sVar19;
  short sVar20;
  undefined8 uVar17;
  short sVar21;
  undefined8 uVar18;
  uint5 uVar23;
  ulonglong uVar22;
  
  uVar18 = DAT_3003e8b8;
  pbVar8 = DAT_300458a4;
  pbVar9 = DAT_300458a0;
  puVar11 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1;
  do {
    puVar7 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar9;
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar8;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar2 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    sVar16 = (short)uVar17;
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar20 = (short)((ulonglong)uVar17 >> 0x20);
    sVar21 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar16))),
                    uVar18);
    uVar17 = psubusw(uVar17,uVar18);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar16))),
                    uVar18);
    uVar5 = *DAT_300458a8;
    uVar12 = psubusw(uVar12,uVar18);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar16))),
                    uVar18);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),4);
    uVar12 = psubusw(uVar14,uVar18);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),8);
    uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar5 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)
                                           ) >> 0x20),uVar5) >> 0x18);
    uVar23 = (uint5)uVar6 & 0xffffffff00;
    uVar22 = psllw(CONCAT26((ushort)(uVar23 >> 0x1c),
                            CONCAT24((ushort)(uVar23 >> 8) >> 4,
                                     CONCAT22(((ushort)(CONCAT43(uVar6,CONCAT12((char)((uint)uVar5
                                                                                      >> 8),
                                                                                (ushort)uVar5)) >>
                                                       0x10) & 0xff) >> 4,
                                              ((ushort)uVar5 & 0xff) >> 4))),0xc);
    puVar10 = puVar11 + 1;
    DAT_300458a8 = DAT_300458a8 + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar17 >> 0x34),
                        CONCAT24((ushort)((ulonglong)uVar17 >> 0x20) >> 4,
                                 CONCAT22((ushort)((ulonglong)uVar17 >> 0x10) >> 4,
                                          (ushort)uVar17 >> 4))) | uVar13 | uVar15 | uVar22;
    uVar17 = DAT_3003e8b8;
    puVar11 = puVar10;
  } while (puVar10 < puVar7);
  puVar11 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1;
  do {
    puVar7 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar8 = DAT_300458a0 + 1;
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
    pbVar9 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar16 = (short)uVar18;
    sVar19 = (short)((ulonglong)uVar18 >> 0x10);
    sVar20 = (short)((ulonglong)uVar18 >> 0x20);
    sVar21 = (short)((ulonglong)uVar18 >> 0x30);
    uVar18 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar8] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar8] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar19,(short)(&DAT_30046ce8)[bVar3] + sVar16))),
                    uVar17);
    uVar18 = psubusw(uVar18,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar8] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar8] +
                                      (short)(&DAT_300470e8)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar16))),
                    uVar17);
    uVar5 = *DAT_300458ac;
    uVar12 = psubusw(uVar12,uVar17);
    uVar14 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar9] >> 0x10) + sVar21,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar9] + sVar20,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar19,(short)(&DAT_300478e8)[bVar4] + sVar16))),
                    uVar17);
    uVar13 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),4);
    uVar12 = psubusw(uVar14,uVar17);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar12 >> 0x34),
                            CONCAT24((ushort)((ulonglong)uVar12 >> 0x20) >> 4,
                                     CONCAT22((ushort)((ulonglong)uVar12 >> 0x10) >> 4,
                                              (ushort)uVar12 >> 4))),8);
    uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar5 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)
                                           ) >> 0x20),uVar5) >> 0x18);
    uVar23 = (uint5)uVar6 & 0xffffffff00;
    uVar22 = psllw(CONCAT26((ushort)(uVar23 >> 0x1c),
                            CONCAT24((ushort)(uVar23 >> 8) >> 4,
                                     CONCAT22(((ushort)(CONCAT43(uVar6,CONCAT12((char)((uint)uVar5
                                                                                      >> 8),
                                                                                (ushort)uVar5)) >>
                                                       0x10) & 0xff) >> 4,
                                              ((ushort)uVar5 & 0xff) >> 4))),0xc);
    puVar10 = puVar11 + 1;
    DAT_300458ac = DAT_300458ac + 1;
    *puVar11 = CONCAT26((ushort)((ulonglong)uVar18 >> 0x34),
                        CONCAT24((ushort)((ulonglong)uVar18 >> 0x20) >> 4,
                                 CONCAT22((ushort)((ulonglong)uVar18 >> 0x10) >> 4,
                                          (ushort)uVar18 >> 4))) | uVar13 | uVar15 | uVar22;
    puVar11 = puVar10;
  } while (puVar10 < puVar7);
  return;
}

