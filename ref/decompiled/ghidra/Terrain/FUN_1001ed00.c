/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001ed00 @ 0x1001ED00 */


int __thiscall FUN_1001ed00(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_10019e10(this,2);
  for (local_10 = 0; local_10 < DAT_101122a0; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10110f60 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10110f60 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      this_00 = *(void **)(DAT_10110f60 + local_10 * 4);
      FUN_1001e920(this_00,local_10,(int)this_00);
      if ((*(uint *)(*(int *)(DAT_10110f60 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_1001ebe0(*(int **)(DAT_10110f60 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10110f60 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_1001ebe0(*(int **)(DAT_10110f60 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_1001e990(local_10,*(int *)(DAT_10110f60 + local_10 * 4));
    }
  }
  FUN_10019eb0(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}

