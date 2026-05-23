/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006ec0 @ 0x10006EC0 */
/* Body size: 37 addresses */


void __fastcall FUN_10006ec0(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

