/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484060 @ 0x00484060 */
/* Body size: 44 addresses */


undefined4 FUN_00484060(void)

{
  DAT_0083afc4 = 0;
  if (DAT_0083afc0 != (HMODULE)0x0) {
    FreeLibrary(DAT_0083afc0);
    DAT_0083afc0 = (HMODULE)0x0;
  }
  FUN_00484130();
  return 0;
}

