/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30021b20 @ 0x30021B20 */


void FUN_30021b20(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  int local_1c;
  
  pbVar16 = DAT_300458a4;
  pbVar15 = DAT_300458a0;
  local_1c = param_1;
  do {
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300464e8)[bVar2];
    iVar6 = (&DAT_300460e8)[bVar3];
    iVar7 = (&DAT_3004b118)[*DAT_30045898];
    iVar8 = (&DAT_3004b118)[DAT_30045898[1]];
    iVar9 = (int)DAT_30045890 + 6;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 =
         CONCAT13(*(undefined1 *)(iVar8 + (&DAT_300468e8)[bVar3] * 4),
                  CONCAT12(*(undefined1 *)(iVar7 + iVar4 * 4),
                           CONCAT11(*(undefined1 *)(iVar7 + (iVar5 + iVar6) * 4),
                                    *(undefined1 *)(iVar7 + (&DAT_300468e8)[bVar3] * 4))));
    DAT_30045890 = (undefined4 *)iVar9;
    iVar14 = (int)DAT_30045890;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar7 = (&DAT_30045ce8)[bVar2];
    iVar9 = (&DAT_300468e8)[bVar3];
    iVar10 = (&DAT_300464e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar3];
    bVar2 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 2;
    iVar12 = (&DAT_3004b118)[bVar2];
    puVar1 = (undefined4 *)((int)DAT_30045890 + -2);
    DAT_30045890 = (undefined4 *)((int)DAT_30045890 + 6);
    *puVar1 = CONCAT22(CONCAT11(*(undefined1 *)(iVar12 + (iVar10 + iVar11) * 4),
                                *(undefined1 *)(iVar12 + iVar9 * 4)),
                       CONCAT11(*(undefined1 *)(iVar8 + iVar4 * 4),
                                *(undefined1 *)(iVar8 + (iVar5 + iVar6) * 4)));
    iVar4 = (&DAT_3004b118)[DAT_30045898[-1]];
    *(uint *)(iVar14 + 2) =
         CONCAT13(*(undefined1 *)(iVar4 + iVar7 * 4),
                  CONCAT12(*(undefined1 *)(iVar4 + (iVar10 + iVar11) * 4),
                           CONCAT11(*(undefined1 *)(iVar4 + iVar9 * 4),
                                    *(undefined1 *)(iVar12 + iVar7 * 4))));
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar16;
    DAT_300458a0 = pbVar15;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300464e8)[bVar2];
    iVar6 = (&DAT_300460e8)[bVar3];
    iVar7 = (&DAT_3004b118)[*DAT_3004589c];
    iVar8 = (&DAT_3004b118)[DAT_3004589c[1]];
    iVar9 = (int)DAT_30045894 + 6;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 =
         CONCAT13(*(undefined1 *)(iVar8 + (&DAT_300468e8)[bVar3] * 4),
                  CONCAT12(*(undefined1 *)(iVar7 + iVar4 * 4),
                           CONCAT11(*(undefined1 *)(iVar7 + (iVar5 + iVar6) * 4),
                                    *(undefined1 *)(iVar7 + (&DAT_300468e8)[bVar3] * 4))));
    DAT_30045894 = (undefined4 *)iVar9;
    iVar10 = (int)DAT_30045894;
    uVar13 = CONCAT11(*(undefined1 *)(iVar8 + iVar4 * 4),
                      *(undefined1 *)(iVar8 + (iVar5 + iVar6) * 4));
    DAT_3003e8e0 = (uint)uVar13;
    bVar2 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar3 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar4 = (&DAT_30045ce8)[bVar2];
    iVar5 = (&DAT_300468e8)[bVar3];
    iVar6 = (&DAT_300464e8)[bVar2];
    iVar7 = (&DAT_300460e8)[bVar3];
    bVar2 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    iVar8 = (&DAT_3004b118)[bVar2];
    puVar1 = (undefined4 *)((int)DAT_30045894 + -2);
    DAT_30045894 = (undefined4 *)((int)DAT_30045894 + 6);
    *puVar1 = CONCAT22(CONCAT11(*(undefined1 *)(iVar8 + (iVar6 + iVar7) * 4),
                                *(undefined1 *)(iVar8 + iVar5 * 4)),uVar13);
    iVar9 = (&DAT_3004b118)[DAT_3004589c[-1]];
    *(uint *)(iVar10 + 2) =
         CONCAT13(*(undefined1 *)(iVar9 + iVar4 * 4),
                  CONCAT12(*(undefined1 *)(iVar9 + (iVar6 + iVar7) * 4),
                           CONCAT11(*(undefined1 *)(iVar9 + iVar5 * 4),
                                    *(undefined1 *)(iVar8 + iVar4 * 4))));
    local_1c = local_1c + -1;
    pbVar15 = DAT_300458a0;
    pbVar16 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}

