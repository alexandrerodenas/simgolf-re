/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10019d70 @ 0x10019D70 */
/* Body size: 159 addresses */


void FUN_10019d70(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_10063f34 + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10063f34 + local_8 * 4));
      __free_dbg(*(void **)(&DAT_10063f34 + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10063f58);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10063f68);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10063f78);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10063f38);
  return;
}

