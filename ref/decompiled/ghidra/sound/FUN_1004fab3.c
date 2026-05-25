/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004fab3 @ 0x1004FAB3 */


undefined1 * FUN_1004fab3(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int local_8;
  
  puVar9 = (undefined4 *)PTR_PTR_100684b8;
  iVar5 = 0;
  local_8 = 7;
  puVar6 = (undefined4 *)PTR_PTR_100684b8;
  do {
    sVar1 = _strlen((char *)puVar6[7]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
    iVar5 = sVar2 + iVar5 + 2 + sVar1;
  } while (local_8 != 0);
  puVar3 = _malloc(iVar5 + 1);
  if (puVar3 != (undefined1 *)0x0) {
    iVar5 = 7;
    puVar7 = puVar3;
    do {
      *puVar7 = 0x3a;
      puVar4 = FUN_1004a010((uint *)(puVar7 + 1),(uint *)*puVar9);
      sVar1 = _strlen((char *)puVar4);
      puVar7 = (undefined1 *)((int)(puVar7 + 1) + sVar1);
      *puVar7 = 0x3a;
      puVar8 = (uint *)(puVar7 + 1);
      puVar4 = FUN_1004a010(puVar8,(uint *)puVar9[7]);
      sVar1 = _strlen((char *)puVar4);
      puVar7 = (undefined1 *)((int)puVar8 + sVar1);
      puVar9 = puVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *puVar7 = 0;
  }
  return puVar3;
}

