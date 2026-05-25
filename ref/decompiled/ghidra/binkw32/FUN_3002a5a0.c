/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a5a0 @ 0x3002A5A0 */


void FUN_3002a5a0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar11;
  undefined6 uVar10;
  short sVar12;
  int iVar13;
  short sVar14;
  undefined6 uVar15;
  short sVar18;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar17 = DAT_3003e8f0;
  uVar2 = DAT_3003e8b8;
  puVar3 = DAT_30045890 + param_1 * 6;
  puVar4 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar16 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                              CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                    0x10),(short)uVar1) & 0xffffffff00ff00ff,DAT_3003e8a8);
    uVar16 = psllw(uVar16,2);
    uVar16 = pmulhw(uVar16,DAT_3003e8b0);
    uVar16 = paddsw(uVar16,uVar2);
    uVar16 = psubusw(uVar16,uVar2);
    sVar18 = (short)((ulonglong)uVar16 >> 0x10);
    sVar14 = (short)uVar16;
    sVar6 = (short)uVar17;
    sVar7 = (short)((ulonglong)uVar17 >> 0x10);
    sVar8 = (short)((ulonglong)uVar17 >> 0x20);
    uVar15 = CONCAT24(sVar14 * sVar8,CONCAT22(sVar14 * sVar7,sVar14 * sVar6));
    sVar9 = (short)((ulonglong)uVar17 >> 0x30);
    iVar13 = CONCAT22(sVar18 * sVar7,sVar18 * sVar6);
    sVar11 = (short)((ulonglong)uVar16 >> 0x20);
    sVar12 = (short)((ulonglong)uVar16 >> 0x30);
    uVar10 = CONCAT24(sVar11 * sVar8,CONCAT22(sVar11 * sVar7,sVar11 * sVar6));
    *puVar4 = (int)((uint6)uVar15 >> 8);
    iVar5 = CONCAT22(sVar12 * sVar7,sVar12 * sVar6);
    puVar4[1] = (uint)(CONCAT26(sVar14 * sVar9,uVar15) >> 0x28) | iVar13 << 8;
    puVar4[2] = (int)(CONCAT26(sVar18 * sVar9,CONCAT24(sVar18 * sVar8,iVar13)) >> 0x18);
    puVar4[3] = (int)((uint6)uVar10 >> 8);
    DAT_30045890 = puVar4 + 6;
    puVar4[4] = (uint)(CONCAT26(sVar11 * sVar9,uVar10) >> 0x28) | iVar5 << 8;
    puVar4[5] = (int)(CONCAT26(sVar12 * sVar9,CONCAT24(sVar12 * sVar8,iVar5)) >> 0x18);
    puVar4 = DAT_30045890;
  } while (DAT_30045890 < puVar3);
  puVar4 = DAT_30045894;
  do {
    uVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    uVar17 = psubusw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                              CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                    0x10),(short)uVar1) & 0xffffffff00ff00ff,DAT_3003e8a8);
    uVar17 = psllw(uVar17,2);
    uVar17 = pmulhw(uVar17,DAT_3003e8b0);
    uVar17 = paddsw(uVar17,uVar2);
    uVar17 = psubusw(uVar17,uVar2);
    sVar18 = (short)((ulonglong)uVar17 >> 0x10);
    sVar14 = (short)uVar17;
    uVar15 = CONCAT24(sVar14 * sVar8,CONCAT22(sVar14 * sVar7,sVar14 * sVar6));
    iVar13 = CONCAT22(sVar18 * sVar7,sVar18 * sVar6);
    sVar11 = (short)((ulonglong)uVar17 >> 0x20);
    sVar12 = (short)((ulonglong)uVar17 >> 0x30);
    uVar10 = CONCAT24(sVar11 * sVar8,CONCAT22(sVar11 * sVar7,sVar11 * sVar6));
    *puVar4 = (int)((uint6)uVar15 >> 8);
    iVar5 = CONCAT22(sVar12 * sVar7,sVar12 * sVar6);
    puVar4[1] = (uint)(CONCAT26(sVar14 * sVar9,uVar15) >> 0x28) | iVar13 << 8;
    puVar4[2] = (int)(CONCAT26(sVar18 * sVar9,CONCAT24(sVar18 * sVar8,iVar13)) >> 0x18);
    puVar4[3] = (int)((uint6)uVar10 >> 8);
    puVar3 = puVar4 + 6;
    puVar4[4] = (uint)(CONCAT26(sVar11 * sVar9,uVar10) >> 0x28) | iVar5 << 8;
    puVar4[5] = (int)(CONCAT26(sVar12 * sVar9,CONCAT24(sVar12 * sVar8,iVar5)) >> 0x18);
    puVar4 = puVar3;
  } while (puVar3 < DAT_30045894 + param_1 * 6);
  DAT_30045894 = puVar3;
  return;
}

