/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d7d0 @ 0x0047D7D0 */


undefined4 __fastcall FUN_0047d7d0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x9c) & 0x1000) != 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x130);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x138) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x13c) + 4);
    }
    if (iVar1 == param_1) {
      return 1;
    }
  }
  return 0;
}

