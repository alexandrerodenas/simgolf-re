/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004b0f7 @ 0x1004B0F7 */
/* Body size: 61 addresses */


void __cdecl FUN_1004b0f7(int param_1,int *param_2)

{
  if (param_1 == 0) {
    if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
      FUN_10048f2c(param_2);
    }
  }
  else if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    FUN_10048f2c(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  return;
}

