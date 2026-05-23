/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487c00 @ 0x00487C00 */
/* Body size: 59 addresses */


int __thiscall FUN_00487c00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 4))(param_3);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[5] + 0x10))(unaff_retaddr,param_3);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 8))();
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

