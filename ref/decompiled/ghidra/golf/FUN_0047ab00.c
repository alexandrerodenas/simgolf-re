/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047ab00 @ 0x0047AB00 */


undefined4 __thiscall FUN_0047ab00(int param_1,int param_2)

{
  if ((0x7eff < param_2) && (param_2 < 0x7f8b)) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(int *)(param_1 + 0x218) = param_2;
    *(undefined4 *)(param_1 + 0x214) = 0;
    FUN_0047d130(0,1,0xffffffff,0xffffffff);
    return 0;
  }
  return 3;
}

