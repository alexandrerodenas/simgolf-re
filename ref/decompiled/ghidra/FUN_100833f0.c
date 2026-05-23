/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100833f0 @ 0x100833F0 */
/* Body size: 151 addresses */


void __cdecl FUN_100833f0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_10123630 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)__malloc_dbg(0x18,2,0x1011f71c,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100833f0(0x11);
    if (*(int *)(&DAT_10123630 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_10123630 + param_1 * 4) = lpCriticalSection;
    }
    else {
      __free_dbg(lpCriticalSection,2);
    }
    FUN_10083490(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10123630 + param_1 * 4));
  return;
}

