/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489ab0 @ 0x00489AB0 */


undefined4 __thiscall FUN_00489ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    return 3;
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(int *)(param_1 + 0x74) = param_2;
  }
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  return 0;
}

