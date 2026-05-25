/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027fc0 @ 0x30027FC0 */


void FUN_30027fc0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar2 = DAT_300458a0;
  local_1c = param_1;
  bVar3 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar4 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar14 = (&DAT_30045ce8)[bVar3];
  iVar15 = (&DAT_300468e8)[bVar4];
  iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
  do {
    bVar3 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045890 + 1;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045890 = puVar11;
    puVar11 = DAT_30045890;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar14 = (&DAT_300458d8)[bVar5];
    iVar15 = (&DAT_300458d8)[*pbVar1];
    uVar7 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar15);
    uVar8 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar15);
    uVar9 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar15);
    puVar12 = DAT_30045890 + 2;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar14) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar14) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar14);
    DAT_30045890 = puVar12;
    puVar11[1] = uVar7 | uVar8 | uVar9;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar14 = (&DAT_30045ce8)[bVar3];
    iVar15 = (&DAT_300468e8)[bVar4];
    iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
    bVar3 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045890 + 1;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045890 = puVar11;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar3 = *pbVar2;
  DAT_300458a0 = pbVar2 + 1;
  bVar4 = *pbVar10;
  DAT_300458a4 = pbVar10 + 1;
  iVar14 = (&DAT_30045ce8)[bVar3];
  iVar15 = (&DAT_300468e8)[bVar4];
  iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
  do {
    bVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045894 + 1;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045894 = puVar11;
    puVar11 = DAT_30045894;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar14 = (&DAT_300458d8)[bVar5];
    iVar15 = (&DAT_300458d8)[*pbVar2];
    uVar7 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar15);
    uVar8 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar15);
    uVar9 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar15);
    puVar12 = DAT_30045894 + 2;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar14) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar14) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar14);
    DAT_30045894 = puVar12;
    puVar11[1] = uVar7 | uVar8 | uVar9;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar14 = (&DAT_30045ce8)[bVar3];
    iVar15 = (&DAT_300468e8)[bVar4];
    iVar13 = (&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4];
    bVar3 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar6 = (&DAT_300458d8)[bVar3];
    puVar11 = DAT_30045894 + 1;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + iVar14 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c + iVar13 * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + iVar15 * 4 + iVar6);
    DAT_30045894 = puVar11;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}

