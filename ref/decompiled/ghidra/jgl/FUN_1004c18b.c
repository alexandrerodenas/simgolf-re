/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004c18b @ 0x1004C18B */
/* Body size: 103 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1004c18b(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_10057db4 = param_1;
  puVar1 = &DAT_100569f0;
  do {
    if (param_1 == *puVar1) {
      _DAT_10057db0 = *(undefined4 *)(iVar2 * 8 + 0x100569f4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x10056b58);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_10057db0 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_10057db0 = 8, 0xca < param_1)) {
    _DAT_10057db0 = 0x16;
  }
  return;
}

