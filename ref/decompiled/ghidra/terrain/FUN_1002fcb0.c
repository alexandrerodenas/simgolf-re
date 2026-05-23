/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002fcb0 @ 0x1002FCB0 */
/* Body size: 77 addresses */


undefined4 FUN_1002fcb0(void)

{
  BOOL BVar1;
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 == 0) || (local_98.dwPlatformId != 2)) {
    local_9c = 0;
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}

