/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096ef0 @ 0x10096EF0 */


void __cdecl FUN_10096ef0(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10128a18)) {
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

