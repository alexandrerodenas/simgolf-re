/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004fbd7 @ 0x1004FBD7 */
/* Body size: 562 addresses */


undefined4 * FUN_1004fbd7(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_PTR_100684b8;
  iVar10 = 0;
  local_c = (undefined4 *)PTR_PTR_100684b8;
  local_10 = (undefined4 *)0x7;
  do {
    sVar2 = _strlen((char *)local_c[7]);
    sVar3 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar10 = sVar3 + iVar10 + 2 + sVar2;
  } while (local_10 != (undefined4 *)0x0);
  local_c = (undefined4 *)(puVar1 + 0x38);
  local_10 = (undefined4 *)0xc;
  do {
    sVar2 = _strlen((char *)local_c[0xc]);
    sVar3 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar10 = sVar3 + iVar10 + 2 + sVar2;
  } while (local_10 != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  puVar7 = _malloc(sVar3 + iVar10 + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1);
  if (puVar7 != (undefined4 *)0x0) {
    puVar11 = puVar7 + 0x2b;
    FUN_1004a460(puVar7,(undefined4 *)PTR_PTR_100684b8,0xac);
    local_8 = (undefined4 *)(puVar1 + 0x1c);
    local_14 = 7;
    local_10 = puVar7;
    do {
      *local_10 = puVar11;
      puVar8 = FUN_1004a010(puVar11,(uint *)local_8[-7]);
      sVar2 = _strlen((char *)puVar8);
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
      *(uint **)(((int)puVar7 - (int)puVar1) + (int)local_8) = puVar11;
      puVar8 = FUN_1004a010(puVar11,(uint *)*local_8);
      sVar2 = _strlen((char *)puVar8);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    } while (local_14 != 0);
    local_10 = puVar7 + 0x1a;
    local_14 = 0xc;
    puVar9 = (undefined4 *)(puVar1 + 0x38);
    do {
      *(uint **)((int)puVar9 + ((int)puVar7 - (int)puVar1)) = puVar11;
      puVar8 = FUN_1004a010(puVar11,(uint *)*puVar9);
      sVar2 = _strlen((char *)puVar8);
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
      *local_10 = puVar11;
      puVar8 = FUN_1004a010(puVar11,(uint *)puVar9[0xc]);
      sVar2 = _strlen((char *)puVar8);
      puVar9 = puVar9 + 1;
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    } while (local_14 != 0);
    puVar7[0x26] = puVar11;
    puVar8 = FUN_1004a010(puVar11,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    puVar7[0x27] = puVar11;
    puVar8 = FUN_1004a010(puVar11,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    puVar7[0x28] = puVar11;
    puVar8 = FUN_1004a010(puVar11,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    puVar7[0x29] = puVar11;
    puVar8 = FUN_1004a010(puVar11,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = sVar2 + 1 + (int)puVar11;
  }
  return puVar7;
}

