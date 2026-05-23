/* Ghidra decompiled: golf.exe */
/* Function: FUN_004223c0 @ 0x004223C0 */
/* Body size: 44 addresses */


int FUN_004223c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3);
    param_1 = param_1 - (param_1 >> (DAT_005783a1 & 0x1f));
  } while (0x3f < param_1);
  return iVar1;
}

