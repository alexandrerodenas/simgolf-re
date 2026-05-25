/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085940 @ 0x10085940 */


undefined4 * FUN_10085940(void)

{
  undefined4 uVar1;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100833f0(2);
  local_8 = 0;
  do {
    if (DAT_1012b340 <= local_8) {
LAB_10085a6e:
      if (local_c != (undefined4 *)0x0) {
        local_c[1] = 0;
        local_c[3] = 0;
        local_c[2] = 0;
        *local_c = 0;
        local_c[7] = 0;
        local_c[4] = 0xffffffff;
      }
      FUN_10083490(2);
      return local_c;
    }
    if (*(int *)(DAT_10129fe4 + local_8 * 4) == 0) {
      uVar1 = __malloc_dbg(0x38,2,0x1011f850,0x55);
      *(undefined4 *)(DAT_10129fe4 + local_8 * 4) = uVar1;
      if (*(int *)(DAT_10129fe4 + local_8 * 4) != 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10129fe4 + local_8 * 4) + 0x20))
        ;
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10129fe4 + local_8 * 4) + 0x20));
        local_c = *(undefined4 **)(DAT_10129fe4 + local_8 * 4);
      }
      goto LAB_10085a6e;
    }
    if ((*(uint *)(*(int *)(DAT_10129fe4 + local_8 * 4) + 0xc) & 0x83) == 0) {
      FUN_10083270(local_8,*(int *)(DAT_10129fe4 + local_8 * 4));
      if ((*(uint *)(*(int *)(DAT_10129fe4 + local_8 * 4) + 0xc) & 0x83) == 0) {
        local_c = *(undefined4 **)(DAT_10129fe4 + local_8 * 4);
        goto LAB_10085a6e;
      }
      FUN_100832e0(local_8,*(int *)(DAT_10129fe4 + local_8 * 4));
    }
    local_8 = local_8 + 1;
  } while( true );
}

