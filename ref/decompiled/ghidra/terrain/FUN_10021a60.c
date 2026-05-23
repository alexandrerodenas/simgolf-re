/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10021a60 @ 0x10021A60 */
/* Body size: 263 addresses */


void __cdecl FUN_10021a60(LPVOID param_1)

{
  if (DAT_10066520 != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_10066520);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10066828) {
        __free_dbg(*(void **)((int)param_1 + 0x50),2);
      }
      __free_dbg(param_1,2);
    }
    TlsSetValue(DAT_10066520,(LPVOID)0x0);
  }
  return;
}

