/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484260 @ 0x00484260 */


void __thiscall FUN_00484260(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 4;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 8;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x10;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x28;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x54) = param_2;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x100;
    return;
  case 7:
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x80;
  }
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}

