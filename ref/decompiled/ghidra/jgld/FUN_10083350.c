/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10083350 @ 0x10083350 */


void FUN_10083350(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_10123630 + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10123630 + local_8 * 4));
      __free_dbg(*(void **)(&DAT_10123630 + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10123654);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10123664);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10123674);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10123634);
  return;
}

