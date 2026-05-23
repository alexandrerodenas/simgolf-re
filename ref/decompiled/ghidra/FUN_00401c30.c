/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401c30 @ 0x00401C30 */
/* Body size: 59 addresses */


undefined4 * __thiscall FUN_00401c30(undefined4 *param_1,byte param_2)

{
  DAT_00839650 = param_1[1];
  *param_1 = &PTR_FUN_004ba278;
  if (((param_2 & 1) != 0) && (param_1 != (undefined4 *)0x0)) {
    if (DAT_00839650 == 0) {
      FUN_004a5007(param_1);
    }
    DAT_00839650 = 0;
  }
  return param_1;
}

