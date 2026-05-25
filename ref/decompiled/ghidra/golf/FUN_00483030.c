/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483030 @ 0x00483030 */


undefined4 __fastcall FUN_00483030(int param_1)

{
  int *piVar1;
  
  FUN_00483070();
  piVar1 = (int *)(**(code **)(*DAT_0083ad50 + 0x78))(param_1);
  *(int **)(param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 4))();
  return 0;
}

