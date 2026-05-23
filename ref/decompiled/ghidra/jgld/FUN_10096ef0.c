/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096ef0 @ 0x10096EF0 */
/* Body size: 147 addresses */


void __cdecl FUN_10096ef0(int param_1)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10128a18)) {
    __free_dbg(*(void **)(param_1 + 0xc),2);
    __free_dbg(*(void **)(param_1 + 0x10),2);
    pvVar1 = *(void **)(param_1 + 0x14);
    __free_dbg(pvVar1,2);
    __free_dbg(*(void **)((int)pvVar1 + 0x18),2);
    __free_dbg(*(void **)((int)pvVar1 + 0x1c),2);
    __free_dbg(*(void **)((int)pvVar1 + 0x20),2);
    __free_dbg(*(void **)((int)pvVar1 + 0x24),2);
  }
  return;
}

