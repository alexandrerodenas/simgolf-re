/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e710 @ 0x1001E710 */
/* Body size: 40 addresses */


uint __cdecl FUN_1001e710(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_2 = 0;
  do {
    uVar2 = uVar2 << 7 | *param_1 & 0x7f;
    *param_2 = *param_2 + 1;
    bVar1 = *param_1;
    param_1 = param_1 + 1;
  } while ((bVar1 & 0x80) != 0);
  return uVar2;
}

