/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002fa00 @ 0x1002FA00 */


void FUN_1002fa00(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10110a28);
  DAT_10110a18 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_1002fa50,1);
  if ((DAT_10110a2c & 4) == 0) {
    DAT_10110a2c = 0;
  }
  return;
}

