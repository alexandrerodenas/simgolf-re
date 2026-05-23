/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085470 @ 0x10085470 */
/* Body size: 319 addresses */


int __cdecl FUN_10085470(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_100833f0(2);
  for (local_10 = 0; local_10 < DAT_1012b340; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10129fe4 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10129fe4 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      FUN_10083270(local_10,*(int *)(DAT_10129fe4 + local_10 * 4));
      if ((*(uint *)(*(int *)(DAT_10129fe4 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_10085350(*(int **)(DAT_10129fe4 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10129fe4 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_10085350(*(int **)(DAT_10129fe4 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_100832e0(local_10,*(int *)(DAT_10129fe4 + local_10 * 4));
    }
  }
  FUN_10083490(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}

