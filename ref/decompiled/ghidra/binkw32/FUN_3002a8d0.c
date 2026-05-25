/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a8d0 @ 0x3002A8D0 */


void FUN_3002a8d0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar14;
  undefined8 uVar12;
  undefined4 uVar15;
  undefined8 uVar13;
  undefined4 uVar16;
  short sVar17;
  short sVar20;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar21;
  
  uVar13 = DAT_3003e900;
  uVar2 = DAT_3003e8b0;
  uVar1 = DAT_3003e8a8;
  puVar3 = DAT_30045890 + param_1 * 4;
  puVar4 = DAT_30045890;
  do {
    uVar5 = *DAT_30045898;
    uVar15 = DAT_30045898[1];
    uVar12 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),(char)((uint)uVar5 >> 8)),
                              (ushort)(byte)uVar5) & 0xffffffff00ffffff,uVar1);
    uVar19 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar15 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar15 >> 0x10),uVar15)) >>
                                                  0x20),uVar15) >> 0x18),
                                              CONCAT12((char)((uint)uVar15 >> 8),(short)uVar15)) >>
                                    0x10),(short)uVar15) & 0xffffffff00ff00ff,uVar1);
    uVar12 = psllw(uVar12,2);
    uVar12 = pmulhw(uVar12,uVar2);
    uVar19 = psllw(uVar19,2);
    uVar19 = pmulhw(uVar19,uVar2);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar4 + 8;
    uVar12 = paddsw(uVar12,DAT_3003e8b8);
    uVar12 = psubusw(uVar12,DAT_3003e8b8);
    uVar19 = paddsw(uVar19,DAT_3003e8b8);
    sVar14 = (short)((ulonglong)uVar12 >> 0x10);
    sVar6 = (short)((ulonglong)uVar12 >> 0x20);
    sVar7 = (short)((ulonglong)uVar12 >> 0x30);
    sVar8 = (short)uVar13;
    sVar9 = (short)((ulonglong)uVar13 >> 0x10);
    uVar15 = CONCAT22((short)uVar12 * sVar9,(short)uVar12 * sVar8);
    sVar10 = (short)((ulonglong)uVar13 >> 0x20);
    sVar11 = (short)((ulonglong)uVar13 >> 0x30);
    uVar5 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    uVar12 = psubusw(uVar19,DAT_3003e8b8);
    sVar20 = (short)((ulonglong)uVar12 >> 0x10);
    sVar6 = (short)((ulonglong)uVar12 >> 0x20);
    sVar17 = (short)((ulonglong)uVar12 >> 0x30);
    uVar18 = CONCAT22((short)uVar12 * sVar9,(short)uVar12 * sVar8);
    uVar21 = (undefined4)(CONCAT26(sVar14 * sVar11,CONCAT24(sVar14 * sVar10,uVar15)) >> 0x20);
    uVar16 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    *puVar4 = CONCAT44(uVar15,uVar15);
    puVar4[1] = CONCAT44(uVar21,uVar21);
    uVar15 = (undefined4)(CONCAT26(sVar7 * sVar11,CONCAT24(sVar7 * sVar10,uVar5)) >> 0x20);
    puVar4[2] = CONCAT44(uVar5,uVar5);
    puVar4[3] = CONCAT44(uVar15,uVar15);
    uVar5 = (undefined4)(CONCAT26(sVar20 * sVar11,CONCAT24(sVar20 * sVar10,uVar18)) >> 0x20);
    puVar4[4] = CONCAT44(uVar18,uVar18);
    puVar4[5] = CONCAT44(uVar5,uVar5);
    uVar5 = (undefined4)(CONCAT26(sVar17 * sVar11,CONCAT24(sVar17 * sVar10,uVar16)) >> 0x20);
    puVar4[6] = CONCAT44(uVar16,uVar16);
    puVar4[7] = CONCAT44(uVar5,uVar5);
    puVar4 = DAT_30045890;
  } while (DAT_30045890 < puVar3);
  puVar4 = DAT_30045894;
  do {
    uVar5 = *DAT_3004589c;
    uVar15 = DAT_3004589c[1];
    uVar13 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),(char)((uint)uVar5 >> 8)),
                              (ushort)(byte)uVar5) & 0xffffffff00ffffff,uVar1);
    uVar12 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar15 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar15 >> 0x10),uVar15)) >>
                                                  0x20),uVar15) >> 0x18),
                                              CONCAT12((char)((uint)uVar15 >> 8),(short)uVar15)) >>
                                    0x10),(short)uVar15) & 0xffffffff00ff00ff,uVar1);
    uVar13 = psllw(uVar13,2);
    uVar13 = pmulhw(uVar13,uVar2);
    uVar12 = psllw(uVar12,2);
    uVar12 = pmulhw(uVar12,uVar2);
    DAT_3004589c = DAT_3004589c + 2;
    puVar3 = puVar4 + 8;
    uVar13 = paddsw(uVar13,DAT_3003e8b8);
    uVar13 = psubusw(uVar13,DAT_3003e8b8);
    uVar12 = paddsw(uVar12,DAT_3003e8b8);
    sVar14 = (short)((ulonglong)uVar13 >> 0x10);
    sVar6 = (short)((ulonglong)uVar13 >> 0x20);
    sVar7 = (short)((ulonglong)uVar13 >> 0x30);
    uVar15 = CONCAT22((short)uVar13 * sVar9,(short)uVar13 * sVar8);
    uVar5 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    uVar13 = psubusw(uVar12,DAT_3003e8b8);
    sVar20 = (short)((ulonglong)uVar13 >> 0x10);
    sVar6 = (short)((ulonglong)uVar13 >> 0x20);
    sVar17 = (short)((ulonglong)uVar13 >> 0x30);
    uVar18 = CONCAT22((short)uVar13 * sVar9,(short)uVar13 * sVar8);
    uVar21 = (undefined4)(CONCAT26(sVar14 * sVar11,CONCAT24(sVar14 * sVar10,uVar15)) >> 0x20);
    uVar16 = CONCAT22(sVar6 * sVar9,sVar6 * sVar8);
    *puVar4 = CONCAT44(uVar15,uVar15);
    puVar4[1] = CONCAT44(uVar21,uVar21);
    uVar15 = (undefined4)(CONCAT26(sVar7 * sVar11,CONCAT24(sVar7 * sVar10,uVar5)) >> 0x20);
    puVar4[2] = CONCAT44(uVar5,uVar5);
    puVar4[3] = CONCAT44(uVar15,uVar15);
    uVar5 = (undefined4)(CONCAT26(sVar20 * sVar11,CONCAT24(sVar20 * sVar10,uVar18)) >> 0x20);
    puVar4[4] = CONCAT44(uVar18,uVar18);
    puVar4[5] = CONCAT44(uVar5,uVar5);
    uVar5 = (undefined4)(CONCAT26(sVar17 * sVar11,CONCAT24(sVar17 * sVar10,uVar16)) >> 0x20);
    puVar4[6] = CONCAT44(uVar16,uVar16);
    puVar4[7] = CONCAT44(uVar5,uVar5);
    puVar4 = puVar3;
  } while (puVar3 < DAT_30045894 + param_1 * 4);
  DAT_30045894 = puVar3;
  return;
}

