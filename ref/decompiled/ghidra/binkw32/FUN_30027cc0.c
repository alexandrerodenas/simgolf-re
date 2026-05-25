/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30027cc0 @ 0x30027CC0 */


void FUN_30027cc0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  int local_1c;
  
  pbVar13 = DAT_300458a4;
  pbVar2 = DAT_300458a0;
  local_1c = param_1;
  do {
    puVar11 = DAT_30045890;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045890 + 2;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045890 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    puVar11 = DAT_30045890;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045890 + 2;
    *DAT_30045890 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045890 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar13;
    DAT_300458a0 = pbVar2;
    puVar11 = DAT_30045894;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045894 + 2;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045894 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    puVar11 = DAT_30045894;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    uVar8 = *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar7);
    uVar9 = *(uint *)((int)&DAT_3004e98c +
                     ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar7);
    uVar10 = *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar7);
    puVar12 = DAT_30045894 + 2;
    *DAT_30045894 =
         *(uint *)((int)&DAT_30042c44 + (&DAT_30045ce8)[bVar3] * 4 + iVar6) |
         *(uint *)((int)&DAT_3004e98c +
                  ((&DAT_300464e8)[bVar3] + (&DAT_300460e8)[bVar4]) * 4 + iVar6) |
         *(uint *)((int)&DAT_3004c958 + (&DAT_300468e8)[bVar4] * 4 + iVar6);
    DAT_30045894 = puVar12;
    puVar11[1] = uVar8 | uVar9 | uVar10;
    local_1c = local_1c + -1;
    pbVar2 = DAT_300458a0;
    pbVar13 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}

