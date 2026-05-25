/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2330 @ 0x004A2330 */


void __fastcall FUN_004a2330(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -0x8c);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x8c) + 4) + -0x8c + param_1) = &PTR_LAB_004bc0a8;
  *(undefined ***)(*(int *)(*piVar1 + 4) + 0x1e8 + param_1) = &PTR_LAB_004bc094;
  *(undefined ***)(*(int *)(*piVar1 + 8) + -0x8c + param_1) = &PTR_LAB_004bc088;
  *(int *)(*(int *)(*piVar1 + 4) + -0x90 + param_1) = *(int *)(*piVar1 + 4) + -0x8c;
  *(int *)(*(int *)(*piVar1 + 8) + -0x90 + param_1) = *(int *)(*piVar1 + 8) + -0x604;
  FUN_004a23a0();
  return;
}

