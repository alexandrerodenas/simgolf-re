/* Ghidra decompiled: golf.exe */
/* Function: FUN_004801f0 @ 0x004801F0 */


undefined4 __fastcall FUN_004801f0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar1 = FUN_004801f0();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

