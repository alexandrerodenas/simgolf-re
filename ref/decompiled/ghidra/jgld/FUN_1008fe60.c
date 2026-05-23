/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008fe60 @ 0x1008FE60 */
/* Body size: 482 addresses */


uint FUN_1008fe60(void)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_100833f0(0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_10090030:
      FUN_10083490(0x12);
      return local_c;
    }
    if ((&DAT_10129e60)[local_10] == 0) {
      local_8 = (undefined4 *)__malloc_dbg(0x480,2,0x1011fe20,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10129e60)[local_10] = local_8;
        DAT_10129f9c = DAT_10129f9c + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10129e60)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_10090370(local_c);
      }
      goto LAB_10090030;
    }
    for (local_8 = (undefined4 *)(&DAT_10129e60)[local_10];
        local_8 < (undefined4 *)((&DAT_10129e60)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_100833f0(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_10083490(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_10129e60)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_10090030;
    local_10 = local_10 + 1;
  } while( true );
}

