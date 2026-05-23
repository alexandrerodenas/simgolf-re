/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10089710 @ 0x10089710 */
/* Body size: 232 addresses */


void FUN_10089710(void)

{
  undefined **local_10;
  LPVOID local_c;
  int local_8;
  
  if (DAT_10129fb0 == 3) {
    local_c = DAT_10129fdc;
    for (local_8 = 0; local_8 < DAT_10129fd8; local_8 = local_8 + 1) {
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
      VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
      HeapFree(DAT_10129fa0,0,*(LPVOID *)((int)local_c + 0x10));
      local_c = (LPVOID)((int)local_c + 0x14);
    }
    HeapFree(DAT_10129fa0,0,DAT_10129fdc);
  }
  else if (DAT_10129fb0 == 2) {
    local_10 = &PTR_LOOP_10123760;
    do {
      if (local_10[4] != (undefined *)0x0) {
        VirtualFree(local_10[4],0,0x8000);
      }
      local_10 = (undefined **)*local_10;
    } while (local_10 != &PTR_LOOP_10123760);
  }
  HeapDestroy(DAT_10129fa0);
  return;
}

