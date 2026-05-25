/* Ghidra decompiled: sound.dll */
/* Function: FUN_10022240 @ 0x10022240 */


undefined4 __fastcall FUN_10022240(int param_1)

{
  thunk_FUN_1001e1c0(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) & 0xffffffe7;
  return 0;
}

