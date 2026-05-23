/* Ghidra decompiled: golf.exe */
/* Function: FUN_00402930 @ 0x00402930 */
/* Body size: 57 addresses */


void FUN_00402930(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = &DAT_005736b8;
  do {
    if (((*piVar1 != -1) && (piVar1[-2] >> 10 == param_1)) && (piVar1[-1] >> 10 == param_2)) {
      *piVar1 = -1;
    }
    piVar1 = piVar1 + 9;
  } while ((int)piVar1 < 0x575ab8);
  return;
}

