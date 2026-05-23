/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001d530 @ 0x1001D530 */
/* Body size: 108 addresses */


void __cdecl FUN_1001d530(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1011080c = DAT_1011080c + 1, DAT_1011080c == 0x20)) {
    FUN_1001d340(0x10);
  }
  return;
}

