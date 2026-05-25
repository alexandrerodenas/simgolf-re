/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c6d2 @ 0x3002C6D2 */


uint __cdecl FUN_3002c6d2(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_3004f748;
  while( true ) {
    if (DAT_3004f748 + DAT_3004f744 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

