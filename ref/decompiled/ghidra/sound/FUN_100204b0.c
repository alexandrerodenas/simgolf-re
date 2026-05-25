/* Ghidra decompiled: sound.dll */
/* Function: FUN_100204b0 @ 0x100204B0 */


undefined4 __fastcall FUN_100204b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
    uVar1 = thunk_FUN_1001e3d0((undefined4 *)(param_1 + 0x60));
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffffe;
  }
  return uVar1;
}

