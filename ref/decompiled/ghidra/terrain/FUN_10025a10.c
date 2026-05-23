/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10025a10 @ 0x10025A10 */
/* Body size: 53 addresses */


void __cdecl FUN_10025a10(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_10025990(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}

