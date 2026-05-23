/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f4b0 @ 0x0042F4B0 */
/* Body size: 128 addresses */


void FUN_0042f4b0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040c170(param_1,param_2,0);
  *param_4 = iVar1;
  *param_3 = iVar1;
  iVar1 = FUN_0040c170(param_1 + 1,param_2,0);
  if (*param_3 < iVar1) {
    *param_3 = iVar1;
  }
  if (iVar1 < *param_4) {
    *param_4 = iVar1;
  }
  iVar1 = FUN_0040c170(param_1 + 1,param_2 + -1,0);
  if (*param_3 < iVar1) {
    *param_3 = iVar1;
  }
  if (iVar1 < *param_4) {
    *param_4 = iVar1;
  }
  iVar1 = FUN_0040c170(param_1,param_2 + -1,0);
  if (*param_3 < iVar1) {
    *param_3 = iVar1;
  }
  if (iVar1 < *param_4) {
    *param_4 = iVar1;
  }
  return;
}

