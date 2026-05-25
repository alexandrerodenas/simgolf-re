/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037c00 @ 0x10037C00 */


undefined4 __fastcall FUN_10037c00(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x5c) & 0x20) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
    uVar1 = thunk_FUN_10011160();
    return uVar1;
  }
  return 0xb;
}

