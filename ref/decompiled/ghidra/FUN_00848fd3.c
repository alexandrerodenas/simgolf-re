/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848fd3 @ 0x00848FD3 */
/* Body size: 48 addresses */


undefined4 FUN_00848fd3(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c) + param_1;
  *param_2 = param_1;
  *param_3 = iVar1;
  return CONCAT22((short)((uint)iVar1 >> 0x10),1);
}

