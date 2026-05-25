/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b7081 @ 0x004B7081 */


uint FUN_004b7081(uint param_1)

{
  uint uVar1;
  
  if (DAT_004e521c < 2) {
    uVar1 = (byte)PTR_DAT_004e5010[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_004aaad1(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

