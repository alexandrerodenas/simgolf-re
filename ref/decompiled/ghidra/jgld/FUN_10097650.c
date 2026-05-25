/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10097650 @ 0x10097650 */


void FUN_10097650(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_101289fc);
  DAT_101289f8 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10128a00);
  DAT_101289f0 = (uint)(sVar1 == 3);
  DAT_101289ec = 0;
  if (DAT_101289f8 == 0) {
    local_8 = _GetPrimaryLen(DAT_101289fc);
  }
  else {
    local_8 = 2;
  }
  DAT_101289f4 = local_8;
  EnumSystemLocalesA(FUN_10097710,1);
  if ((((DAT_10128a04 & 0x100) == 0) || ((DAT_10128a04 & 0x200) == 0)) || ((DAT_10128a04 & 7) == 0))
  {
    DAT_10128a04 = 0;
  }
  return;
}

