/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10088960 @ 0x10088960 */


void __cdecl FUN_10088960(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10128830 = DAT_10128830 + 1, DAT_10128830 == 0x20)) {
    FUN_10088770(0x10);
  }
  return;
}

