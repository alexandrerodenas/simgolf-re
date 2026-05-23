/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f4bb @ 0x1004F4BB */
/* Body size: 54 addresses */


undefined4 FUN_1004f4bb(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 != 0) && (local_98.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}

