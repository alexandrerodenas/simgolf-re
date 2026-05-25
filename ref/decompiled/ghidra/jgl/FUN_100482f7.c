/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100482f7 @ 0x100482F7 */


uint __cdecl FUN_100482f7(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100593d8;
  while( true ) {
    if (DAT_100593d8 + DAT_100593d4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

