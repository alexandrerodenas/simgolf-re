/* Ghidra decompiled: golf.exe */
/* Function: FUN_00422fb0 @ 0x00422FB0 */
/* Body size: 4455 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00422fb0(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  undefined4 *puVar33;
  int iVar34;
  char *pcVar35;
  char *pcVar36;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  int iStack00000024;
  int iStack00000028;
  uint uStack00000030;
  int iStack00000034;
  int iStack00000038;
  int iStack00000040;
  int iStack00000050;
  int iStack00000058;
  int iStack0000005c;
  int iStack00000068;
  int in_stack_00000094;
  uint in_stack_0000009c;
  int in_stack_00007cb8;
  
  FUN_004a6070();
  puVar33 = (undefined4 *)&stack0x000000ac;
  for (iVar26 = 0xa56; iVar26 != 0; iVar26 = iVar26 + -1) {
    *puVar33 = 0;
    puVar33 = puVar33 + 1;
  }
  _DAT_0059e7b8 = _DAT_0059e7b8 | 0x800000;
  iVar31 = in_stack_00007cb8 * 0x100;
  _DAT_004c2e1c = (uint)(byte)(&DAT_005794d1)[iVar31];
  iVar32 = (int)(char)(&DAT_005794d9)[iVar31];
  DAT_0059b738 = 1;
  DAT_005a9ce4 = 1;
  DAT_005a9ce8 = 0;
  iStack00000068 = -1;
  iStack0000005c = 0;
  iVar12 = FUN_00422530();
  iVar26 = (&DAT_0057958c)[in_stack_00007cb8 * 0x40];
  iVar5 = *(int *)(&DAT_00579584 + iVar31);
  iVar6 = (&DAT_00579590)[in_stack_00007cb8 * 0x40];
  iVar7 = *(int *)(&DAT_00579588 + iVar31);
  pcVar1 = (char *)((int)&DAT_005722e8 + (iVar26 >> 10) * 0x32 + (iVar6 >> 10));
  iVar13 = (int)*pcVar1;
  if (((DAT_005a9cc4 == 0) && ((*(byte *)(&DAT_005794c8 + in_stack_00007cb8 * 0x40) & 1) == 0)) &&
     (((char)(&DAT_00578372)[iVar13 * 0x30] < '\x01' || ((&DAT_005794d0)[iVar31] == '\0')))) {
    DAT_005a9cc4 = 1;
  }
  if ((char)(&DAT_00578372)[iVar13 * 0x30] < '\x01') {
    bVar11 = true;
    bVar10 = true;
    if (((&DAT_005794d1)[iVar31] & 4) != 0) goto LAB_004230e2;
  }
  bVar11 = false;
  bVar10 = false;
LAB_004230e2:
  if ((&DAT_005794d0)[iVar31] != '\0') {
    if ((*(ushort *)(&DAT_005794ce + iVar31) & 0x20) == 0) {
      bVar10 = false;
    }
    if ((*(ushort *)(&DAT_005794ce + iVar31) & 0x40) == 0) {
      bVar11 = false;
    }
  }
  *(undefined4 *)(&DAT_00579584 + iVar31) = (&DAT_00575ac8)[iVar32 * 0x82];
  *(undefined4 *)(&DAT_00579588 + iVar31) = (&DAT_00575acc)[iVar32 * 0x82];
  iVar14 = __ftol();
  uVar15 = FUN_004672d0();
  *(undefined4 *)(&DAT_00579598 + iVar31) = uVar15;
  (&DAT_005794da)[iVar31] = (&DAT_005794da)[iVar31] + '\x01';
  iVar16 = FUN_00422530();
  (&DAT_005794da)[iVar31] = (&DAT_005794da)[iVar31] + -1;
  FUN_00467130();
  iVar17 = FUN_00467270();
  iVar13 = (&DAT_0057958c)[in_stack_00007cb8 * 0x40];
  iVar8 = (&DAT_00579590)[in_stack_00007cb8 * 0x40];
  iVar18 = FUN_004672b0();
  FUN_0040c4b0();
  FUN_0040acd0();
  iVar19 = FUN_0040c4b0();
  iStack00000058 = 4;
  if (iVar19 < 100) {
    iStack00000058 = 2;
  }
  if (200 < iVar19) {
    iStack00000058 = 6;
  }
  iStack00000034 = 0;
  iStack00000028 = 2;
  do {
    iStack00000050 = 99999;
    puVar33 = (undefined4 *)&stack0x00002a04;
    for (iVar19 = 0xa56; iVar19 != 0; iVar19 = iVar19 + -1) {
      *puVar33 = 0;
      puVar33 = puVar33 + 1;
    }
    iStack00000010 = -10;
    do {
      iStack00000014 = -10;
      do {
        iVar19 = (iStack00000010 + 10) * 0x15 + 10 + iStack00000014;
        iVar29 = iVar19 * 0x18;
        iVar22 = *(int *)(&stack0x000000b0 + iVar29);
        if (iVar22 < 100000) {
          iVar20 = (iVar17 + iVar13 >> 10) + iStack00000010;
          iVar27 = iStack00000014 + (iVar8 - iVar18 >> 10);
          iVar21 = __ftol();
          uStack00000030 = FUN_004672d0();
          bVar9 = true;
          if (iVar22 == 0) {
            *(undefined4 *)(&stack0x000000b4 + iVar29) = 100000;
            *(undefined4 *)(&stack0x000000b0 + iVar29) = 100000;
            *(undefined4 *)(&stack0x000000ac + iVar29) = 100000;
            *(undefined4 *)(&stack0x000000c0 + iVar29) = 100000;
            *(undefined4 *)(&stack0x000000bc + iVar29) = 100000;
            bVar2 = *(byte *)(&DAT_005794c8 + in_stack_00007cb8 * 0x40);
            *(undefined4 *)(&stack0x000000b8 + iVar29) = 100000;
            if (((((((bVar2 & 1) == 0) || (iVar20 != iVar5)) || (iVar27 != iVar7)) &&
                 ((iVar22 = FUN_0040bf60(), iVar22 == 0 && (iVar21 <= iVar12 + 0x10)))) &&
                ((iVar12 / 3 <= iVar21 ||
                 ((iVar14 / 3 <= iVar21 ||
                  ((*(byte *)(&DAT_005794c8 + in_stack_00007cb8 * 0x40) & 1) != 0)))))) &&
               ((iVar20 != iVar26 >> 10 || (iVar27 != iVar6 >> 10)))) {
              cVar3 = *(char *)((int)&DAT_005722e8 + iVar20 * 0x32 + iVar27);
              if ((cVar3 != '\0') && ((char)(&DAT_00578372)[cVar3 * 0x30] < '\x02')) {
                if ((&DAT_00578372)[cVar3 * 0x30] == '\x01') {
                  iVar22 = 0;
                  bVar9 = false;
                  do {
                    if ((char)(&DAT_00578372)
                              [*(char *)((int)&DAT_005722e8 +
                                        iVar27 + *(int *)((int)&DAT_004c2898 + iVar22) +
                                                 (*(int *)((int)&DAT_004c2878 + iVar22) + iVar20) *
                                                 0x32) * 0x30] < '\x01') {
                      bVar9 = true;
                    }
                    iVar22 = iVar22 + 8;
                  } while (iVar22 < 0x20);
                }
                iVar22 = FUN_0040acd0();
                iVar23 = FUN_0040acd0();
                if ((*(char *)((int)&DAT_005722e8 + iVar20 * 0x32 + iVar27) != '\x01') ||
                   (iVar22 < 4)) {
                  if (bVar9) {
                    iVar24 = 1;
                  }
                  else {
                    iVar24 = iVar23 / 2;
                  }
                  if (iVar24 + iVar22 <= iVar23) {
                    *(undefined4 *)(&stack0x000000b4 + iVar29) = 0;
                    *(undefined4 *)(&stack0x000000b0 + iVar29) = 0;
                    *(undefined4 *)(&stack0x000000ac + iVar29) = 0;
                    *(undefined4 *)(&stack0x000000c0 + iVar29) = 0;
                    *(undefined4 *)(&stack0x000000bc + iVar29) = 0;
                    *(undefined4 *)(&stack0x000000b8 + iVar29) = 0;
                    goto LAB_00423658;
                  }
                }
              }
            }
          }
          else {
LAB_00423658:
            iVar22 = 0;
            do {
              if ((iVar22 == 0) || ((char)(&DAT_00578372)[*pcVar1 * 0x30] < '\x01')) {
                iStack00000004 = -1;
                do {
                  iVar29 = (iVar22 * 3 + 1 + iStack00000004 + iVar19 * 6) * 4;
                  puVar33 = (undefined4 *)(&stack0x000000ac + iVar29);
                  if (*(int *)(&stack0x000000ac + iVar29) < 99999) {
                    if (iStack00000004 == -1) {
                      if (bVar10) goto LAB_00423703;
                      *puVar33 = 100000;
                    }
                    else {
                      if (iStack00000004 == 1) {
                        if (!bVar11) {
                          *puVar33 = 100000;
                          goto LAB_00423d75;
                        }
LAB_00423703:
                        if (iVar21 < 0x4c) {
                          *puVar33 = 100000;
                          goto LAB_00423d75;
                        }
                      }
                      else if (iStack00000004 != 0) goto LAB_00423703;
                      iStack0000000c = 0;
                      iStack00000018 = 0;
                      if (0 < iStack00000028) {
                        iStack00000038 = iStack00000028;
                        do {
                          if (iVar22 == 0) {
                            FUN_004226a0();
                            iStack00000034 = iStack00000034 + 1;
                          }
                          else {
                            FUN_004226a0();
                          }
                          if (((&DAT_005794d1)[iVar31] & 4) != 0) {
                            uVar30 = 0;
                            do {
                              iVar23 = ((uVar30 & 1) != 0) + 3;
                              iVar24 = (int)((&DAT_004c2878)[uVar30] << 10) / iVar23 + DAT_0056a78c;
                              iVar34 = (int)((&DAT_004c2898)[uVar30] << 10) / iVar23 + DAT_0056a790;
                              iVar23 = FUN_0040bf60();
                              if (iVar23 == 0) {
                                iVar23 = (iVar34 >> 10) + (iVar24 >> 10) * 0x32;
                                iStack0000000c =
                                     iStack0000000c +
                                     (char)(&DAT_00578372)
                                           [*(char *)((int)&DAT_005722e8 + iVar23) * 0x30];
                                if ((*(byte *)(&DAT_0053caf0 + iVar23) & 0x80) != 0) {
                                  iStack0000000c = iStack0000000c + -1;
                                }
                              }
                              else {
                                iStack0000000c = iStack0000000c + DAT_00578732;
                              }
                              uVar30 = uVar30 + 1;
                            } while ((int)uVar30 < 8);
                          }
                          iVar23 = (DAT_0056a790 >> 10) + (DAT_0056a78c >> 10) * 0x32;
                          iVar34 = (int)(char)(&DAT_00578372)
                                              [*(char *)((int)&DAT_005722e8 + iVar23) * 0x30];
                          iVar24 = FUN_0040bf60();
                          if ((iVar24 == 0) &&
                             (uVar4 = (&DAT_0053caf0)[iVar23], (uVar4 & 0x400) == 0)) {
                            if ((uVar4 & 0x80) != 0) {
                              if ((uVar4 & 0x1f) == (short)(char)(&DAT_005794d9)[iVar31]) {
                                iVar34 = iVar34 + -1;
                              }
                              else {
                                iVar34 = iVar34 + 2;
                              }
                            }
                          }
                          else {
                            iVar34 = (int)DAT_00578732;
                          }
                          if ((uStack00000030 & 1) != 0) {
                            uStack00000030 = uStack00000030 ^ 1;
                          }
                          if ((char)(&DAT_00578372)[*(char *)((int)&DAT_005722e8 + iVar23) * 0x30] <
                              '\x01') {
                            iStack00000018 = iStack00000018 + 1;
                          }
                          uVar15 = FUN_0040c4b0();
                          *(undefined4 *)(&stack0x00002a04 + iVar29) = uVar15;
                          iVar23 = FUN_0040c4b0();
                          if ((0x19 < *(int *)(&stack0x00002a04 + iVar29) - iVar23) &&
                             (iVar23 * 2 < *(int *)(&stack0x00002a04 + iVar29))) {
                            uStack00000030 = uStack00000030 | 1;
                          }
                          *(uint *)(&stack0x0000535c + iVar29) = uStack00000030;
                          iVar23 = FUN_0040c4b0();
                          iStack0000000c = iVar23 / iStack00000058 + iStack0000000c + iVar34 * 8;
                          if ((((iStack00000028 == 4) && (DAT_005a9cc4 != 2)) &&
                              (((&DAT_005794d1)[iVar31] & 4) != 0)) && (iVar14 <= iVar16 + iVar12))
                          {
                            if (iVar34 < 1) {
                              FUN_0040c4b0();
                              iVar23 = FUN_00421fa0();
                              if ((bVar10) && (iVar24 = FUN_00421fa0(), iVar24 < iVar23)) {
                                iVar23 = iVar24;
                              }
                              if ((bVar11) && (iVar24 = FUN_00421fa0(), iVar24 < iVar23)) {
                                iVar23 = iVar24;
                              }
                              iStack0000000c = iStack0000000c + iVar23 / 2;
                            }
                            else {
                              iVar23 = FUN_00421fa0();
                              iStack0000000c = iStack0000000c + iVar23 * 2;
                            }
                          }
                          iStack00000038 = iStack00000038 + -1;
                        } while (iStack00000038 != 0);
                      }
                      iStack0000000c = *(int *)(&stack0x000000ac + iVar29) + iStack0000000c;
                      *(int *)(&stack0x000000ac + iVar29) = iStack0000000c;
                      iVar23 = (DAT_00822c88 + 4) * iStack00000028;
                      if ((int)(iVar23 + (iVar23 >> 0x1f & 7U)) >> 3 <= iStack00000018) {
                        DAT_005a9ce4 = 0;
                      }
                      if (iStack0000000c < iStack00000050) {
                        DAT_005a8830 = DAT_0056a790;
                        DAT_005a8828 = DAT_0056a78c;
                        in_stack_0000009c = *(uint *)(&stack0x0000535c + iVar29) & 1;
                        iStack0000005c = iStack00000004;
                        DAT_005a9ce8 = iVar22;
                        iStack00000050 = iStack0000000c;
                        iStack00000068 = iVar20;
                        in_stack_00000094 = iVar27;
                      }
                      if (DAT_004c2fc8 == in_stack_00007cb8) {
                        DAT_0051a068._0_1_ = 0;
                        pcVar25 = (char *)FUN_004ad425();
                        uVar30 = 0xffffffff;
                        do {
                          pcVar36 = pcVar25;
                          if (uVar30 == 0) break;
                          uVar30 = uVar30 - 1;
                          pcVar36 = pcVar25 + 1;
                          cVar3 = *pcVar25;
                          pcVar25 = pcVar36;
                        } while (cVar3 != '\0');
                        uVar30 = ~uVar30;
                        iVar29 = -1;
                        pcVar25 = (char *)&DAT_0051a068;
                        do {
                          pcVar35 = pcVar25;
                          if (iVar29 == 0) break;
                          iVar29 = iVar29 + -1;
                          pcVar35 = pcVar25 + 1;
                          cVar3 = *pcVar25;
                          pcVar25 = pcVar35;
                        } while (cVar3 != '\0');
                        pcVar25 = pcVar36 + -uVar30;
                        pcVar36 = pcVar35 + -1;
                        for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                          *(undefined4 *)pcVar36 = *(undefined4 *)pcVar25;
                          pcVar25 = pcVar25 + 4;
                          pcVar36 = pcVar36 + 4;
                        }
                        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                          *pcVar36 = *pcVar25;
                          pcVar25 = pcVar25 + 1;
                          pcVar36 = pcVar36 + 1;
                        }
                        FUN_0042f940();
                        FUN_004762d0();
                        FUN_00404bc0();
                      }
                    }
                  }
LAB_00423d75:
                  iStack00000004 = iStack00000004 + 1;
                } while (iStack00000004 < 2);
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 < 2);
          }
        }
        iStack00000014 = iStack00000014 + 1;
      } while (iStack00000014 < 0xb);
      iStack00000010 = iStack00000010 + 1;
    } while (iStack00000010 < 0xb);
    if ((7 < iStack00000028) || (DAT_005a9cc4 == 2)) break;
    uStack00000030 = 0x80;
    while( true ) {
      iStack00000004 = 0xffff;
      iStack00000024 = 0;
      iVar19 = -1000;
      iStack00000008 = 0xfffffff;
      iStack0000001c = -0x20000000;
      iVar22 = FUN_004672d0();
      iStack00000014 = 0;
      do {
        iVar29 = 0;
        do {
          iStack00000010 = 0;
          if (*(int *)(&stack0x000000b0 + (iStack00000014 + iVar29) * 0x18) < 100000) {
            iStack00000040 = 6;
            iVar21 = (iStack00000014 + iVar29) * 0x18;
            iVar20 = iVar21;
            do {
              if (*(int *)(&stack0x000000ac + iVar20) < 99999) {
                if ((int)(uStack00000030 + iStack00000050) < *(int *)(&stack0x000000ac + iVar20)) {
                  *(undefined4 *)(&stack0x000000ac + iVar20) = 99999;
                  iStack00000010 = iStack00000010 + 1;
                }
                else {
                  iStack00000024 = iStack00000024 + 1;
                  if ((iStack00000028 == 4) &&
                     (iVar27 = *(int *)(&stack0x00002a04 + iVar20), iVar27 != 0)) {
                    if (iVar27 < iStack00000004) {
                      iStack00000004 = iVar27;
                    }
                    if (iVar19 < iVar27) {
                      iVar19 = iVar27;
                    }
                    iVar27 = FUN_0040c4b0();
                    if (100 < iVar27) {
                      iVar27 = *(int *)(&stack0x0000535c + iVar20) - iVar22;
                      if (iVar27 < iStack00000008) {
                        iStack00000008 = iVar27;
                      }
                      if (iStack0000001c < iVar27) {
                        iStack0000001c = iVar27;
                      }
                    }
                  }
                }
              }
              else {
                iStack00000010 = iStack00000010 + 1;
              }
              iVar20 = iVar20 + 4;
              iStack00000040 = iStack00000040 + -1;
            } while (iStack00000040 != 0);
            if (iStack00000010 == 6) {
              *(undefined4 *)(&stack0x000000b0 + iVar21) = 100000;
            }
          }
          iVar20 = iVar29 + -9;
          iVar29 = iVar29 + 1;
        } while (iVar20 < 0xb);
        iStack00000014 = iStack00000014 + 0x15;
      } while (iStack00000014 < 0x1a5);
      FUN_00483bd0();
      if (((iStack00000024 < 5) || ((int)uStack00000030 < 0x11)) ||
         (iStack00000034 + iStack00000024 * iStack00000028 * 3 < 0xfb)) break;
      uStack00000030 = (int)uStack00000030 / 2;
    }
    if (iStack00000028 == 4) {
      DAT_005a7140 = 0;
      if (iVar19 - iStack00000004 < 0x4c) {
        if (0x15555555 < iStack0000001c - iStack00000008) {
          DAT_005a7140 = 2;
        }
      }
      else {
        DAT_005a7140 = 1;
      }
    }
    iStack00000028 = iStack00000028 * 2;
  } while (1 < iStack00000024);
  if (DAT_004c2fc8 == in_stack_00007cb8) {
    FUN_00480c80();
    FUN_0045c0c0();
  }
  if (iStack00000068 == -1) {
    DAT_005a9ce8 = 0;
    uVar15 = (&DAT_00575acc)[iVar32 * 0x82];
    *(undefined4 *)(&DAT_00579584 + iVar31) = (&DAT_00575ac8)[iVar32 * 0x82];
    *(undefined4 *)(&DAT_00579588 + iVar31) = uVar15;
    iStack0000005c = 0;
  }
  else {
    *(int *)(&DAT_00579584 + iVar31) = iStack00000068;
    *(int *)(&DAT_00579588 + iVar31) = in_stack_00000094;
    if (in_stack_0000009c != 0) {
      DAT_005a7140 = DAT_005a7140 | 4;
    }
  }
  _DAT_0059e7b8 = _DAT_0059e7b8 & 0xff7fffff;
  if (DAT_005a9cc4 != 2) {
    DAT_005a9cc4 = 0;
  }
  _DAT_004c2e1c = 7;
  return iStack0000005c;
}

