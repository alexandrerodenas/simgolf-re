/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10097be0 @ 0x10097BE0 */
/* Body size: 69 addresses */


void FUN_10097be0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10128a00);
  DAT_101289f0 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_10097c30,1);
  if ((DAT_10128a04 & 4) == 0) {
    DAT_10128a04 = 0;
  }
  return;
}

