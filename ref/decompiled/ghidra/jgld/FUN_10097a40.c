/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10097a40 @ 0x10097A40 */


void FUN_10097a40(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_101289fc);
  DAT_101289f8 = (uint)(sVar1 == 3);
  if (DAT_101289f8 == 0) {
    local_8 = _GetPrimaryLen(DAT_101289fc);
  }
  else {
    local_8 = 2;
  }
  DAT_101289f4 = local_8;
  EnumSystemLocalesA(FUN_10097ac0,1);
  if ((DAT_10128a04 & 4) == 0) {
    DAT_10128a04 = 0;
  }
  return;
}

