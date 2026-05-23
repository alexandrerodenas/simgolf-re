/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042e7a0 @ 0x0042E7A0 */
/* Body size: 60 addresses */


uint FUN_0042e7a0(uint param_1,uint param_2)

{
  if ((int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) <
      (int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f))) {
    return (((int)param_1 < 1) - 1 & 0xfffffffc) + 6;
  }
  return ((int)param_2 < 1) - 1 & 4;
}

