/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049ec80 @ 0x0049EC80 */
/* Body size: 83 addresses */


void __fastcall FUN_0049ec80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -0x1c);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + -0x1c + param_1) = &PTR_LAB_004bbeb0;
  *(undefined ***)(*(int *)(*piVar1 + 4) + 600 + param_1) = &PTR_LAB_004bbe9c;
  *(undefined ***)(*(int *)(*piVar1 + 8) + -0x1c + param_1) = &PTR_LAB_004bbe90;
  *(int *)(*(int *)(*piVar1 + 4) + -0x20 + param_1) = *(int *)(*piVar1 + 4) + -0x1c;
  *(int *)(*(int *)(*piVar1 + 8) + -0x20 + param_1) = *(int *)(*piVar1 + 8) + -0x594;
  FUN_0049ece0();
  return;
}

