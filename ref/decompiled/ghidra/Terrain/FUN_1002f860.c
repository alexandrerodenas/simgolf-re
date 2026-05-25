/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002f860 @ 0x1002F860 */


void FUN_1002f860(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10110a24);
  DAT_10110a20 = (uint)(sVar1 == 3);
  if (DAT_10110a20 == 0) {
    local_8 = _GetPrimaryLen(DAT_10110a24);
  }
  else {
    local_8 = 2;
  }
  DAT_10110a1c = local_8;
  EnumSystemLocalesA(FUN_1002f8e0,1);
  if ((DAT_10110a2c & 4) == 0) {
    DAT_10110a2c = 0;
  }
  return;
}

