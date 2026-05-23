/* Ghidra decompiled: golf.exe */
/* Function: FUN_004877a0 @ 0x004877A0 */
/* Body size: 35 addresses */


bool __thiscall FUN_004877a0(int param_1,uint param_2)

{
  if (0xf < param_2) {
    return true;
  }
  return *(char *)(param_1 + 0x25 + param_2 * 0x1c) != '\0';
}

