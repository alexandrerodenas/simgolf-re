/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001bb80 @ 0x1001BB80 */
/* Body size: 17 addresses */


undefined4 __fastcall FUN_1001bb80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

