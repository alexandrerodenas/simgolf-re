/* Ghidra decompiled: golf.exe */
/* Function: FUN_004493b0 @ 0x004493B0 */


byte FUN_004493b0(int param_1,int param_2)

{
  return *(byte *)(&DAT_0053caf0 + param_2 + param_1 * 0x32) & 0x20;
}

