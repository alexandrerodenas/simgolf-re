/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30020340 @ 0x30020340 */


void FUN_30020340(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  
  pbVar6 = DAT_300458a4;
  pbVar5 = DAT_300458a0;
  local_1c = param_1;
  bVar1 = *DAT_300458a0;
  DAT_300458a0 = DAT_300458a0 + 1;
  bVar2 = *DAT_300458a4;
  DAT_300458a4 = DAT_300458a4 + 1;
  iVar9 = (&DAT_30045ce8)[bVar1];
  iVar10 = (&DAT_300468e8)[bVar2];
  iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
  do {
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    bVar1 = *(byte *)DAT_300458a8;
    DAT_300458a8 = (ushort *)((int)DAT_300458a8 + 1);
    puVar7 = (uint *)((int)DAT_30045890 + 2);
    *(ushort *)DAT_30045890 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) | (bVar1 & 0x80) << 8;
    DAT_30045890 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar3 = *DAT_300458a8;
    iVar9 = (&DAT_300458d8)[*DAT_30045898];
    iVar10 = (&DAT_300458d8)[DAT_30045898[1]];
    puVar7 = DAT_30045890 + 1;
    DAT_30045898 = DAT_30045898 + 2;
    DAT_300458a8 = DAT_300458a8 + 1;
    *DAT_30045890 =
         *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar9) |
         *(uint *)((int)&DAT_30043854 +
                  ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar9) |
         ((uint)uVar3 << 0x10 | (uint)uVar3 << 8) & 0x80008000 |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar9) |
         (*(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar10) |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar10) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar10)) << 0x10;
    DAT_30045890 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar9 = (&DAT_30045ce8)[bVar1];
    iVar10 = (&DAT_300468e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
    bVar1 = *DAT_30045898;
    DAT_30045898 = DAT_30045898 + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    uVar3 = *DAT_300458a8;
    DAT_300458a8 = (ushort *)((int)DAT_300458a8 + 1);
    puVar8 = (ushort *)((int)DAT_30045890 + 2);
    *(ushort *)DAT_30045890 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) |
         ((byte)uVar3 & 0x80) << 8;
    DAT_30045890 = (uint *)puVar8;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  bVar1 = *pbVar5;
  DAT_300458a0 = pbVar5 + 1;
  bVar2 = *pbVar6;
  DAT_300458a4 = pbVar6 + 1;
  iVar9 = (&DAT_30045ce8)[bVar1];
  iVar10 = (&DAT_300468e8)[bVar2];
  iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
  do {
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    bVar1 = *(byte *)DAT_300458ac;
    DAT_300458ac = (ushort *)((int)DAT_300458ac + 1);
    puVar7 = (uint *)((int)DAT_30045894 + 2);
    *(ushort *)DAT_30045894 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) | (bVar1 & 0x80) << 8;
    DAT_30045894 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    uVar3 = *DAT_300458ac;
    iVar9 = (&DAT_300458d8)[*DAT_3004589c];
    iVar10 = (&DAT_300458d8)[DAT_3004589c[1]];
    puVar7 = DAT_30045894 + 1;
    DAT_3004589c = DAT_3004589c + 2;
    DAT_300458ac = DAT_300458ac + 1;
    *DAT_30045894 =
         *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar9) |
         *(uint *)((int)&DAT_30043854 +
                  ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar9) |
         ((uint)uVar3 << 0x10 | (uint)uVar3 << 8) & 0x80008000 |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar9) |
         (*(uint *)((int)&DAT_30043854 +
                   ((&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1]) * 4 + iVar10) |
          *(uint *)((int)&DAT_3004507c + (&DAT_30045ce8)[bVar1] * 4 + iVar10) |
         *(uint *)((int)&DAT_30044468 + (&DAT_300468e8)[bVar2] * 4 + iVar10)) << 0x10;
    DAT_30045894 = puVar7;
    bVar1 = *DAT_300458a0;
    DAT_300458a0 = DAT_300458a0 + 1;
    bVar2 = *DAT_300458a4;
    DAT_300458a4 = DAT_300458a4 + 1;
    iVar9 = (&DAT_30045ce8)[bVar1];
    iVar10 = (&DAT_300468e8)[bVar2];
    iVar11 = (&DAT_300460e8)[bVar2] + (&DAT_300464e8)[bVar1];
    bVar1 = *DAT_3004589c;
    DAT_3004589c = DAT_3004589c + 1;
    iVar4 = (&DAT_300458d8)[bVar1];
    uVar3 = *DAT_300458ac;
    DAT_300458ac = (ushort *)((int)DAT_300458ac + 1);
    puVar8 = (ushort *)((int)DAT_30045894 + 2);
    *(ushort *)DAT_30045894 =
         (ushort)*(undefined4 *)((int)&DAT_3004507c + iVar9 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30043854 + iVar11 * 4 + iVar4) |
         (ushort)*(undefined4 *)((int)&DAT_30044468 + iVar10 * 4 + iVar4) |
         ((byte)uVar3 & 0x80) << 8;
    DAT_30045894 = (uint *)puVar8;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  DAT_300458a0 = DAT_300458a0 + -1;
  DAT_300458a4 = DAT_300458a4 + -1;
  return;
}

