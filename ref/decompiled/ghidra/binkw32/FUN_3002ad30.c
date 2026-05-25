/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002ad30 @ 0x3002AD30 */


undefined4 FUN_3002ad30(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar1 = DAT_30045890 + param_1 + -2;
  puVar5 = DAT_300458a4;
  puVar6 = DAT_300458a0;
  do {
    uVar3 = *puVar6;
    uVar4 = *puVar5;
    uVar2 = *DAT_30045898;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *DAT_30045890 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar2 >> 0x18),
                                                               (char)((uint)uVar4 >> 8)),
                                                      (char)((ulonglong)uVar2 >> 0x10)),
                                             (char)((uint)uVar3 >> 8)),(char)((ulonglong)uVar2 >> 8)
                                   ),(char)uVar4),CONCAT11((char)uVar2,(char)uVar3));
    DAT_30045898 = DAT_30045898 + 1;
    bVar7 = DAT_30045890 < puVar1;
    DAT_30045890[1] =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)((uint)uVar4 >> 0x18),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x30),
                                    CONCAT14((char)((uint)uVar3 >> 0x18),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x28),
                                                      CONCAT12((char)((uint)uVar4 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >>
                                                                              0x20),
                                                                        (char)((uint)uVar3 >> 0x10))
                                                              ))))));
    DAT_30045890 = DAT_30045890 + 2;
  } while (bVar7);
  puVar1 = DAT_30045894 + param_1 + -2;
  do {
    uVar3 = *DAT_300458a0;
    uVar4 = *DAT_300458a4;
    uVar2 = *DAT_3004589c;
    DAT_300458a0 = DAT_300458a0 + 1;
    DAT_300458a4 = DAT_300458a4 + 1;
    *DAT_30045894 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)uVar2 >> 0x18),
                                                               (char)((uint)uVar4 >> 8)),
                                                      (char)((ulonglong)uVar2 >> 0x10)),
                                             (char)((uint)uVar3 >> 8)),(char)((ulonglong)uVar2 >> 8)
                                   ),(char)uVar4),CONCAT11((char)uVar2,(char)uVar3));
    DAT_3004589c = DAT_3004589c + 1;
    bVar7 = DAT_30045894 < puVar1;
    DAT_30045894[1] =
         CONCAT17((char)((ulonglong)uVar2 >> 0x38),
                  CONCAT16((char)((uint)uVar4 >> 0x18),
                           CONCAT15((char)((ulonglong)uVar2 >> 0x30),
                                    CONCAT14((char)((uint)uVar3 >> 0x18),
                                             CONCAT13((char)((ulonglong)uVar2 >> 0x28),
                                                      CONCAT12((char)((uint)uVar4 >> 0x10),
                                                               CONCAT11((char)((ulonglong)uVar2 >>
                                                                              0x20),
                                                                        (char)((uint)uVar3 >> 0x10))
                                                              ))))));
    DAT_30045894 = DAT_30045894 + 2;
  } while (bVar7);
  return in_EAX;
}

