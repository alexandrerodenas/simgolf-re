/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a7a66 @ 0x004A7A66 */
/* Body size: 43 addresses */


uint FUN_004a7a66(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00842158;
  while( true ) {
    if (DAT_00842158 + DAT_00842154 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

