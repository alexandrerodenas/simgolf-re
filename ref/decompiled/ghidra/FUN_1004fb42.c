/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004fb42 @ 0x1004FB42 */
/* Body size: 149 addresses */


undefined1 * FUN_1004fb42(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int local_c;
  int local_8;
  
  puVar1 = PTR_PTR_100684b8;
  local_8 = 0;
  local_c = 0xc;
  puVar9 = (undefined4 *)(PTR_PTR_100684b8 + 0x38);
  do {
    sVar2 = _strlen((char *)puVar9[0xc]);
    sVar3 = _strlen((char *)*puVar9);
    puVar9 = puVar9 + 1;
    local_c = local_c + -1;
    local_8 = sVar3 + local_8 + 2 + sVar2;
  } while (local_c != 0);
  puVar4 = _malloc(local_8 + 1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = (undefined4 *)(puVar1 + 0x68);
    iVar6 = 0xc;
    puVar7 = puVar4;
    do {
      *puVar7 = 0x3a;
      puVar5 = FUN_1004a010((uint *)(puVar7 + 1),(uint *)puVar9[-0xc]);
      sVar2 = _strlen((char *)puVar5);
      puVar7 = (undefined1 *)((int)(puVar7 + 1) + sVar2);
      *puVar7 = 0x3a;
      puVar8 = (uint *)(puVar7 + 1);
      puVar5 = FUN_1004a010(puVar8,(uint *)*puVar9);
      sVar2 = _strlen((char *)puVar5);
      puVar7 = (undefined1 *)((int)puVar8 + sVar2);
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *puVar7 = 0;
  }
  return puVar4;
}

