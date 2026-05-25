/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001f240 @ 0x3001F240 */


void FUN_3001f240(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  int local_1c;
  
  pbVar10 = DAT_300458a4;
  pbVar2 = DAT_300458a0;
  local_1c = param_1;
  do {
    pbVar8 = DAT_300458a8;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    bVar5 = *DAT_300458a8;
    DAT_300458a8 = DAT_300458a8 + 2;
    puVar9 = DAT_30045890 + 1;
    *DAT_30045890 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar8[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045890 = puVar9;
    pbVar8 = DAT_300458a8;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_30045898;
    pbVar1 = DAT_30045898 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar1];
    bVar5 = *DAT_300458a8;
    DAT_300458a8 = DAT_300458a8 + 2;
    puVar9 = DAT_30045890 + 1;
    *DAT_30045890 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar8[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045890 = puVar9;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  do {
    DAT_300458a4 = pbVar10;
    DAT_300458a0 = pbVar2;
    pbVar10 = DAT_300458ac;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    bVar5 = *DAT_300458ac;
    DAT_300458ac = DAT_300458ac + 2;
    puVar9 = DAT_30045894 + 1;
    *DAT_30045894 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar10[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045894 = puVar9;
    pbVar10 = DAT_300458ac;
    bVar3 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar4 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    bVar5 = *DAT_3004589c;
    pbVar2 = DAT_3004589c + 1;
    DAT_3004589c = DAT_3004589c + 2;
    iVar6 = (&DAT_300458d8)[bVar5];
    iVar7 = (&DAT_300458d8)[*pbVar2];
    bVar5 = *DAT_300458ac;
    DAT_300458ac = DAT_300458ac + 2;
    puVar9 = DAT_30045894 + 1;
    *DAT_30045894 =
         (&DAT_3004d168)[bVar5] | *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar6)
         | *(uint *)((int)&DAT_30043854 +
                    ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar6) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar6) |
         ((&DAT_3004d168)[pbVar10[1]] |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar3] * 4 + iVar7) |
          *(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar4] + (&DAT_300464e8)[bVar3]) * 4 + iVar7) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar4] * 4 + iVar7)) << 0x10;
    DAT_30045894 = puVar9;
    local_1c = local_1c + -1;
    pbVar2 = DAT_300458a0;
    pbVar10 = DAT_300458a4;
  } while (local_1c != 0);
  return;
}

