/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008e360 @ 0x1008E360 */
/* Body size: 218 addresses */


int FUN_1008e360(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_100833f0(2);
  for (local_c = 3; local_c < DAT_1012b340; local_c = local_c + 1) {
    if (*(int *)(DAT_10129fe4 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10129fe4 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_1007f850(*(undefined ***)(DAT_10129fe4 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10129fe4 + local_c * 4) + 0x20));
        __free_dbg(*(void **)(DAT_10129fe4 + local_c * 4),2);
        *(undefined4 *)(DAT_10129fe4 + local_c * 4) = 0;
      }
    }
  }
  FUN_10083490(2);
  return local_8;
}

