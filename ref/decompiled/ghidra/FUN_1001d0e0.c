/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001d0e0 @ 0x1001D0E0 */
/* Body size: 478 addresses */


undefined ** FUN_1001d0e0(void)

{
  LPVOID pvVar1;
  undefined **local_10;
  int local_c;
  undefined4 *local_8;
  
  if (DAT_10064040 == -1) {
    local_10 = &PTR_LOOP_10064030;
  }
  else {
    local_10 = HeapAlloc(DAT_101122c0,0,0x2020);
    if (local_10 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  local_8 = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (local_8 != (undefined4 *)0x0) {
    pvVar1 = VirtualAlloc(local_8,0x10000,0x1000,4);
    if (pvVar1 != (LPVOID)0x0) {
      if (local_10 == &PTR_LOOP_10064030) {
        if (PTR_LOOP_10064030 == (undefined *)0x0) {
          PTR_LOOP_10064030 = (undefined *)&PTR_LOOP_10064030;
        }
        if (PTR_LOOP_10064034 == (undefined *)0x0) {
          PTR_LOOP_10064034 = (undefined *)&PTR_LOOP_10064030;
        }
      }
      else {
        *local_10 = (undefined *)&PTR_LOOP_10064030;
        local_10[1] = PTR_LOOP_10064034;
        PTR_LOOP_10064034 = (undefined *)local_10;
        *(undefined ***)local_10[1] = local_10;
      }
      local_10[4] = (undefined *)local_8;
      local_10[5] = (undefined *)(local_8 + 0x100000);
      local_10[2] = (undefined *)(local_10 + 6);
      local_10[3] = (undefined *)(local_10 + 0x26);
      for (local_c = 0; local_c < 0x400; local_c = local_c + 1) {
        if (local_c < 0x10) {
          local_10[local_c * 2 + 6] = (undefined *)0xf0;
        }
        else {
          local_10[local_c * 2 + 6] = (undefined *)0xffffffff;
        }
        local_10[local_c * 2 + 7] = (undefined *)0xf1;
      }
      _memset(local_8,0,0x10000);
      for (; local_8 < local_10[4] + 0x10000; local_8 = local_8 + 0x400) {
        *local_8 = local_8 + 2;
        local_8[1] = 0xf0;
        *(undefined1 *)(local_8 + 0x3e) = 0xff;
      }
      return local_10;
    }
    VirtualFree(local_8,0,0x8000);
  }
  if (local_10 != &PTR_LOOP_10064030) {
    HeapFree(DAT_101122c0,0,local_10);
  }
  return (undefined **)0x0;
}

