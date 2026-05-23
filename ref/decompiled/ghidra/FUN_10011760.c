/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011760 @ 0x10011760 */
/* Body size: 28 addresses */


int __fastcall FUN_10011760(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 3);
    return param_1[0x15];
  }
  return 0;
}

