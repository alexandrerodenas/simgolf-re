/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afa60 @ 0x004AFA60 */
/* Body size: 35 addresses */


void FUN_004afa60(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
  *(uint *)(param_1 + 0x10) = (-(uint)(*(int *)(param_1 + 0xc) != 0) & 100) + 100;
  return;
}

