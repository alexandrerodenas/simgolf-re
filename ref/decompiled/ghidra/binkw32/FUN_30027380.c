/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027380 @ 0x30027380 */


void FUN_30027380(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  puVar2 = DAT_30045890;
  DAT_30045890 = DAT_30045890 + param_1 * 2;
  do {
    uVar6 = (undefined1)((ushort)*DAT_300458a4 >> 8);
    uVar4 = (undefined1)((ushort)*DAT_300458a0 >> 8);
    uVar3 = (undefined1)*DAT_300458a0;
    uVar5 = (undefined1)*DAT_300458a4;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar1 = *DAT_3004589c;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    DAT_30045894[1] =
         CONCAT17(uVar9,CONCAT16(uVar6,CONCAT15(uVar9,CONCAT14(uVar4,CONCAT13(uVar8,CONCAT12(uVar6,
                                                  CONCAT11(uVar8,uVar4)))))));
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar5),uVar7),uVar3),
                                    (char)uVar1),uVar5),CONCAT11((char)uVar1,uVar3));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    puVar2[1] = CONCAT17(uVar9,CONCAT16(uVar6,CONCAT15(uVar9,CONCAT14(uVar4,CONCAT13(uVar8,CONCAT12(
                                                  uVar6,CONCAT11(uVar8,uVar4)))))));
    DAT_30045898 = DAT_30045898 + 1;
    *puVar2 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar5),uVar7),uVar3),
                                         (char)uVar1),uVar5),CONCAT11((char)uVar1,uVar3));
    puVar2 = puVar2 + 2;
  } while (puVar2 < DAT_30045890);
  return;
}

