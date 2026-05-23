/* Ghidra decompiled: golf.exe */
/* Function: FUN_004914b0 @ 0x004914B0 */
/* Body size: 27 addresses */


void __thiscall FUN_004914b0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
    return;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
  return;
}

