/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002aee0 @ 0x3002AEE0 */


void FUN_3002aee0(int param_1)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = DAT_3003e8d0;
  uVar4 = DAT_3003e8c8;
  uVar13 = DAT_3003e8c0;
  uVar3 = DAT_3003e8a8;
  puVar6 = DAT_30045890 + param_1;
  puVar7 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar2 = DAT_30045898[1];
    uVar12 = psubusw((ulonglong)
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
    uVar12 = pmulhw(uVar12,uVar4);
    uVar14 = pmulhw(uVar14,uVar4);
    DAT_30045898 = DAT_30045898 + 2;
    DAT_30045890 = puVar7 + 2;
    uVar12 = paddsw(uVar12,uVar5);
    uVar12 = psubusw(uVar12,uVar5);
    uVar14 = paddsw(uVar14,uVar5);
    sVar8 = (short)uVar13;
    sVar9 = (short)((ulonglong)uVar13 >> 0x10);
    sVar10 = (short)((ulonglong)uVar13 >> 0x20);
    sVar11 = (short)((ulonglong)uVar13 >> 0x30);
    uVar14 = psubusw(uVar14,uVar5);
    *puVar7 = CONCAT26((short)((ulonglong)uVar12 >> 0x30) * sVar11,
                       CONCAT24((short)((ulonglong)uVar12 >> 0x20) * sVar10,
                                CONCAT22((short)((ulonglong)uVar12 >> 0x10) * sVar9,
                                         (short)uVar12 * sVar8)));
    puVar7[1] = CONCAT26((short)((ulonglong)uVar14 >> 0x30) * sVar11,
                         CONCAT24((short)((ulonglong)uVar14 >> 0x20) * sVar10,
                                  CONCAT22((short)((ulonglong)uVar14 >> 0x10) * sVar9,
                                           (short)uVar14 * sVar8)));
    puVar7 = DAT_30045890;
  } while (DAT_30045890 < puVar6);
  puVar7 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    uVar2 = DAT_3004589c[1];
    uVar13 = psubusw((ulonglong)
                     CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                              (ushort)(byte)uVar1) & 0xffffffff00ffffff,uVar3);
    uVar12 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                              CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >>
                                    0x10),(short)uVar2) & 0xffffffff00ff00ff,uVar3);
    uVar13 = pmulhw(uVar13,uVar4);
    uVar12 = pmulhw(uVar12,uVar4);
    DAT_3004589c = DAT_3004589c + 2;
    puVar6 = puVar7 + 2;
    uVar13 = paddsw(uVar13,uVar5);
    uVar13 = psubusw(uVar13,uVar5);
    uVar12 = paddsw(uVar12,uVar5);
    uVar12 = psubusw(uVar12,uVar5);
    *puVar7 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) * sVar11,
                       CONCAT24((short)((ulonglong)uVar13 >> 0x20) * sVar10,
                                CONCAT22((short)((ulonglong)uVar13 >> 0x10) * sVar9,
                                         (short)uVar13 * sVar8)));
    puVar7[1] = CONCAT26((short)((ulonglong)uVar12 >> 0x30) * sVar11,
                         CONCAT24((short)((ulonglong)uVar12 >> 0x20) * sVar10,
                                  CONCAT22((short)((ulonglong)uVar12 >> 0x10) * sVar9,
                                           (short)uVar12 * sVar8)));
    puVar7 = puVar6;
  } while (puVar6 < DAT_30045894 + param_1);
  DAT_30045894 = puVar6;
  return;
}

