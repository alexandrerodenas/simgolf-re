/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100830e0 @ 0x100830E0 */
/* Body size: 300 addresses */


void FUN_100830e0(void)

{
  uint local_8;
  
  if (DAT_1012b340 == 0) {
    DAT_1012b340 = 0x200;
  }
  else if (DAT_1012b340 < 0x14) {
    DAT_1012b340 = 0x14;
  }
  DAT_10129fe4 = __calloc_dbg(DAT_1012b340,4,2,"_file.c",0x83);
  if (DAT_10129fe4 == (undefined1 *)0x0) {
    DAT_1012b340 = 0x14;
    DAT_10129fe4 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10129fe4 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10129fe4 + local_8 * 4) = &PTR_DAT_101233b0 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10129e60)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10129e60)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_101233c0 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}

