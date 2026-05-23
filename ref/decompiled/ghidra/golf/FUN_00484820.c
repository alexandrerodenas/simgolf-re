/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484820 @ 0x00484820 */
/* Body size: 80 addresses */


undefined4 * __fastcall FUN_00484820(undefined4 *param_1)

{
  FUN_00484150();
  *param_1 = &PTR_FUN_004bacf8;
  param_1[0x16] = 0;
  param_1[0x11] = param_1[0x11] | 4;
  FUN_00484260(1);
  param_1[0x17] = 0;
  param_1[0x18] = 0x3f800000;
  param_1[0xf] = 0x10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}

