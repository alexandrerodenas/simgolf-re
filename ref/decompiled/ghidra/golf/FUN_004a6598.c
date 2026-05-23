/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a6598 @ 0x004A6598 */
/* Body size: 40 addresses */


uint FUN_004a6598(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004e521c) {
    uVar1 = FUN_004aaad1(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_004e5010[param_1 * 2] & 8;
}

