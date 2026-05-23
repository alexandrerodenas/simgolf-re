/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100214e0 @ 0x100214E0 */
/* Body size: 66 addresses */


undefined4 __cdecl FUN_100214e0(int *param_1)

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

