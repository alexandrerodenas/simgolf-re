/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487770 @ 0x00487770 */
/* Body size: 35 addresses */


bool __thiscall FUN_00487770(int param_1,uint param_2)

{
  if (0xf < param_2) {
    return true;
  }
  return *(char *)(param_1 + 0x24 + param_2 * 0x1c) == '\0';
}

