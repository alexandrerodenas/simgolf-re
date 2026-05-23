/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489de0 @ 0x00489DE0 */
/* Body size: 93 addresses */


void __fastcall FUN_00489de0(int param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x5c) = &PTR_LAB_004bb3cc;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1) = &PTR_LAB_004bb260;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0x21c + param_1) = &PTR_LAB_004bb24c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x58) + 8) + -0x58 + param_1) = &PTR_LAB_004bb240;
  iVar1 = *(int *)(*(int *)(param_1 + -0x58) + 4);
  *(int *)(iVar1 + -0x5c + param_1) = iVar1 + -0x58;
  iVar1 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  *(int *)(iVar1 + -0x5c + param_1) = iVar1 + -0x5d0;
  FUN_00489e40();
  return;
}

