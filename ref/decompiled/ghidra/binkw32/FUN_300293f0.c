/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300293f0 @ 0x300293F0 */


void FUN_300293f0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  short sVar15;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  short sVar20;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8b8;
  pbVar6 = DAT_300458a4;
  pbVar7 = DAT_300458a0;
  puVar9 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 4;
  do {
    uVar10 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar7;
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >>
                                                  0x20),uVar10) >> 0x18),
                                              CONCAT12((char)((uint)uVar10 >> 8),(short)uVar10)) >>
                                    0x10),(short)uVar10) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar6;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 2;
    sVar15 = (short)uVar16;
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar19 = (short)((ulonglong)uVar16 >> 0x20);
    sVar20 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar17);
    uVar16 = psubusw(uVar16,uVar17);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar17);
    uVar12 = psubusw(uVar12,uVar17);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar17);
    uVar13 = psubusw(uVar13,uVar17);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar13 >> 0x10) << 0x10,(int)uVar13 << 0x10);
    puVar8 = puVar9 + 4;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    *puVar9 = CONCAT44(uVar10,uVar10);
    puVar9[1] = CONCAT44(uVar14,uVar14);
    puVar5 = DAT_30045890;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar16 >> 0x30),(uint)(ushort)((ulonglong)uVar16 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar13 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar13 >> 0x20)) << 0x10;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    puVar9[2] = CONCAT44(uVar10,uVar10);
    puVar9[3] = CONCAT44(uVar14,uVar14);
    uVar16 = DAT_3003e8b8;
    puVar9 = puVar8;
  } while (puVar8 < puVar5);
  puVar9 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 4;
  do {
    uVar10 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar6 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar10 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar10 >> 0x10),uVar10)) >>
                                                  0x20),uVar10) >> 0x18),
                                              CONCAT12((char)((uint)uVar10 >> 8),(short)uVar10)) >>
                                    0x10),(short)uVar10) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    pbVar7 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar15 = (short)uVar17;
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar19 = (short)((ulonglong)uVar17 >> 0x20);
    sVar20 = (short)((ulonglong)uVar17 >> 0x30);
    uVar17 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar6] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar6] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar18,(short)(&DAT_30046ce8)[bVar3] + sVar15))),
                    uVar16);
    uVar17 = psubusw(uVar17,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar6] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar6] +
                                      (short)(&DAT_300470e8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar15))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar7] >> 0x10) + sVar20,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar7] + sVar19,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar18,(short)(&DAT_300478e8)[bVar4] + sVar15))),
                    uVar16);
    uVar13 = psubusw(uVar13,uVar16);
    uVar11 = (ulonglong)CONCAT24((short)((ulonglong)uVar17 >> 0x10),(int)uVar17) &
             0xffffffff0000ffff |
             CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 8,((uint)uVar12 & 0xffff) << 8) |
             CONCAT44((uint)(ushort)((ulonglong)uVar13 >> 0x10) << 0x10,(int)uVar13 << 0x10);
    puVar8 = puVar9 + 4;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    *puVar9 = CONCAT44(uVar10,uVar10);
    puVar9[1] = CONCAT44(uVar14,uVar14);
    puVar5 = DAT_30045894;
    uVar11 = (ulonglong)
             CONCAT24((short)((ulonglong)uVar17 >> 0x30),(uint)(ushort)((ulonglong)uVar17 >> 0x20))
             | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 8,
                        (uint)(ushort)((ulonglong)uVar12 >> 0x20) << 8) |
             (ulonglong)
             CONCAT42((uint)(ushort)((ulonglong)uVar13 >> 0x30) << 0x10,
                      (short)((ulonglong)uVar13 >> 0x20)) << 0x10;
    uVar10 = (undefined4)uVar11;
    uVar14 = (undefined4)(uVar11 >> 0x20);
    puVar9[2] = CONCAT44(uVar10,uVar10);
    puVar9[3] = CONCAT44(uVar14,uVar14);
    puVar9 = puVar8;
  } while (puVar8 < puVar5);
  return;
}

