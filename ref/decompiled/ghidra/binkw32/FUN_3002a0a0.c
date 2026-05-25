/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002a0a0 @ 0x3002A0A0 */


void FUN_3002a0a0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  uVar2 = DAT_3003e8d8;
  puVar3 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar1 = *DAT_3004589c;
    uVar13 = (undefined1)((uint)uVar1 >> 0x18);
    uVar12 = (undefined1)((uint)uVar1 >> 0x10);
    uVar11 = (undefined1)((uint)uVar1 >> 8);
    uVar10 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar9 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar8 = (undefined1)((ulonglong)uVar2 >> 8);
    uVar4 = (undefined1)((ulonglong)uVar2 >> 0x20);
    uVar5 = (undefined1)((ulonglong)uVar2 >> 0x28);
    uVar6 = (undefined1)((ulonglong)uVar2 >> 0x30);
    uVar7 = (undefined1)((ulonglong)uVar2 >> 0x38);
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar11,uVar10),uVar11),uVar9),
                                    (char)uVar1),uVar8),CONCAT11((char)uVar1,(char)uVar2));
    DAT_30045894[1] =
         CONCAT17(uVar13,CONCAT16(uVar7,CONCAT15(uVar13,CONCAT14(uVar6,CONCAT13(uVar12,CONCAT12(
                                                  uVar5,CONCAT11(uVar12,uVar4)))))));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    uVar13 = (undefined1)((uint)uVar1 >> 0x18);
    uVar12 = (undefined1)((uint)uVar1 >> 0x10);
    uVar11 = (undefined1)((uint)uVar1 >> 8);
    DAT_30045898 = DAT_30045898 + 1;
    *puVar3 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar11,uVar10),uVar11),uVar9),
                                         (char)uVar1),uVar8),CONCAT11((char)uVar1,(char)uVar2));
    puVar3[1] = CONCAT17(uVar13,CONCAT16(uVar7,CONCAT15(uVar13,CONCAT14(uVar6,CONCAT13(uVar12,
                                                  CONCAT12(uVar5,CONCAT11(uVar12,uVar4)))))));
    puVar3 = puVar3 + 2;
  } while (puVar3 < DAT_30045890);
  return;
}

