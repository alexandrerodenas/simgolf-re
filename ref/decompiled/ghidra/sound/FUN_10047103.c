/* Ghidra decompiled: sound.dll */
/* Function: FUN_10047103 @ 0x10047103 */
/* Body size: 69 addresses */


void __cdecl FUN_10047103(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100b5590 = DAT_100b5590 + 1, DAT_100b5590 == 0x20)) {
    FUN_10046fea(0x10);
  }
  return;
}

