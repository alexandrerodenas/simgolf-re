/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a1370 @ 0x004A1370 */


undefined4 __fastcall FUN_004a1370(int param_1)

{
  switch(*(undefined4 *)(param_1 + 500)) {
  case 1:
  case 2:
  case 4:
  case 0x10:
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xd4 + param_1);
  default:
    return 0;
  case 8:
    return *(undefined4 *)(param_1 + 0x118);
  }
}

