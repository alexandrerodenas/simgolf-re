/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b710 @ 0x3002B710 */


void FUN_3002b710(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  uVar4 = DAT_3003e8d8;
  puVar1 = DAT_30045890 + param_1;
  do {
    uVar3 = *DAT_30045898;
    uVar7 = (undefined1)((ulonglong)uVar4 >> 0x18);
    uVar6 = (undefined1)((ulonglong)uVar4 >> 0x10);
    uVar5 = (undefined1)((ulonglong)uVar4 >> 8);
    DAT_30045898 = DAT_30045898 + 1;
    *DAT_30045890 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar3 >> 0x18),uVar7),
                                                      (char)((uint)uVar3 >> 0x10)),uVar6),
                                    (char)((uint)uVar3 >> 8)),uVar5),
                  CONCAT11((char)uVar3,(char)uVar4));
    DAT_30045890 = DAT_30045890 + 1;
  } while (DAT_30045890 < puVar1);
  puVar2 = DAT_30045894 + param_1;
  DAT_30045890 = puVar1;
  do {
    uVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar3 >> 0x18),uVar7),
                                                      (char)((uint)uVar3 >> 0x10)),uVar6),
                                    (char)((uint)uVar3 >> 8)),uVar5),
                  CONCAT11((char)uVar3,(char)uVar4));
    DAT_30045894 = DAT_30045894 + 1;
  } while (DAT_30045894 < puVar2);
  return;
}

