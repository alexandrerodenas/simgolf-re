/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a11c0 @ 0x004A11C0 */
/* Body size: 50 addresses */


void __fastcall FUN_004a11c0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 500)) {
  case 1:
    FUN_0049f050();
    return;
  case 2:
    FUN_0048a120();
    return;
  default:
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 100 + param_1) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x68 + param_1) = 0;
    return;
  case 4:
    FUN_004a2a60();
    return;
  case 8:
    FUN_004a3be0();
    return;
  case 0x10:
    FUN_0049d770();
    return;
  }
}

