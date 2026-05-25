/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027570 @ 0x30027570 */


void FUN_30027570(int param_1)

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
    DAT_3004589c = DAT_3004589c + 1;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    DAT_30045894[1] =
         CONCAT17(uVar6,CONCAT16(uVar9,CONCAT15(uVar4,CONCAT14(uVar9,CONCAT13(uVar6,CONCAT12(uVar8,
                                                  CONCAT11(uVar4,uVar8)))))));
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar7),uVar3),uVar7),uVar5),
                           (char)uVar1),CONCAT11(uVar3,(char)uVar1));
    DAT_30045894 = DAT_30045894 + 2;
    uVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    uVar9 = (undefined1)((uint)uVar1 >> 0x18);
    uVar8 = (undefined1)((uint)uVar1 >> 0x10);
    uVar7 = (undefined1)((uint)uVar1 >> 8);
    puVar2[1] = CONCAT17(uVar6,CONCAT16(uVar9,CONCAT15(uVar4,CONCAT14(uVar9,CONCAT13(uVar6,CONCAT12(
                                                  uVar8,CONCAT11(uVar4,uVar8)))))));
    *puVar2 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar7),uVar3),uVar7),uVar5
                                        ),(char)uVar1),CONCAT11(uVar3,(char)uVar1));
    puVar2 = puVar2 + 2;
  } while (puVar2 < DAT_30045890);
  return;
}

