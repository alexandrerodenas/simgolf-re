/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10025cc0 @ 0x10025CC0 */


int __fastcall FUN_10025cc0(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_10019e10(param_1,2);
  for (local_c = 3; local_c < DAT_101122a0; local_c = local_c + 1) {
    if (*(int *)(DAT_10110f60 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10110f60 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_10017c20(*(undefined ***)(DAT_10110f60 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10110f60 + local_c * 4) + 0x20));
        __free_dbg(*(void **)(DAT_10110f60 + local_c * 4),2);
        *(undefined4 *)(DAT_10110f60 + local_c * 4) = 0;
      }
    }
  }
  FUN_10019eb0(2);
  return local_8;
}

