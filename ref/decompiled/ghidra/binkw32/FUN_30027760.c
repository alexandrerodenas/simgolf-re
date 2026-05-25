/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027760 @ 0x30027760 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_30027760(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 uVar12;
  ulonglong uVar11;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined2 uVar16;
  ulonglong uVar15;
  undefined2 uVar17;
  short sVar18;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  short sVar23;
  undefined8 uVar20;
  
  uVar20 = DAT_3003e8b8;
  pbVar7 = DAT_300458a4;
  pbVar8 = DAT_300458a0;
  puVar10 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    puVar6 = DAT_30045890;
    uVar5 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    bVar3 = *pbVar8;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 2;
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar18 = (short)uVar19;
    sVar21 = (short)((ulonglong)uVar19 >> 0x10);
    sVar22 = (short)((ulonglong)uVar19 >> 0x20);
    sVar23 = (short)((ulonglong)uVar19 >> 0x30);
    uVar19 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar21,(short)(&DAT_30046ce8)[bVar3] + sVar18))),
                    uVar20);
    uVar19 = psubusw(uVar19,uVar20);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar18))),
                    uVar20);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar19 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar19 = psubusw(uVar13,uVar20);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300478e8)[bVar4] + sVar18))),
                    uVar20);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar19 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar19 = psubusw(uVar13,uVar20);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar19 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar19 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar19 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar19 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    uVar19 = DAT_3003e8b8;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  puVar10 = DAT_30045894;
  DAT_30045894 = DAT_30045894 + param_1 * 2;
  do {
    puVar6 = DAT_30045894;
    uVar5 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    bVar3 = *DAT_300458a0;
    pbVar7 = DAT_300458a0 + 1;
    DAT_300458a0 = DAT_300458a0 + 2;
    uVar20 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar20 = psllw(uVar20,2);
    uVar20 = pmulhw(uVar20,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar18 = (short)uVar20;
    sVar21 = (short)((ulonglong)uVar20 >> 0x10);
    sVar22 = (short)((ulonglong)uVar20 >> 0x20);
    sVar23 = (short)((ulonglong)uVar20 >> 0x30);
    uVar20 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar21,(short)(&DAT_30046ce8)[bVar3] + sVar18))),
                    uVar19);
    uVar20 = psubusw(uVar20,uVar19);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar18))),
                    uVar19);
    uVar11 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1b8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1b8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1b8,
                                              (ushort)uVar20 >> _DAT_3004f1b8))),_DAT_3004f1a0);
    uVar20 = psubusw(uVar13,uVar19);
    uVar13 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar23,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar22,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar21,(short)(&DAT_300478e8)[bVar4] + sVar18))),
                    uVar19);
    uVar14 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1c0,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1c0,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1c0,
                                              (ushort)uVar20 >> _DAT_3004f1c0))),_DAT_3004f1a8);
    uVar20 = psubusw(uVar13,uVar19);
    uVar15 = psllw(CONCAT26((ushort)((ulonglong)uVar20 >> 0x30) >> _DAT_3004f1c8,
                            CONCAT24((ushort)((ulonglong)uVar20 >> 0x20) >> _DAT_3004f1c8,
                                     CONCAT22((ushort)((ulonglong)uVar20 >> 0x10) >> _DAT_3004f1c8,
                                              (ushort)uVar20 >> _DAT_3004f1c8))),_DAT_3004f1b0);
    uVar15 = uVar11 | uVar14 | uVar15;
    puVar9 = puVar10 + 2;
    uVar12 = (undefined2)(uVar15 >> 0x10);
    uVar16 = (undefined2)(uVar15 >> 0x20);
    uVar17 = (undefined2)(uVar15 >> 0x30);
    *puVar10 = CONCAT44(CONCAT22(uVar12,uVar12),CONCAT22((short)uVar15,(short)uVar15));
    puVar10[1] = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar16,uVar16)));
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

