/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b3b0 @ 0x3002B3B0 */


void FUN_3002b3b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar16;
  undefined8 uVar14;
  undefined8 uVar15;
  short sVar17;
  short sVar18;
  short sVar20;
  undefined8 uVar19;
  
  uVar15 = DAT_3003e920;
  uVar5 = DAT_3003e8b8;
  uVar4 = DAT_3003e8b0;
  uVar3 = DAT_3003e8a8;
  puVar6 = DAT_30045890 + param_1 * 2;
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar14 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,uVar4);
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 4;
    uVar14 = paddsw(uVar14,uVar5);
    uVar14 = psubusw(uVar14,uVar5);
    uVar19 = paddsw(uVar19,uVar5);
    sVar16 = (short)((ulonglong)uVar14 >> 0x10);
    sVar8 = (short)((ulonglong)uVar14 >> 0x20);
    sVar9 = (short)((ulonglong)uVar14 >> 0x30);
    sVar10 = (short)uVar15;
    sVar11 = (short)((ulonglong)uVar15 >> 0x10);
    sVar12 = (short)((ulonglong)uVar15 >> 0x20);
    sVar13 = (short)((ulonglong)uVar15 >> 0x30);
    uVar19 = psubusw(uVar19,uVar5);
    sVar20 = (short)((ulonglong)uVar19 >> 0x10);
    sVar17 = (short)((ulonglong)uVar19 >> 0x20);
    sVar18 = (short)((ulonglong)uVar19 >> 0x30);
    *puVar7 = CONCAT26(sVar16 * sVar13,
                       CONCAT24(sVar16 * sVar12,
                                CONCAT22((short)uVar14 * sVar11,(short)uVar14 * sVar10)));
    puVar7[1] = CONCAT26(sVar9 * sVar13,
                         CONCAT24(sVar9 * sVar12,CONCAT22(sVar8 * sVar11,sVar8 * sVar10)));
    puVar7[2] = CONCAT26(sVar20 * sVar13,
                         CONCAT24(sVar20 * sVar12,
                                  CONCAT22((short)uVar19 * sVar11,(short)uVar19 * sVar10)));
    puVar7[3] = CONCAT26(sVar18 * sVar13,
                         CONCAT24(sVar18 * sVar12,CONCAT22(sVar17 * sVar11,sVar17 * sVar10)));
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar15 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar14 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,uVar4);
    uVar14 = psllw(uVar14,2);
    uVar14 = pmulhw(uVar14,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 4;
    uVar15 = paddsw(uVar15,uVar5);
    uVar15 = psubusw(uVar15,uVar5);
    uVar14 = paddsw(uVar14,uVar5);
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar8 = (short)((ulonglong)uVar15 >> 0x20);
    sVar9 = (short)((ulonglong)uVar15 >> 0x30);
    uVar14 = psubusw(uVar14,uVar5);
    sVar20 = (short)((ulonglong)uVar14 >> 0x10);
    sVar17 = (short)((ulonglong)uVar14 >> 0x20);
    sVar18 = (short)((ulonglong)uVar14 >> 0x30);
    *puVar7 = CONCAT26(sVar16 * sVar13,
                       CONCAT24(sVar16 * sVar12,
                                CONCAT22((short)uVar15 * sVar11,(short)uVar15 * sVar10)));
    puVar7[1] = CONCAT26(sVar9 * sVar13,
                         CONCAT24(sVar9 * sVar12,CONCAT22(sVar8 * sVar11,sVar8 * sVar10)));
    puVar7[2] = CONCAT26(sVar20 * sVar13,
                         CONCAT24(sVar20 * sVar12,
                                  CONCAT22((short)uVar14 * sVar11,(short)uVar14 * sVar10)));
    puVar7[3] = CONCAT26(sVar18 * sVar13,
                         CONCAT24(sVar18 * sVar12,CONCAT22(sVar17 * sVar11,sVar17 * sVar10)));
    puVar7 = puVar6;
  } while (puVar6 < DAT_30045894 + param_1 * 2);
  DAT_30045894 = puVar6;
  return;
}

