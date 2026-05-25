/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c234 @ 0x1004C234 */


void __cdecl FUN_1004c234(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100b5ba0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

