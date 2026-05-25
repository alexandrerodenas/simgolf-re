/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8567 @ 0x004A8567 */


undefined4 FUN_004a8567(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00840b1c != (code *)0x0) {
    iVar1 = (*DAT_00840b1c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

