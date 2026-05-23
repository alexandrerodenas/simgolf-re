/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d020 @ 0x0047D020 */
/* Body size: 63 addresses */


void __thiscall FUN_0047d020(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    param_1[0x61] = param_2;
    (**(code **)(*param_1 + 0xc))(param_1[0x71] - param_1[0x6f],param_1[0x72] - param_1[0x70],0,0);
  }
  return;
}

