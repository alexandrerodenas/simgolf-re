/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a93dd @ 0x004A93DD */
/* Body size: 34 addresses */


void FUN_004a93dd(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_00842040)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

