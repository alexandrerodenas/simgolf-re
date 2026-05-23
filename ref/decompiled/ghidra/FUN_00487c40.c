/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487c40 @ 0x00487C40 */
/* Body size: 33 addresses */


undefined4 __fastcall FUN_00487c40(int *param_1)

{
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0x14))();
    (**(code **)(*param_1 + 8))();
    param_1[5] = 0;
  }
  return 0;
}

