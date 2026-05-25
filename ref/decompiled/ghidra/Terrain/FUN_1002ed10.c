/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002ed10 @ 0x1002ED10 */


void __cdecl FUN_1002ed10(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10110a40)) {
    __free_dbg(*(void **)(param_1 + 0xc),2);
    __free_dbg(*(void **)(param_1 + 0x10),2);
    __free_dbg(*(void **)(param_1 + 0x14),2);
    __free_dbg(*(void **)(param_1 + 0x18),2);
    __free_dbg(*(void **)(param_1 + 0x1c),2);
    __free_dbg(*(void **)(param_1 + 0x20),2);
    __free_dbg(*(void **)(param_1 + 0x24),2);
  }
  return;
}

