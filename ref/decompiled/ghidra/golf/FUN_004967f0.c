/* Ghidra decompiled: golf.exe */
/* Function: FUN_004967f0 @ 0x004967F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004967f0(int *param_1,int param_2)

{
  int iVar1;
  
  _DAT_0083ab2c = param_1[0x4c];
  iVar1 = param_1[0x160];
  if (param_2 < iVar1) {
    param_1[0x163] = iVar1;
  }
  else if (param_1[0x161] < param_2) {
    param_1[0x163] = param_1[0x161];
  }
  else {
    param_1[0x163] = param_2;
  }
  if (param_1[0x162] != 0) {
    param_1[0x163] = (param_1[0x161] - param_1[0x163]) + iVar1;
  }
  (**(code **)(*param_1 + 0x120))();
  return;
}

