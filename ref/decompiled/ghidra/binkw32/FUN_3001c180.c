/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c180 @ 0x3001C180 */


void FUN_3001c180(int param_1)

{
  if (param_1 != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    radfree(param_1);
  }
  return;
}

