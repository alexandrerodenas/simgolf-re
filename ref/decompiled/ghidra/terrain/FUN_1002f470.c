/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002f470 @ 0x1002F470 */
/* Body size: 186 addresses */


void FUN_1002f470(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10110a24);
  DAT_10110a20 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10110a28);
  DAT_10110a18 = (uint)(sVar1 == 3);
  DAT_10110a14 = 0;
  if (DAT_10110a20 == 0) {
    local_8 = _GetPrimaryLen(DAT_10110a24);
  }
  else {
    local_8 = 2;
  }
  DAT_10110a1c = local_8;
  EnumSystemLocalesA(FUN_1002f530,1);
  if ((((DAT_10110a2c & 0x100) == 0) || ((DAT_10110a2c & 0x200) == 0)) || ((DAT_10110a2c & 7) == 0))
  {
    DAT_10110a2c = 0;
  }
  return;
}

