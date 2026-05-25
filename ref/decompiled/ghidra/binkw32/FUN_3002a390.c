/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a390 @ 0x3002A390 */


void FUN_3002a390(int param_1)

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
  short sVar15;
  short sVar16;
  undefined8 uVar13;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  short sVar20;
  short sVar21;
  undefined8 uVar19;
  short sVar22;
  
  uVar5 = DAT_3003e8d0;
  uVar4 = DAT_3003e8c8;
  uVar14 = DAT_3003e8c0;
  uVar3 = DAT_3003e8a8;
  puVar6 = DAT_30045890 + param_1 * 2;
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar13 = psubusw((ulonglong)
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
    uVar13 = pmulhw(uVar13,uVar4);
    uVar19 = pmulhw(uVar19,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 4;
    uVar13 = paddsw(uVar13,uVar5);
    uVar13 = psubusw(uVar13,uVar5);
    uVar19 = paddsw(uVar19,uVar5);
    sVar8 = (short)uVar14;
    sVar12 = (short)uVar13 * sVar8;
    sVar9 = (short)((ulonglong)uVar14 >> 0x10);
    sVar15 = (short)((ulonglong)uVar13 >> 0x10) * sVar9;
    sVar10 = (short)((ulonglong)uVar14 >> 0x20);
    sVar16 = (short)((ulonglong)uVar13 >> 0x20) * sVar10;
    sVar11 = (short)((ulonglong)uVar14 >> 0x30);
    sVar17 = (short)((ulonglong)uVar13 >> 0x30) * sVar11;
    uVar13 = psubusw(uVar19,uVar5);
    sVar18 = (short)uVar13 * sVar8;
    sVar20 = (short)((ulonglong)uVar13 >> 0x10) * sVar9;
    sVar21 = (short)((ulonglong)uVar13 >> 0x20) * sVar10;
    sVar22 = (short)((ulonglong)uVar13 >> 0x30) * sVar11;
    *puVar7 = CONCAT44(CONCAT22(sVar15,sVar15),CONCAT22(sVar12,sVar12));
    puVar7[1] = CONCAT26(sVar17,CONCAT24(sVar17,CONCAT22(sVar16,sVar16)));
    puVar7[2] = CONCAT44(CONCAT22(sVar20,sVar20),CONCAT22(sVar18,sVar18));
    puVar7[3] = CONCAT26(sVar22,CONCAT24(sVar22,CONCAT22(sVar21,sVar21)));
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar14 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar13 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar14 = pmulhw(uVar14,uVar4);
    uVar13 = pmulhw(uVar13,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 4;
    uVar14 = paddsw(uVar14,uVar5);
    uVar14 = psubusw(uVar14,uVar5);
    uVar13 = paddsw(uVar13,uVar5);
    sVar12 = (short)uVar14 * sVar8;
    sVar15 = (short)((ulonglong)uVar14 >> 0x10) * sVar9;
    sVar16 = (short)((ulonglong)uVar14 >> 0x20) * sVar10;
    sVar17 = (short)((ulonglong)uVar14 >> 0x30) * sVar11;
    uVar14 = psubusw(uVar13,uVar5);
    sVar18 = (short)uVar14 * sVar8;
    sVar20 = (short)((ulonglong)uVar14 >> 0x10) * sVar9;
    sVar21 = (short)((ulonglong)uVar14 >> 0x20) * sVar10;
    sVar22 = (short)((ulonglong)uVar14 >> 0x30) * sVar11;
    *puVar7 = CONCAT44(CONCAT22(sVar15,sVar15),CONCAT22(sVar12,sVar12));
    puVar7[1] = CONCAT26(sVar17,CONCAT24(sVar17,CONCAT22(sVar16,sVar16)));
    puVar7[2] = CONCAT44(CONCAT22(sVar20,sVar20),CONCAT22(sVar18,sVar18));
    puVar7[3] = CONCAT26(sVar22,CONCAT24(sVar22,CONCAT22(sVar21,sVar21)));
    puVar7 = puVar6;
  } while (puVar6 < DAT_30045894 + param_1 * 2);
  DAT_30045894 = puVar6;
  return;
}

