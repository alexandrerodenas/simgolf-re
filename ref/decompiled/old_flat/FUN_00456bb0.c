/* Ghidra decompiled: golf.exe */
/* Function: FUN_00456bb0 @ 0x00456BB0 */


char FUN_00456bb0(int param_1,int param_2)

{
  return ('\0' < (char)(&DAT_00578372)
                       [*(char *)((int)&DAT_005722e8 + param_1 * 0x32 + param_2) * 0x30]) + '\x02';
}

