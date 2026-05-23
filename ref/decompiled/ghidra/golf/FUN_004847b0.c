/* Ghidra decompiled: golf.exe */
/* Function: FUN_004847b0 @ 0x004847B0 */
/* Body size: 30 addresses */


void __thiscall FUN_004847b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x54))(param_2);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}

