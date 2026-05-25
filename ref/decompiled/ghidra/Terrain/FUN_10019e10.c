/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10019e10 @ 0x10019E10 */


void __thiscall FUN_10019e10(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  if (*(int *)(&DAT_10063f34 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)__malloc_dbg(this,0x18,2,"mlock.c",0xe1);
    this_00 = extraout_ECX;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
      this_00 = extraout_ECX_00;
    }
    FUN_10019e10(this_00,0x11);
    if (*(int *)(&DAT_10063f34 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_10063f34 + param_1 * 4) = lpCriticalSection;
    }
    else {
      __free_dbg(lpCriticalSection,2);
    }
    FUN_10019eb0(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10063f34 + param_1 * 4));
  return;
}

