/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10025da0 @ 0x10025DA0 */


uint __fastcall FUN_10025da0(void *param_1)

{
  void *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_10019e10(param_1,0x12);
  local_10 = (void *)0x0;
  do {
    if (0x3f < (int)local_10) {
LAB_10025f70:
      FUN_10019eb0(0x12);
      return local_c;
    }
    if ((&DAT_10110e20)[(int)local_10] == 0) {
      local_8 = (undefined4 *)__malloc_dbg(local_10,0x480,2,"osfinfo.c",0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10110e20)[(int)local_10] = local_8;
        DAT_10110f5c = DAT_10110f5c + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10110e20)[(int)local_10] + 0x480);
            local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = (int)local_10 << 5;
        FUN_100262b0(local_c);
      }
      goto LAB_10025f70;
    }
    for (local_8 = (undefined4 *)(&DAT_10110e20)[(int)local_10];
        local_8 < (undefined4 *)((&DAT_10110e20)[(int)local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_10019e10(local_8,0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_10019eb0(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = (int)local_10 * 0x20 + ((int)local_8 - (&DAT_10110e20)[(int)local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_10025f70;
    local_10 = (void *)((int)local_10 + 1);
  } while( true );
}

