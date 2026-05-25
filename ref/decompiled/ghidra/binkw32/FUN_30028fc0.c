/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30028fc0 @ 0x30028FC0 */


void FUN_30028fc0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar9 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar15 = (&DAT_30045ce8)[bVar1];
  iVar16 = (&DAT_300468e8)[bVar2];
  iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    puVar7 = DAT_30045890;
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045890 + 6);
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    pbVar8 = DAT_30045898;
    puVar7 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1];
    iVar4 = (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 2;
    iVar5 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar5 + iVar16 * 4),
                     *(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4));
    uVar3 = *(undefined1 *)(iVar5 + iVar15 * 4);
    puVar11 = DAT_30045890 + 3;
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    iVar5 = (&DAT_3004b118)[pbVar8[1]];
    uVar14 = CONCAT13(*(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4),
                      CONCAT12(*(undefined1 *)(iVar5 + iVar15 * 4),uVar6));
    puVar7[1] = uVar14;
    uVar12 = (uint)*(byte *)(iVar5 + iVar16 * 4);
    puVar7[2] = uVar12 << 0x18 | (uVar14 >> 0x10) << 8 | uVar12;
    puVar7 = DAT_30045890;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045890 + 6);
    *DAT_30045890 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045890 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar9;
  DAT_300458a0 = pbVar9 + 1;
  bVar2 = *pbVar10;
  DAT_300458a4 = pbVar10 + 1;
  iVar15 = (&DAT_30045ce8)[bVar1];
  iVar16 = (&DAT_300468e8)[bVar2];
  iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
  do {
    puVar7 = DAT_30045894;
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045894 + 6);
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    pbVar9 = DAT_3004589c;
    puVar7 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1];
    iVar4 = (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 2;
    iVar5 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar5 + iVar16 * 4),
                     *(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4));
    uVar3 = *(undefined1 *)(iVar5 + iVar15 * 4);
    puVar11 = DAT_30045894 + 3;
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    iVar5 = (&DAT_3004b118)[pbVar9[1]];
    uVar14 = CONCAT13(*(undefined1 *)(iVar5 + (iVar13 + iVar4) * 4),
                      CONCAT12(*(undefined1 *)(iVar5 + iVar15 * 4),uVar6));
    puVar7[1] = uVar14;
    uVar12 = (uint)*(byte *)(iVar5 + iVar16 * 4);
    puVar7[2] = uVar12 << 0x18 | (uVar14 >> 0x10) << 8 | uVar12;
    puVar7 = DAT_30045894;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar15 = (&DAT_30045ce8)[bVar1];
    iVar16 = (&DAT_300468e8)[bVar2];
    iVar13 = (&DAT_300464e8)[bVar1] + (&DAT_300460e8)[bVar2];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_3004b118)[bVar1];
    uVar6 = CONCAT11(*(undefined1 *)(iVar4 + iVar16 * 4),*(undefined1 *)(iVar4 + iVar13 * 4));
    uVar3 = *(undefined1 *)(iVar4 + iVar15 * 4);
    puVar11 = (undefined4 *)((int)DAT_30045894 + 6);
    *DAT_30045894 = CONCAT13(uVar3,CONCAT21(uVar6,uVar3));
    DAT_30045894 = puVar11;
    *(undefined2 *)(puVar7 + 1) = uVar6;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}

