/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001fbe0 @ 0x1001FBE0 */


undefined4 * __fastcall FUN_1001fbe0(void *param_1)

{
  void *this;
  undefined4 uVar1;
  undefined4 *local_c;
  void *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_10019e10(param_1,2);
  local_8 = (void *)0x0;
  do {
    if (DAT_101122a0 <= (int)local_8) {
LAB_1001fd0e:
      if (local_c != (undefined4 *)0x0) {
        local_c[1] = 0;
        local_c[3] = 0;
        local_c[2] = 0;
        *local_c = 0;
        local_c[7] = 0;
        local_c[4] = 0xffffffff;
      }
      FUN_10019eb0(2);
      return local_c;
    }
    if (*(int *)(DAT_10110f60 + (int)local_8 * 4) == 0) {
      uVar1 = __malloc_dbg(local_8,0x38,2,"stream.c",0x55);
      *(undefined4 *)(DAT_10110f60 + (int)local_8 * 4) = uVar1;
      if (*(int *)(DAT_10110f60 + (int)local_8 * 4) != 0) {
        InitializeCriticalSection
                  ((LPCRITICAL_SECTION)(*(int *)(DAT_10110f60 + (int)local_8 * 4) + 0x20));
        EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10110f60 + (int)local_8 * 4) + 0x20))
        ;
        local_c = *(undefined4 **)(DAT_10110f60 + (int)local_8 * 4);
      }
      goto LAB_1001fd0e;
    }
    if ((*(uint *)(*(int *)(DAT_10110f60 + (int)local_8 * 4) + 0xc) & 0x83) == 0) {
      this = *(void **)(DAT_10110f60 + (int)local_8 * 4);
      FUN_1001e920(this,(int)local_8,(int)this);
      if ((*(uint *)(*(int *)(DAT_10110f60 + (int)local_8 * 4) + 0xc) & 0x83) == 0) {
        local_c = *(undefined4 **)(DAT_10110f60 + (int)local_8 * 4);
        goto LAB_1001fd0e;
      }
      FUN_1001e990((int)local_8,*(int *)(DAT_10110f60 + (int)local_8 * 4));
    }
    local_8 = (void *)((int)local_8 + 1);
  } while( true );
}

