/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047fa30 @ 0x0047FA30 */
/* Body size: 127 addresses */


void __thiscall FUN_0047fa30(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_0047f8e0(0,param_1);
    return;
  }
  param_2 = (int *)0x0;
  local_14 = 0;
  FUN_0047b170(&param_2,&local_14);
  local_10 = *piVar1 + (int)param_2;
  local_8 = piVar1[2] + (int)param_2;
  local_c = piVar1[1] + local_14;
  local_4 = piVar1[3] + local_14;
  FUN_0047f8e0(&local_10,param_1);
  return;
}

