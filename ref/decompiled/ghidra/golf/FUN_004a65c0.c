/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a65c0 @ 0x004A65C0 */


uint FUN_004a65c0(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004e521c) {
    uVar1 = FUN_004aaad1(param_1,0x157);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_004e5010 + param_1 * 2) & 0x157;
}

