/* Ghidra decompiled: golf.exe */
/* Function: FUN_00402130 @ 0x00402130 */


undefined4 __fastcall FUN_00402130(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == *(int *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
}

