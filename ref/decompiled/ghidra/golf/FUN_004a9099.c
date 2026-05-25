/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9099 @ 0x004A9099 */


void FUN_004a9099(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_004a9115();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_004e4bf8;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_004a910c();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x4e4bfc);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x4e4d60);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_004a910c();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_004a910c();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_004a910c();
  *puVar2 = 0x16;
  return;
}

