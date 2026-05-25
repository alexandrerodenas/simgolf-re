/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007530 @ 0x10007530 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_10007530(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [19];
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = *param_1 * 0x41c64e6d + 0x3039;
  return (float10)(*param_1 >> 0x10 & 0x7fff) / (float10)_DAT_1011d0a0;
}

