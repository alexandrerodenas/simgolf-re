/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afa90 @ 0x004AFA90 */
/* Body size: 31 addresses */


void FUN_004afa90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

