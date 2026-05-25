/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30026580 @ 0x30026580 */


void FUN_30026580(int param_1)

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
  undefined2 uVar13;
  short sVar14;
  short sVar17;
  short sVar18;
  undefined8 uVar15;
  short sVar19;
  undefined8 uVar16;
  
  uVar16 = DAT_3003e8b8;
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
    uVar15 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *pbVar7;
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,DAT_3003e8b0);
    pbVar2 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    sVar14 = (short)uVar15;
    sVar17 = (short)((ulonglong)uVar15 >> 0x10);
    sVar18 = (short)((ulonglong)uVar15 >> 0x20);
    sVar19 = (short)((ulonglong)uVar15 >> 0x30);
    uVar15 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar1] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar1] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_30046ce8)[bVar3] + sVar14))),
                    uVar16);
    uVar15 = psubusw(uVar15,uVar16);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar1] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar1] +
                                      (short)(&DAT_300470e8)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar14))),
                    uVar16);
    uVar11 = psubusw(uVar11,uVar16);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar2] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar2] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300478e8)[bVar4] + sVar14))),
                    uVar16);
    uVar12 = psubusw(uVar12,uVar16);
    uVar5 = *DAT_300458a8;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar15 >> 0x10),(int)uVar15) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10) |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_30045890;
    DAT_300458a8 = DAT_300458a8 + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar15 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar15 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    uVar15 = DAT_3003e8b8;
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
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                              CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >>
                                    0x10),(short)uVar5) & 0xffffffff00ff00ff,DAT_3003e8a8);
    bVar4 = *DAT_300458a4;
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    pbVar8 = DAT_300458a4 + 1;
    DAT_300458a4 = DAT_300458a4 + 2;
    sVar14 = (short)uVar16;
    sVar17 = (short)((ulonglong)uVar16 >> 0x10);
    sVar18 = (short)((ulonglong)uVar16 >> 0x20);
    sVar19 = (short)((ulonglong)uVar16 >> 0x30);
    uVar16 = paddsw(CONCAT26((short)((uint)(&DAT_30046ce8)[*pbVar7] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_30046ce8)[*pbVar7] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_30046ce8)[bVar3] >> 0x10) +
                                               sVar17,(short)(&DAT_30046ce8)[bVar3] + sVar14))),
                    uVar15);
    uVar16 = psubusw(uVar16,uVar15);
    uVar11 = paddsw(CONCAT26((short)((uint)(&DAT_300474e8)[*pbVar7] >> 0x10) +
                             (short)((uint)(&DAT_300470e8)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300474e8)[*pbVar7] +
                                      (short)(&DAT_300470e8)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300474e8)[bVar3] >> 0x10) +
                                               (short)((uint)(&DAT_300470e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300474e8)[bVar3] +
                                                      (short)(&DAT_300470e8)[bVar4] + sVar14))),
                    uVar15);
    uVar11 = psubusw(uVar11,uVar15);
    uVar12 = paddsw(CONCAT26((short)((uint)(&DAT_300478e8)[*pbVar8] >> 0x10) + sVar19,
                             CONCAT24((short)(&DAT_300478e8)[*pbVar8] + sVar18,
                                      CONCAT22((short)((uint)(&DAT_300478e8)[bVar4] >> 0x10) +
                                               sVar17,(short)(&DAT_300478e8)[bVar4] + sVar14))),
                    uVar15);
    uVar12 = psubusw(uVar12,uVar15);
    uVar5 = *DAT_300458ac;
    uVar13 = (undefined2)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
    *puVar10 = (ulonglong)CONCAT24((short)((ulonglong)uVar16 >> 0x10),(int)uVar16) &
               0xffffffff0000ffff |
               CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x10) << 8,((uint)uVar11 & 0xffff) << 8)
               | CONCAT44((uint)(ushort)((ulonglong)uVar12 >> 0x10) << 0x10,(int)uVar12 << 0x10) |
               (ulonglong)
               CONCAT41((int)(((ulonglong)(byte)((uint)uVar5 >> 8) << 0x38) >> 0x20),(char)uVar5) <<
               0x18;
    puVar6 = DAT_30045894;
    DAT_300458ac = DAT_300458ac + 1;
    puVar9 = puVar10 + 2;
    puVar10[1] = (ulonglong)
                 CONCAT24((short)((ulonglong)uVar16 >> 0x30),
                          (uint)(ushort)((ulonglong)uVar16 >> 0x20)) |
                 (ulonglong)
                 CONCAT24(uVar13,(uint)(ushort)(((ulonglong)
                                                 CONCAT21(uVar13,(char)((uint)uVar5 >> 0x10)) <<
                                                0x28) >> 0x20)) << 0x10 |
                 CONCAT44((uint)(ushort)((ulonglong)uVar11 >> 0x30) << 8,
                          (uint)(ushort)((ulonglong)uVar11 >> 0x20) << 8) |
                 (ulonglong)
                 CONCAT42((uint)(ushort)((ulonglong)uVar12 >> 0x30) << 0x10,
                          (short)((ulonglong)uVar12 >> 0x20)) << 0x10;
    puVar10 = puVar9;
  } while (puVar9 < puVar6);
  return;
}

