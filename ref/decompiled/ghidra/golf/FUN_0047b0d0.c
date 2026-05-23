/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b0d0 @ 0x0047B0D0 */
/* Body size: 78 addresses */


void FUN_0047b0d0(int *param_1)

{
  int *piVar1;
  int local_4;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    param_1 = (int *)0x0;
    local_4 = 0;
    FUN_0047b170(&param_1,&local_4);
    *piVar1 = *piVar1 + (int)param_1;
    piVar1[2] = piVar1[2] + (int)param_1;
    piVar1[1] = piVar1[1] + local_4;
    piVar1[3] = piVar1[3] + local_4;
  }
  return;
}

