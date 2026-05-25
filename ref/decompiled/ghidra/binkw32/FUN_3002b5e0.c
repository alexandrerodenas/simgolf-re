/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002b5e0 @ 0x3002B5E0 */


void FUN_3002b5e0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  uVar2 = DAT_3003e8d8;
  puVar3 = DAT_30045890;
  do {
    uVar1 = *DAT_30045898;
    uVar7 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar6 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar5 = (undefined1)((ulonglong)uVar2 >> 8);
    puVar4 = puVar3 + 1;
    DAT_30045898 = DAT_30045898 + 1;
    *puVar3 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar7,(char)((uint)uVar1
                                                                                      >> 0x18)),
                                                                 uVar6),
                                                        CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                              >> 0x20),uVar5),(char)((uint)uVar1 >> 8)),
                       CONCAT11((char)uVar2,(char)uVar1));
    puVar3 = puVar4;
  } while (puVar4 < DAT_30045890 + param_1);
  puVar3 = DAT_30045894;
  DAT_30045890 = DAT_30045890 + param_1;
  do {
    uVar1 = *DAT_3004589c;
    puVar4 = puVar3 + 1;
    DAT_3004589c = DAT_3004589c + 1;
    *puVar3 = CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar7,(char)((uint)uVar1
                                                                                      >> 0x18)),
                                                                 uVar6),
                                                        CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                              >> 0x20),uVar5),(char)((uint)uVar1 >> 8)),
                       CONCAT11((char)uVar2,(char)uVar1));
    puVar3 = puVar4;
  } while (puVar4 < DAT_30045894 + param_1);
  DAT_30045894 = puVar4;
  return;
}

