/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491490 @ 0x00491490 */
/* Body size: 27 addresses */


void __thiscall FUN_00491490(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
    return;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  return;
}

