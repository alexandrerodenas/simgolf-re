/* Ghidra decompiled: golf.exe */
/* Function: FUN_004762d0 @ 0x004762D0 */
/* Body size: 52 addresses */


undefined4 __thiscall
FUN_004762d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 == 0) {
    return 3;
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_1 + 0x5c) = param_2;
  }
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  *(undefined4 *)(param_1 + 100) = param_4;
  return 0;
}

