/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afb60 @ 0x004AFB60 */
/* Body size: 79 addresses */


void FUN_004afb60(undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  if (param_4 < 0xfffe) {
    FUN_004afbf0(param_1,param_2);
    FUN_004afc10(param_1,param_4 + 2);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      FUN_004afbb0(param_1,*param_3);
      param_3 = param_3 + 1;
    }
  }
  return;
}

