/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10031ff0 @ 0x10031FF0 */
/* Body size: 61 addresses */


void __fastcall FUN_10031ff0(void *param_1)

{
  void *extraout_ECX;
  
  if (DAT_10110b00 == 0) {
    FUN_10019e10(param_1,0xb);
    if (DAT_10110b00 == 0) {
      FUN_10032050(extraout_ECX);
      DAT_10110b00 = DAT_10110b00 + 1;
    }
    FUN_10019eb0(0xb);
  }
  return;
}

