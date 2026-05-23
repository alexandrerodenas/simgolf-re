/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac4b3 @ 0x004AC4B3 */
/* Body size: 49 addresses */


undefined4 FUN_004ac4b3(byte param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_00840f00 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_004e501a + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

