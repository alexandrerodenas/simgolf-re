/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a560 @ 0x1003A560 */


uint __fastcall FUN_1003a560(int param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_1002c0d0(param_1);
  if (*(int *)(param_1 + 0x228) != 0) {
    uVar1 = uVar1 | 8;
  }
  return uVar1;
}

