/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046e7b0 @ 0x0046E7B0 */
/* Body size: 92 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e7b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((_DAT_0059e7b8 & 0x4000000) == 0) {
    if ((&DAT_004c15a0)[param_1 * 0xc] == 0) {
      DAT_004e3db8 = param_1;
      (&DAT_004c15a0)[param_1 * 0xc] = DAT_00834170;
      DAT_00839338 = 0;
      *(undefined4 *)(&DAT_004c15a4 + param_1 * 0x30) = DAT_0059bf90;
      DAT_004e3dbc = param_2;
      DAT_008392a4 = param_3;
    }
  }
  return;
}

