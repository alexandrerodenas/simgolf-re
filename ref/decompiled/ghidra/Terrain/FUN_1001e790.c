/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e790 @ 0x1001E790 */


void FUN_1001e790(void)

{
  uint local_8;
  
  if (DAT_101122a0 == 0) {
    DAT_101122a0 = 0x200;
  }
  else if (DAT_101122a0 < 0x14) {
    DAT_101122a0 = 0x14;
  }
  DAT_10110f60 = __calloc_dbg(DAT_101122a0,4,2,"_file.c",0x83);
  if (DAT_10110f60 == (undefined1 *)0x0) {
    DAT_101122a0 = 0x14;
    DAT_10110f60 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10110f60 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10110f60 + local_8 * 4) = &PTR_DAT_10066278 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10110e20)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10110e20)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_10066288 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}

