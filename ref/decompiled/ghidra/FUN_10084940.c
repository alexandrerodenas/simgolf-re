/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10084940 @ 0x10084940 */
/* Body size: 66 addresses */


undefined4 __cdecl FUN_10084940(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

