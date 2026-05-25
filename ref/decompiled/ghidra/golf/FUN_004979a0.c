/* Ghidra decompiled: golf.exe */
/* Function: FUN_004979a0 @ 0x004979A0 */


void __fastcall FUN_004979a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_1 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_1 + 0x5c0);
  if (*(int *)(param_1 + 0x57c) != -1) {
    *(undefined4 *)(param_1 + 0x5ac) = 1;
    *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + -1;
    *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + 1;
    *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + -1;
  }
  return;
}

