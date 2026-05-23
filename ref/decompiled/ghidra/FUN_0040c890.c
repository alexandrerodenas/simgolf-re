/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040c890 @ 0x0040C890 */
/* Body size: 118 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c890(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_1 != 0) && ((_DAT_0059e7b8 & 0x1000000) == 0)) {
    if (param_4 != -1) {
      *(int *)(&DAT_00575ca0 + param_4 * 0x208) =
           *(int *)(&DAT_00575ca0 + param_4 * 0x208) - param_1;
    }
    (&DAT_00542fd8)[DAT_0059abb0] = param_2;
    (&DAT_00542ff8)[DAT_0059abb0] = param_3;
    (&DAT_00542dd8)[DAT_0059abb0] = param_1;
    (&DAT_00542f00)[DAT_0059abb0] = 0x18;
    DAT_0059abb0 = DAT_0059abb0 + 1 & 0x80000007;
    if ((int)DAT_0059abb0 < 0) {
      DAT_0059abb0 = (DAT_0059abb0 - 1 | 0xfffffff8) + 1;
    }
  }
  return;
}

