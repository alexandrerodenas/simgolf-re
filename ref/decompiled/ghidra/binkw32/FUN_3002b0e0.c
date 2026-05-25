/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b0e0 @ 0x3002B0E0 */


void FUN_3002b0e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  short sVar9;
  short sVar10;
  ulonglong uVar8;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar16;
  undefined8 uVar15;
  short sVar19;
  undefined8 uVar17;
  ulonglong uVar18;
  
  uVar5 = DAT_3003e8b8;
  uVar4 = DAT_3003e8b0;
  uVar3 = DAT_3003e8a8;
  puVar6 = (ulonglong *)((int)DAT_30045890 + param_1 * 0xc);
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar15 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,uVar4);
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 3;
    uVar15 = paddsw(uVar15,uVar5);
    uVar15 = psubusw(uVar15,uVar5);
    uVar17 = paddsw(uVar17,uVar5);
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar9 = (short)((ulonglong)uVar15 >> 0x20);
    sVar10 = (short)((ulonglong)uVar15 >> 0x30);
    sVar11 = (short)DAT_3003e910;
    sVar12 = (short)((ulonglong)DAT_3003e910 >> 0x10);
    sVar13 = (short)((ulonglong)DAT_3003e910 >> 0x20);
    sVar14 = (short)((ulonglong)DAT_3003e910 >> 0x30);
    uVar8 = CONCAT26(sVar10 * sVar14,
                     CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11)));
    uVar17 = psubusw(uVar17,uVar5);
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar9 = (short)((ulonglong)uVar17 >> 0x20);
    sVar10 = (short)((ulonglong)uVar17 >> 0x30);
    uVar18 = CONCAT26(sVar19 * sVar14,
                      CONCAT24(sVar19 * sVar13,
                               CONCAT22((short)uVar17 * sVar12,(short)uVar17 * sVar11)));
    *puVar7 = CONCAT26(sVar16 * sVar14,
                       CONCAT24(sVar16 * sVar13,
                                CONCAT22((short)uVar15 * sVar12,(short)uVar15 * sVar11))) >> 8 |
              uVar8 << 0x28;
    puVar7[1] = uVar8 >> 0x18 | uVar18 << 0x18;
    puVar7[2] = CONCAT26(sVar10 * sVar14,
                         CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11))) << 8 |
                uVar18 >> 0x28;
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
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar15 = psllw(uVar15,2);
    uVar15 = pmulhw(uVar15,uVar4);
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 3;
    uVar15 = paddsw(uVar15,uVar5);
    uVar15 = psubusw(uVar15,uVar5);
    uVar17 = paddsw(uVar17,uVar5);
    sVar16 = (short)((ulonglong)uVar15 >> 0x10);
    sVar9 = (short)((ulonglong)uVar15 >> 0x20);
    sVar10 = (short)((ulonglong)uVar15 >> 0x30);
    sVar11 = (short)DAT_3003e910;
    sVar12 = (short)((ulonglong)DAT_3003e910 >> 0x10);
    sVar13 = (short)((ulonglong)DAT_3003e910 >> 0x20);
    sVar14 = (short)((ulonglong)DAT_3003e910 >> 0x30);
    uVar8 = CONCAT26(sVar10 * sVar14,
                     CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11)));
    uVar17 = psubusw(uVar17,uVar5);
    sVar19 = (short)((ulonglong)uVar17 >> 0x10);
    sVar9 = (short)((ulonglong)uVar17 >> 0x20);
    sVar10 = (short)((ulonglong)uVar17 >> 0x30);
    uVar18 = CONCAT26(sVar19 * sVar14,
                      CONCAT24(sVar19 * sVar13,
                               CONCAT22((short)uVar17 * sVar12,(short)uVar17 * sVar11)));
    *puVar7 = CONCAT26(sVar16 * sVar14,
                       CONCAT24(sVar16 * sVar13,
                                CONCAT22((short)uVar15 * sVar12,(short)uVar15 * sVar11))) >> 8 |
              uVar8 << 0x28;
    puVar7[1] = uVar8 >> 0x18 | uVar18 << 0x18;
    puVar7[2] = CONCAT26(sVar10 * sVar14,
                         CONCAT24(sVar10 * sVar13,CONCAT22(sVar9 * sVar12,sVar9 * sVar11))) << 8 |
                uVar18 >> 0x28;
    puVar7 = puVar6;
  } while (puVar6 < (ulonglong *)((int)DAT_30045894 + param_1 * 0xc));
  DAT_30045894 = puVar6;
  return;
}

