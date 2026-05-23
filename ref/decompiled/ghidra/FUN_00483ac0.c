/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483ac0 @ 0x00483AC0 */
/* Body size: 76 addresses */


int FUN_00483ac0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 3;
  }
  FUN_00483b10();
  iVar1 = (**(code **)(*DAT_0083ad50 + 0xb8))();
  if (iVar1 == 0) {
    DAT_0083ad44 = param_1;
    if ((*(int *)(param_1 + 4) == 0) &&
       (iVar1 = FUN_00483800(s_Times_New_Roman_004e43ac,0xc,0), iVar1 != 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

