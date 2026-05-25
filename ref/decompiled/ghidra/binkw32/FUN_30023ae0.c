/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30023ae0 @ 0x30023AE0 */


void FUN_30023ae0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  
  pbVar7 = DAT_300458a4;
  pbVar6 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar11 = (&DAT_30045ce8)[bVar1];
  iVar12 = (&DAT_300468e8)[bVar2];
  iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045890 + 1;
    *DAT_30045890 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045890 = puVar8;
    puVar8 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1];
    iVar3 = (&DAT_300460e8)[bVar2];
    iVar4 = (&DAT_3004b118)[*DAT_30045898];
    iVar5 = (&DAT_3004b118)[DAT_30045898[1]];
    puVar9 = DAT_30045890 + 2;
    DAT_30045898 = DAT_30045898 + 2;
    *DAT_30045890 =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + iVar12 * 4),
                                 *(undefined1 *)(iVar4 + (iVar10 + iVar3) * 4)),
                        *(undefined1 *)(iVar4 + iVar11 * 4));
    DAT_30045890 = puVar9;
    puVar8[1] = (uint)CONCAT12(*(undefined1 *)(iVar5 + iVar12 * 4),
                               CONCAT11(*(undefined1 *)(iVar5 + (iVar10 + iVar3) * 4),
                                        *(undefined1 *)(iVar5 + iVar11 * 4)));
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045890 + 1;
    *DAT_30045890 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045890 = puVar8;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar6;
  DAT_300458a0 = pbVar6 + 1;
  bVar2 = *pbVar7;
  DAT_300458a4 = pbVar7 + 1;
  iVar11 = (&DAT_30045ce8)[bVar1];
  iVar12 = (&DAT_300468e8)[bVar2];
  iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045894 + 1;
    *DAT_30045894 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045894 = puVar8;
    puVar8 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1];
    iVar3 = (&DAT_300460e8)[bVar2];
    iVar4 = (&DAT_3004b118)[*DAT_3004589c];
    iVar5 = (&DAT_3004b118)[DAT_3004589c[1]];
    puVar9 = DAT_30045894 + 2;
    DAT_3004589c = DAT_3004589c + 2;
    *DAT_30045894 =
         (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + iVar12 * 4),
                                 *(undefined1 *)(iVar4 + (iVar10 + iVar3) * 4)),
                        *(undefined1 *)(iVar4 + iVar11 * 4));
    DAT_30045894 = puVar9;
    puVar8[1] = (uint)CONCAT12(*(undefined1 *)(iVar5 + iVar12 * 4),
                               CONCAT11(*(undefined1 *)(iVar5 + (iVar10 + iVar3) * 4),
                                        *(undefined1 *)(iVar5 + iVar11 * 4)));
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar11 = (&DAT_30045ce8)[bVar1];
    iVar12 = (&DAT_300468e8)[bVar2];
    iVar10 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar3 = (&DAT_3004b118)[bVar1];
    puVar8 = DAT_30045894 + 1;
    *DAT_30045894 =
         (uint)CONCAT12(*(undefined1 *)(iVar3 + iVar12 * 4),
                        CONCAT11(*(undefined1 *)(iVar3 + iVar10 * 4),
                                 *(undefined1 *)(iVar3 + iVar11 * 4)));
    DAT_30045894 = puVar8;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}

