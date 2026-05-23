/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e2e0 @ 0x1001E2E0 */
/* Body size: 232 addresses */


void FUN_1001e2e0(void)

{
  undefined **local_10;
  LPVOID local_c;
  int local_8;
  
  if (DAT_101122d0 == 3) {
    local_c = DAT_101122fc;
    for (local_8 = 0; local_8 < DAT_101122f8; local_8 = local_8 + 1) {
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
      HeapFree(DAT_101122c0,0,*(LPVOID *)((int)local_c + 0x10));
      local_c = (LPVOID)((int)local_c + 0x14);
    }
    HeapFree(DAT_101122c0,0,DAT_101122fc);
  }
  else if (DAT_101122d0 == 2) {
    local_10 = &PTR_LOOP_10064030;
    do {
      if (local_10[4] != (undefined *)0x0) {
        VirtualFree(local_10[4],0,0x8000);
      }
      local_10 = (undefined **)*local_10;
    } while (local_10 != &PTR_LOOP_10064030);
  }
  HeapDestroy(DAT_101122c0);
  return;
}

