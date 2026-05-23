/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a0060 @ 0x004A0060 */
/* Body size: 52 addresses */


void FUN_004a0060(void)

{
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0xc))();
  }
  if (DAT_0084092c != (HMODULE)0x0) {
    FreeLibrary(DAT_0084092c);
    DAT_0084092c = (HMODULE)0x0;
  }
  DAT_0083ad50 = (int *)0x0;
  return;
}

