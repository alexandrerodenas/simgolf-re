/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2980 @ 0x004A2980 */
/* Body size: 26 addresses */


undefined4 __thiscall FUN_004a2980(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4 + param_2 * 4);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x574);
  }
  return 0;
}

